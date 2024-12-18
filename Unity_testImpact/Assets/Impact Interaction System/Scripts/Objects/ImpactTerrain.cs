﻿using Impact.Materials;
using System.Collections.Generic;
using UnityEngine;
using Impact.Utility;
using System;

namespace Impact.Objects
{
    /// <summary>
    /// Component for Impact Objects attached to a terrain.
    /// </summary>
    [AddComponentMenu("Impact/Impact Terrain", 0)]
    public class ImpactTerrain : ImpactObjectBase
    {
        [SerializeField]
        private Terrain _terrain;
        [SerializeField]
        private List<ImpactMaterialBase> _terrainMaterials = new List<ImpactMaterialBase>();

        private float[,,] cachedAlphamaps;
        private ImpactMaterialComposition[] compositionBuffer;
        private bool hasTerrain;

        /// <summary>
        /// The terrain associated with this object.
        /// </summary>
        public Terrain Terrain
        {
            get { return _terrain; }
            set
            {
                _terrain = value;
                hasTerrain = _terrain != null;
            }
        }

        /// <summary>
        /// The terrain data associated with this object.
        /// </summary>
        public TerrainData TerrainData
        {
            get
            {
                if (Terrain != null)
                    return Terrain.terrainData;

                return null;
            }
        }

        /// <summary>
        /// The list of materials that correspond to the terrain's terrain layers.
        /// </summary>
        public List<ImpactMaterialBase> TerrainMaterials
        {
            get { return _terrainMaterials; }
        }

        private void Awake()
        {
            hasTerrain = Terrain != null;
            RefreshCachedAlphamaps();
        }

        private void Reset()
        {
            Terrain = GetComponent<Terrain>();
        }

