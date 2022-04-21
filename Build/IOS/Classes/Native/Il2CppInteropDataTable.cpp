﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 ;
struct Guid_t ;
struct IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22;
struct IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF;
struct IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A;
struct IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81;
struct IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7;
struct IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE;
struct IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2;
struct ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2;
struct ImageDebugDirectory_t2DD7B4844C3E0494A307E9056A7336C36A7229BD ;
struct STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshaled_com;
struct STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.ComTypes.IAdviseSink
struct NOVTABLE IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IAdviseSink_OnClose_mED4BF72818F263B1510F7B48DCAEDA76DA5351F6() = 0;
	virtual void STDCALL IAdviseSink_OnDataChange_m8C73348DD8D36913C93B95F620A89DC6950C0FFA(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___format0, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshaled_com* ___stgmedium1) = 0;
	virtual void STDCALL IAdviseSink_OnRename_m6D87BD9F071987912A26239D143DC067D33F8A70(IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE* ___moniker0) = 0;
	virtual void STDCALL IAdviseSink_OnSave_m5F061FE418B57B8B2B49BE4BBEB4901412D6A0F8() = 0;
	virtual void STDCALL IAdviseSink_OnViewChange_mE91DA847EF4C4E239EF044B91C096609170ECBAE(int32_t ___aspect0, int32_t ___index1) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumFORMATETC
