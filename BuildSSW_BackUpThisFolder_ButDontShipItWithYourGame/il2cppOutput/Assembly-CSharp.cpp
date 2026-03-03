#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
struct AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IPlanetEphemerisService_tBE8082A231527B804C437A797C7F14AFADE4F95F;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB;
struct PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0;
struct PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5;
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlanetEphemerisService_tBE8082A231527B804C437A797C7F14AFADE4F95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____9A15F1B2CE032A61F7D714C1CA8157E68D27F9F9CE275B08857081B4920FC30E_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AB9BA6631AA69D42F1FFF74D818D4D9F68C0C9655C29C15AC46A5158E8675367_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5841E3ABF1BBB05DBEC4EAE8DE114E6DFD1C4319;
IL2CPP_EXTERN_C String_t* _stringLiteralE96B455840440AE389B12174031208157211E1CB;
IL2CPP_EXTERN_C const RuntimeMethod* AppBootstrapper_Start_mD90B984181867A1C4CA907550F3D4EDA7A110C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppBootstrapper__ctor_m7AE3C523685AF7846DD54E4E168CFAAD294D08C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetEphemerisService_GetPlanetPosition_m7AD711235E486DADF478199B3A7BC8FF3F3A799E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanetView__ctor_m686C3996C2D1094BBC098D6D991F82A1D8A4EC04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SolarSystemConfig__ctor_m91D549590447C68D45DC592D0430F32465525D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_Pause_m2BA8ACE2D05537505D93EDD4C69DCCDD4A0BD0BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_Play_m497F34894FFFE58535A49BC431C3599248B694B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_SetScale_mC2ED8F2D4EBDCBA81701D5BBDF8B382F0DB62A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_get_IsPlaying_m9B481B130E5D51B56BEB2D1ED9A7F84399F09717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_get_TimeScale_m5E371E864917AA319FDE009D50EF0C1308BED272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_remove_OnTimeChanged_mA3459156D4281E6007CF57E01DBF91C0958BBA19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeplerParameter_tFB43CB652A950F275B0FB78CD61EC9AF9A7690A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Planet_t2E7D91CC5C418DA36A4A9D5904C017B41636E873_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct PlanetData_tCFA6863F7C62BE270355D6AA72435E07156880EC  : public RuntimeObject
{
};
struct PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB  : public RuntimeObject
{
	SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* ____config;
};
struct PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0  : public RuntimeObject
{
	TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* ___timeModel;
	RuntimeObject* ___ephemeris;
	PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* ___planets;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	String_t* ___heading;
	String_t* ___text;
	String_t* ___linkText;
	String_t* ___url;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D207_t7AA0BC8696F54E4F33567422143D6A9399ADCA63 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D207_t7AA0BC8696F54E4F33567422143D6A9399ADCA63__padding[207];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D455_tF84523DE9A21AB83E75A5C23282E18BB0DAF2991 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D455_tF84523DE9A21AB83E75A5C23282E18BB0DAF2991__padding[455];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC  : public RuntimeObject
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CCurrentTimeU3Ek__BackingField;
	float ___U3CTimeScaleU3Ek__BackingField;
	bool ___U3CIsPlayingU3Ek__BackingField;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* ___OnTimeChanged;
};
struct KeplerParameter_tFB43CB652A950F275B0FB78CD61EC9AF9A7690A4 
{
	int32_t ___value__;
};
struct Planet_t2E7D91CC5C418DA36A4A9D5904C017B41636E873 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon;
	String_t* ___title;
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections;
	bool ___loadedLayout;
};
struct SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	float ___distanceScale;
	float ___planetSizeScale;
	bool ___showOrbits;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* ___config;
	PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* ___planets;
	TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* ___timeModel;
	PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0* ___controller;
};
struct PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___planet;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D455_tF84523DE9A21AB83E75A5C23282E18BB0DAF2991 ___9A15F1B2CE032A61F7D714C1CA8157E68D27F9F9CE275B08857081B4920FC30E;
	__StaticArrayInitTypeSizeU3D207_t7AA0BC8696F54E4F33567422143D6A9399ADCA63 ___AB9BA6631AA69D42F1FFF74D818D4D9F68C0C9655C29C15AC46A5158E8675367;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5  : public RuntimeArray
{
	ALIGN_FIELD (8) PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* m_Items[1];

	inline PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD7756DCD2F07CD6207A72D5669CDBD9A967E1659_gshared (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8180866D0B72B5B8758B3138DE9404CB754B9779_gshared_inline (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084 (PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* __this, SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* ___0_config, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54 (PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0* __this, TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* ___0_timeModel, RuntimeObject* ___1_ephemeris, PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* ___2_planets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_mD7756DCD2F07CD6207A72D5669CDBD9A967E1659 (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mD7756DCD2F07CD6207A72D5669CDBD9A967E1659_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A (PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE (int32_t ___0_planet, int32_t ___1_param, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m8180866D0B72B5B8758B3138DE9404CB754B9779_inline (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Action_1_Invoke_m8180866D0B72B5B8758B3138DE9404CB754B9779_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08 (int32_t ___0_p, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBootstrapper_Start_mD90B984181867A1C4CA907550F3D4EDA7A110C0B (AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBootstrapper_Start_mD90B984181867A1C4CA907550F3D4EDA7A110C0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5841E3ABF1BBB05DBEC4EAE8DE114E6DFD1C4319);
		s_Il2CppMethodInitialized = true;
	}
	PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AppBootstrapper_Start_mD90B984181867A1C4CA907550F3D4EDA7A110C0B_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5841E3ABF1BBB05DBEC4EAE8DE114E6DFD1C4319, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6));
		TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* L_0 = (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC*)il2cpp_codegen_object_new(TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_il2cpp_TypeInfo_var);
		TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6));
		__this->___timeModel = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeModel), (void*)L_0);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 7));
		SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* L_1 = __this->___config;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 8));
		PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* L_2 = (PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB*)il2cpp_codegen_object_new(PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_il2cpp_TypeInfo_var);
		PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084(L_2, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 8));
		V_0 = L_2;
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 9));
		TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* L_3 = __this->___timeModel;
		PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* L_4 = V_0;
		PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* L_5 = __this->___planets;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 10));
		PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0* L_6 = (PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0*)il2cpp_codegen_object_new(PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_il2cpp_TypeInfo_var);
		PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54(L_6, L_3, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 10));
		__this->___controller = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller), (void*)L_6);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 11));
		TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* L_7 = __this->___timeModel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 12));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 12));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 13));
		NullCheck(L_7);
		TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 13));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Bootstrap/AppBootstrapper.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 14));
		return;
	}
}
// Method Definition Index: 98477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBootstrapper__ctor_m7AE3C523685AF7846DD54E4E168CFAAD294D08C6 (AppBootstrapper_tBA0BA4AFDB0CC47F21EE529084266ABEE976EA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBootstrapper__ctor_m7AE3C523685AF7846DD54E4E168CFAAD294D08C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AppBootstrapper__ctor_m7AE3C523685AF7846DD54E4E168CFAAD294D08C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98478
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolarSystemConfig__ctor_m91D549590447C68D45DC592D0430F32465525D43 (SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolarSystemConfig__ctor_m91D549590447C68D45DC592D0430F32465525D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SolarSystemConfig__ctor_m91D549590447C68D45DC592D0430F32465525D43_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 16));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Config/SolarSystemConfig.cs:6>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 17));
		__this->___distanceScale = (9.99999997E-07f);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Config/SolarSystemConfig.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 18));
		__this->___planetSizeScale = (0.00999999978f);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Config/SolarSystemConfig.cs:8>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 19));
		__this->___showOrbits = (bool)1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 20));
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 20));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98479
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54 (PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0* __this, TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* ___0_timeModel, RuntimeObject* ___1_ephemeris, PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* ___2_planets, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_timeModel), (&___1_ephemeris), (&___2_planets));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetSystemController__ctor_m084A0B36D89C3FDA7907AECE69AFAA91C21FDB54_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 22));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:10>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 23));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 24));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 25));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 26));
		TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* L_0 = ___0_timeModel;
		__this->___timeModel = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeModel), (void*)L_0);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 27));
		RuntimeObject* L_1 = ___1_ephemeris;
		__this->___ephemeris = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ephemeris), (void*)L_1);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 28));
		PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* L_2 = ___2_planets;
		__this->___planets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planets), (void*)L_2);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 29));
		TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* L_3 = __this->___timeModel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 30));
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_4 = (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)il2cpp_codegen_object_new(Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var);
		Action_1__ctor_mD7756DCD2F07CD6207A72D5669CDBD9A967E1659(L_4, __this, (intptr_t)((void*)PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 31));
		NullCheck(L_3);
		TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 31));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:18>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 32));
		return;
	}
}
// Method Definition Index: 98480
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A (PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlanetEphemerisService_tBE8082A231527B804C437A797C7F14AFADE4F95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSystemController_tDF347284C8248A5FC2B77F950CD7B6E95AE073E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE96B455840440AE389B12174031208157211E1CB);
		s_Il2CppMethodInitialized = true;
	}
	PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* V_0 = NULL;
	int32_t V_1 = 0;
	PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_time));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetSystemController_UpdatePlanets_mC40EB07A751A1EC6B4E8F4D6DE462D2DD7E7615A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 34));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 35));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 36));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_time;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 37));
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE96B455840440AE389B12174031208157211E1CB, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 38));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 39));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 40));
		PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* L_4 = __this->___planets;
		V_0 = L_4;
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41));
		goto IL_0048;
	}

