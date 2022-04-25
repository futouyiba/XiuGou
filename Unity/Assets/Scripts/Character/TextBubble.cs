using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Bolt;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
    public class TextBubble : MonoBehaviour
    {
        [SerializeField] protected TextMeshPro tmp;

        [SerializeField] protected SpriteRenderer spriteRenderer;

        [SerializeField] protected float marginX;

        [SerializeField] protected float marginY;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void SetColor(Color color)
        {
            tmp.color = color;
            //其实可以用tween做闪字，或者颜色不断变化的字
        }

        public void Speak(string text)
        {
            ShowBubble();
            tmp.SetText(text);
            LayoutRebuilder.ForceRebuildLayoutImmediate(tmp.rectTransform);
            Vector2 autoSize = new Vector2(tmp.rectTransform.rect.width, tmp.rectTransform.rect.height);
            UpdateSpriteSize(autoSize);
            // StartCoroutine(DisappearAfter(5f));
            
        }

        public void UpdateSpriteSize(Vector2 autoSize)
        {
            Vector2 bubbleSize = autoSize * 3f + new Vector2(marginX *2f, marginY);
            spriteRenderer.size = bubbleSize;
        }

        public IEnumerator DisappearAfter(float time)
        {
            yield return new WaitForSeconds(time);
            HideBubble();
        }

        public void HideBubble()
        {
            tmp.gameObject.SetActive(false);
            spriteRenderer.gameObject.SetActive(false);
            
        }

        private void ShowBubble()
        {
            tmp.gameObject.SetActive(true);
            spriteRenderer.gameObject.SetActive(true);
        }
    }
}