        /// <summary>
        /// Refresh the cached alphamaps/splatmaps. 
        /// Use this if your alphamaps can change during runtime.
        /// </summary>
        public void RefreshCachedAlphamaps()
        {
            if (TerrainData == null)
            {
                Debug.LogError($"Cannot refresh cached alphamaps for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                return;
            }

            cachedAlphamaps = TerrainData.GetAlphamaps(0, 0, TerrainData.alphamapResolution, TerrainData.alphamapResolution);
            compositionBuffer = new ImpactMaterialComposition[TerrainData.terrainLayers.Length];
        }

        /// <summary>
        /// Syncs the terrain layers and materials list so they are the same length.
        /// </summary>
        public void SyncTerrainLayersAndMaterialsList()
        {
            if (TerrainData == null)
            {
                Debug.LogError($"Cannot sync terrain layers and materials for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                return;
            }

            TerrainLayer[] terrainLayers = TerrainData.terrainLayers;

            int terrainLayerCount = terrainLayers.Length;
            int terrainMaterialTypesCount = TerrainMaterials.Count;
            int diff = terrainLayerCount - terrainMaterialTypesCount;

            if (diff > 0)
            {
                for (int i = 0; i < diff; i++)
                {
                    TerrainMaterials.Add(null);
                }
            }
            else if (diff < 0)
            {
                TerrainMaterials.RemoveRange(terrainLayers.Length, -diff);
            }
        }

        public override int GetMaterialCompositionNonAlloc(Vector3 point, ImpactMaterialComposition[] results)
        {

#if UNITY_EDITOR
            if(Application.isPlaying)
            {
                //Use cache
                if (!hasTerrain)
                {
                    Debug.LogError($"Cannot get material composition for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                    return 0;
                }

                return getMaterialCompositionNonAllocInternal(point, results, cachedAlphamaps, compositionBuffer);
            }
            else
            {
                //Don't use cache
                return getMaterialCompositionNonAllocInternal(point, results, TerrainData.GetAlphamaps(0, 0, TerrainData.alphamapResolution, TerrainData.alphamapResolution), new ImpactMaterialComposition[TerrainData.terrainLayers.Length]);
            }
#else
            //Use cache
            if (!hasTerrain)
            {
                Debug.LogError($"Cannot get material composition for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                return 0;
            }

            return getMaterialCompositionNonAllocInternal(point, results, cachedAlphamaps, compositionBuffer);
#endif
        }

        private int getMaterialCompositionNonAllocInternal(Vector3 point, ImpactMaterialComposition[] results, float[,,] alphamaps, ImpactMaterialComposition[] buffer)
        {
            Vector2Int alphamapIndices = getAlphamapIndicesAtPoint(point);
            int finalLength = Mathf.Min(results.Length, buffer.Length);

            int count = 0;
            float compositionValueTotal = 0;

            //Clear composition buffer
            for (int i = 0; i < buffer.Length; i++)
            {
                buffer[i].CompositionValue = 0;
                buffer[i].Material = null;
            }

            //Get the composition of all impact materials, combining when needed (since you can have multiple textures mapped to the same impact material)
            for (int i = 0; i < buffer.Length; i++)
            {
                IImpactMaterial m = TerrainMaterials[i];
                float comp = alphamaps[alphamapIndices.y, alphamapIndices.x, i];

                int existingIndex = buffer.IndexOf(p => p.Material == m);
                if (existingIndex > -1)
                {
                    buffer[existingIndex].CompositionValue += comp;
                }
                else
                {
                    buffer[i].CompositionValue = comp;
                    buffer[i].Material = m;
                }

                if (count < finalLength)
                {
                    compositionValueTotal += comp;
                    count++;
                }
            }

            //Sort composition buffer by composition value
            Array.Sort(buffer, (a, b) => { return b.CompositionValue.CompareTo(a.CompositionValue); });

            //Populate final composition results
            for (int i = 0; i < finalLength; i++)
            {
                //Adjust composition value so results will always add up to 1, this is for cases where results.length < compositionBuffer.Length
                buffer[i].CompositionValue = Mathf.Clamp01(buffer[i].CompositionValue / compositionValueTotal);
                results[i] = buffer[i];
            }

            return finalLength;
        }

        public override IImpactMaterial GetPrimaryMaterial(Vector3 point)
        {
#if UNITY_EDITOR
            if(Application.isPlaying)
            {
                //Use cache
                if (!hasTerrain)
                {
                    Debug.LogError($"Cannot get primary material for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                    return null;
                }

                return getPrimaryMaterialInternal(point, cachedAlphamaps);
            }
            else
            {
                //Don't use cache
                return getPrimaryMaterialInternal(point, TerrainData.GetAlphamaps(0, 0, TerrainData.alphamapResolution, TerrainData.alphamapResolution));
            }
#else
            //Use cache
            if (!hasTerrain)
            {
                Debug.LogError($"Cannot get primary material for ImpactTerrain {gameObject.name} because it has no TerrainData.");
                return null;
            }

            return getPrimaryMaterialInternal(point, cachedAlphamaps);
#endif
        }

        private IImpactMaterial getPrimaryMaterialInternal(Vector3 point, float[,,] alphamaps)
        {
            Vector2Int alphamapIndices = getAlphamapIndicesAtPoint(point);

            float max = 0;
            int maxIndex = -1;

            int terrainLayerCount = alphamaps.GetLength(2);

            for (int i = 0; i < terrainLayerCount; i++)
            {
                if (alphamaps[alphamapIndices.y, alphamapIndices.x, i] > max)
                {
                    max = alphamaps[alphamapIndices.y, alphamapIndices.x, i];
                    maxIndex = i;
                }
            }

            return TerrainMaterials[maxIndex];
        }

        public override IImpactMaterial GetPrimaryMaterial()
        {
            if (TerrainMaterials.Count > 0)
                return TerrainMaterials[0];

            return null;
        }

        private Vector2Int getAlphamapIndicesAtPoint(Vector3 point)
        {
            Vector3 terrainPosition = _terrain.transform.position;
            Vector2Int v = new Vector2Int();

            int cachedAlphamapsResolution = cachedAlphamaps.GetLength(0);

            v.x = (int)(((point.x - terrainPosition.x) / TerrainData.size.x) * cachedAlphamapsResolution);
            v.y = (int)(((point.z - terrainPosition.z) / TerrainData.size.z) * cachedAlphamapsResolution);

            v.x = Mathf.Clamp(v.x, 0, cachedAlphamapsResolution - 1);
            v.y = Mathf.Clamp(v.y, 0, cachedAlphamapsResolution - 1);

            return v;
        }
    }
}