IL_0023:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 42));
		PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 43));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 44));
		RuntimeObject* L_9 = __this->___ephemeris;
		PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___planet;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12 = ___0_time;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 45));
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0, IPlanetEphemerisService_tBE8082A231527B804C437A797C7F14AFADE4F95F_il2cpp_TypeInfo_var, L_9, L_11, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 45));
		V_3 = L_13;
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 46));
		PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 47));
		NullCheck(L_14);
		PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A(L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 48));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 49));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 50));
		int32_t L_17 = V_1;
		PlanetViewU5BU5D_tE9962DCDF581BEFB6A9B8CD706D54C687D5B21A5* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Controllers/PlanetSystemController.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 51));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98481
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08 (int32_t ___0_p, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	double V_8 = 0.0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_p), (&___1_t));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12), (&V_13));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 52));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 53));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 54));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 55));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___1_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 56));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_1), ((int32_t)2000), 1, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 57));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 57));
		V_14 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 58));
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_14), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 58));
		V_0 = ((float)(((float)L_3)/(36525.0f)));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:20>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 59));
		int32_t L_4 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 60));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5;
		L_5 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_4, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 60));
		NullCheck(L_5);
		int32_t L_6 = 0;
		float L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 61));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9;
		L_9 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_8, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 61));
		NullCheck(L_9);
		int32_t L_10 = 1;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = V_0;
		V_1 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_11, L_12))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:22>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 62));
		int32_t L_13 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 63));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14;
		L_14 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_13, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 63));
		NullCheck(L_14);
		int32_t L_15 = 0;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 64));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18;
		L_18 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_17, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 64));
		NullCheck(L_18);
		int32_t L_19 = 1;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21 = V_0;
		V_2 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_20, L_21))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:24>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 65));
		int32_t L_22 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 66));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23;
		L_23 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_22, 5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 66));
		NullCheck(L_23);
		int32_t L_24 = 0;
		float L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 67));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27;
		L_27 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_26, 5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 67));
		NullCheck(L_27);
		int32_t L_28 = 1;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		float L_30 = V_0;
		V_3 = ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_29, L_30))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 68));
		float L_31 = V_2;
		float L_32 = V_3;
		V_4 = ((float)il2cpp_codegen_subtract(L_31, L_32));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:27>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:28>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:29>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:30>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:31>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 69));
		int32_t L_33 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 70));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34;
		L_34 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_33, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 70));
		NullCheck(L_34);
		int32_t L_35 = 0;
		float L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 71));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38;
		L_38 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_37, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 71));
		NullCheck(L_38);
		int32_t L_39 = 1;
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		float L_41 = V_0;
		float L_42 = V_2;
		int32_t L_43 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 72));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44;
		L_44 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_43, 6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 72));
		NullCheck(L_44);
		int32_t L_45 = 0;
		float L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		float L_47 = V_0;
		float L_48 = V_0;
		int32_t L_49 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 73));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50;
		L_50 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_49, 7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 73));
		NullCheck(L_50);
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 74));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54;
		L_54 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_53, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 74));
		NullCheck(L_54);
		int32_t L_55 = 0;
		float L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		float L_57 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 75));
		float L_58;
		L_58 = cosf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_56)), L_57)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 75));
		int32_t L_59 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 76));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60;
		L_60 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_59, 8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 76));
		NullCheck(L_60);
		int32_t L_61 = 0;
		float L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 77));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64;
		L_64 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_63, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 77));
		NullCheck(L_64);
		int32_t L_65 = 0;
		float L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		float L_67 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 78));
		float L_68;
		L_68 = cosf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_66)), L_67)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 78));
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_36, ((float)il2cpp_codegen_multiply(L_40, L_41)))), L_42)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_46, L_47)), L_48)))), ((float)il2cpp_codegen_multiply(L_52, L_58)))), ((float)il2cpp_codegen_multiply(L_62, L_68))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 79));
		float L_69 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((fmodf(L_69, (360.0f))), (180.0f)));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:36>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 80));
		int32_t L_70 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 81));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71;
		L_71 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_70, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 81));
		NullCheck(L_71);
		int32_t L_72 = 0;
		float L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 82));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75;
		L_75 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_74, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 82));
		NullCheck(L_75);
		int32_t L_76 = 1;
		float L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		float L_78 = V_0;
		V_6 = ((float)il2cpp_codegen_add(L_73, ((float)il2cpp_codegen_multiply(L_77, L_78))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 83));
		float L_79 = V_6;
		V_7 = ((float)(((float)il2cpp_codegen_multiply(L_79, (180.0f)))/(3.14159274f)));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 84));
		float L_80 = V_5;
		float L_81 = V_7;
		float L_82 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 85));
		float L_83;
		L_83 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_82)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 85));
		V_8 = ((double)((float)il2cpp_codegen_subtract(L_80, ((float)il2cpp_codegen_multiply(L_81, L_83)))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 86));
		V_10 = 0;
	}

