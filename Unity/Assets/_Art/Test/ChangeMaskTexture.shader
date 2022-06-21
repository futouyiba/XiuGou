Shader "Change/MaskTexture"
{
	Properties
	{
	_Color("Color", Color) = (1,1,1,1)
	_MainTex("Main Tex", 2D) = "white" {}
	_BumpMap("Normal Map", 2D) = "white" {}
	_BumpScale("Bump Scale", Float) = 1.0
	_SpecularMask("Specular Mask", 2D) = "white" {}
	_SpecularScale("Specular Scale", Float) = 1.0
	_Specular("Specular", Color) = (1,1,1,1)
	_Gloss("Gloss", Range(8.0, 256)) = 20
	}
		SubShader
	{
	Pass
	{
	Tags{"LightMode" = "ForwardBase"}
	CGPROGRAM
	#pragma vertex vert
	#pragma fragment frag
	#include "UnityCG.cginc"
	#include "Lighting.cginc"
	fixed4 _Color;
	sampler2D _MainTex;
	float4 _MainTex_ST; //����������+_STΪunity���ú꣬�洢�˸����������Ŵ�С��ƫ�������ֱ��Ӧ.xy��.zw����
	sampler2D _BumpMap;
	float _BumpScale; //���ư�͹�̶ȵı���
	sampler2D _SpecularMask; //��������
	float _SpecularScale; //�������������Ŀɼ���
	fixed4 _Specular;
	float _Gloss;
	struct a2v {
	float4 vertex : POSITION;
	float3 normal : NORMAL;
	float4 tangent : TANGENT;
	float4 texcoord : TEXCOORD0;
	};
	struct v2f {
	float4 pos : SV_POSITION;
	float2 uv : TEXCOORD0;
	float3 lightDir : TEXCOORD1;
	float3 viewDir : TEXCOORD2;
	};
	v2f vert(a2v v)
	{
	v2f o;
	o.pos = UnityObjectToClipPos(v.vertex);
	//��_MainTex������Ϣ(���Ŵ�С��ƫ�����Լ�������Ϣ)�洢��o.uv.xy��
	o.uv.xy = v.texcoord.xy * _MainTex_ST.xy + _MainTex_ST.zw;
	//unity���ú꣬���㲢�õ���ģ�Ϳռ䵽���߿ռ�ı任����rotation
	TANGENT_SPACE_ROTATION;
	//��ȡ���߿ռ��µĹ��շ���
	o.lightDir = mul(rotation, ObjSpaceLightDir(v.vertex)).xyz;
	//��ȡ���߿ռ��µ��ӽǷ���
	o.viewDir = mul(rotation, ObjSpaceViewDir(v.vertex)).xyz;;
	return o;
	}
	fixed4 frag(v2f i) : SV_Target
	{
		//�����߿ռ��µĹ��շ�����ӽǷ���λ��
		fixed3 tangentLightDir = normalize(i.lightDir);
		fixed3 tangentViewDir = normalize(i.viewDir);
		//��ȡ���߿ռ��µķ�����
		fixed3 tangentNormal = UnpackNormal(tex2D(_BumpMap, i.uv));
		tangentNormal.xy *= _BumpScale;
		tangentNormal.z = sqrt(1.0 - saturate(dot(tangentNormal.xy, tangentNormal.xy)));
		//��ȡƬԪ�ϵ������������ͱ���_Color��˵õ����Ͻ��
		fixed3 albedo = tex2D(_MainTex, i.uv).rgb * _Color.rgb;
		//��ȡ������
		fixed3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz * albedo;
		//���������
		fixed3 diffuse = _LightColor0.rgb * albedo * max(0, dot(tangentNormal, tangentLightDir));
		//�߹ⷴ����㣬����㷽ʽ��ǰ�ĵļ���һ��������ֻ�������specularMask������������˵õ��������������Ļ�Ͻ��
		fixed3 halfDir = normalize(tangentLightDir + tangentViewDir);
		fixed specularMask = tex2D(_SpecularMask, i.uv).r * _SpecularScale;
		fixed3 specular = _LightColor0.rgb * _Specular.rgb * pow(max(0, dot(tangentNormal, halfDir)), _Gloss) * specularMask;
		return fixed4(ambient + diffuse + specular, 1.0);
		}
		ENDCG
		}
	}
		FallBack "Specular"
}