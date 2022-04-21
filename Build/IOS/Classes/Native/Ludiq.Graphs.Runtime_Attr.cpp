#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// Ludiq.DisableAnnotationAttribute
struct DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF;
// Ludiq.DoNotSerializeAttribute
struct DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// Ludiq.SerializeAsAttribute
struct SerializeAsAttribute_t0166BD6B506B30C69D7D8088ADF6313F09563DBB;
// Ludiq.SerializeAttribute
struct SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;
// System.Type
struct Type_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Ludiq.DisableAnnotationAttribute
struct DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Ludiq.DisableAnnotationAttribute::<disableIcon>k__BackingField
	bool ___U3CdisableIconU3Ek__BackingField_0;
	// System.Boolean Ludiq.DisableAnnotationAttribute::<disableGizmo>k__BackingField
	bool ___U3CdisableGizmoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdisableIconU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF, ___U3CdisableIconU3Ek__BackingField_0)); }
	inline bool get_U3CdisableIconU3Ek__BackingField_0() const { return ___U3CdisableIconU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CdisableIconU3Ek__BackingField_0() { return &___U3CdisableIconU3Ek__BackingField_0; }
	inline void set_U3CdisableIconU3Ek__BackingField_0(bool value)
	{
		___U3CdisableIconU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdisableGizmoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF, ___U3CdisableGizmoU3Ek__BackingField_1)); }
	inline bool get_U3CdisableGizmoU3Ek__BackingField_1() const { return ___U3CdisableGizmoU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CdisableGizmoU3Ek__BackingField_1() { return &___U3CdisableGizmoU3Ek__BackingField_1; }
	inline void set_U3CdisableGizmoU3Ek__BackingField_1(bool value)
	{
		___U3CdisableGizmoU3Ek__BackingField_1 = value;
	}
};


// Ludiq.DoNotSerializeAttribute
struct DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// Ludiq.SerializeAttribute
struct SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Ludiq.FullSerializer.fsPropertyAttribute
struct fsPropertyAttribute_t3C890DB4EFFB2034ACC600520340C3A753ABF084  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Ludiq.FullSerializer.fsPropertyAttribute::Name
	String_t* ___Name_0;
	// System.Type Ludiq.FullSerializer.fsPropertyAttribute::Converter
	Type_t * ___Converter_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(fsPropertyAttribute_t3C890DB4EFFB2034ACC600520340C3A753ABF084, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Converter_1() { return static_cast<int32_t>(offsetof(fsPropertyAttribute_t3C890DB4EFFB2034ACC600520340C3A753ABF084, ___Converter_1)); }
	inline Type_t * get_Converter_1() const { return ___Converter_1; }
	inline Type_t ** get_address_of_Converter_1() { return &___Converter_1; }
	inline void set_Converter_1(Type_t * value)
	{
		___Converter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Converter_1), (void*)value);
	}
};