IL_0126:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 87));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 88));
		float L_84 = V_5;
		double L_85 = V_8;
		float L_86 = V_7;
		double L_87 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 89));
		float L_88;
		L_88 = sinf(((float)((double)il2cpp_codegen_multiply((0.01745329238474369), L_87))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 89));
		V_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)L_84), L_85)), ((double)((float)il2cpp_codegen_multiply(L_86, L_88)))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 90));
		double L_89 = V_8;
		double L_90 = V_9;
		V_8 = ((double)il2cpp_codegen_add(L_89, L_90));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 91));
		int32_t L_91 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 92));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:55>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 93));
		double L_92 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 94));
		float L_93;
		L_93 = fabsf(((float)L_92));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 94));
		if ((!(((double)((double)L_93)) > ((double)(9.9999999999999995E-07)))))
		{
			goto IL_0170;
		}
	}
	{
		int32_t L_94 = V_10;
		G_B4_0 = ((((int32_t)L_94) < ((int32_t)((int32_t)100)))? 1 : 0);
		goto IL_0171;
	}

IL_0170:
	{
		G_B4_0 = 0;
	}

IL_0171:
	{
		V_15 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 95));
		bool L_95 = V_15;
		if (L_95)
		{
			goto IL_0126;
		}
	}
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 96));
		float L_96 = V_1;
		double L_97 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 97));
		float L_98;
		L_98 = cosf(((float)((double)il2cpp_codegen_multiply((0.01745329238474369), L_97))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 97));
		float L_99 = V_6;
		V_11 = ((float)il2cpp_codegen_multiply(L_96, ((float)il2cpp_codegen_subtract(L_98, L_99))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 98));
		float L_100 = V_1;
		float L_101 = V_6;
		float L_102 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 99));
		float L_103;
		L_103 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_101, L_102)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 99));
		double L_104 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 100));
		float L_105;
		L_105 = sinf(((float)((double)il2cpp_codegen_multiply((0.01745329238474369), L_104))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 100));
		V_12 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_100, L_103)), L_105));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:60>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 101));
		int32_t L_106 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 102));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_107;
		L_107 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_106, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 102));
		NullCheck(L_107);
		int32_t L_108 = 0;
		float L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		int32_t L_110 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 103));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_111;
		L_111 = PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE(L_110, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 103));
		NullCheck(L_111);
		int32_t L_112 = 1;
		float L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		float L_114 = V_0;
		V_13 = ((float)il2cpp_codegen_add(L_109, ((float)il2cpp_codegen_multiply(L_113, L_114))));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:63>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:64>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:65>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:66>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:67>
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 104));
		float L_115 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 105));
		float L_116;
		L_116 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_115)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 105));
		float L_117 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 106));
		float L_118;
		L_118 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_117)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 106));
		float L_119 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 107));
		float L_120;
		L_120 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_119)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 107));
		float L_121 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 108));
		float L_122;
		L_122 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_121)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 108));
		float L_123 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 109));
		float L_124;
		L_124 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_123)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 109));
		float L_125 = V_11;
		float L_126 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 110));
		float L_127;
		L_127 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_126)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 110));
		float L_128 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 111));
		float L_129;
		L_129 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_128)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 111));
		float L_130 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 112));
		float L_131;
		L_131 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_130)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 112));
		float L_132 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 113));
		float L_133;
		L_133 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_132)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 113));
		float L_134 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 114));
		float L_135;
		L_135 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_134)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 114));
		float L_136 = V_12;
		float L_137 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 115));
		float L_138;
		L_138 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_137)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 115));
		float L_139 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 116));
		float L_140;
		L_140 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_139)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 116));
		float L_141 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 117));
		float L_142;
		L_142 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_141)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 117));
		float L_143 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 118));
		float L_144;
		L_144 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_143)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 118));
		float L_145 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 119));
		float L_146;
		L_146 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_145)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 119));
		float L_147 = V_11;
		float L_148 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 120));
		float L_149;
		L_149 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_148)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 120));
		float L_150 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 121));
		float L_151;
		L_151 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_150)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 121));
		float L_152 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 122));
		float L_153;
		L_153 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_152)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 122));
		float L_154 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 123));
		float L_155;
		L_155 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_154)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 123));
		float L_156 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 124));
		float L_157;
		L_157 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_156)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 124));
		float L_158 = V_12;
		float L_159 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 125));
		float L_160;
		L_160 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_159)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 125));
		float L_161 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 126));
		float L_162;
		L_162 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_161)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 126));
		float L_163 = V_11;
		float L_164 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 127));
		float L_165;
		L_165 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_164)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 127));
		float L_166 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 128));
		float L_167;
		L_167 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_166)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 128));
		float L_168 = V_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 129));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		memset((&L_169), 0, sizeof(L_169));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_169), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_116, L_118)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_120, L_122)), L_124)))), L_125)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((-L_127)), L_129)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_131, L_133)), L_135)))), L_136)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_138, L_140)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_142, L_144)), L_146)))), L_147)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((-L_149)), L_151)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_153, L_155)), L_157)))), L_158)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_160, L_162)), L_163)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_165, L_167)), L_168)))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 129));
		V_16 = L_169;
		goto IL_0330;
	}

