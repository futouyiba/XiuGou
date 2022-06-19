Shader "Change/Change"
{
	Properties
	{
		_Color("Main Color", Color) = (1,1,1,1)
		_MainTex("Main Texture", 2D) = "white" {}
		_Smooth("Smooth", Range(0,1)) = 0
	}
		Subshader
		{
			Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
			Pass
		{
			Blend SrcAlpha OneMinusSrcAlpha
			CGPROGRAM
	#pragma vertex vert
	#pragma fragment frag

		uniform half4 _Color;
		uniform sampler2D _MainTex;
		uniform float4 _MainTex_ST;
		uniform float _Smooth;

		struct vertexInput
		{
			float4 vertex : POSITION;
			float4 texcoord : TEXCOORD0;
		};
		struct vertexOutput
		{
			float4 pos : SV_POSITION;
			float4 texcoord : TEXCOORD0;
		};

		vertexOutput vert(vertexInput v)
		{
			vertexOutput o;
			o.pos = UnityObjectToClipPos(v.vertex);
			o.texcoord.xy = (v.texcoord.xy * _MainTex_ST.xy + _MainTex_ST.zw);
			return o;
		}

		half4 frag(vertexOutput i) : COLOR
		{
			float a = smoothstep(0, _Smooth, i.texcoord.x);
			float b = smoothstep(1, 1 - _Smooth, i.texcoord.x);
			float c = smoothstep(0, _Smooth, i.texcoord.y);
			float d = smoothstep(1, 1 - _Smooth, i.texcoord.y);
			float4 finalCol = tex2D(_MainTex, i.texcoord) * _Color;
			finalCol.a = a * b * c * d * _Color.a;
			return  finalCol;
		}
			ENDCG
		}
		}
}