// Ludiq.SerializeAsAttribute
struct SerializeAsAttribute_t0166BD6B506B30C69D7D8088ADF6313F09563DBB  : public fsPropertyAttribute_t3C890DB4EFFB2034ACC600520340C3A753ABF084
{
public:

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void Ludiq.DoNotSerializeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * __this, const RuntimeMethod* method);
// System.Void Ludiq.SerializeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeAttribute__ctor_mC527E427E79C18CA56F52446A2505E819547F1B9 (SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 * __this, const RuntimeMethod* method);
// System.Void Ludiq.DisableAnnotationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableAnnotationAttribute__ctor_mF7A2696DA06144F406479AD79C8DC013A6A3FE12 (DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF * __this, const RuntimeMethod* method);
// System.Void Ludiq.SerializeAsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeAsAttribute__ctor_m8B6D587F3BFFA7B188067BBAEAE635864296EE77 (SerializeAsAttribute_t0166BD6B506B30C69D7D8088ADF6313F09563DBB * __this, String_t* ___name0, const RuntimeMethod* method);
static void Ludiq_Graphs_Runtime_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[0];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x34\x2E\x36"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x20\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x20\x34\x2E\x36"), NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[2];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[3];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[4];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_U3CnesterU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__source(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__macro(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__embed(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_beforeGraphChange(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_afterGraphChange(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_get_nester_m7F333A6BEEF17FE47B3717A23030A3AFC0CA50E1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_set_nester_mB1A349551C3E159558D176AF0556E03F268CF69E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_add_beforeGraphChange_m8760AA852068D4A42E158AD249B3350FB6F55910(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_remove_beforeGraphChange_m29876A9D4378DC6B7ADDA476F7EC9FEC6B5AB5B3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_add_afterGraphChange_mE584C7BADF05C15FA8ACB8525B4CF9C937075BB6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_remove_afterGraphChange_mB9727DE963CF0CF6114B0D6D8FC01D6964E4D17A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____nester_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____source_PropertyInfo(CustomAttributesCache* cache)
{
	{
		SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 * tmp = (SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 *)cache->attributes[0];
		SerializeAttribute__ctor_mC527E427E79C18CA56F52446A2505E819547F1B9(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____macro_PropertyInfo(CustomAttributesCache* cache)
{
	{
		SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 * tmp = (SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 *)cache->attributes[0];
		SerializeAttribute__ctor_mC527E427E79C18CA56F52446A2505E819547F1B9(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____embed_PropertyInfo(CustomAttributesCache* cache)
{
	{
		SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 * tmp = (SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 *)cache->attributes[0];
		SerializeAttribute__ctor_mC527E427E79C18CA56F52446A2505E819547F1B9(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____graph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____aotStubs_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CrootU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CgameObjectU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CfetchRootDebugDataBindingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_root_m40374E3DB3AF7F45890867E15B814322172C9444(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_set_root_m03A9F9A69A65AC1D3B623CBA5B05B96D9766831F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_gameObject_m16BB23EC0380D57C2019218597394A00FF806F6B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_set_gameObject_mC90622B07FA3767439C4B2A0663A5C63CC246335(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_fetchRootDebugDataBinding_mE2FA7BCEEAB1535D4DB9D902C539579B62068B9F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphPointerException_t5C5713ACEA198EF111DB418513E1EC64A35B36BD_CustomAttributesCacheGenerator_U3CpointerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphReference_t68B09273A58A24CB1A1EA651169091D6822A1FDC_CustomAttributesCacheGenerator_hashCode(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void U3CU3Ec_tDBCD0FD01E2F4B8350B84059DB754CB7A019EC9E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_U3CnestU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__alive(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__enabled(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_threadSafeGameObject(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_isReferenceCached(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__reference(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_U3CgraphDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_get_nest_m4372DBD4CE4798BD0A74479AF13C69442780BD84(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_set_nest_m1F7134B452A5222F259198D9D0F6737CBF00D605(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_get_graphData_m4EFAFE5848FF612927770ED4ABB603946CD28F26(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_set_graphData_m7D252AE7F765FE3FD553F36C8B4A3C97B34CE140(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____nest_PropertyInfo(CustomAttributesCache* cache)
{
	{
		SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 * tmp = (SerializeAttribute_t24444C2657596AC5965687054CF999879925EEE5 *)cache->attributes[0];
		SerializeAttribute__ctor_mC527E427E79C18CA56F52446A2505E819547F1B9(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphNester_nest_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IMachine_threadSafeGameObject_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____reference_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____hasGraph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____graph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____graphData_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_isSerializationRoot_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_serializedObject_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_childGraph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IAotStubbable_aotStubs_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF * tmp = (DisableAnnotationAttribute_t03443603B75B75FA0F95EB6918047C645FF0B7DF *)cache->attributes[0];
		DisableAnnotationAttribute__ctor_mF7A2696DA06144F406479AD79C8DC013A6A3FE12(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator__graph(CustomAttributesCache* cache)
{
	{
		SerializeAsAttribute_t0166BD6B506B30C69D7D8088ADF6313F09563DBB * tmp = (SerializeAsAttribute_t0166BD6B506B30C69D7D8088ADF6313F09563DBB *)cache->attributes[0];
		SerializeAsAttribute__ctor_m8B6D587F3BFFA7B188067BBAEAE635864296EE77(tmp, il2cpp_codegen_string_new_wrapper("\x67\x72\x61\x70\x68"), NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator__reference(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____graph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IMacro_graph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_childGraph_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____aotStubs_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_isSerializationRoot_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_serializedObject_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
static void Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____reference_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A * tmp = (DoNotSerializeAttribute_tD1E48BDE2E1F8FEE679E497AD3EC5BCD200F5D3A *)cache->attributes[0];
		DoNotSerializeAttribute__ctor_mB84DF91186F8392D2206234F276C21965D93A15F(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Ludiq_Graphs_Runtime_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Ludiq_Graphs_Runtime_AttributeGenerators[62] = 
{
	U3CU3Ec_tDBCD0FD01E2F4B8350B84059DB754CB7A019EC9E_CustomAttributesCacheGenerator,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_U3CnesterU3Ek__BackingField,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__source,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__macro,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator__embed,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_beforeGraphChange,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_afterGraphChange,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CrootU3Ek__BackingField,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CgameObjectU3Ek__BackingField,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_U3CfetchRootDebugDataBindingU3Ek__BackingField,
	GraphPointerException_t5C5713ACEA198EF111DB418513E1EC64A35B36BD_CustomAttributesCacheGenerator_U3CpointerU3Ek__BackingField,
	GraphReference_t68B09273A58A24CB1A1EA651169091D6822A1FDC_CustomAttributesCacheGenerator_hashCode,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_U3CnestU3Ek__BackingField,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__alive,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__enabled,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_threadSafeGameObject,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_isReferenceCached,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator__reference,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_U3CgraphDataU3Ek__BackingField,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator__graph,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator__reference,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_get_nester_m7F333A6BEEF17FE47B3717A23030A3AFC0CA50E1,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_set_nester_mB1A349551C3E159558D176AF0556E03F268CF69E,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_add_beforeGraphChange_m8760AA852068D4A42E158AD249B3350FB6F55910,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_remove_beforeGraphChange_m29876A9D4378DC6B7ADDA476F7EC9FEC6B5AB5B3,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_add_afterGraphChange_mE584C7BADF05C15FA8ACB8525B4CF9C937075BB6,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_remove_afterGraphChange_mB9727DE963CF0CF6114B0D6D8FC01D6964E4D17A,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_root_m40374E3DB3AF7F45890867E15B814322172C9444,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_set_root_m03A9F9A69A65AC1D3B623CBA5B05B96D9766831F,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_gameObject_m16BB23EC0380D57C2019218597394A00FF806F6B,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_set_gameObject_mC90622B07FA3767439C4B2A0663A5C63CC246335,
	GraphPointer_t778EF9A27A051E332142E926BFF5BE6BCA5A329E_CustomAttributesCacheGenerator_GraphPointer_get_fetchRootDebugDataBinding_mE2FA7BCEEAB1535D4DB9D902C539579B62068B9F,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_get_nest_m4372DBD4CE4798BD0A74479AF13C69442780BD84,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_set_nest_m1F7134B452A5222F259198D9D0F6737CBF00D605,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_get_graphData_m4EFAFE5848FF612927770ED4ABB603946CD28F26,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_set_graphData_m7D252AE7F765FE3FD553F36C8B4A3C97B34CE140,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____nester_PropertyInfo,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____source_PropertyInfo,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____macro_PropertyInfo,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____embed_PropertyInfo,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____graph_PropertyInfo,
	GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F_CustomAttributesCacheGenerator_GraphNest_2_t2932706F77D9217D1B89A3191154F412E9557C3F____aotStubs_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____nest_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphNester_nest_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IMachine_threadSafeGameObject_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____reference_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____hasGraph_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____graph_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____graphData_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_isSerializationRoot_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_serializedObject_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IGraphParent_childGraph_PropertyInfo,
	Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7_CustomAttributesCacheGenerator_Machine_2_t97A9A3CC4096FDF9695DD575321B275A3EB035A7____Ludiq_IAotStubbable_aotStubs_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____graph_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IMacro_graph_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_childGraph_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____aotStubs_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_isSerializationRoot_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____Ludiq_IGraphParent_serializedObject_PropertyInfo,
	Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E_CustomAttributesCacheGenerator_Macro_1_t6E9DDF68C1F4FFBFE4B3EBD633AB7BA66B83E84E____reference_PropertyInfo,
	Ludiq_Graphs_Runtime_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