IL_0330:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 130));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170 = V_16;
		return L_170;
	}
}
// Method Definition Index: 98482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE (int32_t ___0_planet, int32_t ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeplerParameter_tFB43CB652A950F275B0FB78CD61EC9AF9A7690A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planet_t2E7D91CC5C418DA36A4A9D5904C017B41636E873_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_planet), (&___1_param));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetData_GetKeplerParameter_m2C3BE8F0E781BC5C81A72C4FF007B41D1052B2FE_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 131));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 132));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 133));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 134));
		int32_t L_0 = ___0_planet;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 135));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 136));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_010a;
			}
			case 2:
			{
				goto IL_01f0;
			}
			case 3:
			{
				goto IL_02d6;
			}
			case 4:
			{
				goto IL_03bc;
			}
			case 5:
			{
				goto IL_04fe;
			}
			case 6:
			{
				goto IL_0640;
			}
			case 7:
			{
				goto IL_0782;
			}
		}
	}
	{
		goto IL_08af;
	}

IL_0030:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 137));
		int32_t L_3 = ___1_param;
		V_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 138));
		int32_t L_4 = V_3;
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 139));
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0089;
			}
			case 3:
			{
				goto IL_00a6;
			}
			case 4:
			{
				goto IL_00c3;
			}
			case 5:
			{
				goto IL_00e0;
			}
		}
	}
	{
		goto IL_00fd;
	}

IL_0057:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 140));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.387099266f));
		V_4 = L_7;
		goto IL_08b9;
	}

IL_006c:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 141));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.205636606f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(2.12300001E-05f));
		V_4 = L_10;
		goto IL_08b9;
	}

IL_0089:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 142));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(7.00559425f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00590158021f));
		V_4 = L_13;
		goto IL_08b9;
	}

IL_00a6:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 143));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(252.251663f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(149472.672f));
		V_4 = L_16;
		goto IL_08b9;
	}

IL_00c3:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 144));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(77.4577179f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.159400135f));
		V_4 = L_19;
		goto IL_08b9;
	}

IL_00e0:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 145));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(48.3396187f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.122141823f));
		V_4 = L_22;
		goto IL_08b9;
	}

IL_00fd:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 146));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_23;
		goto IL_08b9;
	}

IL_010a:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 147));
		int32_t L_24 = ___1_param;
		V_6 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 148));
		int32_t L_25 = V_6;
		V_5 = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 149));
		int32_t L_26 = V_5;
		switch (L_26)
		{
			case 0:
			{
				goto IL_0135;
			}
			case 1:
			{
				goto IL_0152;
			}
			case 2:
			{
				goto IL_016f;
			}
			case 3:
			{
				goto IL_018c;
			}
			case 4:
			{
				goto IL_01a9;
			}
			case 5:
			{
				goto IL_01c6;
			}
		}
	}
	{
		goto IL_01e3;
	}

IL_0135:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 150));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.723321021f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-2.60000007E-07f));
		V_4 = L_29;
		goto IL_08b9;
	}

IL_0152:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 151));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.00676399004f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-5.10700011E-05f));
		V_4 = L_32;
		goto IL_08b9;
	}

IL_016f:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 152));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(3.39777541f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = L_34;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.000434940011f));
		V_4 = L_35;
		goto IL_08b9;
	}

IL_018c:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 153));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = L_36;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(181.979706f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(58517.8164f));
		V_4 = L_38;
		goto IL_08b9;
	}

IL_01a9:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:105>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 154));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = L_39;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(131.767563f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.05679648f));
		V_4 = L_41;
		goto IL_08b9;
	}