struct NOVTABLE IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumFORMATETC_Clone_m93FBB42548DFBDAE509A8389676F28A5BC9D5AA6(IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Next_m1A3B5CB16266472233598D576292282968B0D517(int32_t ___celt0, FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Reset_m50ED0980C16BC47349C24DE01043E48C5B22D777() = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Skip_m368920D6DC3A7D55E305963EE0DA664032199494(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumSTATDATA
struct NOVTABLE IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumSTATDATA_Clone_m3F0965C3502A17802AE89D68AEFCB86656FAA59D(IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Next_mA46931CE06B22F83EDDFF8D7A59BF75A61158662(int32_t ___celt0, STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshaled_com* ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Reset_mDC3E6EB277A61500081D15E345E308806DE785A7() = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Skip_m1E948D894DDF0DA211F9FEFB95387315044C43D6(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IMoniker
struct NOVTABLE IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped0_GetClassID_m0150993324607CAC188B984C0B831837EC95E7DE() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped1_IsDirty_mC49463651D1CA2A9801E25961E70E8C961CA0B70() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped2_Load_m75738890989E0C9443488704C6B7C2F480D8BD4B() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped3_Save_mC43E905F3D46CB608A2B795FFEFFE5DB78A742B4() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped4_GetSizeMax_m79A84A349CE0630985DB91F6B1B7408963125841() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped5_BindToObject_m3D032E0917BEFD663B5AB81F367D6622967106BF() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped6_BindToStorage_mDD84995F549E06674B98B192DAB1BF3398C1F75A() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped7_Reduce_mE70899C712F40D16D734CADF98B3BA0A124EF3F4() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped8_ComposeWith_m4852A8E89BD904F18F772333ABDE8C4BF1B9C7B2() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped9_Enum_m194CFE83D3E9E6B62F0A7BA20A23250D99E4744B() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped10_IsEqual_m5D567C31E265E95429AB5797F14A53C5AC5E2489() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped11_Hash_m23E351055783F459077DB54DD0101F81341B4676() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped12_IsRunning_m34D1ABE62AE2A6F39512B131550A68A0FE05D7BE() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped13_GetTimeOfLastChange_mE61D45C4ABA4058FC411AD69750549F8A69A7B9C() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped14_Inverse_mFECAB8C79B5F225728EDA4797874832063261C72() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped15_CommonPrefixWith_m457E38C6FAD47D4E438647D0B5D475D1D12A88EB() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped16_RelativePathTo_mCE5735C5376719E4026B9436C836998950C4F4F3() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped17_GetDisplayName_m2FE822805B2398DA02B26AD3E7318D28DAB2AE84() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped18_ParseDisplayName_m6C1F2930A8B7B091DB6F806BE53F3FADEF895B6F() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped19_IsSystemMoniker_mDB3B81C271172C1C1B54FB1B16F2BA1ACDB3D422() = 0;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped0_Read_mF6EDC588DC7BD88A29F69287900C962A9D73263C() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped1_Write_m496D18FF5FAB0719866C8D98BF38C91BD0945C70() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped2_Seek_mCD422273BD0FF93DB7388EFDC0C0D1C10D1F25CC() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped3_SetSize_m83B4B5BED4D957BE1E4F43B5867981B3C00B76D7() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped4_CopyTo_m8537632972830A02E4B8A1DF5E46473EBADED42A() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped5_Commit_m64EF35DCC3D9500683325C1EBDCA5A59DF2AC2DC() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped6_Revert_m2FB91FB7F2857C9BA30EC8502D8C72D74DF5ABF5() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped7_LockRegion_m3CF7A5987BAB1D1BA180092241C22D74955B1B90() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped8_UnlockRegion_mF3D8EDA8A91DD0973DCFB75D938B196DA4F994E2() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped9_Stat_m9F1A4A6BCFE7CE3B1410EE2D2982E9692334DC7C() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped10_Clone_mCFACBA2774B9AA6BFAF77632F62B031DA445F5C7() = 0;
};

// System.Object


// System.Diagnostics.PerformanceCounterManager
struct PerformanceCounterManager_t59F3DEA5C97600581F02EFF328C64447EE8731F6  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:

public:
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.InteropServices.ComTypes.ADVF
struct ADVF_t9448672693089A81DFD81429116500DEE65321D4 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.ADVF::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ADVF_t9448672693089A81DFD81429116500DEE65321D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.ComTypes.DATADIR
struct DATADIR_tD17D65C5D4ADC7DA7CB8A60956411150C1AE00A3 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.DATADIR::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DATADIR_tD17D65C5D4ADC7DA7CB8A60956411150C1AE00A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct NOVTABLE IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_m428F107DD93C43F24692851DCE795029214AC7D7(Il2CppChar* ___szName0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_mE804F7EB997C4BA45116B13978B826562B3A3160(Il2CppChar* ___szFile0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_mA4F0168C0937FC1BD10C3CCC5FB55D08A1B7948E(intptr_t ___pIStream0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_m9EAF6C68D7D1FB9A02FBAB691D8993417D7E8FD9(uint32_t ___fSave0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m1E9503C46F7FE9DADF02D002B78507832B3F001F(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m1081E742FCEBE00911B37FE450EEB669FCC6B52B(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_m76C1ABE93FE23BD2C0C7F9DAB84B136CE1521DAC(Il2CppIUnknown* ___pUnk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m138F65EF24164975244105C1B01C6F43530170EC(uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_m1B726C0B328A7F8DEF172E117BEA79580C2C8C18(uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_mA68949DEA4480E31AD1B16547D0B21E57DF1CDAB(uint32_t ___tkResolutionScope0, intptr_t ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_mD9606074271F9BFF8F4D9FDB1FDEBE500B750FB9(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_m9C8B0A3499696D414E0086770333B70296371526(uint32_t ___tkImport0, Il2CppChar* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_m682F2EB868F35476443237FB3EE545EBD7E7F99C(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mB27FBA2466EA3F062D3EDF55C7792A711797C806(uint32_t ___td0, Il2CppChar* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_mCE406E506288289DFAF0C4A60FA1E32D2478FD5F(uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m3111901F8556D501BA8F6105EB791711A7EA0435(uint32_t ___td0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_m8715001313B08A0CD7B65B945BB773E28A84C33D(uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_mF1E0735A8DDD78C83EF09A825B1EFD7EEDEDE4BF(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_mB926BF1FEE17B8CD923D9ACB3753A56026607DEE(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m9417D98488FEE6C27219E323397D5B0DF78D4A38(uint32_t ___md0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_m98824B863F407334D1D6BE6D4BFAE32CE3A78AC0(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m081E203DECD2774837D61D91EF90E326A4A9BD13(Il2CppChar* ___szName0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_m41DA57DBB32F270EA762F970DC9B4E23530F09CF(uint32_t ___mr0, uint32_t ___tk1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_m0BEB2E3908A459EAFAE24144C3C247C934227EA5(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_mD5E2C921263CCE12558E4046236B755687752B33(intptr_t ___pbData0, uint32_t ___cbData1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_mFA00B99748AC537A0C72680759F069B30FBA4713(Il2CppChar* ___szString0, uint32_t ___cchString1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_m1A5FC35889E72217493CD0DF6B81AACDCE5290B0(uint32_t ___tkObj0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m7AEAB98EE8F0FDD88100A7C3AEE3A34EF2103335(uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m651FBA9111E878682FAAED80EBB31BF2649F4F7F(uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m47F86B05E39617565C1C21455135E8D148D60247(uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_m9A4DAF6B694FD6564D8F0E8D8051E6704612E33C(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_m133544D3BD05A2CF74FE28E43459298889D6AA1C(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_m41C7DACC086059BB3B6E66035C1D157E82868A78(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_mD545E014B9EBBD62902440F02C5B0D80CC806D4F(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_m6928A7D4D651E3AA223D564697F71D59D5507899(uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m1B99B1307C7719FE2A17385931591794FCAEF86B(uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_mE7573B0EA971B63D86CADBE52CE01271F34E6BB9(uint32_t ___td0, Il2CppChar* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m06217EABD6C998235CE3C500452141592B7B0F1E(uint32_t ___td0, Il2CppChar* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_mC511409D41C02E8C9E3B520189690B3EDE9B04DD(uint32_t ___md0, uint32_t ___ulParamSeq1, Il2CppChar* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_mE1C1B2F8EDFA27D7BFCF5770B38AB7AF098ACCB6(uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_mE8CEE168666047461BB5FF74C439736E10227E2B(uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m70DEAFEAEBA7B0AAB9BB35219A2F811BB7242AE7(uint32_t ___pd0, Il2CppChar* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_m87EC2148918CC382B03D11135C857821CE7C159B(uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_mFE4B9FDEA9B174AA4FDDD212BD2B1FE70596F323(Il2CppIUnknown* ___pImport0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_m5D54B1DA1CE22BB4D509A9BE2E00A042528B37CB(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_mDFC9FA3484E420DCB33F9A40920870E1CF72595D(uint32_t ___md0, uint32_t ___dwImplFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_m81749123FD373FAFBAFF29BB0D14E61157ACB726(uint32_t ___fd0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_mBE4C155C791000950970868AF71A82B7D9122AF8(IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7* ___pImport0, intptr_t ___pHostMapToken1, Il2CppIUnknown* ___pHandler2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_m9C370016EE3CEFD6707BA868DC17D672FEC8801B() = 0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct NOVTABLE IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IMetaDataImport_CloseEnum_m0D3899A02EBD1119C75C586BB2E5CE9AE08D0EC8(uint32_t ___hEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m37E1477ACB8395D410EBAB42D50008B234921D4B(uint32_t ___hEnum0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_mCE5B33001D1295A5DAE35818695B096DCD62EA22(uint32_t ___hEnum0, uint32_t ___ulPos1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_m62882BB551D53AF5ACFA42A37B3D84FE3B84C79C(uint32_t* ___phEnum0, uint32_t* ___rTypeDefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_m41A161BCB8D5307ACD83A9BE015BC2F62638B074(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rImpls2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_m18602762DD0D6B88E10410692887720E68BCBE87(uint32_t* ___phEnum0, uint32_t* ___rTypeRefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_mAD3D7DCC51EA3C9ACBCC521B19E3C4FC9DFFA6E3(Il2CppChar* ___szTypeDef0, uint32_t ___tkEnclosingClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_mCF342F004A59F0470CE8F1D3053BF2B314B8A47C(Il2CppChar* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mB2863368EC2DAEBEFB6F18C4101CE1CF2428F7B6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_m0FC61C17845D7B0F3D246EA3A9761DF7242B4841(uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_mBA89E086C4A57EC2FA4636FFEF3BAF718F099AB1(uint32_t ___iiImpl0, uint32_t* ___pClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m2DE7BDB4F1182C8E4BBEA10C17CA35D7B7DF1FFF(uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, Il2CppChar* ___szName2, uint32_t ___cchName3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mF54A03D1DA37718E8D9466658E3C120444327B26(uint32_t ___tr0, Guid_t * ___riid1, Il2CppIUnknown** ___ppIScope2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_m5F86EBABC40A31C3175EF2B198A0357B6311FA91(uint32_t* ___phEnum0, uint32_t ___cl1, uint32_t* ___rMembers2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_mDCECC10F43355C7C77939D444671605C439BBCD8(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMembers3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m06CDF2E78EE9A971361D3933E30CAA41ACC9C325(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m5B854D69051794DA621F5D4F5FE57DC093840775(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMethods3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_m18BE7FB7A04CD714EF75E06A0D8AA36AFA748E1B(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_mAD5EB669862041BBF8FCBEDD223FA3AA82D42CA3(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rFields3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_mEDC99F5BD113EC8177A2373416D4F893D472C444(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rParams2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m905F617215EA7A7DD2959DDFAEBA4C15A90E3A84(uint32_t* ___phEnum0, uint32_t ___tkParent1, uint32_t* ___rMemberRefs2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_m800A1948CC075DDEB1DE3786D850B9CF4953050B(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rMethodBody2, uint32_t* ___rMethodDecl3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m727E46DB7B44650D4D8CE41E2029B41D14A86C60(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, uint32_t* ___rPermission3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mE9F0C70F729DDEAE81316F5BD1C0B17881F80FA4(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_m6AF98FF569DFC46F7ECFFB8C765220F8B5D14B24(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_m77B747283B807A87097278A782D89E4BEDA46F83(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mDE2D5D9046FE8F93D56D7FB9F07AAC0F57158A61(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_m0EEE904D2726334706A46B153CF4ED8237459545(uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_mC729344ED3793124DE09E054B8A4AFE5FB43A99A(uint32_t ___mr0, uint32_t* ___ptk1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mB3F0FA0C172162EDA52F69116ED33F39FAA2AB3A(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_m4F3C3598CC8870251FB3A67E2A9B7A307B0573F8(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_m02B3704478EAA77E28D3678A89AAFB57E20103F7(uint32_t ___ev0, uint32_t* ___pClass1, Il2CppChar* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, uint32_t* ___rmdOtherMethod10, uint32_t ___cMax11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m71E1754D988748DE5DBF9D733882B6DD98BCEF12(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rEventProp2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_m7ABA0DDD69F65EF75BD832EB59555B32307A38B6(uint32_t ___mb0, uint32_t ___tkEventProp1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_mC391249E3D98647813541985752110CF4C439DED(uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_m62629228ED1BB8B7D1CF5317282448ECFCAE31A7(uint32_t ___tk0, intptr_t* ___ppvNativeType1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m4647E38E555A210A7461C04AB7FC283849FD189C(uint32_t ___tk0, uint32_t* ___pulCodeRVA1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_m018DAB22B9D1CCB215F154D91EF8475EC6FE4CD4(uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_mBD0DA8637DAD16A7D580974308D79271BBF2684D(uint32_t ___mdSig0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m445C934778C1A42B7BFF280FAD4A58EC8EC04CDA(uint32_t ___mur0, Il2CppChar* ___szName1, uint32_t ___cchName2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_m5B0A23EAF222BF4E7ED0F872834D8DFCA7072789(uint32_t* ___phEnum0, uint32_t* ___rModuleRefs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m1F40421B7A42A57CDA582A2D522E6AEF637E779B(uint32_t ___typespec0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m289B25EB1B7624F1FC64DDF38E8D766CAA8541EF(uint32_t ___tk0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_m6058184C16C96FB4E9565DDAB73D60AB593F8588(uint32_t* ___phEnum0, uint32_t* ___rMethods1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m22012E5672CA55A8454DD445D1CFE1827DF1057F(uint32_t ___stk0, Il2CppChar* ___szString1, uint32_t ___cchString2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_mE04F476E7C2FA053AFF4A6F04C74F7277CB3AB45(uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m246D5B341E047B261839C3F62E7E7FADB7B304CE(uint32_t* ___phEnum0, uint32_t* ___rSignatures1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m6805F3817D44166430557EF435823FA9777E5124(uint32_t* ___phEnum0, uint32_t* ___rTypeSpecs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m0D1AD6AE471157B06FE36CE06479BD072D7BDAEA(uint32_t* ___phEnum0, uint32_t* ___rStrings1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_m0866D89C6A7811AA5FBF95C77E47EA545AD671C5(uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_m10B90051E4924683EB1E52401A6D62468F7F59E7(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, uint32_t* ___rCustomAttributes3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_mFF95E6D34E2918C6685E0933F0E6D12D4B4D6574(uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_m54B8F48FAA1C69DC41806DC8BC67171223F98AF4(uint32_t ___tkResolutionScope0, Il2CppChar* ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m7259BD39CD2495DEA85F9C9E0A9FD33D5364CD77(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_m441C445751C7F8E017A151210928A85699B7A005(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_mC69AE779B863D2C29BEF95D642D874D23FB958D4(uint32_t ___prop0, uint32_t* ___pClass1, Il2CppChar* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, uint32_t* ___rmdOtherMethod13, uint32_t ___cMax14, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_m773A908558B1CE55CEE9802D07FCC8799BE0A68C(uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, Il2CppChar* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m710CB7275785D45AEEBD8126989C7A9453D01036(uint32_t ___tkObj0, Il2CppChar* ___szName1, intptr_t* ___ppData2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_IsValidToken_mB8D5951A62860491308B8F6D7180E7BC870577A6(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mD60FBB2009AE8304B3FB867015517B7A98BDEF24(uint32_t ___tdNestedClass0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_mBF646865461848854B8743022A6B04AD9A167C5D(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m4D7BF9FD4B1A8A95F4E13BDCAC80F10232E6878E(uint32_t ___pd0, int32_t* comReturnValue) = 0;
};
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter
struct NOVTABLE ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetSource_m0C6559D6D239748CF2813C3F31C222F4CE9B0BA5(uint32_t ___sourceSize0, uint8_t* ___source1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetCheckSum_m5C9484E7CA71122FD3811DA9F615EE58C27CA20C(Guid_t  ___algorithmId0, uint32_t ___checkSumSize1, uint8_t* ___checkSum2) = 0;
};
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2
struct NOVTABLE ISymUnmanagedWriter2_tDAEB0C0924D7048CE68641F7F7D368310D2CF9B3 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineDocument_m07E80322FE1F3A360328D8986885535574CFC4EF(Il2CppChar* ___url0, Guid_t * ___langauge1, Guid_t * ___languageVendor2, Guid_t * ___documentType3, ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2** ___pRetVal4) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetUserEntryPoint_m2C0D00F123E5D0A50D870B4F71940C4280B47E98(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenMethod_mE377EE2B39244D85D5D536B6BB1C0C849EE2589F(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseMethod_mF198DF1AC62FFD754D1F446643C6D83541FF97E3() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenScope_m65065238AFFD110BCB978C9FB19950C9B9B0978A(int32_t ___startOffset0, int32_t* ___pRetVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseScope_mADDE4B385C0DC57BA30C4A767EB5320BB6BC2801(int32_t ___endOffset0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetScopeRange_Placeholder_mB1ECBB216DA7DD5D75EAFC7B910DC7114F6829A5() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable_Placeholder_mA80C4FD6C16132F679AA79A0253D5E4BB3C0C2C0() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineParameter_Placeholder_mBEB29B294B13AA92A30606EBB2694937CB75B148() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineField_Placeholder_mA56CFB8B9CBE49BCA8D868C738448AA2C1494A7E() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable_Placeholder_m6FE6C244D4CCEEE202462E9A21932F5C2B31137F() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Close_mEED4947F0F7DE9DF8979A5CB62D230903EA957C6() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetSymAttribute_mAFF9BDD01BD8B2A265280E4102C1175868CCB86B(uint32_t ___parent0, Il2CppChar* ___name1, uint32_t ___data2, intptr_t ___signature3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenNamespace_m957838F92546BA4E52A61DC9AC12021E41EEFBD6(Il2CppChar* ___name0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseNamespace_m8A3E5C931AC359F761E12FAD3A5555B6F92C1F9C() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_UsingNamespace_m017C675C98B29364BFFDAA0914BB9C4E27C477FD(Il2CppChar* ___fullName0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetMethodSourceRange_Placeholder_mC952696D161B08C11CFA51177B984C470ABDCA2C() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize_m0515A9B583403AB486B81D5D2ADA6434A6E0E2DD(Il2CppIUnknown* ___emitter0, Il2CppChar* ___filename1, IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2* ___pIStream2, IL2CPP_VARIANT_BOOL ___fFullBuild3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_GetDebugInfo_m6ECDEDE695FAE203CF447232345CF41148C71113(ImageDebugDirectory_t2DD7B4844C3E0494A307E9056A7336C36A7229BD * ___pIDD0, int32_t ___cData1, int32_t* ___pcData2, uint8_t* ___data3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineSequencePoints_mBACD1CF07D9E104F9C8104D3B7EFA608524C3453(ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2* ___document0, int32_t ___spCount1, int32_t* ___offsets2, int32_t* ___lines3, int32_t* ___columns4, int32_t* ___endLines5, int32_t* ___endColumns6) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_RemapToken_Placeholder_m9360FF7A5A795BA1FAB0C62FB02A39F36A682646() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize2_Placeholder_mD26266151FEAA455EC51F02B2CB771C6CDE75B7C() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant_Placeholder_m03010E5F6179B37847B832DC451D38F95D14ADD8() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Abort_Placeholder_m5333261093DEE86AD7A9C6EF22DC082FF8A06E11() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable2_mB93D25651988773FBD7B258859C5C1E7CF1B5D83(Il2CppChar* ___name0, int32_t ___attributes1, int32_t ___sigToken2, int32_t ___addrKind3, int32_t ___addr14, int32_t ___addr25, int32_t ___addr36, int32_t ___startOffset7, int32_t ___endOffset8) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable2_Placeholder_mF2B7DAEF9A1B23EE3596353AF33A84A6F3F75865() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant2_mF6753500C64E7E9724169073200FC628DF350B84(Il2CppChar* ___name0, Il2CppVariant ___variant1, int32_t ___sigToken2) = 0;
};
// System.Runtime.InteropServices.ComTypes.IDataObject
struct NOVTABLE IDataObject_tAAA25E607E3761A56ECCFE79C496A30A562626CE : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IDataObject_DAdvise_m1BCADA08DBF532B3E23761886B5E3CDAB6E2C4F9(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___pFormatetc0, int32_t ___advf1, IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22* ___adviseSink2, int32_t* ___connection3) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_DUnadvise_m25A9D5C0103D4C35BC015E98B00FC4676894927A(int32_t ___connection0) = 0;
	virtual int32_t STDCALL IDataObject_EnumDAdvise_mF82F9FC52A2705568120D8E80CD7CEE68E7B19B3(IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A** ___enumAdvise0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_EnumFormatEtc_mDCC2BD126ED195DB11F84E98BB392FB545EB9E44(int32_t ___direction0, IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF** comReturnValue) = 0;
	virtual int32_t STDCALL IDataObject_GetCanonicalFormatEtc_m2BE43B1BC00703A97CF075C355E84CA5E9D9909B(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___formatIn0, FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___formatOut1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetData_m53EFF2D97F10F2D7061D72EFDF822C9D2839F41B(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___format0, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshaled_com* ___medium1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetDataHere_mD9D79614F3FB075D136878255D64D9B0DD7B383A(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___format0, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshaled_com* ___medium1) = 0;
	virtual int32_t STDCALL IDataObject_QueryGetData_mD6B709ADA679BC7E68052876CB6378D6AC9C009C(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___format0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_SetData_m2FC58076D0BFBAF261C330704307A52EA812AEDE(FORMATETC_t6AFEA6C9D2C607D49B7FFA9EC3FDAA2A9DEA35C3 * ___formatIn0, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshaled_com* ___medium1, int32_t ___release2) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_0_0_0;
IL2CPP_EXTERN_C void AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_0_0_0;
IL2CPP_EXTERN_C void AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AppDomainInitializer_t0A7734163B5E248CC71BCFA0C891D6E30BDD1A89();
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainInitializer_t0A7734163B5E248CC71BCFA0C891D6E30BDD1A89_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_0_0_0;
IL2CPP_EXTERN_C void ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_0_0_0;
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_0_0_0;
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_0_0_0;
IL2CPP_EXTERN_C void AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_0_0_0;
IL2CPP_EXTERN_C void AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_0_0_0;
IL2CPP_EXTERN_C void AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_0_0_0;
IL2CPP_EXTERN_C void BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_0_0_0;
IL2CPP_EXTERN_C void BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_0_0_0;
IL2CPP_EXTERN_C void BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_0_0_0;
IL2CPP_EXTERN_C void BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_0_0_0;
IL2CPP_EXTERN_C void CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_0_0_0;
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_0_0_0;
IL2CPP_EXTERN_C void CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_0_0_0;
IL2CPP_EXTERN_C void CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0;
IL2CPP_EXTERN_C void CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_0_0_0;
IL2CPP_EXTERN_C void CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_0_0_0;
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t95B5FD331CE95276D3658140844190B485D26564_0_0_0;
IL2CPP_EXTERN_C void ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_0_0_0;
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_0_0_0;
IL2CPP_EXTERN_C void CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_0_0_0;
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_0_0_0;
IL2CPP_EXTERN_C void ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_0_0_0;
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_0_0_0;
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_0_0_0;
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_t53CDF1C5F789A28897415891667799420D3C5529_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_0_0_0;
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_0_0_0;
IL2CPP_EXTERN_C void DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_0_0_0;
IL2CPP_EXTERN_C void DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_0_0_0;
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_0_0_0;
IL2CPP_EXTERN_C void DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0;
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9();
IL2CPP_EXTERN_C_CONST RuntimeType EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9_0_0_0;
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t23B90B40F60E677A8025267341651C94AE079CDA_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_0_0_0;
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_0_0_0;
IL2CPP_EXTERN_C void EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_0_0_0;
IL2CPP_EXTERN_C void ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_0_0_0;
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_0_0_0;
IL2CPP_EXTERN_C void FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_0_0_0;
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_0_0_0;
IL2CPP_EXTERN_C void FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_0_0_0;
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_0_0_0;
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_0_0_0;
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_0_0_0;
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_0_0_0;
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_0_0_0;
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_0_0_0;
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_0_0_0;
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_0_0_0;
IL2CPP_EXTERN_C void HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HeaderParser_tF8B96DD5415462AC2671AA8D318957235C82FABD();
IL2CPP_EXTERN_C_CONST RuntimeType HeaderParser_tF8B96DD5415462AC2671AA8D318957235C82FABD_0_0_0;
IL2CPP_EXTERN_C void HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_0_0_0;
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_0_0_0;
const Il2CppGuid IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22::IID = { 0x10f, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22_0_0_0;
const Il2CppGuid IDataObject_tAAA25E607E3761A56ECCFE79C496A30A562626CE::IID = { 0x10e, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IDataObject_tAAA25E607E3761A56ECCFE79C496A30A562626CE_0_0_0;
const Il2CppGuid IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF_0_0_0;
const Il2CppGuid IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A_0_0_0;
const Il2CppGuid IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81::IID = { 0xba3fee4c, 0xecb9, 0x4e41, 0x83, 0xb7, 0x18, 0x3f, 0xa4, 0x1c, 0xd8, 0x59 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81_0_0_0;
const Il2CppGuid IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7::IID = { 0x7dac8207, 0xd3ae, 0x4c75, 0x9b, 0x67, 0x92, 0x80, 0x1a, 0x49, 0x7d, 0x44 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7_0_0_0;
const Il2CppGuid IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE::IID = { 0xf, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_0_0_0;
IL2CPP_EXTERN_C void IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_0_0_0;
const Il2CppGuid IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2::IID = { 0xc, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2_0_0_0;
const Il2CppGuid ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2::IID = { 0xb01fafeb, 0xc450, 0x3a4d, 0xbe, 0xec, 0xb4, 0xce, 0xec, 0x1, 0xe0, 0x6 };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2_0_0_0;
const Il2CppGuid ISymUnmanagedWriter2_tDAEB0C0924D7048CE68641F7F7D368310D2CF9B3::IID = { 0xb97726e, 0x9e6d, 0x4f05, 0x9a, 0x26, 0x42, 0x40, 0x22, 0x9, 0x3c, 0xaa };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedWriter2_tDAEB0C0924D7048CE68641F7F7D368310D2CF9B3_0_0_0;
IL2CPP_EXTERN_C void ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_0_0_0;
IL2CPP_EXTERN_C void InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_0_0_0;
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_0_0_0;
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_0_0_0;
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_0_0_0;
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_0_0_0;
IL2CPP_EXTERN_C void InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_0_0_0;
IL2CPP_EXTERN_C void InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_0_0_0;
IL2CPP_EXTERN_C void InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_0_0_0;
IL2CPP_EXTERN_C void InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_0_0_0;
IL2CPP_EXTERN_C void InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_0_0_0;
IL2CPP_EXTERN_C void JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_KcpLog_t156C71B645462643A6A5BB47C5C9F7D0E9A6B6AF();
IL2CPP_EXTERN_C_CONST RuntimeType KcpLog_t156C71B645462643A6A5BB47C5C9F7D0E9A6B6AF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_KcpOutput_t5FFDC73C2C28E3EE4E16F27B06BCCFF5618A3F6D();
IL2CPP_EXTERN_C_CONST RuntimeType KcpOutput_t5FFDC73C2C28E3EE4E16F27B06BCCFF5618A3F6D_0_0_0;
IL2CPP_EXTERN_C void KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_0_0_0;
IL2CPP_EXTERN_C void LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_0_0_0;
IL2CPP_EXTERN_C void LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_0_0_0;
IL2CPP_EXTERN_C void LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_0_0_0;
IL2CPP_EXTERN_C void LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_0_0_0;
IL2CPP_EXTERN_C void LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_0_0_0;
IL2CPP_EXTERN_C void LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_0_0_0;
IL2CPP_EXTERN_C void LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_0_0_0;
IL2CPP_EXTERN_C void LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_0_0_0;
IL2CPP_EXTERN_C void LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_0_0_0;
IL2CPP_EXTERN_C void LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_0_0_0;
IL2CPP_EXTERN_C void LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_0_0_0;
IL2CPP_EXTERN_C void LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_0_0_0;
IL2CPP_EXTERN_C void LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_0_0_0;
IL2CPP_EXTERN_C void LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_0_0_0;
IL2CPP_EXTERN_C void LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_0_0_0;
IL2CPP_EXTERN_C void LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_0_0_0;
IL2CPP_EXTERN_C void LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_0_0_0;
IL2CPP_EXTERN_C void LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_0_0_0;
IL2CPP_EXTERN_C void LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_0_0_0;
IL2CPP_EXTERN_C void LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_0_0_0;
IL2CPP_EXTERN_C void LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_0_0_0;
IL2CPP_EXTERN_C void LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_0_0_0;
IL2CPP_EXTERN_C void LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_0_0_0;
IL2CPP_EXTERN_C void LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_0_0_0;
IL2CPP_EXTERN_C void LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_0_0_0;
IL2CPP_EXTERN_C void LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_0_0_0;
IL2CPP_EXTERN_C void LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_0_0_0;
IL2CPP_EXTERN_C void LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_0_0_0;
IL2CPP_EXTERN_C void LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_0_0_0;
IL2CPP_EXTERN_C void LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_0_0_0;
IL2CPP_EXTERN_C void LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_0_0_0;
IL2CPP_EXTERN_C void LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_0_0_0;
IL2CPP_EXTERN_C void LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_0_0_0;
IL2CPP_EXTERN_C void LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_0_0_0;
IL2CPP_EXTERN_C void LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_0_0_0;
IL2CPP_EXTERN_C void LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_0_0_0;
IL2CPP_EXTERN_C void LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_0_0_0;
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_0_0_0;
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_0_0_0;
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_0_0_0;
IL2CPP_EXTERN_C void LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_0_0_0;
IL2CPP_EXTERN_C void LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_0_0_0;
IL2CPP_EXTERN_C void LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_0_0_0;
IL2CPP_EXTERN_C void LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_0_0_0;
IL2CPP_EXTERN_C void ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_0_0_0;
IL2CPP_EXTERN_C void ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_0_0_0;
IL2CPP_EXTERN_C void MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_0_0_0;
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_0_0_0;
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_0_0_0;
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_tD636CEE709A579BDA3FA23820A65C781DFE201B4(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType ModuleMetadata_tD636CEE709A579BDA3FA23820A65C781DFE201B4_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6();
IL2CPP_EXTERN_C_CONST RuntimeType NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6_0_0_0;
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_0_0_0;
IL2CPP_EXTERN_C void OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_0_0_0;
IL2CPP_EXTERN_C void ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_0_0_0;
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_0_0_0;
IL2CPP_EXTERN_C void OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_0_0_0;
IL2CPP_EXTERN_C void Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_0_0_0;
IL2CPP_EXTERN_C void ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_0_0_0;
IL2CPP_EXTERN_C void PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50();
IL2CPP_EXTERN_C_CONST RuntimeType PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50_0_0_0;
const Il2CppGuid PerformanceCounterManager_t59F3DEA5C97600581F02EFF328C64447EE8731F6::CLSID = { 0x82840be1, 0xd273, 0x11d2, 0xb9, 0x4a, 0x0, 0x60, 0x8, 0x93, 0xb1, 0x7a };
IL2CPP_EXTERN_C_CONST RuntimeType PerformanceCounterManager_t59F3DEA5C97600581F02EFF328C64447EE8731F6_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_0_0_0;
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_0_0_0;
IL2CPP_EXTERN_C void PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_0_0_0;
IL2CPP_EXTERN_C void ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_0_0_0;
IL2CPP_EXTERN_C void ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_0_0_0;
IL2CPP_EXTERN_C void ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_0_0_0;
IL2CPP_EXTERN_C void ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_0_0_0;
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_0_0_0;
IL2CPP_EXTERN_C void PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_0_0_0;
IL2CPP_EXTERN_C void QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_0_0_0;
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_0_0_0;
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_0_0_0;
IL2CPP_EXTERN_C void RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_0_0_0;
IL2CPP_EXTERN_C void RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_0_0_0;
IL2CPP_EXTERN_C void RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_0_0_0;
IL2CPP_EXTERN_C void RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_0_0_0;
IL2CPP_EXTERN_C void RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_0_0_0;
IL2CPP_EXTERN_C void RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_0_0_0;
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_0_0_0;
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_0_0_0;
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_0_0_0;
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_0_0_0;
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_0_0_0;
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_0_0_0;
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_0_0_0;
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_0_0_0;
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_0_0_0;
IL2CPP_EXTERN_C void STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_0_0_0;
IL2CPP_EXTERN_C void STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75();
IL2CPP_EXTERN_C_CONST RuntimeType ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0;
IL2CPP_EXTERN_C void SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_0_0_0;
IL2CPP_EXTERN_C void SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_0_0_0;
IL2CPP_EXTERN_C void SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_0_0_0;
IL2CPP_EXTERN_C void SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1_0_0_0;
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_0_0_0;
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_0_0_0;
IL2CPP_EXTERN_C void SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_0_0_0;
IL2CPP_EXTERN_C void SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_0_0_0;
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_0_0_0;
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_0_0_0;
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_0_0_0;
IL2CPP_EXTERN_C void StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_0_0_0;
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StackObjectAllocateCallback_t0BDF1FA5230D41C8C68BFF1493C2E003117B4382();
IL2CPP_EXTERN_C_CONST RuntimeType StackObjectAllocateCallback_t0BDF1FA5230D41C8C68BFF1493C2E003117B4382_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_0_0_0;
IL2CPP_EXTERN_C void StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_0_0_0;
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_0_0_0;
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_0_0_0;
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_0_0_0;
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_0_0_0;
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_0_0_0;
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_0_0_0;
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_0_0_0;
IL2CPP_EXTERN_C void ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_0_0_0;
IL2CPP_EXTERN_C void ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_0_0_0;
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_0_0_0;
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB();
IL2CPP_EXTERN_C_CONST RuntimeType TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_0_0_0;
IL2CPP_EXTERN_C void TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_0_0_0;
IL2CPP_EXTERN_C void UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_0_0_0;
IL2CPP_EXTERN_C void UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_0_0_0;
IL2CPP_EXTERN_C void UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_0_0_0;
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_0_0_0;
IL2CPP_EXTERN_C void UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnlockConnectionDelegate_tE21C0577890C0E2F84208C89DCD9D01A7C156DAC();
IL2CPP_EXTERN_C_CONST RuntimeType UnlockConnectionDelegate_tE21C0577890C0E2F84208C89DCD9D01A7C156DAC_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UserCallBack_tCF74151133B78BA8A7C2AE844816A44AB66B4C46();
IL2CPP_EXTERN_C_CONST RuntimeType UserCallBack_tCF74151133B78BA8A7C2AE844816A44AB66B4C46_0_0_0;
IL2CPP_EXTERN_C void VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_0_0_0;
IL2CPP_EXTERN_C void VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_0_0_0;
IL2CPP_EXTERN_C void VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_0_0_0;
IL2CPP_EXTERN_C void VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_0_0_0;
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_0_0_0;
IL2CPP_EXTERN_C void VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_0_0_0;
IL2CPP_EXTERN_C void Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_0_0_0;
IL2CPP_EXTERN_C void VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_0_0_0;
IL2CPP_EXTERN_C void WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_0_0_0;
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_0_0_0;
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_0_0_0;
IL2CPP_EXTERN_C void Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_0_0_0;
IL2CPP_EXTERN_C void WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_0_0_0;
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t594255B76730E715A2A5655F8238B0029484B27A_0_0_0;
IL2CPP_EXTERN_C void fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_0_0_0;
IL2CPP_EXTERN_C void fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_0_0_0;
IL2CPP_EXTERN_C void ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ifaddrs_t73A29788565763A776BA6327090408AE84197566_0_0_0;
IL2CPP_EXTERN_C void ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_0_0_0;
IL2CPP_EXTERN_C void in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_0_0_0;
IL2CPP_EXTERN_C void in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_0_0_0;
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_0_0_0;
IL2CPP_EXTERN_C void mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_0_0_0;
IL2CPP_EXTERN_C void sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_0_0_0;
IL2CPP_EXTERN_C void sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_0_0_0;
IL2CPP_EXTERN_C void sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_0_0_0;
IL2CPP_EXTERN_C void sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1();
IL2CPP_EXTERN_C_CONST RuntimeType IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF();
IL2CPP_EXTERN_C_CONST RuntimeType SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_0_0_0;
IL2CPP_EXTERN_C void NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_0_0_0;
IL2CPP_EXTERN_C void OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t40C553E1C3912D66973408630C89C87EE7CB44F3();
IL2CPP_EXTERN_C_CONST RuntimeType CFProxyAutoConfigurationResultCallback_t40C553E1C3912D66973408630C89C87EE7CB44F3_0_0_0;
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000();
IL2CPP_EXTERN_C_CONST RuntimeType InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000_0_0_0;
IL2CPP_EXTERN_C void ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_0_0_0;
IL2CPP_EXTERN_C void RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0_0_0_0;
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_0_0_0;
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_tA64317917B3D01310E84588407113D059D802DEB_0_0_0;
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_0_0_0;
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t107B89040C112A3FE367CE946C2BB5C3CBF60AF8();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t107B89040C112A3FE367CE946C2BB5C3CBF60AF8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_t7A38D0F18CA1C34B5D5793A125D483DA140A52F3();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_t7A38D0F18CA1C34B5D5793A125D483DA140A52F3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t821D78D15724E47635FEE40144582E9D0868BBDD();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_t821D78D15724E47635FEE40144582E9D0868BBDD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1_0_0_0;
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_0_0_0;
IL2CPP_EXTERN_C void EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumPair_t485236486A574718357CD1621A9864C5055D2247_0_0_0;
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB_0_0_0;
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_t3D70C2E77AF55AADD887F423AA0CAE4FABCC92E6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_t3D70C2E77AF55AADD887F423AA0CAE4FABCC92E6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_t27DA3BBADBD9FFAC63A9B47C2D61F0219BFE9E0D();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_t27DA3BBADBD9FFAC63A9B47C2D61F0219BFE9E0D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_0_0_0;
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_0_0_0;
IL2CPP_EXTERN_C void AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F_0_0_0;
IL2CPP_EXTERN_C void InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_0_0_0;
IL2CPP_EXTERN_C void bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t6753A2E40789A34E3D8246A04C45732464423280_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PanicFunction__tFB4D850E5B848FFEF210623F5669284D723544EB();
IL2CPP_EXTERN_C_CONST RuntimeType PanicFunction__tFB4D850E5B848FFEF210623F5669284D723544EB_0_0_0;
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tA70E96084BA012CBD3BD06EECF7153320A476FDC();
IL2CPP_EXTERN_C_CONST RuntimeType SCNetworkReachabilityCallback_tA70E96084BA012CBD3BD06EECF7153320A476FDC_0_0_0;
IL2CPP_EXTERN_C void HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_0_0_0;
IL2CPP_EXTERN_C void RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_0_0_0;
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDCFB23D41CD231EA8616DD8E79CC195290591E52();
IL2CPP_EXTERN_C_CONST RuntimeType GetSecurityInfoNativeCall_tDCFB23D41CD231EA8616DD8E79CC195290591E52_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetSecurityInfoNativeCall_tD08F7F663C4CBA84298B664E2903EBD7620EF05D();
IL2CPP_EXTERN_C_CONST RuntimeType SetSecurityInfoNativeCall_tD08F7F663C4CBA84298B664E2903EBD7620EF05D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t5E34F761F39A1F6B898F0E729B36C0782B92D572();
IL2CPP_EXTERN_C_CONST RuntimeType OnNavMeshPreUpdate_t5E34F761F39A1F6B898F0E729B36C0782B92D572_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A_0_0_0;
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_0_0_0;
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_0_0_0;
IL2CPP_EXTERN_C void ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55();
IL2CPP_EXTERN_C_CONST RuntimeType UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_0_0_0;
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_0_0_0;
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_0_0_0;
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_0_0_0;
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_0_0_0;
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_0_0_0;
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Edge_tC11235216D5E71087549B2CB09A27043F02FB278_0_0_0;
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_t0479DB63473055AD46754E698B2114579D5D944E_0_0_0;
IL2CPP_EXTERN_C void SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SendFileHandler_t4C93259E1E5C92CB02C58182139A0FD319A46142();
IL2CPP_EXTERN_C_CONST RuntimeType SendFileHandler_t4C93259E1E5C92CB02C58182139A0FD319A46142_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_0_0_0;
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_0_0_0;
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_0_0_0;
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_0_0_0;
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_0_0_0;
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_0_0_0;
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_0_0_0;
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0;
IL2CPP_EXTERN_C void DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_0_0_0;
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_0_0_0;
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C_0_0_0;
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_0_0_0;
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_0_0_0;
IL2CPP_EXTERN_C void Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_0_0_0;
IL2CPP_EXTERN_C void ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_0_0_0;
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_0_0_0;
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_0_0_0;
IL2CPP_EXTERN_C void AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_0_0_0;
IL2CPP_EXTERN_C void AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t7348A2EA4521122D925E00FA87DAE050BD56A3EB();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_pem_t_t7348A2EA4521122D925E00FA87DAE050BD56A3EB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[526] = 
{
	{ DelegatePInvokeWrapper_Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6, NULL, NULL, NULL, NULL, NULL, &Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0 } /* System.Action */,
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_0_0_0 } /* UnityEngine.AndroidJavaRunnable */,
	{ NULL, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke, AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke_back, AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_0_0_0 } /* UnityEngine.AnimatorControllerParameter */,
	{ NULL, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke, AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke_back, AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_marshal_pinvoke_cleanup, NULL, NULL, &AnnotationSym_t8B69FE32E097D9C9BA6C555CBFC175FC695730E1_0_0_0 } /* Microsoft.Cci.Pdb.AnnotationSym */,
	{ NULL, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_back, AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_0_0_0 } /* System.AppDomain */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t0A7734163B5E248CC71BCFA0C891D6E30BDD1A89, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t0A7734163B5E248CC71BCFA0C891D6E30BDD1A89_0_0_0 } /* System.AppDomainInitializer */,
	{ NULL, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_back, AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tF2C6AD0D3A09543EAC7388BD3F6500E8527F63A8_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke, ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke_back, ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_marshal_pinvoke_cleanup, NULL, NULL, &ArrayDimension_t620849895E1FC3DC5E6CF97738525D73B529575E_0_0_0 } /* ILRuntime.Mono.Cecil.ArrayDimension */,
	{ NULL, ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke, ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke_back, ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_tB8665B4D628E0AD77DC6A3D4A60D007CB3E2A0D3_0_0_0 } /* LitJson.ArrayMetadata */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_back, AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_back, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_back, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_0_0_0 } /* UnityEngine.AssetBundleRecompressOperation */,
	{ NULL, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_back, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_back, AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8C1F78DA967FD9457A11E672AB0FF865D6BD3787_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters */,
	{ NULL, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t3F1145613E99A2410D1AFBCE8BEFF59D07FE26E0_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric */,
	{ NULL, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_back, AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t7AD876FCD0341D8317ADB430701F4E391E6BB75B_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke, AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke_back, AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke, AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke_back, AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshal_pinvoke_cleanup, NULL, NULL, &AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_0_0_0 } /* System.Runtime.CompilerServices.AsyncVoidMethodBuilder */,
	{ NULL, AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke, AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke_back, AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym_t2A885BB580DD9415750252B6D3F0425B2CA07DEB_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym */,
	{ NULL, AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke, AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke_back, AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym2_tFCF0D7E5D6109B5AF36549F2F53E1A8736A13743_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym2 */,
	{ NULL, AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke, AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke_back, AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegRel_t7849CAFC35C93714D49603A872BDBD5D536500C6_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegRel */,
	{ NULL, AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke, AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke_back, AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegSym_tB5BEFE7B3C7CC3B091389211E076B5CB1055D68C_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegSym */,
	{ NULL, AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke, AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke_back, AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_marshal_pinvoke_cleanup, NULL, NULL, &AttrSlotSym_tEC391D6ED0A56213A9069DCB445A406B0346EDE9_0_0_0 } /* Microsoft.Cci.Pdb.AttrSlotSym */,
	{ NULL, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_back, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ NULL, BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke, BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke_back, BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_marshal_pinvoke_cleanup, NULL, NULL, &BitSet_t51F917923F4DC8552FDEE69B30E8DB81ED11BFC5_0_0_0 } /* Microsoft.Cci.Pdb.BitSet */,
	{ NULL, BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke, BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke_back, BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_marshal_pinvoke_cleanup, NULL, NULL, &BlockSym32_t2C456BCD00B9D4682104BB8CA5DA2EE89AD4EE06_0_0_0 } /* Microsoft.Cci.Pdb.BlockSym32 */,
	{ NULL, BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke, BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke_back, BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_marshal_pinvoke_cleanup, NULL, NULL, &BpRelSym32_t2982623606F3CEC193B8A1FD54BBB62593A4A16D_0_0_0 } /* Microsoft.Cci.Pdb.BpRelSym32 */,
	{ NULL, BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke, BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke_back, BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_marshal_pinvoke_cleanup, NULL, NULL, &BuildCompression_t087855D9CA58769969BA27ADFC31DD8CE80D389F_0_0_0 } /* UnityEngine.BuildCompression */,
	{ NULL, CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke, CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke_back, CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_marshal_pinvoke_cleanup, NULL, NULL, &CFlagSym_tACB6AA0B27961EBE9F56DB530DF03557F06B1401_0_0_0 } /* Microsoft.Cci.Pdb.CFlagSym */,
	{ NULL, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_back, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_back, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_cleanup, NULL, NULL, &CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_0_0_0 } /* UnityEngine.Rendering.Universal.CameraData */,
	{ NULL, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t9ECCD883EF9DF3283696D1CE1F7A81C0F075923E_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_back, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_back, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke, CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke_back, CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_marshal_pinvoke_cleanup, NULL, NULL, &CapturedScope_tA8D8D4B3E94BF8A8683010B249C04400B0AA8C75_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.CapturedScope */,
	{ NULL, CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke, CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke_back, CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_marshal_pinvoke_cleanup, NULL, NULL, &CapturedVariable_tA43BD793284D96D0FF6A5AAFC31EFF49A97CFCF3_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.CapturedVariable */,
	{ NULL, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke, CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke_back, CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshal_pinvoke_cleanup, NULL, NULL, &CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_0_0_0 } /* DG.Tweening.Plugins.CircleOptions */,
	{ NULL, CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke, CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke_back, CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_marshal_pinvoke_cleanup, NULL, NULL, &CoffGroupSym_t4D08D2855D6D83509258E93E0B947FD544F9CA33_0_0_0 } /* Microsoft.Cci.Pdb.CoffGroupSym */,
	{ NULL, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_back, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshal_pinvoke_cleanup, NULL, NULL, &Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_back, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t95B5FD331CE95276D3658140844190B485D26564_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke, ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke_back, ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshal_pinvoke_cleanup, NULL, NULL, &ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_0_0_0 } /* DG.Tweening.Plugins.Options.ColorOptions */,
	{ NULL, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_back, ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t8F1B0A85C30909F8F8E0924A1C54C2BD8690A637_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_back, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke, CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke_back, CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_marshal_pinvoke_cleanup, NULL, NULL, &CompileSym_t0A115E95C5E4D523E0D613371D5C12792FFB72AD_0_0_0 } /* Microsoft.Cci.Pdb.CompileSym */,
	{ NULL, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_back, ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_marshal_pinvoke_cleanup, NULL, NULL, &ComputeBufferDesc_t7C6BB7B580B4A3585B654AE03B39674171F7E0A7_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeBufferDesc */,
	{ NULL, ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke, ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke_back, ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_back, ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_tDA8AC07839288484FCB167A81B4FBA92ECCEAF88_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke, ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke_back, ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_marshal_pinvoke_cleanup, NULL, NULL, &ConstSym_tA95476DBCDF3F5B8908CA63317098ECC871BAAFE_0_0_0 } /* Microsoft.Cci.Pdb.ConstSym */,
	{ NULL, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_back, ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t82BBB159A7E392A24921803A0E79669F4E34DFCB_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_back, Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_marshal_pinvoke_cleanup, NULL, NULL, &Context_t8A5B564FD0F970E10A97ACB8A7579FFF3EE4C678_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ NULL, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_back, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshal_pinvoke_cleanup, NULL, NULL, &ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex */,
	{ NULL, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_back, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_back, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_0_0_0 } /* UnityEngine.Coroutine */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t12C7A08ED124090185A3E209E6CA9E28148A7682_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_back, CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t63379D76B9825516F762DDEDD594814B981DB307_0_0_0 } /* UnityEngine.CullingGroup */,
	{ NULL, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_back, CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_t53CDF1C5F789A28897415891667799420D3C5529_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_back, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke, CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke_back, CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeArgument_tAD8BC44277D9D62DCB973B49514F37BAF4A49538_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeArgument */,
	{ NULL, CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke, CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke_back, CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t04C50A5ECEEFCC3A9A06A9F03C0243C0A8BCFB84_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_back, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_back, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke, DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke_back, DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_back, DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t17C1E5092BC79CB2A5DA8B2B4AB2047B2BE51F74_0_0_0 } /* System.DTSubString */,
	{ NULL, DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke, DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke_back, DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_marshal_pinvoke_cleanup, NULL, NULL, &DatasSym32_tC37BC4632EEE545DAFD3BA3F2852944FE0320F65_0_0_0 } /* Microsoft.Cci.Pdb.DatasSym32 */,
	{ NULL, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_back, DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t0054428F65AC1EA6EADE6C93D4075B3D96A47ECE_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_back, DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t44941ADE58F716AB71DABBFE9BE490F0331F3EF0_0_0_0 } /* System.DateTimeResult */,
	{ NULL, DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke, DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke_back, DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_marshal_pinvoke_cleanup, NULL, NULL, &DefRangeSym2_tDEF3640D1EF82510AC5A8FFED0C72B86E947948B_0_0_0 } /* Microsoft.Cci.Pdb.DefRangeSym2 */,
	{ NULL, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_back, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshal_pinvoke_cleanup, NULL, NULL, &DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredTiler */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_back, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_back, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_back, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke, DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke_back, DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_marshal_pinvoke_cleanup, NULL, NULL, &DiscardedSym_tE57F965CF504049EA0B4798B2B3D68C60740C9A0_0_0_0 } /* Microsoft.Cci.Pdb.DiscardedSym */,
	{ NULL, DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke, DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke_back, DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion128_t72443F9D8302E2FC1E109FA04478DD1394A6A8E8_0_0_0 } /* ProtoBuf.DiscriminatedUnion128 */,
	{ NULL, DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke, DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke_back, DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion128Object_tB542C58806444E60DC4774FB6C0F5EEF0B4EA1B9_0_0_0 } /* ProtoBuf.DiscriminatedUnion128Object */,
	{ NULL, DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke, DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke_back, DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion32_t65F13DD2B3FD310B66618334FB91A3D7A5A4922C_0_0_0 } /* ProtoBuf.DiscriminatedUnion32 */,
	{ NULL, DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke, DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke_back, DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion32Object_t7F1AB38565D1C5ABEC4D226DD0C95ED1A0DF4F91_0_0_0 } /* ProtoBuf.DiscriminatedUnion32Object */,
	{ NULL, DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke, DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke_back, DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion64_tAA376FA1A60A2A4124C3C4D105165D39FCF91920_0_0_0 } /* ProtoBuf.DiscriminatedUnion64 */,
	{ NULL, DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke, DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke_back, DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion64Object_tAD65CE2A42B19F7DAEE97F063F2AF6FEA4446C07_0_0_0 } /* ProtoBuf.DiscriminatedUnion64Object */,
	{ NULL, DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke, DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke_back, DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnionObject_tB338A49F95995C0D7A69D26D6490E7DDF2C994D9_0_0_0 } /* ProtoBuf.DiscriminatedUnionObject */,
	{ NULL, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_back, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke, ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke_back, ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_marshal_pinvoke_cleanup, NULL, NULL, &ETAsyncTaskMethodBuilder_tFC2F55F328E847ABB765AE06AEA87D67286DBD4F_0_0_0 } /* ET.ETAsyncTaskMethodBuilder */,
	{ DelegatePInvokeWrapper_EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9, NULL, NULL, NULL, NULL, NULL, &EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9_0_0_0 } /* DG.Tweening.EaseFunction */,
	{ NULL, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_back, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t23B90B40F60E677A8025267341651C94AE079CDA_0_0_0 } /* System.Enum */,
	{ NULL, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_back, Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t76EEAA1BDD5BE64FEAF9E3CD185451837EAA6208_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_back, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_cleanup, NULL, NULL, &Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_0_0_0 } /* UnityEngine.Event */,
	{ NULL, EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke, EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke_back, EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_marshal_pinvoke_cleanup, NULL, NULL, &EventHook_t6CD707F85ACE5D3B6DBC8B507D48FBCD32B46110_0_0_0 } /* Bolt.EventHook */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_back, ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t5ECB535787E9B1D0DF95061E051CAEDDBB363104_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_back, ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ NULL, ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke, ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke_back, ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_marshal_pinvoke_cleanup, NULL, NULL, &ExportSym_t9FDA35DE7F8CE620DE3D2AE0AF9D30F29A25F2A2_0_0_0 } /* Microsoft.Cci.Pdb.ExportSym */,
	{ NULL, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_back, FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_back, FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tDD47793ADC980A7A6E4369C9E9381609453869B4_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_back, FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_marshal_pinvoke_cleanup, NULL, NULL, &FastMemoryDesc_t47D4C8DCEFDAAEB36BB617D2BB01D1F1C0CC7DE3_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc */,
	{ NULL, FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke, FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke_back, FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshal_pinvoke_cleanup, NULL, NULL, &FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_0_0_0 } /* DG.Tweening.Plugins.Options.FloatOptions */,
	{ NULL, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_back, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_back, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_back, FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_0_0_0 } /* TMPro.FontAssetCreationSettings */,
	{ NULL, FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke, FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke_back, FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_marshal_pinvoke_cleanup, NULL, NULL, &FrameRelSym_tAF809C27A168FC50097D2704A9D12FB7786EB0A3_0_0_0 } /* Microsoft.Cci.Pdb.FrameRelSym */,
	{ NULL, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_0_0_0 } /* UnityEngine.GUIContent */,
	{ NULL, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_back, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_back, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_back, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_back, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_back, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_back, GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_marshal_pinvoke_cleanup, NULL, NULL, &GlobalDynamicResolutionSettings_t976031A3758F93D44DCA1DD18C89D92181EE7AA8_0_0_0 } /* UnityEngine.Rendering.GlobalDynamicResolutionSettings */,
	{ NULL, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_back, Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_back, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke, HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke_back, HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_marshal_pinvoke_cleanup, NULL, NULL, &HashAlgorithmName_t3B41A74A85211E37D3583A3611042BBE76745A90_0_0_0 } /* System.Security.Cryptography.HashAlgorithmName */,
	{ DelegatePInvokeWrapper_HeaderParser_tF8B96DD5415462AC2671AA8D318957235C82FABD, NULL, NULL, NULL, NULL, NULL, &HeaderParser_tF8B96DD5415462AC2671AA8D318957235C82FABD_0_0_0 } /* System.Net.HeaderParser */,
	{ NULL, HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke, HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke_back, HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_tD03E1F7AEDDB87537B5002F0B7A5455D31B297C3_0_0_0 } /* System.Net.HeaderVariantInfo */,
	{ NULL, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, NULL, NULL, NULL, NULL, &IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22::IID, &IAdviseSink_t8323058F38F7485180EE7D3C012EB9FEB49F7C22_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IAdviseSink */,
	{ NULL, NULL, NULL, NULL, NULL, &IDataObject_tAAA25E607E3761A56ECCFE79C496A30A562626CE::IID, &IDataObject_tAAA25E607E3761A56ECCFE79C496A30A562626CE_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IDataObject */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF::IID, &IEnumFORMATETC_tE15AE425E8E0D4E4C0CC38CCE3B51190DC078AFF_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumFORMATETC */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A::IID, &IEnumSTATDATA_t8648DCECD16DD2D936A6A056FD7D3C6493A1C61A_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumSTATDATA */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81::IID, &IMetaDataEmit_tBC3A20171CE781FF1D9449EBC2250AAFB65C3C81_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7::IID, &IMetaDataImport_t13408107DE601C48192B2DA2B3BD4234193CD1B7_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataImport */,
	{ NULL, NULL, NULL, NULL, NULL, &IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE::IID, &IMoniker_t7465880D88561F58C480F3D7BF903B20CDC65EAE_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IMoniker */,
	{ NULL, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_back, IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t099E328DEE4054063493B8A96C1FE9AFB0EDAAF9_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_back, IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t684DF541EAF1AB720C017E9DE172EA8168FDBDA9_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke, IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke_back, IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_marshal_pinvoke_cleanup, NULL, NULL, &IPPacketInformation_tDF19A8837B4EB2584DABEEBC21175A6A29ADEB48_0_0_0 } /* System.Net.Sockets.IPPacketInformation */,
	{ NULL, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_back, IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_tB4B75557A1014D1E6E250A35E5F94411EF2979BA_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, NULL, NULL, NULL, NULL, &IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2::IID, &IStream_t46D5493497ADBF024490BB2360D33B0A3CC177A2_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IStream */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2::IID, &ISymUnmanagedDocumentWriter_t789905BF2BD65713B5A326AFB873BBD29D993CB2_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedWriter2_tDAEB0C0924D7048CE68641F7F7D368310D2CF9B3::IID, &ISymUnmanagedWriter2_tDAEB0C0924D7048CE68641F7F7D368310D2CF9B3_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2 */,
	{ NULL, ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke, ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke_back, ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_marshal_pinvoke_cleanup, NULL, NULL, &ImportGenericContext_tD5D8C55DCCD02620E0A2293F3C5C85073EA0CCFF_0_0_0 } /* ILRuntime.Mono.Cecil.ImportGenericContext */,
	{ NULL, InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke, InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke_back, InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_marshal_pinvoke_cleanup, NULL, NULL, &InlineMethodInfo_t5F39F7CC3564F051C951B1F954DAE0DC66A2E9F8_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.InlineMethodInfo */,
	{ NULL, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_back, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_cleanup, NULL, NULL, &InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_0_0_0 } /* UnityEngine.XR.InputDevice */,
	{ NULL, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_back, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_cleanup, NULL, NULL, &InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_0_0_0 } /* UnityEngine.XR.InputDevices */,
	{ NULL, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_back, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_cleanup, NULL, NULL, &InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_0_0_0 } /* UnityEngine.XR.InputFeatureUsage */,
	{ NULL, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_back, InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_t041607D11686DA35B10AE9E9F71E2448ACDCB1A8_0_0_0 } /* System.InputRecord */,
	{ NULL, InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke, InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke_back, InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_marshal_pinvoke_cleanup, NULL, NULL, &InstructionArray_t391D4173C82EA3AD85EE9881AE4DFD5BEBCF77E1_0_0_0 } /* System.Linq.Expressions.Interpreter.InstructionArray */,
	{ NULL, InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke, InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke_back, InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffset_t62BCE1370EEDC1C8375AC029987437EDE3756A1F_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionOffset */,
	{ NULL, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_back, IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_0_0_0 } /* UnityEngine.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_back, IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_0_0_0 } /* UnityEngine.IntegratedSubsystemDescriptor */,
	{ NULL, InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke, InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke_back, InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_t2F01407FF2B931BABE408D37E04BB9637579A9D6_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_back, InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t885932F372A8EEC39396B0D57CC93AC72E2A3DA7_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_back, InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t2854F84125B1F420ABB3AA251C75E288EC87568C_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke, InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke_back, InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshal_pinvoke_cleanup, NULL, NULL, &InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_0_0_0 } /* System.Linq.Expressions.Interpreter.InterpretedFrameInfo */,
	{ NULL, InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke, InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke_back, InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_marshal_pinvoke_cleanup, NULL, NULL, &InvocationContext_tE31BBD7B271EAA9B131F19C62D9BFFF0C451A588_0_0_0 } /* ILRuntime.Runtime.Enviorment.InvocationContext */,
	{ NULL, JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke, JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke_back, JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_marshal_pinvoke_cleanup, NULL, NULL, &JITCompiler_t75BEB50BC981DC2763D9AAED6340324431967847_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler */,
	{ DelegatePInvokeWrapper_KcpLog_t156C71B645462643A6A5BB47C5C9F7D0E9A6B6AF, NULL, NULL, NULL, NULL, NULL, &KcpLog_t156C71B645462643A6A5BB47C5C9F7D0E9A6B6AF_0_0_0 } /* ET.KcpLog */,
	{ DelegatePInvokeWrapper_KcpOutput_t5FFDC73C2C28E3EE4E16F27B06BCCFF5618A3F6D, NULL, NULL, NULL, NULL, NULL, &KcpOutput_t5FFDC73C2C28E3EE4E16F27B06BCCFF5618A3F6D_0_0_0 } /* ET.KcpOutput */,
	{ NULL, KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke, KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke_back, KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_marshal_pinvoke_cleanup, NULL, NULL, &KcpWaitPacket_t0E140A0857BFC63E532238AACCBC7912AB4AC968_0_0_0 } /* ET.KcpWaitPacket */,
	{ NULL, LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke, LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke_back, LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_marshal_pinvoke_cleanup, NULL, NULL, &LabelSym32_t07C86E87DD4A0105D19EEE4CD24A8532235826AE_0_0_0 } /* Microsoft.Cci.Pdb.LabelSym32 */,
	{ NULL, LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke, LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke_back, LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_marshal_pinvoke_cleanup, NULL, NULL, &LeafAlias_tE3A692DFC65D101D8D3EACA736B588E1B4EACC5D_0_0_0 } /* Microsoft.Cci.Pdb.LeafAlias */,
	{ NULL, LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke, LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke_back, LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_marshal_pinvoke_cleanup, NULL, NULL, &LeafArgList_t297938454BA89DFA169A3AFB3E25DB4996D46B07_0_0_0 } /* Microsoft.Cci.Pdb.LeafArgList */,
	{ NULL, LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke, LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke_back, LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_marshal_pinvoke_cleanup, NULL, NULL, &LeafArray_t2EB6FDB0C80C907D0BA454B6E6068BBEE6FA53D0_0_0_0 } /* Microsoft.Cci.Pdb.LeafArray */,
	{ NULL, LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke, LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke_back, LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_marshal_pinvoke_cleanup, NULL, NULL, &LeafBClass_t3DF36D4F4F4F62B8933D3D1FC6BB029968868B26_0_0_0 } /* Microsoft.Cci.Pdb.LeafBClass */,
	{ NULL, LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke, LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke_back, LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_marshal_pinvoke_cleanup, NULL, NULL, &LeafClass_t51C12030C28249C36CA0FDB3A2E72614090643A6_0_0_0 } /* Microsoft.Cci.Pdb.LeafClass */,
	{ NULL, LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke, LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke_back, LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol0_t668E7566D087B3E82FDAADECF414A05A7854EE39_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol0 */,
	{ NULL, LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke, LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke_back, LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol1_t558751D863FFC7BA64CFF508B43FCD96907EBEB6_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol1 */,
	{ NULL, LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke, LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke_back, LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_marshal_pinvoke_cleanup, NULL, NULL, &LeafDefArg_t576D913FF5A6C2140F3812B49AE010D4CDE07582_0_0_0 } /* Microsoft.Cci.Pdb.LeafDefArg */,
	{ NULL, LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke, LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke_back, LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_marshal_pinvoke_cleanup, NULL, NULL, &LeafDerived_t6A492BD459B5592F686E26E258543A248CE73A03_0_0_0 } /* Microsoft.Cci.Pdb.LeafDerived */,
	{ NULL, LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke, LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke_back, LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimArray_tF96C633BD1EC41460208B601B608F549F1B93D8E_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimArray */,
	{ NULL, LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke, LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke_back, LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimCon_tBB85F717168169D64FD3B925D8F3ED3FA354B765_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimCon */,
	{ NULL, LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke, LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke_back, LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimVar_t85035AC394C0F7B303DA258C1C5BBC90EC4D42CB_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimVar */,
	{ NULL, LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke, LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke_back, LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnum_t962AF8D0ADC22B8C76AACE2226A2EDB45E7CAE0E_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnum */,
	{ NULL, LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke, LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke_back, LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnumerate_tEC243C7D9389AB06B911152336EA4D52382413EA_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnumerate */,
	{ NULL, LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke, LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke_back, LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_marshal_pinvoke_cleanup, NULL, NULL, &LeafFieldList_tD01932743970C147393620372D4B576D4EB14092_0_0_0 } /* Microsoft.Cci.Pdb.LeafFieldList */,
	{ NULL, LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke, LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke_back, LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_marshal_pinvoke_cleanup, NULL, NULL, &LeafFriendFcn_tBC767E9BFCF5C355AF5FD7C4972F5424AFF49A61_0_0_0 } /* Microsoft.Cci.Pdb.LeafFriendFcn */,
	{ NULL, LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke, LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke_back, LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_marshal_pinvoke_cleanup, NULL, NULL, &LeafList_t1FA1CC3648CCDCD7B85AB01A360768CD62D6C032_0_0_0 } /* Microsoft.Cci.Pdb.LeafList */,
	{ NULL, LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke, LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke_back, LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_marshal_pinvoke_cleanup, NULL, NULL, &LeafManaged_tF0416F80516B50900A7A0F2F4D5DF040F9F3B730_0_0_0 } /* Microsoft.Cci.Pdb.LeafManaged */,
	{ NULL, LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke, LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke_back, LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_marshal_pinvoke_cleanup, NULL, NULL, &LeafMember_t87F625534A455F817022B69B665EFA2C2F01F73F_0_0_0 } /* Microsoft.Cci.Pdb.LeafMember */,
	{ NULL, LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke, LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke_back, LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_marshal_pinvoke_cleanup, NULL, NULL, &LeafMemberModify_tB3ED9BB7DC706A437828B9BD47267CAA51E74DA9_0_0_0 } /* Microsoft.Cci.Pdb.LeafMemberModify */,
	{ NULL, LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke, LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke_back, LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethod_t05D4973436DC0391EE73E295F380DBCFB984F7A0_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethod */,
	{ NULL, LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke, LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke_back, LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethodList_t2D811D7503256366E1405AEABAC6D93210DA7778_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethodList */,
	{ NULL, LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke, LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke_back, LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestType_tA3D154418924D2F014C5DF7D7B4F7E6855AE943E_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestType */,
	{ NULL, LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke, LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke_back, LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestTypeEx_tDA5D06AAD1CC1F4644124A09110272C150F9A899_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestTypeEx */,
	{ NULL, LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke, LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke_back, LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM_tF5415681965A6B9967085026C81298475FF6E958_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM */,
	{ NULL, LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke, LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke_back, LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM2_tE26C2912BC1E024811DA1FDD6023A57AB772A638_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM2 */,
	{ NULL, LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke, LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke_back, LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_marshal_pinvoke_cleanup, NULL, NULL, &LeafOneMethod_tBF52AF7B4143FFAA644BDD34FCFB08366A0AFC0D_0_0_0 } /* Microsoft.Cci.Pdb.LeafOneMethod */,
	{ NULL, LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke, LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke_back, LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_marshal_pinvoke_cleanup, NULL, NULL, &LeafPreComp_t32BC4B8ED04486BAD623463FB5C0EBD93FAEAA9C_0_0_0 } /* Microsoft.Cci.Pdb.LeafPreComp */,
	{ NULL, LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke, LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke_back, LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_marshal_pinvoke_cleanup, NULL, NULL, &LeafRefSym_t35BCE26914C2D83A83A6E190D7BEA65E073A067D_0_0_0 } /* Microsoft.Cci.Pdb.LeafRefSym */,
	{ NULL, LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke, LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke_back, LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_marshal_pinvoke_cleanup, NULL, NULL, &LeafSTMember_t8A435DD13BF959A6AE2FC70AF2F661BBDDA5D139_0_0_0 } /* Microsoft.Cci.Pdb.LeafSTMember */,
	{ NULL, LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke, LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke_back, LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_marshal_pinvoke_cleanup, NULL, NULL, &LeafSkip_t7D7CA253EAE3E1C09FEDBA846A6105956257D5AB_0_0_0 } /* Microsoft.Cci.Pdb.LeafSkip */,
	{ NULL, LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke, LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke_back, LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer_tABA4E3C05A7AB1E8142CCA4061F8E3099F9AB2FB_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer */,
	{ NULL, LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke, LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke_back, LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer2_t99C831E8992DF578CA5CC4EB49CC31C05A7D3C4A_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer2 */,
	{ NULL, LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke, LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke_back, LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_marshal_pinvoke_cleanup, NULL, NULL, &LeafUnion_tA8982201D95D8BE268BE1796E1092AE9A6B7A1F3_0_0_0 } /* Microsoft.Cci.Pdb.LeafUnion */,
	{ NULL, LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke, LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke_back, LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_marshal_pinvoke_cleanup, NULL, NULL, &LeafVBClass_t36ACB570F3D7287DE125BF471BA18CA5316EC871_0_0_0 } /* Microsoft.Cci.Pdb.LeafVBClass */,
	{ NULL, LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke, LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke_back, LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_marshal_pinvoke_cleanup, NULL, NULL, &LeafVFTPath_t0818CD51899E22C1200FA4D3DA4CA7FBD8095A42_0_0_0 } /* Microsoft.Cci.Pdb.LeafVFTPath */,
	{ NULL, LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke, LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke_back, LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_marshal_pinvoke_cleanup, NULL, NULL, &LeafVTShape_t086D8A785775FB7D3375781D9F41DE3CCEA8B9BF_0_0_0 } /* Microsoft.Cci.Pdb.LeafVTShape */,
	{ NULL, LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke, LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke_back, LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_marshal_pinvoke_cleanup, NULL, NULL, &LeafVarString_t7061B73C97F83ECB9EE7E8344BEF4FC6844CA3B8_0_0_0 } /* Microsoft.Cci.Pdb.LeafVarString */,
	{ NULL, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_back, Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_marshal_pinvoke_cleanup, NULL, NULL, &Light2DBlendStyle_t06F4675186D47D53176BB550B7D6A09A48C4EBE6_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.Light2DBlendStyle */,
	{ NULL, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_back, LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t4F4130B900C21B6DADEF7D2AEAB2F120DCC84553_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_back, LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshal_pinvoke_cleanup, NULL, NULL, &LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_0_0_0 } /* UnityEngine.Rendering.Universal.LightData */,
	{ NULL, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_back, LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_t32F17E0994042933C3CECAAD32AC3A5D3BB50284_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_back, LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7D66C7BAA00271B00F8FDBE1F3D85A6223E99E16_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke, LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke_back, LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_marshal_pinvoke_cleanup, NULL, NULL, &LocalDefinition_t519C6D81C1FDC8B6E81932DD449C7A68EDBD3D03_0_0_0 } /* System.Linq.Expressions.Interpreter.LocalDefinition */,
	{ NULL, LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke, LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke_back, LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_marshal_pinvoke_cleanup, NULL, NULL, &LocalSym_t8D7EE79056D49245363C1547433F8980201C561D_0_0_0 } /* Microsoft.Cci.Pdb.LocalSym */,
	{ NULL, LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke, LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke_back, LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableEntry_t5D28319FEAF0AC9EB8FB0D3DDC67CF736B8F9417_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.LocalVariableEntry */,
	{ NULL, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_back, LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t886B53D36BA0B4BA37FEEB6DB4834A6933FDAF61_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke, LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke_back, LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_marshal_pinvoke_cleanup, NULL, NULL, &LooseAssemblyName_tB0A6EB5A059F728D4CBA5FF1B3F43F3F2E5E3233_0_0_0 } /* Ludiq.LooseAssemblyName */,
	{ NULL, ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke, ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke_back, ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSym_t0B5100F560840789790D55738184A4CABF19107D_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSym */,
	{ NULL, ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke, ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke_back, ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSymMips_tB35E8933F2FF1D98CF3834BFA074F0C268FBAA3A_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSymMips */,
	{ NULL, ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke, ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke_back, ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym_t0A7986977E982505203A980A89FD16F00BB5A65D_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym */,
	{ NULL, ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke, ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke_back, ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym2_t3A0E3A92A977410DC61A4C5BDFF8B27AAD2F1740_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym2 */,
	{ NULL, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_back, MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_back, MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke, MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke_back, MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_marshal_pinvoke_cleanup, NULL, NULL, &MemberRelationship_tEDBCAFC9E0CAE7B8B8DAB0FF742667A237FCF792_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationship */,
	{ NULL, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_back, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_0_0_0 } /* UnityEngine.XR.MeshGenerationResult */,
	{ NULL, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_back, MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t994D7AC5F4F2C64BBDFA87CF62D9520EDBC44975_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_back, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshal_pinvoke_cleanup, NULL, NULL, &Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_ModuleMetadata_tD636CEE709A579BDA3FA23820A65C781DFE201B4, NULL, &ModuleMetadata_tD636CEE709A579BDA3FA23820A65C781DFE201B4_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ModuleMetadata */,
	{ NULL, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_back, MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4BAF695CDD88BF675F1E67C0CF12E3115D3F158E_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_back, MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t0748824AF7D8732CE1A1D0F67436972A448CB59F_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_back, MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_tE93FDE712D5034241FFC36C41D315D9EDD2C2D38_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_back, MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0B5F9B92AC439517E0DD283EFEBAFBDBE8B12FAC_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_back, MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_back, MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_back, MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke, NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke_back, NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceEntry_t217CA7157E881C5F0F99B10E16BF3B0999D3D18C_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.NamespaceEntry */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_back, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke, OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke_back, OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_marshal_pinvoke_cleanup, NULL, NULL, &OSPlatform_t631B93B04419F67309D89F8FFEC590AA260E21FC_0_0_0 } /* System.Runtime.InteropServices.OSPlatform */,
	{ NULL, ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke, ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke_back, ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_marshal_pinvoke_cleanup, NULL, NULL, &ObjNameSym_t5A46EABA72790A33FC3578B4B026A1FB3F713E6E_0_0_0 } /* Microsoft.Cci.Pdb.ObjNameSym */,
	{ NULL, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup, NULL, NULL, &Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0 } /* UnityEngine.Object */,
	{ NULL, ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke, ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke_back, ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_t0F6A65C7AC8F36AA52E29DFDCA98B529F383BDBD_0_0_0 } /* LitJson.ObjectMetadata */,
	{ NULL, OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke, OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke_back, OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_marshal_pinvoke_cleanup, NULL, NULL, &OemSymbol_t4D7B89F342221F642619B332290DFB371109117E_0_0_0 } /* Microsoft.Cci.Pdb.OemSymbol */,
	{ NULL, Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke, Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke_back, Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_marshal_pinvoke_cleanup, NULL, NULL, &Packet_t2914EFAC4570679C57541819BF05C0B39BA15E3F_0_0_0 } /* ET.Packet */,
	{ NULL, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_back, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_back, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_back, ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t23479E79CB44DA9007429A97C23DAB83F26857CB_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke, ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke_back, ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t361818FEDEF2985ADB188B800920AA75576E8252_0_0_0 } /* System.ParsingInfo */,
	{ NULL, PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke, PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke_back, PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshal_pinvoke_cleanup, NULL, NULL, &PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_0_0_0 } /* DG.Tweening.Plugins.Options.PathOptions */,
	{ DelegatePInvokeWrapper_PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50, NULL, NULL, NULL, NULL, NULL, &PerformDynamicRes_t6C449304F04A23C715B0FA075CF80550EFBC8E50_0_0_0 } /* UnityEngine.Rendering.PerformDynamicRes */,
	{ NULL, NULL, NULL, NULL, NULL, &PerformanceCounterManager_t59F3DEA5C97600581F02EFF328C64447EE8731F6::CLSID, &PerformanceCounterManager_t59F3DEA5C97600581F02EFF328C64447EE8731F6_0_0_0 } /* System.Diagnostics.PerformanceCounterManager */,
	{ NULL, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_back, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_back, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ NULL, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_back, PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_back, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke, PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke_back, PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_marshal_pinvoke_cleanup, NULL, NULL, &PrewarmInfo_t376E8B4A89991F9678FB038B694A14D390222BD4_0_0_0 } /* ILRuntime.Runtime.Enviorment.PrewarmInfo */,
	{ NULL, ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke, ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke_back, ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_marshal_pinvoke_cleanup, NULL, NULL, &ProcSym32_tD41B5C8C946085A65ADC6374F828325005E66B01_0_0_0 } /* Microsoft.Cci.Pdb.ProcSym32 */,
	{ NULL, ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke, ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke_back, ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymIa64_t8FA87F054FE92BF9D5DF2841DC86487B9188F5AE_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymIa64 */,
	{ NULL, ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke, ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke_back, ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymMips_tC0C2707FCAB468A0325B446430D3C3EC506B64E5_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymMips */,
	{ NULL, ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke, ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke_back, ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshal_pinvoke_cleanup, NULL, NULL, &ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_0_0_0 } /* System.Diagnostics.ProcessStartInfo */,
	{ NULL, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_back, ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_marshal_pinvoke_cleanup, NULL, NULL, &ProfilingSample_t4A3AB7C63D4A9E822C08D39C7B1A1AA8F0FB04D6_0_0_0 } /* UnityEngine.Rendering.ProfilingSample */,
	{ NULL, PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke, PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke_back, PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_t91574D67D28260054B6AB5A1203395ECBBD1F1EA_0_0_0 } /* LitJson.PropertyMetadata */,
	{ NULL, PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke, PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke_back, PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_marshal_pinvoke_cleanup, NULL, NULL, &PubSym32_tC1E97FD604D2B890BA6DAE5E75ECF28D74C4DE05_0_0_0 } /* Microsoft.Cci.Pdb.PubSym32 */,
	{ NULL, QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke, QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke_back, QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshal_pinvoke_cleanup, NULL, NULL, &QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_0_0_0 } /* DG.Tweening.Plugins.Options.QuaternionOptions */,
	{ NULL, RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke, RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke_back, RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_back, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_back, RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t323149046389A393F3F96DBAD6066A96B21CB744_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_back, Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_marshal_pinvoke_cleanup, NULL, NULL, &Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7_0_0_0 } /* UnityEngine.Profiling.Recorder */,
	{ NULL, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_back, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke, RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke_back, RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshal_pinvoke_cleanup, NULL, NULL, &RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_0_0_0 } /* DG.Tweening.Plugins.Options.RectOptions */,
	{ NULL, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_back, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke, RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke_back, RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_marshal_pinvoke_cleanup, NULL, NULL, &RefSym2_tB823CDC09C2C482614E2886C30E1B834A8E0EB1D_0_0_0 } /* Microsoft.Cci.Pdb.RefSym2 */,
	{ NULL, RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke, RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke_back, RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_marshal_pinvoke_cleanup, NULL, NULL, &RegRel32_tA57B6C94823F7420EAC31788212AA78876E1C00A_0_0_0 } /* Microsoft.Cci.Pdb.RegRel32 */,
	{ NULL, RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke, RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke_back, RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_marshal_pinvoke_cleanup, NULL, NULL, &RegSym_tAFC7570BAF36604193789D65B132F9E7BEC4710E_0_0_0 } /* Microsoft.Cci.Pdb.RegSym */,
	{ NULL, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_back, RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_t3F61C7100AA2F796A6BC57D31F1EFA76F6DCE59A_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke, RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke_back, RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_marshal_pinvoke_cleanup, NULL, NULL, &RegisterFrameInfo_t9760837DD64A7FF5CA3D9D3F83497FB639FA6B7C_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterFrameInfo */,
	{ NULL, RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke, RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke_back, RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_marshal_pinvoke_cleanup, NULL, NULL, &RegisterVMSymbol_tB2170E9E42995F128E8E03E3C25C969F59FAC8BE_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol */,
	{ NULL, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_back, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ NULL, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_back, RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder */,
	{ NULL, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_back, RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent */,
	{ NULL, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_back, RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphParameters_t0365257B2CA7C4394A9A7F5E2BCD34A8F3C5AAD5_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters */,
	{ NULL, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_back, RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope */,
	{ NULL, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_back, RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_marshal_pinvoke_cleanup, NULL, NULL, &RendererList_t92D26C492525F3325518AD520E30D212BB8209DC_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererList */,
	{ NULL, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_back, RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_marshal_pinvoke_cleanup, NULL, NULL, &RendererListDesc_t7FF5C3CD439E8D9AF06D8E7E7E41D02D552CEEF8_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererListDesc */,
	{ NULL, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_back, RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshal_pinvoke_cleanup, NULL, NULL, &RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle */,
	{ NULL, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_back, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshal_pinvoke_cleanup, NULL, NULL, &RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_0_0_0 } /* UnityEngine.Rendering.Universal.RenderingData */,
	{ NULL, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_back, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_back, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke, STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke_back, STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_marshal_pinvoke_cleanup, NULL, NULL, &STATDATA_tC8FC2C5B736883851E622D10FCF7D3FE0AD7CF10_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STATDATA */,
	{ NULL, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke_back, STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_marshal_pinvoke_cleanup, NULL, NULL, &STGMEDIUM_tA2C7EC64080979074F70B78917C25EA8C286834A_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STGMEDIUM */,
	{ NULL, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_back, SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75, NULL, NULL, NULL, NULL, NULL, &ScaleFunc_t4F99CE4593CA139621E0607E5305265ED2B52A75_0_0_0 } /* UnityEngine.Rendering.ScaleFunc */,
	{ NULL, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_back, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke, SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke_back, SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_marshal_pinvoke_cleanup, NULL, NULL, &SecChannelBindings_tCCFC17D5CC9D727E61F6E569E0A1A8A5C058F1BD_0_0_0 } /* System.Net.SecChannelBindings */,
	{ NULL, SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke, SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke_back, SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_marshal_pinvoke_cleanup, NULL, NULL, &SectionSym_t2848DAB0126494F2395E63789C04E22FC237FC03_0_0_0 } /* Microsoft.Cci.Pdb.SectionSym */,
	{ NULL, SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke, SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke_back, SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_marshal_pinvoke_cleanup, NULL, NULL, &SecurityBufferDescriptor_tFEFE64A90107717F4D58188FF616351BE761E072_0_0_0 } /* System.Net.SecurityBufferDescriptor */,
	{ NULL, SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke, SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke_back, SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_marshal_pinvoke_cleanup, NULL, NULL, &SerializationData_t4696CF0D36F93A065D081E64F4828DA9B5670350_0_0_0 } /* Ludiq.SerializationData */,
	{ NULL, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_back, SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t33A292618975AD7AC936CB98B2F28256817A467E_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t3033BE1E86AE40A7533AD615FF9122FC8ED0B7C1_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_back, ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshal_pinvoke_cleanup, NULL, NULL, &ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_0_0_0 } /* UnityEngine.Rendering.Universal.ShadowData */,
	{ NULL, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_back, Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_marshal_pinvoke_cleanup, NULL, NULL, &Sky_t60D9BDD6C7FF989F39EEE27B5D5E0DBAA760177F_0_0_0 } /* UnityEngine.Rendering.LookDev.Sky */,
	{ NULL, SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke, SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke_back, SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_marshal_pinvoke_cleanup, NULL, NULL, &SlotSym32_t1CA17EA0CC10B783B44860D2F35AD6DDD4540A51_0_0_0 } /* Microsoft.Cci.Pdb.SlotSym32 */,
	{ NULL, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke_back, SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke, SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke_back, SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_marshal_pinvoke_cleanup, NULL, NULL, &SocketInformation_t3CDB49DC2C20F34382E5AC70247C7396959D8223_0_0_0 } /* System.Net.Sockets.SocketInformation */,
	{ NULL, SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke, SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke_back, SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveFromResult_t732C192B5226B23590077F4E86E9C7D3604E51D4_0_0_0 } /* System.Net.Sockets.SocketReceiveFromResult */,
	{ NULL, SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke, SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke_back, SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveMessageFromResult_t2B834DF4B2BCEE53F3E505D97F08C75FF75B4474_0_0_0 } /* System.Net.Sockets.SocketReceiveMessageFromResult */,
	{ NULL, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_back, SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tBBD5A739AC7187C1514CBA47698C1D5E36877F52_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_back, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_back, SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t7BF68B13FD8E65DC10C7C48D4B6C1D14030AFF2D_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_back, SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_tC158DDBE7C79A8EE915F52F3D3D0412B05F8522E_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_back, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke, StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke_back, StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_t6998F1D4B65B3B1E85D897BB7D51FF426B936292_0_0_0 } /* ILRuntime.Runtime.Stack.StackFrame */,
	{ NULL, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_back, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ DelegatePInvokeWrapper_StackObjectAllocateCallback_t0BDF1FA5230D41C8C68BFF1493C2E003117B4382, NULL, NULL, NULL, NULL, NULL, &StackObjectAllocateCallback_t0BDF1FA5230D41C8C68BFF1493C2E003117B4382_0_0_0 } /* ILRuntime.Runtime.Stack.StackObjectAllocateCallback */,
	{ NULL, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_back, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke, StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke_back, StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshal_pinvoke_cleanup, NULL, NULL, &StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_0_0_0 } /* DG.Tweening.Plugins.Options.StringOptions */,
	{ NULL, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_back, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_back, TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeightPair_t247CB1B93D28CF85E17B8AD781485888D78BBD2A_0_0_0 } /* TMPro.TMP_FontWeightPair */,
	{ NULL, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_back, TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t1BFC3C15E256E033F84E8C3A48E0AC5F64D206A6_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_back, TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MaterialReference_t543088676AB27EF87E4F35B7346287F1858526BB_0_0_0 } /* TMPro.TMP_MaterialReference */,
	{ NULL, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_back, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_back, TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t168F70FD30F4875E4C84D40F9F30FCB5D2EB895C_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_back, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_back, TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_back, TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_back, TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_marshal_pinvoke_cleanup, NULL, NULL, &TextureDesc_tDF5D934ACD512DDB6BEBDCE08BBC3FDBFC200F9D_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc */,
	{ DelegatePInvokeWrapper_ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687, NULL, NULL, NULL, NULL, NULL, &ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke, ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke_back, ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_marshal_pinvoke_cleanup, NULL, NULL, &ThreadSym32_t1378513FFE8771A8883F2241CCAD567982AABE12_0_0_0 } /* Microsoft.Cci.Pdb.ThreadSym32 */,
	{ NULL, ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke, ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke_back, ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_marshal_pinvoke_cleanup, NULL, NULL, &ThunkSym32_t5CFBE390A9C1936E3994B172A8EEB736A7B652E3_0_0_0 } /* Microsoft.Cci.Pdb.ThunkSym32 */,
	{ NULL, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_back, TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t149DEA00C16D767DB34BA1004B18C610D67F9D26_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_back, TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_marshal_pinvoke_cleanup, NULL, NULL, &TileData_tC1E1EE7E156EBC2D759086B44BC45C056BFEEAF6_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ NULL, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_back, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_back, TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t0A3E7468290B2C8EEEC64C242D586F3EE7B3F968_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ DelegatePInvokeWrapper_TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB, NULL, NULL, NULL, NULL, NULL, &TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_0_0_0 } /* DG.Tweening.TweenCallback */,
	{ NULL, TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke, TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke_back, TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_marshal_pinvoke_cleanup, NULL, NULL, &TypeSizeInfo_t3F77D702D2612925F349E7D326CCD8BA940FA0DC_0_0_0 } /* ILRuntime.Runtime.Enviorment.TypeSizeInfo */,
	{ NULL, UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke, UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke_back, UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_marshal_pinvoke_cleanup, NULL, NULL, &UdpReceiveResult_tA557B9BC44BB1F51402111C0FB40D0169D504C6E_0_0_0 } /* System.Net.Sockets.UdpReceiveResult */,
	{ NULL, UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke, UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke_back, UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_marshal_pinvoke_cleanup, NULL, NULL, &UdtSym_t760386AD4F8B024719801818CE3FC4448B166177_0_0_0 } /* Microsoft.Cci.Pdb.UdtSym */,
	{ NULL, UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke, UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke_back, UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshal_pinvoke_cleanup, NULL, NULL, &UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_0_0_0 } /* DG.Tweening.Plugins.Options.UintOptions */,
	{ NULL, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_back, UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_tC2F1C142D69686631C1660F318C983106FF36F23_0_0_0 } /* System.UnSafeCharBuffer */,
	{ NULL, UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke, UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke_back, UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_marshal_pinvoke_cleanup, NULL, NULL, &UnamespaceSym_tA3F77664BBEC2906EC7ABAA7CB380B9B5BD167F5_0_0_0 } /* Microsoft.Cci.Pdb.UnamespaceSym */,
	{ DelegatePInvokeWrapper_UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099, NULL, NULL, NULL, NULL, NULL, &UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_back, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ DelegatePInvokeWrapper_UnlockConnectionDelegate_tE21C0577890C0E2F84208C89DCD9D01A7C156DAC, NULL, NULL, NULL, NULL, NULL, &UnlockConnectionDelegate_tE21C0577890C0E2F84208C89DCD9D01A7C156DAC_0_0_0 } /* System.Net.UnlockConnectionDelegate */,
	{ NULL, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ DelegatePInvokeWrapper_UserCallBack_tCF74151133B78BA8A7C2AE844816A44AB66B4C46, NULL, NULL, NULL, NULL, NULL, &UserCallBack_tCF74151133B78BA8A7C2AE844816A44AB66B4C46_0_0_0 } /* System.Diagnostics.UserCallBack */,
	{ NULL, VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke, VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke_back, VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshal_pinvoke_cleanup, NULL, NULL, &VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_0_0_0 } /* UnityEngine.VFX.VFXEventAttribute */,
	{ NULL, VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke, VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke_back, VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_marshal_pinvoke_cleanup, NULL, NULL, &VFXExpressionValues_tFB46D1CD053E9CD5BD04CBE4DB1B0ED24C9C0883_0_0_0 } /* UnityEngine.VFX.VFXExpressionValues */,
	{ NULL, VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke, VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke_back, VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_marshal_pinvoke_cleanup, NULL, NULL, &VFXOutputEventArgs_tE7E97EDFD67E4561E4412D2E4B1C999F95850BF5_0_0_0 } /* UnityEngine.VFX.VFXOutputEventArgs */,
	{ NULL, VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke, VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke_back, VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshal_pinvoke_cleanup, NULL, NULL, &VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_0_0_0 } /* UnityEngine.VFX.VFXSpawnerState */,
	{ NULL, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_back, ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_0_0_0 } /* System.ValueType */,
	{ NULL, VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke, VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke_back, VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_marshal_pinvoke_cleanup, NULL, NULL, &VariableIndex_t31195470743348DC76798696E8D6A3587AFE1796_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.VariableIndex */,
	{ NULL, Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke, Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke_back, Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshal_pinvoke_cleanup, NULL, NULL, &Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_0_0_0 } /* DG.Tweening.Plugins.Options.Vector3ArrayOptions */,
	{ NULL, VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke, VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke_back, VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshal_pinvoke_cleanup, NULL, NULL, &VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_0_0_0 } /* DG.Tweening.Plugins.Options.VectorOptions */,
	{ NULL, WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke, WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke_back, WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_marshal_pinvoke_cleanup, NULL, NULL, &WaitForChangedResult_t7A76081789C6E09BB1ED6A85D87568338DEAA496_0_0_0 } /* System.IO.WaitForChangedResult */,
	{ NULL, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_back, WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke, Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke_back, Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_marshal_pinvoke_cleanup, NULL, NULL, &Win32_FIXED_INFO_t1C698F6191AEE410646455CA333FFADE53C89847_0_0_0 } /* System.Net.NetworkInformation.Win32_FIXED_INFO */,
	{ NULL, Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke, Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke_back, Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_ADDRESSES_tE85FC845B0082039C7E69659E8793F2C9C19A465_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES */,
	{ NULL, Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke, Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke_back, Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_INFO_tD5D4D3AD75F3AD471A7C7E957DF45EF52AEF3D1F_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO */,
	{ NULL, Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke, Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke_back, Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADDR_STRING_t167613F2B5ACBE50F3823035ED4DB87312128903_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADDR_STRING */,
	{ NULL, Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke, Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke_back, Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_PER_ADAPTER_INFO_t04D59876CD6132A260BD81F9F6B15A69C424700D_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO */,
	{ NULL, Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke, Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke_back, Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIBICMPSTATS_EX_t435BDEA41C0C3F1BDE5BAC182F14A4C20E4DA94D_0_0_0 } /* System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX */,
	{ NULL, Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke, Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke_back, Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_ICMP_EX_t47F5734DAC4063691784D4EEBCBAC3B9D9903B43_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_ICMP_EX */,
	{ NULL, Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke, Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke_back, Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_IFROW_t09B10C1D53815E1747C79DB07957B9A22DF426C9_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_IFROW */,
	{ NULL, Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke, Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke_back, Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_marshal_pinvoke_cleanup, NULL, NULL, &Win32_SOCKADDR_t9DA327870C195875D16BAC9B7A5C75873F91C4E9_0_0_0 } /* System.Net.NetworkInformation.Win32_SOCKADDR */,
	{ NULL, WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke, WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke_back, WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_marshal_pinvoke_cleanup, NULL, NULL, &WithSym32_t923418081CD8B6C274B624D6CAB80DFB5127F27D_0_0_0 } /* Microsoft.Cci.Pdb.WithSym32 */,
	{ NULL, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_back, WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_0_0_0 } /* TMPro.WordWrapState */,
	{ NULL, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke_back, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_back, __DTString_t594255B76730E715A2A5655F8238B0029484B27A_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t594255B76730E715A2A5655F8238B0029484B27A_0_0_0 } /* System.__DTString */,
	{ NULL, fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke, fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke_back, fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshal_pinvoke_cleanup, NULL, NULL, &fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_0_0_0 } /* Ludiq.FullSerializer.fsResult */,
	{ NULL, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke_back, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshal_pinvoke_cleanup, NULL, NULL, &fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_0_0_0 } /* Ludiq.FullSerializer.Internal.fsVersionedType */,
	{ NULL, ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke, ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke_back, ifaddrs_t73A29788565763A776BA6327090408AE84197566_marshal_pinvoke_cleanup, NULL, NULL, &ifaddrs_t73A29788565763A776BA6327090408AE84197566_0_0_0 } /* System.Net.NetworkInformation.ifaddrs */,
	{ NULL, ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke, ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke_back, ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_marshal_pinvoke_cleanup, NULL, NULL, &ifaddrs_tDD6015082AE6AA1B2F24EE5AA73D728F0636CD51_0_0_0 } /* System.Net.NetworkInformation.MacOsStructs.ifaddrs */,
	{ NULL, in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke, in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke_back, in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_marshal_pinvoke_cleanup, NULL, NULL, &in6_addr_t6ED51E545BAD0902671FDC6CC90C09EC905DD250_0_0_0 } /* System.Net.NetworkInformation.in6_addr */,
	{ NULL, in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke, in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke_back, in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_marshal_pinvoke_cleanup, NULL, NULL, &in6_addr_t322C8040F8D565F48D4B1CC50C0B32FE7E9A8979_0_0_0 } /* System.Net.NetworkInformation.MacOsStructs.in6_addr */,
	{ NULL, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_back, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_0_0_0 } /* UnityEngine.jvalue */,
	{ NULL, mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke, mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke_back, mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_marshal_pinvoke_cleanup, NULL, NULL, &mlMethod_tE42460DCD9843478D59A4CDDFC5DC6A53A0ED73C_0_0_0 } /* Microsoft.Cci.Pdb.mlMethod */,
	{ NULL, sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke, sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke_back, sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_marshal_pinvoke_cleanup, NULL, NULL, &sockaddr_dl_t8FFC177999F8ED7A2A6277DB7902440783D13C5B_0_0_0 } /* System.Net.NetworkInformation.MacOsStructs.sockaddr_dl */,
	{ NULL, sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke, sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke_back, sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_marshal_pinvoke_cleanup, NULL, NULL, &sockaddr_in6_tAE396A928EE86E866B98DB040F221003F888C000_0_0_0 } /* System.Net.NetworkInformation.sockaddr_in6 */,
	{ NULL, sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke, sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke_back, sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_marshal_pinvoke_cleanup, NULL, NULL, &sockaddr_in6_tA57DCBB9AF6C93578688F11518285706FCE64E9E_0_0_0 } /* System.Net.NetworkInformation.MacOsStructs.sockaddr_in6 */,
	{ NULL, sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke, sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke_back, sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_marshal_pinvoke_cleanup, NULL, NULL, &sockaddr_ll_t385FE5996AB48C3D80D915242CDC0B67D4C3F0EE_0_0_0 } /* System.Net.NetworkInformation.sockaddr_ll */,
	{ DelegatePInvokeWrapper_IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1, NULL, NULL, NULL, NULL, NULL, &IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged */,
	{ DelegatePInvokeWrapper_SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD, NULL, NULL, NULL, NULL, NULL, &LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_back, SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t2369B44171030E280B31E4036E95D06C4810BBB9_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_back, SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t60785845A840F9562AA723FF11ECA3597C5A9FD1_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_back, AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_tF297C4D0035E9C113388D7B4128D1A2334E9ADBC_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke, NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke_back, NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_marshal_pinvoke_cleanup, NULL, NULL, &NodeEnumerator_tF4A0A7AB4C4EDE416C958BF0EC683BCE656A948B_0_0_0 } /* ProtoBuf.Meta.BasicList/NodeEnumerator */,
	{ NULL, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke, OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke_back, OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_marshal_pinvoke_cleanup, NULL, NULL, &OperatorQuery_t54F8506ACC262B063432391B4CCF0921487A6D30_0_0_0 } /* Ludiq.BinaryOperatorHandler/OperatorQuery */,
	{ DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t40C553E1C3912D66973408630C89C87EE7CB44F3, NULL, NULL, NULL, NULL, NULL, &CFProxyAutoConfigurationResultCallback_t40C553E1C3912D66973408630C89C87EE7CB44F3_0_0_0 } /* Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback */,
	{ NULL, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_back, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_cleanup, NULL, NULL, &RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_0_0_0 } /* UnityEngine.Camera/RenderRequest */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke_back, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ NULL, ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke, ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke_back, ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_marshal_pinvoke_cleanup, NULL, NULL, &ConversionQuery_tA5B51BD59A0A49AA469521FE1010CC255A4BC88E_0_0_0 } /* Ludiq.ConversionUtility/ConversionQuery */,
	{ NULL, RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke, RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke_back, RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t2EEDD81B78A9A885AF1B6136D15CA9EC47C23A8A_0_0_0 } /* System.Net.CookieTokenizer/RecognizedAttribute */,
	{ NULL, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_back, ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_tEB8A216399166053C37BA6F520ADEA92455104E9_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0, NULL, NULL, NULL, NULL, NULL, &StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ NULL, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_back, Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_marshal_pinvoke_cleanup, NULL, NULL, &Data_tD2910A75571233E80DF4714C1F6CBB1852B3BF68_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_back, Resources_tA64317917B3D01310E84588407113D059D802DEB_marshal_pinvoke_cleanup, NULL, NULL, &Resources_tA64317917B3D01310E84588407113D059D802DEB_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ NULL, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_back, CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshal_pinvoke_cleanup, NULL, NULL, &CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob */,
	{ NULL, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_back, DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_marshal_pinvoke_cleanup, NULL, NULL, &DrawCall_t8940B9392D2DD15D7DFDAF7EE92E098C1C6B1F69_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/DrawCall */,
	{ DelegatePInvokeWrapper_ReadMethod_t107B89040C112A3FE367CE946C2BB5C3CBF60AF8, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t107B89040C112A3FE367CE946C2BB5C3CBF60AF8_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_t7A38D0F18CA1C34B5D5793A125D483DA140A52F3, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t7A38D0F18CA1C34B5D5793A125D483DA140A52F3_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t821D78D15724E47635FEE40144582E9D0868BBDD, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t821D78D15724E47635FEE40144582E9D0868BBDD_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ NULL, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_back, EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_tF32101A07E46A15120BB6C094F7E2EF6464828EC_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke, EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke_back, EnumPair_t485236486A574718357CD1621A9864C5055D2247_marshal_pinvoke_cleanup, NULL, NULL, &EnumPair_t485236486A574718357CD1621A9864C5055D2247_0_0_0 } /* ProtoBuf.Serializers.EnumSerializer/EnumPair */,
	{ NULL, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_back, Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ DelegatePInvokeWrapper_ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tB245FDB608C11A53AC71F333C1A6BE3D7CDB21BB_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tF68E6D874C089E69933FA2B9A0C1C6639929C4F6_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_back, RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_marshal_pinvoke_cleanup, NULL, NULL, &RenderPassInputSummary_tA53DBACDD2D1524663936236A0E19EFDBE03A18A_0_0_0 } /* UnityEngine.Rendering.Universal.ForwardRenderer/RenderPassInputSummary */,
	{ DelegatePInvokeWrapper_ReadDelegate_t3D70C2E77AF55AADD887F423AA0CAE4FABCC92E6, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t3D70C2E77AF55AADD887F423AA0CAE4FABCC92E6_0_0_0 } /* System.Net.FtpDataStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t27DA3BBADBD9FFAC63A9B47C2D61F0219BFE9E0D, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t27DA3BBADBD9FFAC63A9B47C2D61F0219BFE9E0D_0_0_0 } /* System.Net.FtpDataStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D, NULL, NULL, NULL, NULL, NULL, &WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_back, GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t0DA162EF4F1F1C93059A6A44E1C5CCE6F2924A6E_0_0_0 } /* System.Guid/GuidResult */,
	{ NULL, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_back, bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t56D642DDC4ABBCED9DB7F620CC35AEEC0778869D_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ NULL, AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke, AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke_back, AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_0_0_0 } /* System.Net.HttpWebRequest/AuthorizationState */,
	{ DelegatePInvokeWrapper_OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke, InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke_back, InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffsetCache_t5FC55AF45FA5B27F13FD579BE411D9761D35FA4C_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionCollection/InstructionOffsetCache */,
	{ NULL, bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke, bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke_back, bucket_t6753A2E40789A34E3D8246A04C45732464423280_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t6753A2E40789A34E3D8246A04C45732464423280_0_0_0 } /* Microsoft.Cci.Pdb.IntHashTable/bucket */,
	{ DelegatePInvokeWrapper_PanicFunction__tFB4D850E5B848FFEF210623F5669284D723544EB, NULL, NULL, NULL, NULL, NULL, &PanicFunction__tFB4D850E5B848FFEF210623F5669284D723544EB_0_0_0 } /* Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_ */,
	{ NULL, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_back, Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tCFB139CA143817B24496D4F1B0DD8F51A256AB13_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tA70E96084BA012CBD3BD06EECF7153320A476FDC, NULL, NULL, NULL, NULL, NULL, &SCNetworkReachabilityCallback_tA70E96084BA012CBD3BD06EECF7153320A476FDC_0_0_0 } /* System.Net.NetworkInformation.MacNetworkChange/SCNetworkReachabilityCallback */,
	{ NULL, HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke, HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke_back, HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_marshal_pinvoke_cleanup, NULL, NULL, &HeaderInfo_t2CA000C7A2A26A432CC00C1C8D296EF454B9035F_0_0_0 } /* System.Net.Mail.MailHeaderInfo/HeaderInfo */,
	{ NULL, RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke, RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke_back, RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_marshal_pinvoke_cleanup, NULL, NULL, &RelationshipEntry_tD5B7BF4301819660FEFED499C6086DB53A7A5F4E_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationshipService/RelationshipEntry */,
	{ NULL, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_back, EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_marshal_pinvoke_cleanup, NULL, NULL, &EdgePair_tD81C87E83EB8ACE846391D2F3D5CEAE7D12BDB0B_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair */,
	{ DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDCFB23D41CD231EA8616DD8E79CC195290591E52, NULL, NULL, NULL, NULL, NULL, &GetSecurityInfoNativeCall_tDCFB23D41CD231EA8616DD8E79CC195290591E52_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/GetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_SetSecurityInfoNativeCall_tD08F7F663C4CBA84298B664E2903EBD7620EF05D, NULL, NULL, NULL, NULL, NULL, &SetSecurityInfoNativeCall_tD08F7F663C4CBA84298B664E2903EBD7620EF05D_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/SetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_OnNavMeshPreUpdate_t5E34F761F39A1F6B898F0E729B36C0782B92D572, NULL, NULL, NULL, NULL, NULL, &OnNavMeshPreUpdate_t5E34F761F39A1F6B898F0E729B36C0782B92D572_0_0_0 } /* UnityEngine.AI.NavMesh/OnNavMeshPreUpdate */,
	{ NULL, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_back, NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t5EC5B27BA4105EA147F2DE7CE7B96D7E9EAC9271_0_0_0 } /* System.Number/NumberBuffer */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t751DEAE9B64F61CCD4029B67E7916F00C823E61A_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ NULL, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_back, FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_tA765680E7894569CC4BDEB5DF722F646311E23EE_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_back, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke, ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke_back, ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_marshal_pinvoke_cleanup, NULL, NULL, &ProcInfo_tFF9F5C631B408355004B294AB3938A67825D28CC_0_0_0 } /* System.Diagnostics.Process/ProcInfo */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_back, CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_marshal_pinvoke_cleanup, NULL, NULL, &CompiledPassInfo_tA93C0BB1327B1CD51C466F322A768F9ABB9F7601_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo */,
	{ NULL, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_back, CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_marshal_pinvoke_cleanup, NULL, NULL, &CompiledResourceInfo_t0707D61FE612A92CBE023DB38ADE9A9E663A1483_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo */,
	{ NULL, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_back, PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshal_pinvoke_cleanup, NULL, NULL, &PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData */,
	{ NULL, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_back, ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshal_pinvoke_cleanup, NULL, NULL, &ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData */,
	{ NULL, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_back, RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_marshal_pinvoke_cleanup, NULL, NULL, &RendererListResource_tB83FADD77C73085F76C00D94911263A69556D250_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource */,
	{ NULL, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_back, HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t74B96DDC302EB605CCC557B737A5C88EB67B57D6_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_back, Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshal_pinvoke_cleanup, NULL, NULL, &Edge_tC11235216D5E71087549B2CB09A27043F02FB278_0_0_0 } /* UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge */,
	{ NULL, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_back, Escape_t0479DB63473055AD46754E698B2114579D5D944E_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t0479DB63473055AD46754E698B2114579D5D944E_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke, SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke_back, SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_marshal_pinvoke_cleanup, NULL, NULL, &SmtpResponse_tE35519507A18FCB77F860BA0E505BFFBB02F461C_0_0_0 } /* System.Net.Mail.SmtpClient/SmtpResponse */,
	{ DelegatePInvokeWrapper_SendFileHandler_t4C93259E1E5C92CB02C58182139A0FD319A46142, NULL, NULL, NULL, NULL, NULL, &SendFileHandler_t4C93259E1E5C92CB02C58182139A0FD319A46142_0_0_0 } /* System.Net.Sockets.Socket/SendFileHandler */,
	{ NULL, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke_back, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_0_0_0 } /* System.IO.Stream/ReadWriteParameters */,
	{ NULL, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_back, Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t3833BE8E7BA13C4C2E4ADFFB599717EEA8956756_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_back, SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_0_0_0 } /* TMPro.TMP_Text/SpecialCharacter */,
	{ NULL, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_back, TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshal_pinvoke_cleanup, NULL, NULL, &TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_0_0_0 } /* TMPro.TMP_Text/TextBackingContainer */,
	{ NULL, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_back, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_cleanup, NULL, NULL, &Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame */,
	{ NULL, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_back, Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_marshal_pinvoke_cleanup, NULL, NULL, &Meta_t309392A7421E6817684A82BC6F9D648BA1CAA306_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Meta */,
	{ NULL, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_back, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_back, TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tF8A05A33C893EA94368863F623B70EECE4818A98_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_back, TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tB673C7F5C2DD6D5B819F05B86BF6447D43E0093A_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_back, TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanToken_tBB2E9D0BD794CCB721E9A74784D5C1BDE33882C4_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanToken */,
	{ NULL, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_back, TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanTokenizer_t41283424FA6314E09128E30FF351FE1584728C69_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanTokenizer */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke, DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke_back, DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_tF281DC47BDB7C1EDCB7C15F22ABB05B892A2AB60_0_0_0 } /* System.Globalization.UmAlQuraCalendar/DateMapping */,
	{ NULL, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_back, unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_t9BF8E97D7CD1F4192F4AB101FABA97F129A07ABD_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ NULL, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ NULL, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_back, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ NULL, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_back, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke, Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke_back, Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IN6_ADDR_tD2268ED254920FAC50F61672A9528D900C184518_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR */,
	{ NULL, Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke, Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke_back, Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCP6ROW_t4AA1990A43C95A55CFDA14E00C2149F7A3D925D8_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW */,
	{ NULL, Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke, Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke_back, Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCPROW_t3EFED0A6DC7DDCC9BC05F2E96DE59F13FABAFA6B_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW */,
	{ NULL, Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke, Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke_back, Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDP6ROW_t4DD4B7F3C71166EDADCBAE5784DF1CBC18B5BA87_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW */,
	{ NULL, Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke, Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke_back, Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDPROW_t24020A967502A3B23E5447279AD63ECB6E52AC1C_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW */,
	{ NULL, ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke, ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke_back, ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_marshal_pinvoke_cleanup, NULL, NULL, &ProjectionInfo_tD148C31627969C7E3DB048728586F8E7B0F87D97_0_0_0 } /* ILRuntime.Mono.Cecil.WindowsRuntimeProjections/ProjectionInfo */,
	{ NULL, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_back, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_cleanup, NULL, NULL, &XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc */,
	{ NULL, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_back, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_cleanup, NULL, NULL, &XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRRenderPass */,
	{ NULL, AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke, AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke_back, AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_marshal_pinvoke_cleanup, NULL, NULL, &AotCompilation_t68212EDE54D5F9F7407FA84D5EA90CDAF588C3BA_0_0_0 } /* Ludiq.FullSerializer.fsAotCompilationManager/AotCompilation */,
	{ NULL, AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke, AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke_back, AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_marshal_pinvoke_cleanup, NULL, NULL, &AttributeQuery_t6BD6A5D1D27BEBD0CF51CEAA1FA5B6E14271BB72_0_0_0 } /* Ludiq.FullSerializer.Internal.fsPortableReflection/AttributeQuery */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_t79E2CFA384BEEDF59A9CAC28D6033B13C3EFCDC2_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_back, DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_t47EA0945F76AF92C061CE74FA62ADF06F9CB0C57_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t7348A2EA4521122D925E00FA87DAE050BD56A3EB, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_pem_t_t7348A2EA4521122D925E00FA87DAE050BD56A3EB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
	NULL,
};