IL_01c6:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:107>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 155));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(76.6726151f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = L_43;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.272741735f));
		V_4 = L_44;
		goto IL_08b9;
	}

IL_01e3:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:109>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 156));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_45;
		goto IL_08b9;
	}

IL_01f0:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:112>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 157));
		int32_t L_46 = ___1_param;
		V_8 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 158));
		int32_t L_47 = V_8;
		V_7 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 159));
		int32_t L_48 = V_7;
		switch (L_48)
		{
			case 0:
			{
				goto IL_021b;
			}
			case 1:
			{
				goto IL_0238;
			}
			case 2:
			{
				goto IL_0255;
			}
			case 3:
			{
				goto IL_0272;
			}
			case 4:
			{
				goto IL_028f;
			}
			case 5:
			{
				goto IL_02ac;
			}
		}
	}
	{
		goto IL_02c9;
	}

IL_021b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 160));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = L_49;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.00000024f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-2.99999989E-08f));
		V_4 = L_51;
		goto IL_08b9;
	}

IL_0238:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:117>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 161));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = L_52;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0167316291f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = L_53;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-3.66099994E-05f));
		V_4 = L_54;
		goto IL_08b9;
	}

IL_0255:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 162));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = L_55;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.000543460017f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.0133717796f));
		V_4 = L_57;
		goto IL_08b9;
	}

IL_0272:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 163));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = L_58;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(100.466919f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = L_59;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(35999.375f));
		V_4 = L_60;
		goto IL_08b9;
	}

IL_028f:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 164));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = L_61;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(102.930061f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.317952603f));
		V_4 = L_63;
		goto IL_08b9;
	}

IL_02ac:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 165));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = L_64;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-5.11260366f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_66 = L_65;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.241238564f));
		V_4 = L_66;
		goto IL_08b9;
	}

IL_02c9:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 166));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_67;
		goto IL_08b9;
	}

IL_02d6:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 167));
		int32_t L_68 = ___1_param;
		V_10 = L_68;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 168));
		int32_t L_69 = V_10;
		V_9 = L_69;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 169));
		int32_t L_70 = V_9;
		switch (L_70)
		{
			case 0:
			{
				goto IL_0301;
			}
			case 1:
			{
				goto IL_031e;
			}
			case 2:
			{
				goto IL_033b;
			}
			case 3:
			{
				goto IL_0358;
			}
			case 4:
			{
				goto IL_0375;
			}
			case 5:
			{
				goto IL_0392;
			}
		}
	}
	{
		goto IL_03af;
	}

IL_0301:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 170));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.5237124f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = L_72;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(9.69999974E-07f));
		V_4 = L_73;
		goto IL_08b9;
	}

IL_031e:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 171));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0933651105f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_76 = L_75;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(9.14900011E-05f));
		V_4 = L_76;
		goto IL_08b9;
	}

IL_033b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 172));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.85181868f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = L_78;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00724756997f));
		V_4 = L_79;
		goto IL_08b9;
	}

IL_0358:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:139>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 173));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_80 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = L_80;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-4.56813145f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = L_81;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(19140.2988f));
		V_4 = L_82;
		goto IL_08b9;
	}

IL_0375:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 174));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_84 = L_83;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-23.917448f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = L_84;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.452236235f));
		V_4 = L_85;
		goto IL_08b9;
	}

IL_0392:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 175));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_86 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = L_86;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(49.7132111f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_88 = L_87;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.268524319f));
		V_4 = L_88;
		goto IL_08b9;
	}

IL_03af:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 176));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_89;
		goto IL_08b9;
	}

IL_03bc:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 177));
		int32_t L_90 = ___1_param;
		V_12 = L_90;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 178));
		int32_t L_91 = V_12;
		V_11 = L_91;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 179));
		int32_t L_92 = V_11;
		switch (L_92)
		{
			case 0:
			{
				goto IL_03f7;
			}
			case 1:
			{
				goto IL_0414;
			}
			case 2:
			{
				goto IL_0431;
			}
			case 3:
			{
				goto IL_044e;
			}
			case 4:
			{
				goto IL_046b;
			}
			case 5:
			{
				goto IL_0488;
			}
			case 6:
			{
				goto IL_04a5;
			}
			case 7:
			{
				goto IL_04ba;
			}
			case 8:
			{
				goto IL_04cf;
			}
			case 9:
			{
				goto IL_04e4;
			}
		}
	}
	{
		goto IL_04f9;
	}

IL_03f7:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:151>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 180));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_93 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = L_93;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(5.20248032f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = L_94;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-2.86400009E-05f));
		V_4 = L_95;
		goto IL_08b9;
	}

IL_0414:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:153>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 181));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_96 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = L_96;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0485358983f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = L_97;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.000180260002f));
		V_4 = L_98;
		goto IL_08b9;
	}

IL_0431:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:155>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 182));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_99 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_100 = L_99;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.29861414f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = L_100;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00322699011f));
		V_4 = L_101;
		goto IL_08b9;
	}

IL_044e:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 183));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_102 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_103 = L_102;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(34.3347931f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_104 = L_103;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(3034.90381f));
		V_4 = L_104;
		goto IL_08b9;
	}

IL_046b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 184));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_105 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = L_105;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(14.2749529f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_107 = L_106;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.181991965f));
		V_4 = L_107;
		goto IL_08b9;
	}

IL_0488:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 185));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_108 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = L_108;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(100.292824f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_110 = L_109;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.130246192f));
		V_4 = L_110;
		goto IL_08b9;
	}

IL_04a5:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:163>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 186));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_111 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_112 = L_111;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.000124519996f));
		V_4 = L_112;
		goto IL_08b9;
	}

IL_04ba:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 187));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_113 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_114 = L_113;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0606405996f));
		V_4 = L_114;
		goto IL_08b9;
	}

IL_04cf:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:167>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 188));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_116 = L_115;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.356354386f));
		V_4 = L_116;
		goto IL_08b9;
	}

IL_04e4:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 189));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_117 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_118 = L_117;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(38.3512497f));
		V_4 = L_118;
		goto IL_08b9;
	}

IL_04f9:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 190));
		goto IL_08af;
	}

IL_04fe:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:173>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 191));
		int32_t L_119 = ___1_param;
		V_14 = L_119;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 192));
		int32_t L_120 = V_14;
		V_13 = L_120;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 193));
		int32_t L_121 = V_13;
		switch (L_121)
		{
			case 0:
			{
				goto IL_0539;
			}
			case 1:
			{
				goto IL_0556;
			}
			case 2:
			{
				goto IL_0573;
			}
			case 3:
			{
				goto IL_0590;
			}
			case 4:
			{
				goto IL_05ad;
			}
			case 5:
			{
				goto IL_05ca;
			}
			case 6:
			{
				goto IL_05e7;
			}
			case 7:
			{
				goto IL_05fc;
			}
			case 8:
			{
				goto IL_0611;
			}
			case 9:
			{
				goto IL_0626;
			}
		}
	}
	{
		goto IL_063b;
	}

IL_0539:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 194));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_122 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = L_122;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(9.54149914f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_124 = L_123;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-3.06500006E-05f));
		V_4 = L_124;
		goto IL_08b9;
	}

IL_0556:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 195));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_126 = L_125;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0555082485f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_127 = L_126;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.000320440013f));
		V_4 = L_127;
		goto IL_08b9;
	}

IL_0573:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:180>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 196));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_128 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = L_128;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(2.494241f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_130 = L_129;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.00451968983f));
		V_4 = L_130;
		goto IL_08b9;
	}

IL_0590:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:182>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 197));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_131 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = L_131;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(50.0757141f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_133 = L_132;
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1222.11499f));
		V_4 = L_133;
		goto IL_08b9;
	}

IL_05ad:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:184>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 198));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_135 = L_134;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(92.8613586f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = L_135;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.541794777f));
		V_4 = L_136;
		goto IL_08b9;
	}

IL_05ca:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:186>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 199));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_137 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = L_137;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(113.639984f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_139 = L_138;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.250150025f));
		V_4 = L_139;
		goto IL_08b9;
	}

IL_05e7:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:188>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 200));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_140 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_141 = L_140;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.00025899001f));
		V_4 = L_141;
		goto IL_08b9;
	}

IL_05fc:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:190>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 201));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_142 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_143 = L_142;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.134344697f));
		V_4 = L_143;
		goto IL_08b9;
	}

IL_0611:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:192>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 202));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_144 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_145 = L_144;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.873201489f));
		V_4 = L_145;
		goto IL_08b9;
	}

IL_0626:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:194>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 203));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_147 = L_146;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(38.3512497f));
		V_4 = L_147;
		goto IL_08b9;
	}

IL_063b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:196>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 204));
		goto IL_08af;
	}

IL_0640:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:198>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 205));
		int32_t L_148 = ___1_param;
		V_16 = L_148;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 206));
		int32_t L_149 = V_16;
		V_15 = L_149;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 207));
		int32_t L_150 = V_15;
		switch (L_150)
		{
			case 0:
			{
				goto IL_067b;
			}
			case 1:
			{
				goto IL_0698;
			}
			case 2:
			{
				goto IL_06b5;
			}
			case 3:
			{
				goto IL_06d2;
			}
			case 4:
			{
				goto IL_06ef;
			}
			case 5:
			{
				goto IL_070c;
			}
			case 6:
			{
				goto IL_0729;
			}
			case 7:
			{
				goto IL_073e;
			}
			case 8:
			{
				goto IL_0753;
			}
			case 9:
			{
				goto IL_0768;
			}
		}
	}
	{
		goto IL_077d;
	}

IL_067b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:201>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 208));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_151 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_152 = L_151;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(19.1879787f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_153 = L_152;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00020455f));
		V_4 = L_153;
		goto IL_08b9;
	}

IL_0698:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:203>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 209));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_154 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = L_154;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0468574017f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_156 = L_155;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-1.54999998E-05f));
		V_4 = L_156;
		goto IL_08b9;
	}

IL_06b5:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 210));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_157 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_158 = L_157;
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.772981286f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_159 = L_158;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00180155004f));
		V_4 = L_159;
		goto IL_08b9;
	}

IL_06d2:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:207>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 211));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_161 = L_160;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(314.202759f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_162 = L_161;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(428.495117f));
		V_4 = L_162;
		goto IL_08b9;
	}

IL_06ef:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:209>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 212));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_163 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_164 = L_163;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(172.434052f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_165 = L_164;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0926698521f));
		V_4 = L_165;
		goto IL_08b9;
	}

IL_070c:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 213));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_166 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_167 = L_166;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(73.9625015f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_168 = L_167;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0573969893f));
		V_4 = L_168;
		goto IL_08b9;
	}

IL_0729:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:213>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 214));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_169 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_170 = L_169;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.000583309971f));
		V_4 = L_170;
		goto IL_08b9;
	}

IL_073e:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:215>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 215));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_171 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_172 = L_171;
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.977318466f));
		V_4 = L_172;
		goto IL_08b9;
	}

IL_0753:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 216));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_173 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_174 = L_173;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.176892444f));
		V_4 = L_174;
		goto IL_08b9;
	}

IL_0768:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:219>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 217));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_175 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_176 = L_175;
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(7.67024994f));
		V_4 = L_176;
		goto IL_08b9;
	}

IL_077d:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:221>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 218));
		goto IL_08af;
	}

IL_0782:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 219));
		int32_t L_177 = ___1_param;
		V_18 = L_177;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 220));
		int32_t L_178 = V_18;
		V_17 = L_178;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 221));
		int32_t L_179 = V_17;
		switch (L_179)
		{
			case 0:
			{
				goto IL_07bd;
			}
			case 1:
			{
				goto IL_07da;
			}
			case 2:
			{
				goto IL_07f7;
			}
			case 3:
			{
				goto IL_0814;
			}
			case 4:
			{
				goto IL_0831;
			}
			case 5:
			{
				goto IL_084b;
			}
			case 6:
			{
				goto IL_0865;
			}
			case 7:
			{
				goto IL_0877;
			}
			case 8:
			{
				goto IL_0889;
			}
			case 9:
			{
				goto IL_089b;
			}
		}
	}
	{
		goto IL_08ad;
	}

IL_07bd:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:226>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 222));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_180 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_181 = L_180;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(30.0695267f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_182 = L_181;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(6.44699976E-05f));
		V_4 = L_182;
		goto IL_08b9;
	}

IL_07da:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 223));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_183 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_184 = L_183;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.00895438995f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_185 = L_184;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(8.1799999E-06f));
		V_4 = L_185;
		goto IL_08b9;
	}

IL_07f7:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 224));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_186 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_187 = L_186;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.77005517f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_188 = L_187;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.000224000003f));
		V_4 = L_188;
		goto IL_08b9;
	}

IL_0814:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 225));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_189 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_190 = L_189;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(304.2229f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_191 = L_190;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(218.465149f));
		V_4 = L_191;
		goto IL_08b9;
	}

IL_0831:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:234>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 226));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_192 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_193 = L_192;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(46.6815872f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_194 = L_193;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0100993803f));
		V_4 = L_194;
		goto IL_08b9;
	}

IL_084b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 227));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_195 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_196 = L_195;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(131.786362f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_197 = L_196;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(-0.00606301986f));
		V_4 = L_197;
		goto IL_08b9;
	}

IL_0865:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 228));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_198 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_199 = L_198;
		NullCheck(L_199);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.000413480011f));
		V_4 = L_199;
		goto IL_08b9;
	}

IL_0877:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 229));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_200 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_201 = L_200;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.683463156f));
		V_4 = L_201;
		goto IL_08b9;
	}

IL_0889:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:242>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 230));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_202 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_203 = L_202;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-0.101625472f));
		V_4 = L_203;
		goto IL_08b9;
	}

IL_089b:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:244>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 231));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_204 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_205 = L_204;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(7.67024994f));
		V_4 = L_205;
		goto IL_08b9;
	}

IL_08ad:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:246>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 232));
		goto IL_08af;
	}

IL_08af:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 233));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_206 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_206;
		goto IL_08b9;
	}

IL_08b9:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Data/PlanetData.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 234));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_207 = V_4;
		return L_207;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 235));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 236));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:5>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 237));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CCurrentTimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 98484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 239));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:5>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 240));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CCurrentTimeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 98485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeModel_get_TimeScale_m5E371E864917AA319FDE009D50EF0C1308BED272 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_get_TimeScale_m5E371E864917AA319FDE009D50EF0C1308BED272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_get_TimeScale_m5E371E864917AA319FDE009D50EF0C1308BED272_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 241));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 242));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 243));
		float L_0 = __this->___U3CTimeScaleU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 98486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 245));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 246));
		float L_0 = ___0_value;
		__this->___U3CTimeScaleU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 98487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeModel_get_IsPlaying_m9B481B130E5D51B56BEB2D1ED9A7F84399F09717 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_get_IsPlaying_m9B481B130E5D51B56BEB2D1ED9A7F84399F09717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_get_IsPlaying_m9B481B130E5D51B56BEB2D1ED9A7F84399F09717_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 247));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 248));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 249));
		bool L_0 = __this->___U3CIsPlayingU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 98488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 250));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 251));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 252));
		bool L_0 = ___0_value;
		__this->___U3CIsPlayingU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 98489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_0 = NULL;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_1 = NULL;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_add_OnTimeChanged_m08D20382DA01839697DCEEB9049253E4AA7EE36B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_0 = __this->___OnTimeChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_2 = V_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)Castclass((RuntimeObject*)L_4, Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var));
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B** L_5 = (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B**)(&__this->___OnTimeChanged);
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_6 = V_2;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_7 = V_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_9 = V_0;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)L_9) == ((RuntimeObject*)(Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_remove_OnTimeChanged_mA3459156D4281E6007CF57E01DBF91C0958BBA19 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_remove_OnTimeChanged_mA3459156D4281E6007CF57E01DBF91C0958BBA19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_0 = NULL;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_1 = NULL;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_remove_OnTimeChanged_mA3459156D4281E6007CF57E01DBF91C0958BBA19_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_0 = __this->___OnTimeChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_2 = V_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)Castclass((RuntimeObject*)L_4, Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B_il2cpp_TypeInfo_var));
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B** L_5 = (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B**)(&__this->___OnTimeChanged);
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_6 = V_2;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_7 = V_1;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_9 = V_0;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)L_9) == ((RuntimeObject*)(Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_t));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_SetTime_mD352602897B5A617FEA7F0CD583204C0A5D886D0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 253));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 254));
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* G_B2_0 = NULL;
	Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 255));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:15>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 256));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 257));
		TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 257));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 258));
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_1 = __this->___OnTimeChanged;
		Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
		G_B1_0 = L_2;
	}
	{
		goto IL_0021;
	}

IL_0015:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 259));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 259));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 260));
		NullCheck(G_B2_0);
		Action_1_Invoke_m8180866D0B72B5B8758B3138DE9404CB754B9779_inline(G_B2_0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 260));
	}

IL_0021:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 261));
		return;
	}
}
// Method Definition Index: 98492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_SetScale_mC2ED8F2D4EBDCBA81701D5BBDF8B382F0DB62A74 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, float ___0_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_SetScale_mC2ED8F2D4EBDCBA81701D5BBDF8B382F0DB62A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_scale));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_SetScale_mC2ED8F2D4EBDCBA81701D5BBDF8B382F0DB62A74_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 262));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 263));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 264));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 265));
		float L_0 = ___0_scale;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 266));
		TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 266));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 267));
		return;
	}
}
// Method Definition Index: 98493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_Play_m497F34894FFFE58535A49BC431C3599248B694B8 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_Play_m497F34894FFFE58535A49BC431C3599248B694B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_Play_m497F34894FFFE58535A49BC431C3599248B694B8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 268));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 269));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 270));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 271));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 272));
		TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_inline(__this, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 272));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 273));
		return;
	}
}
// Method Definition Index: 98494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel_Pause_m2BA8ACE2D05537505D93EDD4C69DCCDD4A0BD0BF (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_Pause_m2BA8ACE2D05537505D93EDD4C69DCCDD4A0BD0BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_Pause_m2BA8ACE2D05537505D93EDD4C69DCCDD4A0BD0BF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 274));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 275));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 276));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 278));
		TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_inline(__this, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 278));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 279));
		return;
	}
}
// Method Definition Index: 98495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534 (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel__ctor_mF88124F338842BFEDA37F1E0530EFA931DCA9534_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 280));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 281));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 282));
		__this->___U3CTimeScaleU3Ek__BackingField = (1.0f);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 283));
		__this->___U3CIsPlayingU3Ek__BackingField = (bool)1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 284));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 284));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084 (PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* __this, SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* ___0_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_config));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetEphemerisService__ctor_mC58EFD5E693CAD98A96600322EAB986F24CB2084_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 285));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 286));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:8>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 288));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 288));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 289));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:10>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 290));
		SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* L_0 = ___0_config;
		__this->____config = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config), (void*)L_0);
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 291));
		return;
	}
}
// Method Definition Index: 98498
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlanetEphemerisService_GetPlanetPosition_m7AD711235E486DADF478199B3A7BC8FF3F3A799E (PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB* __this, int32_t ___0_planet, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_date, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService_GetPlanetPosition_m7AD711235E486DADF478199B3A7BC8FF3F3A799E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetEphemerisService_t7443928C4AE29216ABAB23BA9C3D7F73E57782BB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_planet), (&___1_date));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetEphemerisService_GetPlanetPosition_m7AD711235E486DADF478199B3A7BC8FF3F3A799E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 294));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 295));
		int32_t L_0 = ___0_planet;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___1_date;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 296));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = PlanetData_GetPlanetPosition_m7B39B09FC8BBDE24E778C38C1EE51FBE8F965D08(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 296));
		V_0 = L_2;
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 297));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		SolarSystemConfig_tE69174DA3F19231A84DF400DC89DAEF9BEC67679* L_4 = __this->____config;
		NullCheck(L_4);
		float L_5 = L_4->___distanceScale;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 298));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 298));
		V_1 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Services/PlanetEphemerisService.cs:18>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 299));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98499
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A (PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pos));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetView_SetPosition_m7111B3E7814EC1C90865817F43A4AB97CEF5323A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 300));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 301));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 302));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Views/PlanetView.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 303));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 304));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 304));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_pos;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 305));
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 305));
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Views/PlanetView.cs:10>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 306));
		return;
	}
}
// Method Definition Index: 98500
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetView__ctor_m686C3996C2D1094BBC098D6D991F82A1D8A4EC04 (PlanetView_tCC6EA1B82266B083E08C0665A0A5DD18DB51EFE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetView__ctor_m686C3996C2D1094BBC098D6D991F82A1D8A4EC04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlanetView__ctor_m686C3996C2D1094BBC098D6D991F82A1D8A4EC04_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98503
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____9A15F1B2CE032A61F7D714C1CA8157E68D27F9F9CE275B08857081B4920FC30E_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AB9BA6631AA69D42F1FFF74D818D4D9F68C0C9655C29C15AC46A5158E8675367_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 309));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 310));
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)455));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____9A15F1B2CE032A61F7D714C1CA8157E68D27F9F9CE275B08857081B4920FC30E_FieldInfo_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 311));
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 311));
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)207));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AB9BA6631AA69D42F1FFF74D818D4D9F68C0C9655C29C15AC46A5158E8675367_FieldInfo_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)9);
		(&V_0)->___TotalTypes = ((int32_t)10);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		V_1 = L_6;
		goto IL_005f;
	}

IL_005f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 313));
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 98504
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 53123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_z));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11749));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11750));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11751));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11752));
		float L_0 = ___0_x;
		__this->___x = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11753));
		float L_1 = ___1_y;
		__this->___y = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11754));
		float L_2 = ___2_z;
		__this->___z = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11755));
		return;
	}
}
// Method Definition Index: 98484
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_CurrentTime_m36E3B9FE7E695168CA0ADBCC5A36338F759685FF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 239));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:5>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 240));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CCurrentTimeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 98483
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_get_CurrentTime_m07C8E81C1FC0B3B52F4F9E26693735B2C9BE18EB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 235));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 236));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:5>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 237));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CCurrentTimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 98486
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_TimeScale_m6F7D6E37ACA1B66DAE428B6DEFC40E941451CA08_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 245));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 246));
		float L_0 = ___0_value;
		__this->___U3CTimeScaleU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 98488
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_inline (TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeModel_t16071A688191058375A1AF75A4717489DC8F76EC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TimeModel_set_IsPlaying_m724051B020B45FE504A3B386BE0207E0D76C1981_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 250));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 251));
	{
		//<source_info:/Users/hugo/RVSI/Solar-System-Workbench/Assets/Scripts/Models/TimeModel.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 252));
		bool L_0 = ___0_value;
		__this->___U3CIsPlayingU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 53164
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_d));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12016));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12017));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12018));
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 615
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8180866D0B72B5B8758B3138DE9404CB754B9779_gshared_inline (Action_1_t53FBC0BFE69883C647FC168F3E2591BE05BFBE1B* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
