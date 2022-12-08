#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<MapData>
struct Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150;
// System.Action`1<MeshData>
struct Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>
struct Dictionary_2_t2EA4B42ED817AEE991BFC71A865690A36E3B64A2;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>
struct Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>
struct KeyCollection_t7D209066AA9811D0E79DF0C3F23E595E0756069C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>
struct List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04;
// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>
struct Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6;
// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>
struct Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623;
// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>
struct Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>
struct ValueCollection_tAD0308E106F3E65D4AA3C129581F5454873901DD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>[]
struct EntryU5BU5D_tC0583BC8B18FF1442E4970148AFA37592912A2DF;
// MapGenerator/MapThreadInfo`1<MapData>[]
struct MapThreadInfo_1U5BU5D_tFF26130B96282521C861E052FCE8FECEFE9302FA;
// MapGenerator/MapThreadInfo`1<MeshData>[]
struct MapThreadInfo_1U5BU5D_t327211C3E651EFB46A27AD3B612F90D11D4D5A5A;
// MapGenerator/MapThreadInfo`1<System.Object>[]
struct MapThreadInfo_1U5BU5D_t6D0CD8D968001280404F485AAB3278643282B8D9;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TerrainType[]
struct TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// EndlessTerrain/LODInfo[]
struct LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E;
// EndlessTerrain/LODMesh[]
struct LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30;
// EndlessTerrain/TerrainChunk[]
struct TerrainChunkU5BU5D_tB7FA1A6CDBA5D33397C62FF12D5270E7A24B6D56;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EndlessTerrain
struct EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HideOnPlay
struct HideOnPlay_t476EA6BF700321494E836B84AA75F549B5CC3070;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MapDisplay
struct MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18;
// MapGenerator
struct MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// MeshData
struct MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveCamera
struct MoveCamera_t9409C54A44D37C0F439D68563EF8E48F4AC29460;
// MovePlayer
struct MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4;
// System.MulticastDelegate
struct MulticastDelegate_t;
// PlayerCam
struct PlayerCam_t1DEB32D9E60017CBE67E041C350E8035F8A9EFF8;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// EndlessTerrain/LODMesh
struct LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D;
// EndlessTerrain/TerrainChunk
struct TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B;
// MapGenerator/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32;
// MapGenerator/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral29BB899F280367BA902E9E306FD5279A7822DE34;
IL2CPP_EXTERN_C String_t* _stringLiteral6CEF0B029D501973933F3322A798284398E3A232;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m09D7C7DF92DF050972D9AF1E1FF57EEE7D469F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB0EC1E943054B03C3FF8A7A261A2C63762649079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF32BB1F28B16ED86DAF19694B301DE68FD06A06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m58431EF3E193FCC29F16EB2B11D1AA887FF511D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LODMesh_OnMeshDataReceived_m3C3AAC5821D0C5D0AD3EC6FF1F1CEE4370974B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC19DC79365375F7A84452E0B749ACC29F84BB2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m573BAAE58ADF33DBD93B1BD1BE1BFBD1DE8161BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB083A66D4C4368C59F6DBAA87CDF0CE8CE070779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mABBBEFCA0BD9EC2C0565C6D8053D3DFEF7852CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m68C516C84D31033DAF687ED467761C9ED920BC8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapThreadInfo_1__ctor_m9954D3719BFAA34C345D6431825B13BEAD31E087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18_m47838F7A89229D38AD6A2C557C5061A514FA6DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A_m6387B103D58BB4922EFB46B2A4D63E383087D06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9B1D1E26A57654C269693E7DC1E143C7124CF2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m08518B2A37887E9038F52F1F2575866AB8E0A938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m60B1DD2E2A02630A6E3C78965CE974B468864C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainChunk_OnMapDataReceived_m631C91CE493BAB10F08086ED4463AD0BE370ECE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRequestMapDataU3Eb__0_mDC99ABD666526DE25FB4AC57EBD04F8E85AA3B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CRequestMeshDataU3Eb__0_mE9C58E2520A00A0206E84C6BA04FA042DBB4E120_RuntimeMethod_var;
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E;
struct LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>
struct Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC0583BC8B18FF1442E4970148AFA37592912A2DF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7D209066AA9811D0E79DF0C3F23E595E0756069C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAD0308E106F3E65D4AA3C129581F5454873901DD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>
struct List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainChunkU5BU5D_tB7FA1A6CDBA5D33397C62FF12D5270E7A24B6D56* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainChunkU5BU5D_tB7FA1A6CDBA5D33397C62FF12D5270E7A24B6D56* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>
struct Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	MapThreadInfo_1U5BU5D_tFF26130B96282521C861E052FCE8FECEFE9302FA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>
struct Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	MapThreadInfo_1U5BU5D_t327211C3E651EFB46A27AD3B612F90D11D4D5A5A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>
struct Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	MapThreadInfo_1U5BU5D_t6D0CD8D968001280404F485AAB3278643282B8D9* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// FallOffMap
struct FallOffMap_tA902774A04C76D6E42041BF63B2EB03400B74845  : public RuntimeObject
{
};

// MeshData
struct MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23  : public RuntimeObject
{
	// UnityEngine.Vector3[] MeshData::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_0;
	// System.Int32[] MeshData::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_1;
	// UnityEngine.Vector2[] MeshData::uvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs_2;
	// System.Int32 MeshData::triangleIndex
	int32_t ___triangleIndex_3;
};

// MeshGenerator
struct MeshGenerator_t25A0679B7EB967AA082713868489AF33C0249621  : public RuntimeObject
{
};

// Noise
struct Noise_t38E71BA511B94B0BD09B876A96E5F251ED4A7353  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TextureGenerator
struct TextureGenerator_t1B0CE473D1E675A5BCC4998B0AEE386659074633  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// EndlessTerrain/LODMesh
struct LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D  : public RuntimeObject
{
	// UnityEngine.Mesh EndlessTerrain/LODMesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
	// System.Boolean EndlessTerrain/LODMesh::hasRequestedMesh
	bool ___hasRequestedMesh_1;
	// System.Boolean EndlessTerrain/LODMesh::hasMesh
	bool ___hasMesh_2;
	// System.Int32 EndlessTerrain/LODMesh::lod
	int32_t ___lod_3;
	// System.Action EndlessTerrain/LODMesh::updateCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___updateCallback_4;
};

// MapGenerator/MapThreadInfo`1<MeshData>
struct MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C 
{
	// System.Action`1<T> MapGenerator/MapThreadInfo`1::callback
	Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback_0;
	// T MapGenerator/MapThreadInfo`1::parameter
	MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___parameter_1;
};

// MapGenerator/MapThreadInfo`1<System.Object>
struct MapThreadInfo_1_tFEECF67A78EC07C2E7FD1C9AAC6176D5E530FC57 
{
	// System.Action`1<T> MapGenerator/MapThreadInfo`1::callback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback_0;
	// T MapGenerator/MapThreadInfo`1::parameter
	RuntimeObject* ___parameter_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// MapData
struct MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC 
{
	// System.Single[,] MapData::noiseMap
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap_0;
	// UnityEngine.Color[] MapData::colorMap
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap_1;
};
// Native definition for P/Invoke marshalling of MapData
struct MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_pinvoke
{
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___colorMap_1;
};
// Native definition for COM marshalling of MapData
struct MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_com
{
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___colorMap_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
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

// EndlessTerrain/LODInfo
struct LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 
{
	// System.Int32 EndlessTerrain/LODInfo::lod
	int32_t ___lod_0;
	// System.Single EndlessTerrain/LODInfo::visibleThreshold
	float ___visibleThreshold_1;
};

// MapGenerator/MapThreadInfo`1<MapData>
struct MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 
{
	// System.Action`1<T> MapGenerator/MapThreadInfo`1::callback
	Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback_0;
	// T MapGenerator/MapThreadInfo`1::parameter
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___parameter_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TerrainType
struct TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D 
{
	// System.String TerrainType::name
	String_t* ___name_0;
	// System.Single TerrainType::height
	float ___height_1;
	// UnityEngine.Color TerrainType::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	// UnityEngine.GameObject TerrainType::terrainTexture
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___terrainTexture_3;
};
// Native definition for P/Invoke marshalling of TerrainType
struct TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_pinvoke
{
	char* ___name_0;
	float ___height_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___terrainTexture_3;
};
// Native definition for COM marshalling of TerrainType
struct TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_com
{
	Il2CppChar* ___name_0;
	float ___height_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___terrainTexture_3;
};

// MapGenerator/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32  : public RuntimeObject
{
	// MapGenerator MapGenerator/<>c__DisplayClass21_0::<>4__this
	MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* ___U3CU3E4__this_0;
	// UnityEngine.Vector2 MapGenerator/<>c__DisplayClass21_0::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_1;
	// System.Action`1<MapData> MapGenerator/<>c__DisplayClass21_0::callback
	Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback_2;
};

// MapGenerator/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C  : public RuntimeObject
{
	// MapGenerator MapGenerator/<>c__DisplayClass23_0::<>4__this
	MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* ___U3CU3E4__this_0;
	// MapData MapGenerator/<>c__DisplayClass23_0::mapData
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData_1;
	// System.Int32 MapGenerator/<>c__DisplayClass23_0::lod
	int32_t ___lod_2;
	// System.Action`1<MeshData> MapGenerator/<>c__DisplayClass23_0::callback
	Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// EndlessTerrain/TerrainChunk
struct TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B  : public RuntimeObject
{
	// UnityEngine.Vector2 EndlessTerrain/TerrainChunk::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_0;
	// UnityEngine.GameObject EndlessTerrain/TerrainChunk::meshObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshObject_1;
	// UnityEngine.Bounds EndlessTerrain/TerrainChunk::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_2;
	// UnityEngine.MeshRenderer EndlessTerrain/TerrainChunk::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_3;
	// UnityEngine.MeshCollider EndlessTerrain/TerrainChunk::meshCollider
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider_4;
	// UnityEngine.MeshFilter EndlessTerrain/TerrainChunk::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_5;
	// EndlessTerrain/LODInfo[] EndlessTerrain/TerrainChunk::detailsLevel
	LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* ___detailsLevel_6;
	// EndlessTerrain/LODMesh[] EndlessTerrain/TerrainChunk::lodMeshes
	LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30* ___lodMeshes_7;
	// MapData EndlessTerrain/TerrainChunk::mapData
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData_8;
	// System.Boolean EndlessTerrain/TerrainChunk::mapDataReceived
	bool ___mapDataReceived_9;
	// System.Int32 EndlessTerrain/TerrainChunk::prevLODIndex
	int32_t ___prevLODIndex_10;
};

// System.Action`1<MapData>
struct Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150  : public MulticastDelegate_t
{
};

// System.Action`1<MeshData>
struct Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// EndlessTerrain
struct EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EndlessTerrain/LODInfo[] EndlessTerrain::detailsLevel
	LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* ___detailsLevel_5;
	// UnityEngine.Transform EndlessTerrain::viewer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___viewer_8;
	// UnityEngine.Material EndlessTerrain::mapMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mapMaterial_11;
	// UnityEngine.Vector2 EndlessTerrain::viewerPositionOld
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___viewerPositionOld_13;
	// System.Int32 EndlessTerrain::chunkSize
	int32_t ___chunkSize_14;
	// System.Int32 EndlessTerrain::chunkVisibleInView
	int32_t ___chunkVisibleInView_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk> EndlessTerrain::terrainChunkDictionary
	Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* ___terrainChunkDictionary_16;
};

struct EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields
{
	// System.Single EndlessTerrain::maxViewDistance
	float ___maxViewDistance_9;
	// MapGenerator EndlessTerrain::mapGenerator
	MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* ___mapGenerator_10;
	// UnityEngine.Vector2 EndlessTerrain::viewerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___viewerPosition_12;
	// System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk> EndlessTerrain::lastVisibleTerrain
	List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* ___lastVisibleTerrain_17;
};

// HideOnPlay
struct HideOnPlay_t476EA6BF700321494E836B84AA75F549B5CC3070  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MapDisplay
struct MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer MapDisplay::textureRender
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___textureRender_4;
	// UnityEngine.MeshFilter MapDisplay::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_5;
	// UnityEngine.MeshRenderer MapDisplay::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_6;
};

// MapGenerator
struct MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Noise/NormalizedMode MapGenerator::normalizedMode
	int32_t ___normalizedMode_4;
	// MapGenerator/DrawMode MapGenerator::drawMode
	int32_t ___drawMode_5;
	// System.Int32 MapGenerator::detailLevelEditor
	int32_t ___detailLevelEditor_7;
	// System.Single MapGenerator::noise
	float ___noise_8;
	// System.Int32 MapGenerator::octaves
	int32_t ___octaves_9;
	// System.Single MapGenerator::peristance
	float ___peristance_10;
	// System.Single MapGenerator::lacunarity
	float ___lacunarity_11;
	// System.Boolean MapGenerator::useFalloff
	bool ___useFalloff_12;
	// System.Boolean MapGenerator::autoUpdate
	bool ___autoUpdate_13;
	// System.Single MapGenerator::meshHeightScale
	float ___meshHeightScale_14;
	// System.Int32 MapGenerator::seed
	int32_t ___seed_15;
	// UnityEngine.Vector2 MapGenerator::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_16;
	// TerrainType[] MapGenerator::regions
	TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283* ___regions_17;
	// UnityEngine.AnimationCurve MapGenerator::meshHeightCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___meshHeightCurve_18;
	// System.Single[,] MapGenerator::falloffMap
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___falloffMap_19;
	// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>> MapGenerator::mapThreadInfoQueue
	Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* ___mapThreadInfoQueue_20;
	// System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>> MapGenerator::meshDataThreadInfoQueue
	Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* ___meshDataThreadInfoQueue_21;
};

// MoveCamera
struct MoveCamera_t9409C54A44D37C0F439D68563EF8E48F4AC29460  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MoveCamera::cameraPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraPosition_4;
};

// MovePlayer
struct MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MovePlayer::moveSpeed
	float ___moveSpeed_4;
	// System.Single MovePlayer::groundDrag
	float ___groundDrag_5;
	// System.Single MovePlayer::jumpForce
	float ___jumpForce_6;
	// System.Single MovePlayer::jumpCooldown
	float ___jumpCooldown_7;
	// System.Single MovePlayer::airTime
	float ___airTime_8;
	// System.Boolean MovePlayer::readyToJump
	bool ___readyToJump_9;
	// UnityEngine.KeyCode MovePlayer::jumpKey
	int32_t ___jumpKey_10;
	// System.Single MovePlayer::playerHeight
	float ___playerHeight_11;
	// UnityEngine.LayerMask MovePlayer::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_12;
	// System.Boolean MovePlayer::grounded
	bool ___grounded_13;
	// UnityEngine.Transform MovePlayer::orientation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___orientation_14;
	// System.Single MovePlayer::horizontalInput
	float ___horizontalInput_15;
	// System.Single MovePlayer::verticalInput
	float ___verticalInput_16;
	// UnityEngine.Vector3 MovePlayer::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_17;
	// UnityEngine.Rigidbody MovePlayer::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_18;
};

// PlayerCam
struct PlayerCam_t1DEB32D9E60017CBE67E041C350E8035F8A9EFF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerCam::orientation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___orientation_4;
	// System.Single PlayerCam::xRotation
	float ___xRotation_5;
	// System.Single PlayerCam::yRotation
	float ___yRotation_6;
	// System.Single PlayerCam::sensX
	float ___sensX_7;
	// System.Single PlayerCam::sensY
	float ___sensY_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// EndlessTerrain/LODInfo[]
struct LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E  : public RuntimeArray
{
	ALIGN_FIELD (8) LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 m_Items[1];

	inline LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LODInfo_tB8AAAEBAE6818BC3C2F3AB11D63A977DA68791B0 value)
	{
		m_Items[index] = value;
	}
};
// EndlessTerrain/LODMesh[]
struct LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30  : public RuntimeArray
{
	ALIGN_FIELD (8) LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* m_Items[1];

	inline LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// TerrainType[]
struct TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283  : public RuntimeArray
{
	ALIGN_FIELD (8) TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D m_Items[1];

	inline TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___terrainTexture_3), (void*)NULL);
		#endif
	}
	inline TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___terrainTexture_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m08CEB4525F8BA1A66F4BDB17EB8AF38672270CE8_gshared (Dictionary_2_t2EA4B42ED817AEE991BFC71A865690A36E3B64A2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mF0A49D6FE3F23B6D15C7308BA4622CB873A8456E_gshared (Dictionary_2_t2EA4B42ED817AEE991BFC71A865690A36E3B64A2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE5838C8598CF6C80099CB9B20EB6C8A940B34A46_gshared (Dictionary_2_t2EA4B42ED817AEE991BFC71A865690A36E3B64A2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m76D2841AA0B0A329DC0806D9442B17BCD0B577F4_gshared (Dictionary_2_t2EA4B42ED817AEE991BFC71A865690A36E3B64A2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<MapData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC114E899A64CBEA2CEE0BECB9204D57DF68A016A_gshared (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void MapGenerator/MapThreadInfo`1<MapData>::.ctor(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB_gshared (MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9* __this, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback0, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___parameter1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB_gshared (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 ___item0, const RuntimeMethod* method) ;
// System.Void MapGenerator/MapThreadInfo`1<System.Object>::.ctor(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapThreadInfo_1__ctor_m13EF20463B2D791C56409A919EE61BE8DF3712AE_gshared (MapThreadInfo_1_tFEECF67A78EC07C2E7FD1C9AAC6176D5E530FC57* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, RuntimeObject* ___parameter1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m8A25B47C1E0A2B57E5CF4706B078039921195CF3_gshared (Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802* __this, MapThreadInfo_1_tFEECF67A78EC07C2E7FD1C9AAC6176D5E530FC57 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_gshared_inline (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD_gshared (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<MapData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m382A0BE1657DE6A53C457CAA70F632EB4F89130B_gshared_inline (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA933FD43BC368B3A5DAA7CDB5C59A24CEF59D2EA_gshared_inline (Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapThreadInfo_1_tFEECF67A78EC07C2E7FD1C9AAC6176D5E530FC57 Queue_1_Dequeue_m402A7506856E5A7A4E868CC016E392BE028CC79B_gshared (Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33_gshared (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m39963B85A8412FBE9936FB07B8C4543BB0105978_gshared (Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Object::FindObjectOfType<MapGenerator>()
inline MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* Object_FindObjectOfType_TisMapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A_m6387B103D58BB4922EFB46B2A4D63E383087D06B (const RuntimeMethod* method)
{
	return ((  MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void EndlessTerrain::UpdateVisibleChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain_UpdateVisibleChunk_mF352F876DD8356CA3F376E5604E13C6670A17767 (EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>::get_Item(System.Int32)
inline TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* List_1_get_Item_m68C516C84D31033DAF687ED467761C9ED920BC8C (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* (*) (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void EndlessTerrain/TerrainChunk::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk_SetVisible_m79BD62FC3668D5649762E7EC603EEEA999415216 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, bool ___visible0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>::get_Count()
inline int32_t List_1_get_Count_mABBBEFCA0BD9EC2C0565C6D8053D3DFEF7852CBE_inline (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>::Clear()
inline void List_1_Clear_m573BAAE58ADF33DBD93B1BD1BE1BFBD1DE8161BD_inline (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB0EC1E943054B03C3FF8A7A261A2C63762649079 (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Dictionary_2_ContainsKey_m08CEB4525F8BA1A66F4BDB17EB8AF38672270CE8_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>::get_Item(TKey)
inline TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* Dictionary_2_get_Item_m58431EF3E193FCC29F16EB2B11D1AA887FF511D8 (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, const RuntimeMethod* method)
{
	return ((  TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* (*) (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Dictionary_2_get_Item_mF0A49D6FE3F23B6D15C7308BA4622CB873A8456E_gshared)(__this, ___key0, method);
}
// System.Void EndlessTerrain/TerrainChunk::UpdateTerrainChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void EndlessTerrain/TerrainChunk::.ctor(UnityEngine.Vector2,System.Int32,EndlessTerrain/LODInfo[],UnityEngine.Transform,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk__ctor_m5FB92351F2E481091555DBE67799E6199347CC38 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coord0, int32_t ___size1, LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* ___detailsLevel2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>::Add(TKey,TValue)
inline void Dictionary_2_Add_m09D7C7DF92DF050972D9AF1E1FF57EEE7D469F02 (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___key0, TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B*, const RuntimeMethod*))Dictionary_2_Add_mE5838C8598CF6C80099CB9B20EB6C8A940B34A46_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,EndlessTerrain/TerrainChunk>::.ctor()
inline void Dictionary_2__ctor_mF32BB1F28B16ED86DAF19694B301DE68FD06A06E (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E*, const RuntimeMethod*))Dictionary_2__ctor_m76D2841AA0B0A329DC0806D9442B17BCD0B577F4_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>::.ctor()
inline void List_1__ctor_mB083A66D4C4368C59F6DBAA87CDF0CE8CE070779 (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EndlessTerrain/LODMesh::.ctor(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LODMesh__ctor_m050277EB408F72FFC22E9367CA4E278781120757 (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* __this, int32_t ___lod0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___updateCallback1, const RuntimeMethod* method) ;
// System.Void System.Action`1<MapData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC114E899A64CBEA2CEE0BECB9204D57DF68A016A (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mC114E899A64CBEA2CEE0BECB9204D57DF68A016A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MapGenerator::RequestMapData(UnityEngine.Vector2,System.Action`1<MapData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_RequestMapData_m2AD9DF6105BA3CB7A0D8AC68F9F97B565458C902 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D TextureGenerator::TextureFromColorMap(UnityEngine.Color[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bounds_SqrDistance_mC8AB3C4A26FE7CC040727103B5F7111514FA4062 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void EndlessTerrain/LODMesh::RequestMesh(MapData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LODMesh_RequestMesh_m35646926A6D6DCFDE7372FC93DF8465FC28D0CEB (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EndlessTerrain/TerrainChunk>::Add(T)
inline void List_1_Add_mC19DC79365375F7A84452E0B749ACC29F84BB2FC_inline (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* __this, TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*, TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh MeshData::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshData_CreateMesh_m0C0526F729CCAB828F02CC540CA1684C67D2458A (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<MeshData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB3E1A6AE22F290C5543B05A99F0DD1F57AAAF9D8 (Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MapGenerator::RequestMeshData(MapData,System.Int32,System.Action`1<MeshData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_RequestMeshData_m4E6637A7DFAA228B0B08512F6BA919CAB21B46CA (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, int32_t ___lod1, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback2, const RuntimeMethod* method) ;
// System.Single System.MathF::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MathF_Max_m5C110C404CE4EE4A19347D8658D7B723A301A6CA_inline (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single FallOffMap::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FallOffMap_Evaluate_mB7D2A054EAA0FE5F86827240665B85B4063D0F02 (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Single[,] FallOffMap::GenerateFallOffMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* FallOffMap_GenerateFallOffMap_m64E839A27C84D285391CB9C3BE12212A3B33DAE8 (int32_t ___size0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// MapData MapGenerator::GenerateMapData(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC MapGenerator_GenerateMapData_mDE7C46C04912FA8FBEE84A4B93E8D985E7E565E5 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<MapDisplay>()
inline MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* Object_FindObjectOfType_TisMapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18_m47838F7A89229D38AD6A2C557C5061A514FA6DBF (const RuntimeMethod* method)
{
	return ((  MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Texture2D TextureGenerator::TextureFromNoiseMap(System.Single[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureGenerator_TextureFromNoiseMap_m16C5AE8391E0CC0392084E4BB767BC56FDF4961B (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, const RuntimeMethod* method) ;
// System.Void MapDisplay::DrawMap(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDisplay_DrawMap_mA4062124D0C778C95D62F2B7517637D1BB46DAEE (MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) ;
// MeshData MeshGenerator::GenerateTerrainMesh(System.Single[,],System.Single,UnityEngine.AnimationCurve,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* MeshGenerator_GenerateTerrainMesh_m68F2DD2619D61CC30408B060B7D322D39A638251 (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, float ___heightScale1, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____meshCurve2, int32_t ___detailLevel3, const RuntimeMethod* method) ;
// System.Void MapDisplay::DrawMesh(MeshData,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDisplay_DrawMesh_mDFA3CB0ABE430EE9272C5546943D6A37545C8625 (MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* __this, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___meshData0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture1, const RuntimeMethod* method) ;
// System.Void MapGenerator/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m0DCE2740FFB8DFC0275E745AC58F0F5CBB79AFF4 (U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void MapGenerator/MapThreadInfo`1<MapData>::.ctor(System.Action`1<T>,T)
inline void MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB (MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9* __this, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback0, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___parameter1, const RuntimeMethod* method)
{
	((  void (*) (MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9*, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150*, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC, const RuntimeMethod*))MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB_gshared)(__this, ___callback0, ___parameter1, method);
}
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::Enqueue(T)
inline void Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6*, MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9, const RuntimeMethod*))Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB_gshared)(__this, ___item0, method);
}
// System.Void MapGenerator/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mFF3F3419CD46AA20FA0E079345C43C6FC0A42C93 (U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* __this, const RuntimeMethod* method) ;
// System.Void MapGenerator/MapThreadInfo`1<MeshData>::.ctor(System.Action`1<T>,T)
inline void MapThreadInfo_1__ctor_m9954D3719BFAA34C345D6431825B13BEAD31E087 (MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C* __this, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback0, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___parameter1, const RuntimeMethod* method)
{
	((  void (*) (MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C*, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046*, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23*, const RuntimeMethod*))MapThreadInfo_1__ctor_m13EF20463B2D791C56409A919EE61BE8DF3712AE_gshared)(__this, ___callback0, ___parameter1, method);
}
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>::Enqueue(T)
inline void Queue_1_Enqueue_m08518B2A37887E9038F52F1F2575866AB8E0A938 (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* __this, MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623*, MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C, const RuntimeMethod*))Queue_1_Enqueue_m8A25B47C1E0A2B57E5CF4706B078039921195CF3_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::get_Count()
inline int32_t Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_inline (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6*, const RuntimeMethod*))Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::Dequeue()
inline MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method)
{
	return ((  MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 (*) (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6*, const RuntimeMethod*))Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD_gshared)(__this, method);
}
// System.Void System.Action`1<MapData>::Invoke(T)
inline void Action_1_Invoke_m382A0BE1657DE6A53C457CAA70F632EB4F89130B_inline (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150*, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC, const RuntimeMethod*))Action_1_Invoke_m382A0BE1657DE6A53C457CAA70F632EB4F89130B_gshared_inline)(__this, ___obj0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>::get_Count()
inline int32_t Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_inline (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623*, const RuntimeMethod*))Queue_1_get_Count_mA933FD43BC368B3A5DAA7CDB5C59A24CEF59D2EA_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>::Dequeue()
inline MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C Queue_1_Dequeue_m9B1D1E26A57654C269693E7DC1E143C7124CF2A6 (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* __this, const RuntimeMethod* method)
{
	return ((  MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C (*) (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623*, const RuntimeMethod*))Queue_1_Dequeue_m402A7506856E5A7A4E868CC016E392BE028CC79B_gshared)(__this, method);
}
// System.Void System.Action`1<MeshData>::Invoke(T)
inline void Action_1_Invoke_mB7CB49B3315CA9DA3A615856AC8349F99909DA6C_inline (Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* __this, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046*, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single[,] Noise::GenerateNoise(System.Int32,System.Int32,System.Int32,System.Single,System.Int32,System.Single,System.Single,UnityEngine.Vector2,Noise/NormalizedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* Noise_GenerateNoise_mD5FD40CB7389BA414123B37AE4A5B72263DD3F17 (int32_t ___width0, int32_t ___height1, int32_t ___seed2, float ___noise3, int32_t ___octaves4, float ___persistence5, float ___lacunarity6, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset7, int32_t ___mode8, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void MapData::.ctor(System.Single[,],UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapData__ctor_m4ECEA0F635B6E5B0246C417FF0BDC2723D2D9EEC (MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MapData>>::.ctor()
inline void Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33 (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6*, const RuntimeMethod*))Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<MapGenerator/MapThreadInfo`1<MeshData>>::.ctor()
inline void Queue_1__ctor_m60B1DD2E2A02630A6E3C78965CE974B468864C7F (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623*, const RuntimeMethod*))Queue_1__ctor_m39963B85A8412FBE9936FB07B8C4543BB0105978_gshared)(__this, method);
}
// System.Void MapGenerator::MapDataThread(UnityEngine.Vector2,System.Action`1<MapData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_MapDataThread_mE366E8D8E8D1A8EAFCD16A32ADC20FE8612CC44F (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback1, const RuntimeMethod* method) ;
// System.Void MapGenerator::MeshDataThread(MapData,System.Int32,System.Action`1<MeshData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_MeshDataThread_m8DCB8410EBE2ED9F23914D45CD1FBD47A76BB216 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, int32_t ___lod1, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback2, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void MeshData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData__ctor_mA26165BBAA6EA52A2E979594B71FCF34D94023AB (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, int32_t ___meshWidth0, int32_t ___meshHeight1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void MeshData::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_AddTriangle_mA80626FED933D842FCDFFDC996A6B415F4DBEE22 (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void MovePlayer::MyInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_MyInput_mBF4E942A643568BBE84AA940237D06891DF3944D (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) ;
// System.Void MovePlayer::SpeedControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_SpeedControl_m209E55F6A78CB465A6EB3F5C52D7052CCD4C62D2 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void MovePlayer::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_PlayerMovement_mF2D111C6F7B79940F9F0B8FBA2B0DBFC10079647 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void MovePlayer::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_Jump_mB9C2F2E950243870A066FDBF0AD0322BC6BB3579 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___Seed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void EndlessTerrain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain_Start_m94BDBAA6C75DB194C2F3DBDEA977662B1052807A (EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A_m6387B103D58BB4922EFB46B2A4D63E383087D06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapGenerator = FindObjectOfType<MapGenerator>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* L_0;
		L_0 = Object_FindObjectOfType_TisMapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A_m6387B103D58BB4922EFB46B2A4D63E383087D06B(Object_FindObjectOfType_TisMapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A_m6387B103D58BB4922EFB46B2A4D63E383087D06B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___mapGenerator_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___mapGenerator_10), (void*)L_0);
		// maxViewDistance = detailsLevel[detailsLevel.Length - 1].visibleThreshold;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_1 = __this->___detailsLevel_5;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_2 = __this->___detailsLevel_5;
		float L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)))))->___visibleThreshold_1;
		((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___maxViewDistance_9 = L_3;
		// chunkSize = MapGenerator.mapChunkSize - 1;
		__this->___chunkSize_14 = ((int32_t)240);
		// chunkVisibleInView = Mathf.RoundToInt(maxViewDistance / chunkSize);
		float L_4 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___maxViewDistance_9;
		int32_t L_5 = __this->___chunkSize_14;
		int32_t L_6;
		L_6 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_4/((float)L_5))), NULL);
		__this->___chunkVisibleInView_15 = L_6;
		// UpdateVisibleChunk();
		EndlessTerrain_UpdateVisibleChunk_mF352F876DD8356CA3F376E5604E13C6670A17767(__this, NULL);
		// }
		return;
	}
}
// System.Void EndlessTerrain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain_Update_m964838FBA9AA2A458D6ECE39BE4501752FB0B70C (EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// viewerPosition = new Vector2(viewer.position.x, viewer.position.z) / scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___viewer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___viewer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_6, (2.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12 = L_7;
		// if ((viewerPositionOld-viewerPosition).sqrMagnitude > sqrChunkUpdateThreshold) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___viewerPositionOld_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		V_0 = L_10;
		float L_11;
		L_11 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		if ((!(((float)L_11) > ((float)(625.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// viewerPositionOld = viewerPosition;
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12;
		__this->___viewerPositionOld_13 = L_12;
		// UpdateVisibleChunk();
		EndlessTerrain_UpdateVisibleChunk_mF352F876DD8356CA3F376E5604E13C6670A17767(__this, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void EndlessTerrain::UpdateVisibleChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain_UpdateVisibleChunk_mF352F876DD8356CA3F376E5604E13C6670A17767 (EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m09D7C7DF92DF050972D9AF1E1FF57EEE7D469F02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB0EC1E943054B03C3FF8A7A261A2C63762649079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m58431EF3E193FCC29F16EB2B11D1AA887FF511D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m573BAAE58ADF33DBD93B1BD1BE1BFBD1DE8161BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mABBBEFCA0BD9EC2C0565C6D8053D3DFEF7852CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68C516C84D31033DAF687ED467761C9ED920BC8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// for (int i = 0; i < lastVisibleTerrain.Count; i++)
		V_2 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// lastVisibleTerrain[i].SetVisible(false);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* L_0 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17;
		int32_t L_1 = V_2;
		TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* L_2;
		L_2 = List_1_get_Item_m68C516C84D31033DAF687ED467761C9ED920BC8C(L_0, L_1, List_1_get_Item_m68C516C84D31033DAF687ED467761C9ED920BC8C_RuntimeMethod_var);
		TerrainChunk_SetVisible_m79BD62FC3668D5649762E7EC603EEEA999415216(L_2, (bool)0, NULL);
		// for (int i = 0; i < lastVisibleTerrain.Count; i++)
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < lastVisibleTerrain.Count; i++)
		int32_t L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* L_5 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17;
		int32_t L_6;
		L_6 = List_1_get_Count_mABBBEFCA0BD9EC2C0565C6D8053D3DFEF7852CBE_inline(L_5, List_1_get_Count_mABBBEFCA0BD9EC2C0565C6D8053D3DFEF7852CBE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// lastVisibleTerrain.Clear();
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* L_7 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17;
		List_1_Clear_m573BAAE58ADF33DBD93B1BD1BE1BFBD1DE8161BD_inline(L_7, List_1_Clear_m573BAAE58ADF33DBD93B1BD1BE1BFBD1DE8161BD_RuntimeMethod_var);
		// int currentChunkCoordX = Mathf.RoundToInt(viewerPosition.x / chunkSize);
		float L_8 = (&((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12)->___x_0;
		int32_t L_9 = __this->___chunkSize_14;
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_8/((float)L_9))), NULL);
		V_0 = L_10;
		// int currentChunkCoordY = Mathf.RoundToInt(viewerPosition.y / chunkSize);
		float L_11 = (&((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12)->___y_1;
		int32_t L_12 = __this->___chunkSize_14;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_11/((float)L_12))), NULL);
		V_1 = L_13;
		// int yOffset = -chunkVisibleInView;
		int32_t L_14 = __this->___chunkVisibleInView_15;
		V_3 = ((-L_14));
		goto IL_00e8;
	}

IL_006a:
	{
		// int xOffset = -chunkVisibleInView;
		int32_t L_15 = __this->___chunkVisibleInView_15;
		V_4 = ((-L_15));
		goto IL_00da;
	}

IL_0075:
	{
		// Vector2 viewedChunkCoord =
		//     new Vector2(currentChunkCoordX + xOffset,
		//         currentChunkCoordY + yOffset);
		int32_t L_16 = V_0;
		int32_t L_17 = V_4;
		int32_t L_18 = V_1;
		int32_t L_19 = V_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)((int32_t)il2cpp_codegen_add(L_16, L_17))), ((float)((int32_t)il2cpp_codegen_add(L_18, L_19))), NULL);
		// if (terrainChunkDictionary.ContainsKey(viewedChunkCoord))
		Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* L_20 = __this->___terrainChunkDictionary_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_5;
		bool L_22;
		L_22 = Dictionary_2_ContainsKey_mB0EC1E943054B03C3FF8A7A261A2C63762649079(L_20, L_21, Dictionary_2_ContainsKey_mB0EC1E943054B03C3FF8A7A261A2C63762649079_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// terrainChunkDictionary[viewedChunkCoord].UpdateTerrainChunk();
		Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* L_23 = __this->___terrainChunkDictionary_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_5;
		TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* L_25;
		L_25 = Dictionary_2_get_Item_m58431EF3E193FCC29F16EB2B11D1AA887FF511D8(L_23, L_24, Dictionary_2_get_Item_m58431EF3E193FCC29F16EB2B11D1AA887FF511D8_RuntimeMethod_var);
		TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E(L_25, NULL);
		goto IL_00d4;
	}

IL_00a8:
	{
		// terrainChunkDictionary
		//     .Add(viewedChunkCoord,
		//     new TerrainChunk(viewedChunkCoord,
		//         chunkSize,
		//         detailsLevel,
		//         transform, mapMaterial));
		Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* L_26 = __this->___terrainChunkDictionary_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_5;
		int32_t L_29 = __this->___chunkSize_14;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_30 = __this->___detailsLevel_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___mapMaterial_11;
		TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* L_33 = (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B*)il2cpp_codegen_object_new(TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B_il2cpp_TypeInfo_var);
		TerrainChunk__ctor_m5FB92351F2E481091555DBE67799E6199347CC38(L_33, L_28, L_29, L_30, L_31, L_32, NULL);
		Dictionary_2_Add_m09D7C7DF92DF050972D9AF1E1FF57EEE7D469F02(L_26, L_27, L_33, Dictionary_2_Add_m09D7C7DF92DF050972D9AF1E1FF57EEE7D469F02_RuntimeMethod_var);
	}

IL_00d4:
	{
		// xOffset++
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00da:
	{
		// xOffset <= chunkVisibleInView;
		int32_t L_35 = V_4;
		int32_t L_36 = __this->___chunkVisibleInView_15;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_0075;
		}
	}
	{
		// yOffset++
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e8:
	{
		// yOffset <= chunkVisibleInView;
		int32_t L_38 = V_3;
		int32_t L_39 = __this->___chunkVisibleInView_15;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_006a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EndlessTerrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain__ctor_m2C992D8EB070C8224108D26595566F2A539AE9A1 (EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF32BB1F28B16ED86DAF19694B301DE68FD06A06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<Vector2, TerrainChunk>
		//     terrainChunkDictionary = new Dictionary<Vector2, TerrainChunk>();
		Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E* L_0 = (Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E*)il2cpp_codegen_object_new(Dictionary_2_t5B0822603F4F748FE0AD2C0F324AD1C5523E5F3E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF32BB1F28B16ED86DAF19694B301DE68FD06A06E(L_0, Dictionary_2__ctor_mF32BB1F28B16ED86DAF19694B301DE68FD06A06E_RuntimeMethod_var);
		__this->___terrainChunkDictionary_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainChunkDictionary_16), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void EndlessTerrain::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndlessTerrain__cctor_mBC80186527C1EE6ECF898444A8EC981099FB9701 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB083A66D4C4368C59F6DBAA87CDF0CE8CE070779_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<TerrainChunk> lastVisibleTerrain = new List<TerrainChunk>();
		List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* L_0 = (List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04*)il2cpp_codegen_object_new(List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04_il2cpp_TypeInfo_var);
		List_1__ctor_mB083A66D4C4368C59F6DBAA87CDF0CE8CE070779(L_0, List_1__ctor_mB083A66D4C4368C59F6DBAA87CDF0CE8CE070779_RuntimeMethod_var);
		((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17), (void*)L_0);
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
// System.Void EndlessTerrain/TerrainChunk::.ctor(UnityEngine.Vector2,System.Int32,EndlessTerrain/LODInfo[],UnityEngine.Transform,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk__ctor_m5FB92351F2E481091555DBE67799E6199347CC38 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___coord0, int32_t ___size1, LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* ___detailsLevel2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainChunk_OnMapDataReceived_m631C91CE493BAB10F08086ED4463AD0BE370ECE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29BB899F280367BA902E9E306FD5279A7822DE34);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// int prevLODIndex = -1;
		__this->___prevLODIndex_10 = (-1);
		// public TerrainChunk(Vector2 coord, int size, LODInfo[] detailsLevel, Transform parent, Material material)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.detailsLevel = detailsLevel;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_0 = ___detailsLevel2;
		__this->___detailsLevel_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___detailsLevel_6), (void*)L_0);
		// position = coord * size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___coord0;
		int32_t L_2 = ___size1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, ((float)L_2), NULL);
		__this->___position_0 = L_3;
		// bounds = new Bounds(position, Vector2.one * size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		int32_t L_7 = ___size1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, ((float)L_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_10), L_5, L_9, /*hidden argument*/NULL);
		__this->___bounds_2 = L_10;
		// Vector3 positionV3 = new Vector3(position.x, 0, position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___position_0);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___position_0);
		float L_14 = L_13->___y_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_12, (0.0f), L_14, NULL);
		// meshObject = new GameObject("Terrain Chunk");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_15, _stringLiteral29BB899F280367BA902E9E306FD5279A7822DE34, NULL);
		__this->___meshObject_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshObject_1), (void*)L_15);
		// meshRenderer = meshObject.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___meshObject_1;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_17;
		L_17 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_16, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		__this->___meshRenderer_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_3), (void*)L_17);
		// meshFilter = meshObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___meshObject_1;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_19;
		L_19 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_18, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		__this->___meshFilter_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_5), (void*)L_19);
		// meshCollider = meshObject.AddComponent<MeshCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___meshObject_1;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_21;
		L_21 = GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7(L_20, GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		__this->___meshCollider_4 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshCollider_4), (void*)L_21);
		// meshRenderer.material = material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_22 = __this->___meshRenderer_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___material4;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_22, L_23, NULL);
		// meshObject.transform.position = positionV3* scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___meshObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (2.0f), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_27, NULL);
		// meshObject.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___meshObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___parent3;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_29, L_30, NULL);
		// meshObject.transform.localScale = Vector3.one * scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___meshObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, (2.0f), NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_32, L_34, NULL);
		// SetVisible(false);
		TerrainChunk_SetVisible_m79BD62FC3668D5649762E7EC603EEEA999415216(__this, (bool)0, NULL);
		// lodMeshes = new LODMesh[detailsLevel.Length];
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_35 = ___detailsLevel2;
		LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30* L_36 = (LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30*)(LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30*)SZArrayNew(LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)));
		__this->___lodMeshes_7 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lodMeshes_7), (void*)L_36);
		// for(int i = 0; i < detailsLevel.Length; i++) {
		V_1 = 0;
		goto IL_0149;
	}

IL_0120:
	{
		// lodMeshes[i] = new LODMesh(detailsLevel[i].lod, UpdateTerrainChunk);
		LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30* L_37 = __this->___lodMeshes_7;
		int32_t L_38 = V_1;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_39 = ___detailsLevel2;
		int32_t L_40 = V_1;
		int32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___lod_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_42 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_42, __this, (intptr_t)((void*)TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E_RuntimeMethod_var), NULL);
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_43 = (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D*)il2cpp_codegen_object_new(LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D_il2cpp_TypeInfo_var);
		LODMesh__ctor_m050277EB408F72FFC22E9367CA4E278781120757(L_43, L_41, L_42, NULL);
		ArrayElementTypeCheck (L_37, L_43);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D*)L_43);
		// for(int i = 0; i < detailsLevel.Length; i++) {
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0149:
	{
		// for(int i = 0; i < detailsLevel.Length; i++) {
		int32_t L_45 = V_1;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_46 = ___detailsLevel2;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0120;
		}
	}
	{
		// mapGenerator.RequestMapData (position, OnMapDataReceived);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* L_47 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___mapGenerator_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = __this->___position_0;
		Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* L_49 = (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150*)il2cpp_codegen_object_new(Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150_il2cpp_TypeInfo_var);
		Action_1__ctor_mC114E899A64CBEA2CEE0BECB9204D57DF68A016A(L_49, __this, (intptr_t)((void*)TerrainChunk_OnMapDataReceived_m631C91CE493BAB10F08086ED4463AD0BE370ECE5_RuntimeMethod_var), NULL);
		MapGenerator_RequestMapData_m2AD9DF6105BA3CB7A0D8AC68F9F97B565458C902(L_47, L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void EndlessTerrain/TerrainChunk::OnMapDataReceived(MapData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk_OnMapDataReceived_m631C91CE493BAB10F08086ED4463AD0BE370ECE5 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// this.mapData = mapData;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_0 = ___mapData0;
		__this->___mapData_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mapData_8))->___noiseMap_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mapData_8))->___colorMap_1), (void*)NULL);
		#endif
		// mapDataReceived = true;
		__this->___mapDataReceived_9 = (bool)1;
		// Texture2D texture = TextureGenerator.TextureFromColorMap(mapData.colorMap, MapGenerator.mapChunkSize, MapGenerator.mapChunkSize);
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_1 = ___mapData0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = L_1.___colorMap_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E(L_2, ((int32_t)241), ((int32_t)241), NULL);
		V_0 = L_3;
		// meshRenderer.material.mainTexture = texture;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_0;
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_5, L_6, NULL);
		// UpdateTerrainChunk();
		TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E(__this, NULL);
		// }
		return;
	}
}
// System.Void EndlessTerrain/TerrainChunk::UpdateTerrainChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk_UpdateTerrainChunk_mD05F661E59032705EB20066F27D41465BB2F1F1E (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC19DC79365375F7A84452E0B749ACC29F84BB2FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* V_4 = NULL;
	{
		// if (mapDataReceived)
		bool L_0 = __this->___mapDataReceived_9;
		if (!L_0)
		{
			goto IL_00d8;
		}
	}
	{
		// float neareastViewerDistance = Mathf.Sqrt(bounds.SqrDistance(viewerPosition));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = (&__this->___bounds_2);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___viewerPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		float L_4;
		L_4 = Bounds_SqrDistance_mC8AB3C4A26FE7CC040727103B5F7111514FA4062(L_1, L_3, NULL);
		float L_5;
		L_5 = sqrtf(L_4);
		V_0 = L_5;
		// bool visible = neareastViewerDistance <= maxViewDistance;
		float L_6 = V_0;
		float L_7 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___maxViewDistance_9;
		V_1 = (bool)((((int32_t)((!(((float)L_6) <= ((float)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (visible) {
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00d1;
		}
	}
	{
		// int lodIndex = 0;
		V_2 = 0;
		// for(int i = 0; i< detailsLevel.Length-1; i++) {
		V_3 = 0;
		goto IL_005a;
	}

IL_003e:
	{
		// if (neareastViewerDistance > detailsLevel[i].visibleThreshold){
		float L_9 = V_0;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_10 = __this->___detailsLevel_6;
		int32_t L_11 = V_3;
		float L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___visibleThreshold_1;
		if ((!(((float)L_9) > ((float)L_12))))
		{
			goto IL_0067;
		}
	}
	{
		// lodIndex = i+1;
		int32_t L_13 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// for(int i = 0; i< detailsLevel.Length-1; i++) {
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005a:
	{
		// for(int i = 0; i< detailsLevel.Length-1; i++) {
		int32_t L_15 = V_3;
		LODInfoU5BU5D_t735749942CBB953C70DA82931151FBC4CFBCD43E* L_16 = __this->___detailsLevel_6;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), 1)))))
		{
			goto IL_003e;
		}
	}

IL_0067:
	{
		// if (lodIndex != prevLODIndex){
		int32_t L_17 = V_2;
		int32_t L_18 = __this->___prevLODIndex_10;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_00c6;
		}
	}
	{
		// LODMesh lodMesh = lodMeshes[lodIndex];
		LODMeshU5BU5D_t68C30F65EEC2D810C2A48148358D6A7B13D44F30* L_19 = __this->___lodMeshes_7;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = L_22;
		// if(lodMesh.hasMesh) {
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_23 = V_4;
		bool L_24 = L_23->___hasMesh_2;
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		// prevLODIndex = lodIndex;
		int32_t L_25 = V_2;
		__this->___prevLODIndex_10 = L_25;
		// meshFilter.mesh = lodMesh.mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_26 = __this->___meshFilter_5;
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_27 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = L_27->___mesh_0;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_26, L_28, NULL);
		// meshCollider.sharedMesh = lodMesh.mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_29 = __this->___meshCollider_4;
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_30 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = L_30->___mesh_0;
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_29, L_31, NULL);
		goto IL_00c6;
	}

IL_00b0:
	{
		// else if (!lodMesh.hasRequestedMesh){
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_32 = V_4;
		bool L_33 = L_32->___hasRequestedMesh_1;
		if (L_33)
		{
			goto IL_00c6;
		}
	}
	{
		// lodMesh.RequestMesh(mapData);
		LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* L_34 = V_4;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_35 = __this->___mapData_8;
		LODMesh_RequestMesh_m35646926A6D6DCFDE7372FC93DF8465FC28D0CEB(L_34, L_35, NULL);
	}

IL_00c6:
	{
		// lastVisibleTerrain.Add(this);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		List_1_tB1A2B8585C5C58198AF97F01674AFBA1CBFD3B04* L_36 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___lastVisibleTerrain_17;
		List_1_Add_mC19DC79365375F7A84452E0B749ACC29F84BB2FC_inline(L_36, __this, List_1_Add_mC19DC79365375F7A84452E0B749ACC29F84BB2FC_RuntimeMethod_var);
	}

IL_00d1:
	{
		// SetVisible (visible);}
		bool L_37 = V_1;
		TerrainChunk_SetVisible_m79BD62FC3668D5649762E7EC603EEEA999415216(__this, L_37, NULL);
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void EndlessTerrain/TerrainChunk::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChunk_SetVisible_m79BD62FC3668D5649762E7EC603EEEA999415216 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, bool ___visible0, const RuntimeMethod* method) 
{
	{
		// meshObject.SetActive (visible);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___meshObject_1;
		bool L_1 = ___visible0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean EndlessTerrain/TerrainChunk::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainChunk_IsVisible_m1402018F7E5BB070D683CD0341EB73F8BF7425A2 (TerrainChunk_t4F535825325F05654BBA83FA6EC45FFB00F9BD5B* __this, const RuntimeMethod* method) 
{
	{
		// return meshObject.activeSelf;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___meshObject_1;
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		return L_1;
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
// System.Void EndlessTerrain/LODMesh::.ctor(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LODMesh__ctor_m050277EB408F72FFC22E9367CA4E278781120757 (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* __this, int32_t ___lod0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___updateCallback1, const RuntimeMethod* method) 
{
	{
		// public LODMesh(int lod, System.Action updateCallback) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.lod = lod;
		int32_t L_0 = ___lod0;
		__this->___lod_3 = L_0;
		// this.updateCallback = updateCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___updateCallback1;
		__this->___updateCallback_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___updateCallback_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void EndlessTerrain/LODMesh::OnMeshDataReceived(MeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LODMesh_OnMeshDataReceived_m3C3AAC5821D0C5D0AD3EC6FF1F1CEE4370974B75 (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* __this, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___meshData0, const RuntimeMethod* method) 
{
	{
		// mesh = meshData.CreateMesh();
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_0 = ___meshData0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshData_CreateMesh_m0C0526F729CCAB828F02CC540CA1684C67D2458A(L_0, NULL);
		__this->___mesh_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)L_1);
		// hasMesh = true;
		__this->___hasMesh_2 = (bool)1;
		// updateCallback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___updateCallback_4;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Void EndlessTerrain/LODMesh::RequestMesh(MapData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LODMesh_RequestMesh_m35646926A6D6DCFDE7372FC93DF8465FC28D0CEB (LODMesh_t25226899F762D165D6F3F88DC0D500FF8EF3A68D* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODMesh_OnMeshDataReceived_m3C3AAC5821D0C5D0AD3EC6FF1F1CEE4370974B75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasRequestedMesh = true;
		__this->___hasRequestedMesh_1 = (bool)1;
		// mapGenerator.RequestMeshData(mapData, lod, OnMeshDataReceived);
		il2cpp_codegen_runtime_class_init_inline(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var);
		MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* L_0 = ((EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_StaticFields*)il2cpp_codegen_static_fields_for(EndlessTerrain_t99E4E5EE978D6AF9355EEF0C1C35C75FA1DE4B3C_il2cpp_TypeInfo_var))->___mapGenerator_10;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_1 = ___mapData0;
		int32_t L_2 = __this->___lod_3;
		Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* L_3 = (Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046*)il2cpp_codegen_object_new(Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046_il2cpp_TypeInfo_var);
		Action_1__ctor_mB3E1A6AE22F290C5543B05A99F0DD1F57AAAF9D8(L_3, __this, (intptr_t)((void*)LODMesh_OnMeshDataReceived_m3C3AAC5821D0C5D0AD3EC6FF1F1CEE4370974B75_RuntimeMethod_var), NULL);
		MapGenerator_RequestMeshData_m4E6637A7DFAA228B0B08512F6BA919CAB21B46CA(L_0, L_1, L_2, L_3, NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single[,] FallOffMap::GenerateFallOffMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* FallOffMap_GenerateFallOffMap_m64E839A27C84D285391CB9C3BE12212A3B33DAE8 (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// float[,] map = new float[size, size];
		int32_t L_0 = ___size0;
		int32_t L_1 = ___size0;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_2;
		// for (int i = 0; i < size; i++)
		V_1 = 0;
		goto IL_0060;
	}

IL_000c:
	{
		// for (int j = 0; j < size; j++)
		V_2 = 0;
		goto IL_0058;
	}

IL_0010:
	{
		// float x = i / (float)size * 2 - 1;
		int32_t L_4 = V_1;
		int32_t L_5 = ___size0;
		// float y = j / (float)size * 2 - 1;
		int32_t L_6 = V_2;
		int32_t L_7 = ___size0;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_6)/((float)L_7))), (2.0f))), (1.0f)));
		// float value = MathF.Max(Mathf.Abs(x), Mathf.Abs(y));
		float L_8;
		L_8 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_4)/((float)L_5))), (2.0f))), (1.0f))));
		float L_9 = V_3;
		float L_10;
		L_10 = fabsf(L_9);
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = MathF_Max_m5C110C404CE4EE4A19347D8658D7B723A301A6CA_inline(L_8, L_10, NULL);
		V_4 = L_11;
		// map[i, j] = Evaluate(value);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		float L_15 = V_4;
		float L_16;
		L_16 = FallOffMap_Evaluate_mB7D2A054EAA0FE5F86827240665B85B4063D0F02(L_15, NULL);
		(L_12)->SetAtUnchecked(L_13, L_14, L_16);
		// for (int j = 0; j < size; j++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int j = 0; j < size; j++)
		int32_t L_18 = V_2;
		int32_t L_19 = ___size0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = 0; i < size; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_21 = V_1;
		int32_t L_22 = ___size0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000c;
		}
	}
	{
		// return map;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_23 = V_0;
		return L_23;
	}
}
// System.Single FallOffMap::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FallOffMap_Evaluate_mB7D2A054EAA0FE5F86827240665B85B4063D0F02 (float ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float a = 3;
		V_0 = (3.0f);
		// float b = 2.2f;
		V_1 = (2.20000005f);
		// return Mathf.Pow(value, a) / (Mathf.Pow(value, a) + Mathf.Pow(b - b * value, a));
		float L_0 = ___value0;
		float L_1 = V_0;
		float L_2;
		L_2 = powf(L_0, L_1);
		float L_3 = ___value0;
		float L_4 = V_0;
		float L_5;
		L_5 = powf(L_3, L_4);
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = ___value0;
		float L_9 = V_0;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)))), L_9);
		return ((float)(L_2/((float)il2cpp_codegen_add(L_5, L_10))));
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
// System.Void HideOnPlay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideOnPlay_Start_mFC814559720F728585616CD85D1AE9625C9769C2 (HideOnPlay_t476EA6BF700321494E836B84AA75F549B5CC3070* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HideOnPlay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideOnPlay_Update_m003B8F101D43EA817C1F5B8FBE477109B6C760B6 (HideOnPlay_t476EA6BF700321494E836B84AA75F549B5CC3070* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HideOnPlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideOnPlay__ctor_mF72507AA0DAB2EA0D9EA76460ED04A2323954BF5 (HideOnPlay_t476EA6BF700321494E836B84AA75F549B5CC3070* __this, const RuntimeMethod* method) 
{
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
// System.Void MapDisplay::DrawMap(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDisplay_DrawMap_mA4062124D0C778C95D62F2B7517637D1BB46DAEE (MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) 
{
	{
		// textureRender.sharedMaterial.mainTexture = texture;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___textureRender_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_1, L_2, NULL);
		// textureRender.transform.localScale = new Vector3(texture.width, 1, texture.height);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___textureRender_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___texture0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)L_6), (1.0f), ((float)L_8), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void MapDisplay::DrawMesh(MeshData,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDisplay_DrawMesh_mDFA3CB0ABE430EE9272C5546943D6A37545C8625 (MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* __this, MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* ___meshData0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture1, const RuntimeMethod* method) 
{
	{
		// meshFilter.sharedMesh = meshData.CreateMesh();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_5;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_1 = ___meshData0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2;
		L_2 = MeshData_CreateMesh_m0C0526F729CCAB828F02CC540CA1684C67D2458A(L_1, NULL);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_0, L_2, NULL);
		// meshRenderer.sharedMaterial.mainTexture = texture;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture1;
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void MapDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDisplay__ctor_m4C40E923B2DCC0446D6AF35A8CF97EA55799784C (MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* __this, const RuntimeMethod* method) 
{
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
// System.Void MapGenerator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_Awake_mCF50A61DCFF1D0F2DBB3B9E864C65B8C01444ED7 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	{
		// falloffMap = FallOffMap.GenerateFallOffMap(mapChunkSize);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0;
		L_0 = FallOffMap_GenerateFallOffMap_m64E839A27C84D285391CB9C3BE12212A3B33DAE8(((int32_t)241), NULL);
		__this->___falloffMap_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___falloffMap_19), (void*)L_0);
		// }
		return;
	}
}
// System.Void MapGenerator::DrawMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_DrawMap_m75FEF6AFF316BE97CCB3960BEBE441B41D5617D2 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18_m47838F7A89229D38AD6A2C557C5061A514FA6DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* V_1 = NULL;
	{
		// MapData mapData = GenerateMapData(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_1;
		L_1 = MapGenerator_GenerateMapData_mDE7C46C04912FA8FBEE84A4B93E8D985E7E565E5(__this, L_0, NULL);
		V_0 = L_1;
		// MapDisplay mdisplay = FindObjectOfType<MapDisplay>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* L_2;
		L_2 = Object_FindObjectOfType_TisMapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18_m47838F7A89229D38AD6A2C557C5061A514FA6DBF(Object_FindObjectOfType_TisMapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18_m47838F7A89229D38AD6A2C557C5061A514FA6DBF_RuntimeMethod_var);
		V_1 = L_2;
		// if (drawMode == DrawMode.NoiseMap)
		int32_t L_3 = __this->___drawMode_5;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// mdisplay.DrawMap(TextureGenerator.TextureFromNoiseMap(mapData.noiseMap));
		MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* L_4 = V_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_5 = V_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_6 = L_5.___noiseMap_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7;
		L_7 = TextureGenerator_TextureFromNoiseMap_m16C5AE8391E0CC0392084E4BB767BC56FDF4961B(L_6, NULL);
		MapDisplay_DrawMap_mA4062124D0C778C95D62F2B7517637D1BB46DAEE(L_4, L_7, NULL);
		return;
	}

IL_002c:
	{
		// else if (drawMode == DrawMode.ColorMap)
		int32_t L_8 = __this->___drawMode_5;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		// mdisplay
		//     .DrawMap(TextureGenerator
		//         .TextureFromColorMap(mapData.colorMap, mapChunkSize, mapChunkSize));
		MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* L_9 = V_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_10 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = L_10.___colorMap_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E(L_11, ((int32_t)241), ((int32_t)241), NULL);
		MapDisplay_DrawMap_mA4062124D0C778C95D62F2B7517637D1BB46DAEE(L_9, L_12, NULL);
		return;
	}

IL_0051:
	{
		// else if (drawMode == DrawMode.Mesh)
		int32_t L_13 = __this->___drawMode_5;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0093;
		}
	}
	{
		// mdisplay.DrawMesh(MeshGenerator.GenerateTerrainMesh(mapData.noiseMap,meshHeightScale,meshHeightCurve,detailLevelEditor),TextureGenerator
		//         .TextureFromColorMap(mapData.colorMap, mapChunkSize, mapChunkSize));
		MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* L_14 = V_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_15 = V_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_16 = L_15.___noiseMap_0;
		float L_17 = __this->___meshHeightScale_14;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_18 = __this->___meshHeightCurve_18;
		int32_t L_19 = __this->___detailLevelEditor_7;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_20;
		L_20 = MeshGenerator_GenerateTerrainMesh_m68F2DD2619D61CC30408B060B7D322D39A638251(L_16, L_17, L_18, L_19, NULL);
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_21 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_22 = L_21.___colorMap_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23;
		L_23 = TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E(L_22, ((int32_t)241), ((int32_t)241), NULL);
		MapDisplay_DrawMesh_mDFA3CB0ABE430EE9272C5546943D6A37545C8625(L_14, L_20, L_23, NULL);
		return;
	}

IL_0093:
	{
		// else if(drawMode == DrawMode.FallOffMap){
		int32_t L_24 = __this->___drawMode_5;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00b1;
		}
	}
	{
		// mdisplay.DrawMap(TextureGenerator.TextureFromNoiseMap(FallOffMap.GenerateFallOffMap(mapChunkSize)));
		MapDisplay_t1032304BAA80EE4330F7C10F1759AF475B5F0D18* L_25 = V_1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_26;
		L_26 = FallOffMap_GenerateFallOffMap_m64E839A27C84D285391CB9C3BE12212A3B33DAE8(((int32_t)241), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27;
		L_27 = TextureGenerator_TextureFromNoiseMap_m16C5AE8391E0CC0392084E4BB767BC56FDF4961B(L_26, NULL);
		MapDisplay_DrawMap_mA4062124D0C778C95D62F2B7517637D1BB46DAEE(L_25, L_27, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void MapGenerator::RequestMapData(UnityEngine.Vector2,System.Action`1<MapData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_RequestMapData_m2AD9DF6105BA3CB7A0D8AC68F9F97B565458C902 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRequestMapDataU3Eb__0_mDC99ABD666526DE25FB4AC57EBD04F8E85AA3B3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* L_0 = (U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m0DCE2740FFB8DFC0275E745AC58F0F5CBB79AFF4(L_0, NULL);
		U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* L_1 = L_0;
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* L_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___center0;
		L_2->___center_1 = L_3;
		U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* L_4 = L_2;
		Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* L_5 = ___callback1;
		L_4->___callback_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___callback_2), (void*)L_5);
		// ThreadStart newThread = delegate {
		//     MapDataThread(center, callback);
		// };
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_6 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_6, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CRequestMapDataU3Eb__0_mDC99ABD666526DE25FB4AC57EBD04F8E85AA3B3C_RuntimeMethod_var), NULL);
		// new Thread(newThread).Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_7, L_6, NULL);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_7, NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::MapDataThread(UnityEngine.Vector2,System.Action`1<MapData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_MapDataThread_mE366E8D8E8D1A8EAFCD16A32ADC20FE8612CC44F (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* V_1 = NULL;
	bool V_2 = false;
	{
		// MapData mapData = GenerateMapData(center);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___center0;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_1;
		L_1 = MapGenerator_GenerateMapData_mDE7C46C04912FA8FBEE84A4B93E8D985E7E565E5(__this, L_0, NULL);
		V_0 = L_1;
		// lock (mapThreadInfoQueue){
		Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_2 = __this->___mapThreadInfoQueue_20;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0036;
					}
				}
				{
					Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0036:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
			// mapThreadInfoQueue.Enqueue(new MapThreadInfo<MapData> (callback, mapData));
			Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_6 = __this->___mapThreadInfoQueue_20;
			Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* L_7 = ___callback1;
			MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_8 = V_0;
			MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 L_9;
			memset((&L_9), 0, sizeof(L_9));
			MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB((&L_9), L_7, L_8, /*hidden argument*/MapThreadInfo_1__ctor_mA817F63D506F141F093DA3798F265D22CA1C71AB_RuntimeMethod_var);
			Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB(L_6, L_9, Queue_1_Enqueue_mD8AEE54346F80CC84B2F4B3105A265C6F9289FCB_RuntimeMethod_var);
			// }
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void MapGenerator::RequestMeshData(MapData,System.Int32,System.Action`1<MeshData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_RequestMeshData_m4E6637A7DFAA228B0B08512F6BA919CAB21B46CA (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, int32_t ___lod1, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CRequestMeshDataU3Eb__0_mE9C58E2520A00A0206E84C6BA04FA042DBB4E120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* L_0 = (U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass23_0__ctor_mFF3F3419CD46AA20FA0E079345C43C6FC0A42C93(L_0, NULL);
		U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* L_1 = L_0;
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* L_2 = L_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_3 = ___mapData0;
		L_2->___mapData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_2->___mapData_1))->___noiseMap_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_2->___mapData_1))->___colorMap_1), (void*)NULL);
		#endif
		U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* L_4 = L_2;
		int32_t L_5 = ___lod1;
		L_4->___lod_2 = L_5;
		U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* L_6 = L_4;
		Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* L_7 = ___callback2;
		L_6->___callback_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___callback_3), (void*)L_7);
		// ThreadStart newThread = delegate {
		//     MeshDataThread(mapData, lod, callback);
		// };
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_8 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_8, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CRequestMeshDataU3Eb__0_mE9C58E2520A00A0206E84C6BA04FA042DBB4E120_RuntimeMethod_var), NULL);
		// new Thread(newThread).Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_9, L_8, NULL);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_9, NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::MeshDataThread(MapData,System.Int32,System.Action`1<MeshData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_MeshDataThread_m8DCB8410EBE2ED9F23914D45CD1FBD47A76BB216 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___mapData0, int32_t ___lod1, Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapThreadInfo_1__ctor_m9954D3719BFAA34C345D6431825B13BEAD31E087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m08518B2A37887E9038F52F1F2575866AB8E0A938_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* V_0 = NULL;
	Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* V_1 = NULL;
	bool V_2 = false;
	{
		// MeshData meshData = MeshGenerator.GenerateTerrainMesh(mapData.noiseMap, meshHeightScale, meshHeightCurve, lod);
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_0 = ___mapData0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_1 = L_0.___noiseMap_0;
		float L_2 = __this->___meshHeightScale_14;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___meshHeightCurve_18;
		int32_t L_4 = ___lod1;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_5;
		L_5 = MeshGenerator_GenerateTerrainMesh_m68F2DD2619D61CC30408B060B7D322D39A638251(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// lock (meshDataThreadInfoQueue) {
		Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_6 = __this->___meshDataThreadInfoQueue_21;
		V_1 = L_6;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_2;
					if (!L_7)
					{
						goto IL_0047;
					}
				}
				{
					Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_8 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_9 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_2), NULL);
			// meshDataThreadInfoQueue.Enqueue(new MapThreadInfo<MeshData>(callback, meshData));
			Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_10 = __this->___meshDataThreadInfoQueue_21;
			Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* L_11 = ___callback2;
			MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_12 = V_0;
			MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C L_13;
			memset((&L_13), 0, sizeof(L_13));
			MapThreadInfo_1__ctor_m9954D3719BFAA34C345D6431825B13BEAD31E087((&L_13), L_11, L_12, /*hidden argument*/MapThreadInfo_1__ctor_m9954D3719BFAA34C345D6431825B13BEAD31E087_RuntimeMethod_var);
			Queue_1_Enqueue_m08518B2A37887E9038F52F1F2575866AB8E0A938(L_10, L_13, Queue_1_Enqueue_m08518B2A37887E9038F52F1F2575866AB8E0A938_RuntimeMethod_var);
			// }
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void MapGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_Update_m3BF7937BB9175B887C542C8C17B2CE198AB07FBC (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9B1D1E26A57654C269693E7DC1E143C7124CF2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (mapThreadInfoQueue.Count > 0) {
		Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_0 = __this->___mapThreadInfoQueue_20;
		int32_t L_1;
		L_1 = Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_inline(L_0, Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// for (int i =0; i< mapThreadInfoQueue.Count; i++) {
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		// MapThreadInfo<MapData> threadInfo = mapThreadInfoQueue.Dequeue ();
		Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_2 = __this->___mapThreadInfoQueue_20;
		MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 L_3;
		L_3 = Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD(L_2, Queue_1_Dequeue_m483F5D3E433F6686CAB8F4D4ACBAEF34861E66AD_RuntimeMethod_var);
		V_1 = L_3;
		// threadInfo.callback (threadInfo.parameter);
		MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 L_4 = V_1;
		Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* L_5 = L_4.___callback_0;
		MapThreadInfo_1_t357F12F36EAC0620D727F1DFF720D781DFE50FB9 L_6 = V_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_7 = L_6.___parameter_1;
		Action_1_Invoke_m382A0BE1657DE6A53C457CAA70F632EB4F89130B_inline(L_5, L_7, NULL);
		// for (int i =0; i< mapThreadInfoQueue.Count; i++) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		// for (int i =0; i< mapThreadInfoQueue.Count; i++) {
		int32_t L_9 = V_0;
		Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_10 = __this->___mapThreadInfoQueue_20;
		int32_t L_11;
		L_11 = Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_inline(L_10, Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}

IL_0041:
	{
		// if (meshDataThreadInfoQueue.Count > 0) {
		Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_12 = __this->___meshDataThreadInfoQueue_21;
		int32_t L_13;
		L_13 = Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_inline(L_12, Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// for (int i =0; i< meshDataThreadInfoQueue.Count; i++) {
		V_2 = 0;
		goto IL_0074;
	}

IL_0053:
	{
		// MapThreadInfo<MeshData> threadInfo = meshDataThreadInfoQueue.Dequeue ();
		Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_14 = __this->___meshDataThreadInfoQueue_21;
		MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C L_15;
		L_15 = Queue_1_Dequeue_m9B1D1E26A57654C269693E7DC1E143C7124CF2A6(L_14, Queue_1_Dequeue_m9B1D1E26A57654C269693E7DC1E143C7124CF2A6_RuntimeMethod_var);
		V_3 = L_15;
		// threadInfo.callback (threadInfo.parameter);
		MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C L_16 = V_3;
		Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* L_17 = L_16.___callback_0;
		MapThreadInfo_1_tC81F51B187E5BD38505C97F471778B2448EC725C L_18 = V_3;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_19 = L_18.___parameter_1;
		Action_1_Invoke_mB7CB49B3315CA9DA3A615856AC8349F99909DA6C_inline(L_17, L_19, NULL);
		// for (int i =0; i< meshDataThreadInfoQueue.Count; i++) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0074:
	{
		// for (int i =0; i< meshDataThreadInfoQueue.Count; i++) {
		int32_t L_21 = V_2;
		Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_22 = __this->___meshDataThreadInfoQueue_21;
		int32_t L_23;
		L_23 = Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_inline(L_22, Queue_1_get_Count_m8BC474D82253F668DB4ED8B6E0230DC53E751E7A_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0053;
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// MapData MapGenerator::GenerateMapData(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC MapGenerator_GenerateMapData_mDE7C46C04912FA8FBEE84A4B93E8D985E7E565E5 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// float[,] noiseMap =
		//     Noise
		//         .GenerateNoise(mapChunkSize,
		//         mapChunkSize,
		//         seed,
		//         noise,
		//         octaves,
		//         peristance,
		//         lacunarity,
		//         center + offset,
		//         normalizedMode);
		int32_t L_0 = __this->___seed_15;
		float L_1 = __this->___noise_8;
		int32_t L_2 = __this->___octaves_9;
		float L_3 = __this->___peristance_10;
		float L_4 = __this->___lacunarity_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___center0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___offset_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_6, NULL);
		int32_t L_8 = __this->___normalizedMode_4;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_9;
		L_9 = Noise_GenerateNoise_mD5FD40CB7389BA414123B37AE4A5B72263DD3F17(((int32_t)241), ((int32_t)241), L_0, L_1, L_2, L_3, L_4, L_7, L_8, NULL);
		V_0 = L_9;
		// Color[] colorMap = new Color[mapChunkSize * mapChunkSize];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)58081));
		V_1 = L_10;
		// for (int y = 0; y < mapChunkSize; y++)
		V_2 = 0;
		goto IL_00ef;
	}

IL_0052:
	{
		// for (int x = 0; x < mapChunkSize; x++)
		V_3 = 0;
		goto IL_00e0;
	}

IL_0059:
	{
		// if (useFalloff) {
		bool L_11 = __this->___useFalloff_12;
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		// noiseMap[x,y] = Mathf.Clamp01(noiseMap[x,y] - falloffMap[x,y]);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_15 = V_0;
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		float L_18;
		L_18 = (L_15)->GetAtUnchecked(L_16, L_17);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_19 = __this->___falloffMap_19;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		float L_22;
		L_22 = (L_19)->GetAtUnchecked(L_20, L_21);
		float L_23;
		L_23 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract(L_18, L_22)), NULL);
		(L_12)->SetAtUnchecked(L_13, L_14, L_23);
	}

IL_0084:
	{
		// float currentHeight = noiseMap[x, y];
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_24 = V_0;
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		float L_27;
		L_27 = (L_24)->GetAtUnchecked(L_25, L_26);
		V_4 = L_27;
		// for (int i = 0; i < regions.Length; i++)
		V_5 = 0;
		goto IL_00d0;
	}

IL_0093:
	{
		// if (currentHeight >= regions[i].height)
		float L_28 = V_4;
		TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283* L_29 = __this->___regions_17;
		int32_t L_30 = V_5;
		float L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___height_1;
		if ((!(((float)L_28) >= ((float)L_31))))
		{
			goto IL_00dc;
		}
	}
	{
		// colorMap[y * mapChunkSize + x] = regions[i].color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283* L_35 = __this->___regions_17;
		int32_t L_36 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = ((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___color_2;
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_33, ((int32_t)241))), L_34))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_37);
		// for (int i = 0; i < regions.Length; i++)
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d0:
	{
		// for (int i = 0; i < regions.Length; i++)
		int32_t L_39 = V_5;
		TerrainTypeU5BU5D_tECECE2E36014635AF0495E9F4D5F6443DC155283* L_40 = __this->___regions_17;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0093;
		}
	}

IL_00dc:
	{
		// for (int x = 0; x < mapChunkSize; x++)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e0:
	{
		// for (int x = 0; x < mapChunkSize; x++)
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)241))))
		{
			goto IL_0059;
		}
	}
	{
		// for (int y = 0; y < mapChunkSize; y++)
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ef:
	{
		// for (int y = 0; y < mapChunkSize; y++)
		int32_t L_44 = V_2;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)241))))
		{
			goto IL_0052;
		}
	}
	{
		// return new MapData(noiseMap, colorMap);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_45 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_46 = V_1;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MapData__ctor_m4ECEA0F635B6E5B0246C417FF0BDC2723D2D9EEC((&L_47), L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void MapGenerator::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_OnValidate_mDD6529320F0B2EE3649FB0E8EF344B64997E323B (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	{
		// if (lacunarity < 1) lacunarity = 1;
		float L_0 = __this->___lacunarity_11;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// if (lacunarity < 1) lacunarity = 1;
		__this->___lacunarity_11 = (1.0f);
	}

IL_0018:
	{
		// if (octaves < 1) octaves = 1;
		int32_t L_1 = __this->___octaves_9;
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		// if (octaves < 1) octaves = 1;
		__this->___octaves_9 = 1;
	}

IL_0028:
	{
		// falloffMap = FallOffMap.GenerateFallOffMap(mapChunkSize);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2;
		L_2 = FallOffMap_GenerateFallOffMap_m64E839A27C84D285391CB9C3BE12212A3B33DAE8(((int32_t)241), NULL);
		__this->___falloffMap_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___falloffMap_19), (void*)L_2);
		// }
		return;
	}
}
// System.Void MapGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator__ctor_m86E4AFA71DF9FE834A78B8AE615BB15E4F477521 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m60B1DD2E2A02630A6E3C78965CE974B468864C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<MapThreadInfo<MapData>> mapThreadInfoQueue = new Queue<MapThreadInfo<MapData>>();
		Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* L_0 = (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6*)il2cpp_codegen_object_new(Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6_il2cpp_TypeInfo_var);
		Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33(L_0, Queue_1__ctor_m7AAAA87A8A291B39023B19BBD13E8052B0146B33_RuntimeMethod_var);
		__this->___mapThreadInfoQueue_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapThreadInfoQueue_20), (void*)L_0);
		// Queue<MapThreadInfo<MeshData>> meshDataThreadInfoQueue = new Queue<MapThreadInfo<MeshData>>();
		Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623* L_1 = (Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623*)il2cpp_codegen_object_new(Queue_1_tD8C23746DBA9EE0D627755CE530084BE931DB623_il2cpp_TypeInfo_var);
		Queue_1__ctor_m60B1DD2E2A02630A6E3C78965CE974B468864C7F(L_1, Queue_1__ctor_m60B1DD2E2A02630A6E3C78965CE974B468864C7F_RuntimeMethod_var);
		__this->___meshDataThreadInfoQueue_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshDataThreadInfoQueue_21), (void*)L_1);
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
// System.Void MapGenerator/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m0DCE2740FFB8DFC0275E745AC58F0F5CBB79AFF4 (U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MapGenerator/<>c__DisplayClass21_0::<RequestMapData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CRequestMapDataU3Eb__0_mDC99ABD666526DE25FB4AC57EBD04F8E85AA3B3C (U3CU3Ec__DisplayClass21_0_tEFBC9EBBBF40AEB6B60EB3130D212A2AB0F03D32* __this, const RuntimeMethod* method) 
{
	{
		// MapDataThread(center, callback);
		MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* L_0 = __this->___U3CU3E4__this_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___center_1;
		Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* L_2 = __this->___callback_2;
		MapGenerator_MapDataThread_mE366E8D8E8D1A8EAFCD16A32ADC20FE8612CC44F(L_0, L_1, L_2, NULL);
		// };
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
// System.Void MapGenerator/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mFF3F3419CD46AA20FA0E079345C43C6FC0A42C93 (U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MapGenerator/<>c__DisplayClass23_0::<RequestMeshData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CRequestMeshDataU3Eb__0_mE9C58E2520A00A0206E84C6BA04FA042DBB4E120 (U3CU3Ec__DisplayClass23_0_t816441D2BC45C05F7908B00AB2792CE56FFC100C* __this, const RuntimeMethod* method) 
{
	{
		// MeshDataThread(mapData, lod, callback);
		MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* L_0 = __this->___U3CU3E4__this_0;
		MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC L_1 = __this->___mapData_1;
		int32_t L_2 = __this->___lod_2;
		Action_1_t84B68B07A2C6918D7641B1F63B6448983505E046* L_3 = __this->___callback_3;
		MapGenerator_MeshDataThread_m8DCB8410EBE2ED9F23914D45CD1FBD47A76BB216(L_0, L_1, L_2, L_3, NULL);
		// };
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
// Conversion methods for marshalling of: TerrainType
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_pinvoke(const TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D& unmarshaled, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___terrainTexture_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrainTexture' of type 'TerrainType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrainTexture_3Exception, NULL);
}
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_pinvoke_back(const TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_pinvoke& marshaled, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D& unmarshaled)
{
	Exception_t* ___terrainTexture_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrainTexture' of type 'TerrainType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrainTexture_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: TerrainType
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_pinvoke_cleanup(TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TerrainType
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_com(const TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D& unmarshaled, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_com& marshaled)
{
	Exception_t* ___terrainTexture_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrainTexture' of type 'TerrainType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrainTexture_3Exception, NULL);
}
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_com_back(const TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_com& marshaled, TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D& unmarshaled)
{
	Exception_t* ___terrainTexture_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'terrainTexture' of type 'TerrainType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___terrainTexture_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: TerrainType
IL2CPP_EXTERN_C void TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshal_com_cleanup(TerrainType_tB2FD70716E8E139AE2E0928C827A29470807F40D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: MapData
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_pinvoke(const MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC& unmarshaled, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___noiseMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'noiseMap' of type 'MapData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___noiseMap_0Exception, NULL);
}
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_pinvoke_back(const MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_pinvoke& marshaled, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC& unmarshaled)
{
	Exception_t* ___noiseMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'noiseMap' of type 'MapData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___noiseMap_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MapData
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_pinvoke_cleanup(MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MapData
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_com(const MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC& unmarshaled, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_com& marshaled)
{
	Exception_t* ___noiseMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'noiseMap' of type 'MapData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___noiseMap_0Exception, NULL);
}
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_com_back(const MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_com& marshaled, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC& unmarshaled)
{
	Exception_t* ___noiseMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'noiseMap' of type 'MapData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___noiseMap_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MapData
IL2CPP_EXTERN_C void MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshal_com_cleanup(MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC_marshaled_com& marshaled)
{
}
// System.Void MapData::.ctor(System.Single[,],UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapData__ctor_m4ECEA0F635B6E5B0246C417FF0BDC2723D2D9EEC (MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap1, const RuntimeMethod* method) 
{
	{
		// this.noiseMap = noiseMap;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = ___noiseMap0;
		__this->___noiseMap_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___noiseMap_0), (void*)L_0);
		// this.colorMap = colorMap;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = ___colorMap1;
		__this->___colorMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorMap_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MapData__ctor_m4ECEA0F635B6E5B0246C417FF0BDC2723D2D9EEC_AdjustorThunk (RuntimeObject* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap1, const RuntimeMethod* method)
{
	MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC*>(__this + _offset);
	MapData__ctor_m4ECEA0F635B6E5B0246C417FF0BDC2723D2D9EEC(_thisAdjusted, ___noiseMap0, ___colorMap1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MeshData MeshGenerator::GenerateTerrainMesh(System.Single[,],System.Single,UnityEngine.AnimationCurve,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* MeshGenerator_GenerateTerrainMesh_m68F2DD2619D61CC30408B060B7D322D39A638251 (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, float ___heightScale1, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____meshCurve2, int32_t ___detailLevel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	{
		// int width = noiseMap.GetLength(0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = ___noiseMap0;
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		V_0 = L_1;
		// int height = noiseMap.GetLength(1);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ___noiseMap0;
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		V_1 = L_3;
		// float topLeftX = (width - 1) / -2f;
		int32_t L_4 = V_0;
		V_2 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_4, 1)))/(-2.0f)));
		// float topLeftZ = (height - 1) / 2f;
		int32_t L_5 = V_1;
		V_3 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))/(2.0f)));
		// AnimationCurve curve = new AnimationCurve(_meshCurve.keys);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = ____meshCurve2;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7;
		L_7 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_6, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_8, L_7, NULL);
		V_4 = L_8;
		// int meshSimpleIncrement = (detailLevel == 0) ? 1 : detailLevel * 2;
		int32_t L_9 = ___detailLevel3;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = ___detailLevel3;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_10, 2));
		goto IL_003c;
	}

IL_003b:
	{
		G_B3_0 = 1;
	}

IL_003c:
	{
		V_5 = G_B3_0;
		// int verticesPerLine = (width - 1) / meshSimpleIncrement + 1;
		int32_t L_11 = V_0;
		int32_t L_12 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, 1))/L_12)), 1));
		// MeshData meshData = new MeshData(width, height);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_15 = (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23*)il2cpp_codegen_object_new(MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23_il2cpp_TypeInfo_var);
		MeshData__ctor_mA26165BBAA6EA52A2E979594B71FCF34D94023AB(L_15, L_13, L_14, NULL);
		V_7 = L_15;
		// int vertexIndex = 0;
		V_8 = 0;
		// for (int y = 0; y < height; y += meshSimpleIncrement)
		V_9 = 0;
		goto IL_0106;
	}

IL_005c:
	{
		// for (int x = 0; x < width; x += meshSimpleIncrement)
		V_10 = 0;
		goto IL_00f7;
	}

IL_0064:
	{
		// meshData.vertices[vertexIndex] = new Vector3(
		//     topLeftX + x,
		//     curve.Evaluate(noiseMap[x, y]) * heightScale,
		//     topLeftZ - y);
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_16 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = L_16->___vertices_0;
		int32_t L_18 = V_8;
		float L_19 = V_2;
		int32_t L_20 = V_10;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = V_4;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_22 = ___noiseMap0;
		int32_t L_23 = V_10;
		int32_t L_24 = V_9;
		float L_25;
		L_25 = (L_22)->GetAtUnchecked(L_23, L_24);
		float L_26;
		L_26 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_21, L_25, NULL);
		float L_27 = ___heightScale1;
		float L_28 = V_3;
		int32_t L_29 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((float)il2cpp_codegen_add(L_19, ((float)L_20))), ((float)il2cpp_codegen_multiply(L_26, L_27)), ((float)il2cpp_codegen_subtract(L_28, ((float)L_29))), /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// meshData.uvs[vertexIndex] = new Vector2(x / (float)width, y / (float)height);
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_31 = V_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = L_31->___uvs_2;
		int32_t L_33 = V_8;
		int32_t L_34 = V_10;
		int32_t L_35 = V_0;
		int32_t L_36 = V_9;
		int32_t L_37 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), ((float)(((float)L_34)/((float)L_35))), ((float)(((float)L_36)/((float)L_37))), /*hidden argument*/NULL);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_38);
		// if (x < width - 1 && y < height - 1)
		int32_t L_39 = V_10;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_40, 1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_1;
		if ((((int32_t)L_41) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_42, 1)))))
		{
			goto IL_00ea;
		}
	}
	{
		// meshData.AddTriangle(vertexIndex, vertexIndex + verticesPerLine + 1, vertexIndex + verticesPerLine);
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_43 = V_7;
		int32_t L_44 = V_8;
		int32_t L_45 = V_8;
		int32_t L_46 = V_6;
		int32_t L_47 = V_8;
		int32_t L_48 = V_6;
		MeshData_AddTriangle_mA80626FED933D842FCDFFDC996A6B415F4DBEE22(L_43, L_44, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_45, L_46)), 1)), ((int32_t)il2cpp_codegen_add(L_47, L_48)), NULL);
		// meshData.AddTriangle(vertexIndex + verticesPerLine + 1, vertexIndex, vertexIndex + 1);
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_49 = V_7;
		int32_t L_50 = V_8;
		int32_t L_51 = V_6;
		int32_t L_52 = V_8;
		int32_t L_53 = V_8;
		MeshData_AddTriangle_mA80626FED933D842FCDFFDC996A6B415F4DBEE22(L_49, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_50, L_51)), 1)), L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)), NULL);
	}

IL_00ea:
	{
		// vertexIndex += 1;
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		// for (int x = 0; x < width; x += meshSimpleIncrement)
		int32_t L_55 = V_10;
		int32_t L_56 = V_5;
		V_10 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_00f7:
	{
		// for (int x = 0; x < width; x += meshSimpleIncrement)
		int32_t L_57 = V_10;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0064;
		}
	}
	{
		// for (int y = 0; y < height; y += meshSimpleIncrement)
		int32_t L_59 = V_9;
		int32_t L_60 = V_5;
		V_9 = ((int32_t)il2cpp_codegen_add(L_59, L_60));
	}

IL_0106:
	{
		// for (int y = 0; y < height; y += meshSimpleIncrement)
		int32_t L_61 = V_9;
		int32_t L_62 = V_1;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_005c;
		}
	}
	{
		// return meshData;
		MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* L_63 = V_7;
		return L_63;
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
// System.Void MeshData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData__ctor_mA26165BBAA6EA52A2E979594B71FCF34D94023AB (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, int32_t ___meshWidth0, int32_t ___meshHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MeshData(int meshWidth, int meshHeight) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// vertices = new Vector3[meshWidth*meshHeight];
		int32_t L_0 = ___meshWidth0;
		int32_t L_1 = ___meshHeight1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		__this->___vertices_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_0), (void*)L_2);
		// uvs = new Vector2[meshWidth*meshHeight];
		int32_t L_3 = ___meshWidth0;
		int32_t L_4 = ___meshHeight1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_3, L_4)));
		__this->___uvs_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvs_2), (void*)L_5);
		// triangles = new int[((meshWidth-1)*(meshHeight-1) *6)];
		int32_t L_6 = ___meshWidth0;
		int32_t L_7 = ___meshHeight1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_6, 1)), ((int32_t)il2cpp_codegen_subtract(L_7, 1)))), 6)));
		__this->___triangles_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_1), (void*)L_8);
		// }
		return;
	}
}
// System.Void MeshData::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_AddTriangle_mA80626FED933D842FCDFFDC996A6B415F4DBEE22 (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method) 
{
	{
		// triangles[triangleIndex] = a;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___triangles_1;
		int32_t L_1 = __this->___triangleIndex_3;
		int32_t L_2 = ___a0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_2);
		// triangles[triangleIndex+1] = b;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___triangles_1;
		int32_t L_4 = __this->___triangleIndex_3;
		int32_t L_5 = ___b1;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (int32_t)L_5);
		// triangles[triangleIndex+2] = c;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___triangles_1;
		int32_t L_7 = __this->___triangleIndex_3;
		int32_t L_8 = ___c2;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (int32_t)L_8);
		// triangleIndex +=3;
		int32_t L_9 = __this->___triangleIndex_3;
		__this->___triangleIndex_3 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		// }
		return;
	}
}
// UnityEngine.Mesh MeshData::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshData_CreateMesh_m0C0526F729CCAB828F02CC540CA1684C67D2458A (MeshData_t9D6F7686BF953CE98E88DE588F9762B86853CE23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mesh mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___vertices_0;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_2, NULL);
		// mesh.triangles = triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___triangles_1;
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_3, L_4, NULL);
		// mesh.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = L_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = __this->___uvs_2;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_5, L_6, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = L_5;
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_7, NULL);
		// return mesh;
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
// System.Void MoveCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_Update_mE6F636B6C3CDBA9DDC6BB61CBEBF6B2AE1A038C4 (MoveCamera_t9409C54A44D37C0F439D68563EF8E48F4AC29460* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = cameraPosition.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___cameraPosition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void MoveCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera__ctor_m482685446D944F8C39671E937F0FCDE363291763 (MoveCamera_t9409C54A44D37C0F439D68563EF8E48F4AC29460* __this, const RuntimeMethod* method) 
{
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
// System.Void MovePlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_Start_m608953308DD695B68D7E8927A506FFB366943EBA (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_18), (void*)L_0);
		// rb.freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_18;
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_1, (bool)1, NULL);
		// readyToJump = true;
		__this->___readyToJump_9 = (bool)1;
		// }
		return;
	}
}
// System.Void MovePlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_Update_mB2024089C129F95C3A8C7B645E691BD181AB9893 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// grounded = Physics.Raycast(transform.position, Vector3.down, playerHeight * 0.5f + 0.2f, whatIsGround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_3 = __this->___playerHeight_11;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___whatIsGround_12;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		bool L_6;
		L_6 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_1, L_2, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, (0.5f))), (0.200000003f))), L_5, NULL);
		__this->___grounded_13 = L_6;
		// MyInput();
		MovePlayer_MyInput_mBF4E942A643568BBE84AA940237D06891DF3944D(__this, NULL);
		// SpeedControl();
		MovePlayer_SpeedControl_m209E55F6A78CB465A6EB3F5C52D7052CCD4C62D2(__this, NULL);
		// if (grounded)
		bool L_7 = __this->___grounded_13;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// rb.drag = groundDrag;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_18;
		float L_9 = __this->___groundDrag_5;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_8, L_9, NULL);
		return;
	}

IL_005e:
	{
		// rb.drag = 0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_18;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_10, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void MovePlayer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_FixedUpdate_mCFB64F70ABD7378D082F60DDE3FF8B35AB8F1872 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// PlayerMovement();
		MovePlayer_PlayerMovement_mF2D111C6F7B79940F9F0B8FBA2B0DBFC10079647(__this, NULL);
		// }
		return;
	}
}
// System.Void MovePlayer::MyInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_MyInput_mBF4E942A643568BBE84AA940237D06891DF3944D (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CEF0B029D501973933F3322A798284398E3A232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// horizontalInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___horizontalInput_15 = L_0;
		// verticalInput = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___verticalInput_16 = L_1;
		// if(Input.GetKey(jumpKey) && readyToJump && grounded)
		int32_t L_2 = __this->___jumpKey_10;
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_2, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		bool L_4 = __this->___readyToJump_9;
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		bool L_5 = __this->___grounded_13;
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// readyToJump = false;
		__this->___readyToJump_9 = (bool)0;
		// Jump();
		MovePlayer_Jump_mB9C2F2E950243870A066FDBF0AD0322BC6BB3579(__this, NULL);
		// Invoke(nameof(ResetJump), jumpCooldown);
		float L_6 = __this->___jumpCooldown_7;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral6CEF0B029D501973933F3322A798284398E3A232, L_6, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void MovePlayer::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_PlayerMovement_mF2D111C6F7B79940F9F0B8FBA2B0DBFC10079647 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// moveDirection = orientation.forward * verticalInput + orientation.right * horizontalInput;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___orientation_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___verticalInput_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___orientation_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_4, NULL);
		float L_6 = __this->___horizontalInput_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		__this->___moveDirection_17 = L_8;
		// if(grounded)
		bool L_9 = __this->___grounded_13;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// rb.AddForce(moveDirection.normalized * moveSpeed * 10f, ForceMode.Force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___moveDirection_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_11, NULL);
		float L_13 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (10.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_10, L_15, 0, NULL);
		return;
	}

IL_006c:
	{
		// else if(!grounded)
		bool L_16 = __this->___grounded_13;
		if (L_16)
		{
			goto IL_00ab;
		}
	}
	{
		// rb.AddForce(moveDirection.normalized * moveSpeed * 10f * airTime, ForceMode.Force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___moveDirection_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_18, NULL);
		float L_20 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (10.0f), NULL);
		float L_23 = __this->___airTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_17, L_24, 0, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void MovePlayer::SpeedControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_SpeedControl_m209E55F6A78CB465A6EB3F5C52D7052CCD4C62D2 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 flatVel = new Vector3(rb.velocity.x, 0f, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		float L_2 = L_1.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5 = L_4.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, (0.0f), L_5, NULL);
		// if (flatVel.magnitude > moveSpeed)
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_7 = __this->___moveSpeed_4;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_007a;
		}
	}
	{
		// limitedVel = flatVel.normalized * moveSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_9 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// rb.velocity = new Vector3(limitedVel.x, rb.velocity.y, limitedVel.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_14, NULL);
		float L_16 = L_15.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_13, L_16, L_18, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_19, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void MovePlayer::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_Jump_mB9C2F2E950243870A066FDBF0AD0322BC6BB3579 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// rb.velocity = new Vector3(rb.velocity.x, 0f, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_18;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_3, (0.0f), L_6, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_7, NULL);
		// rb.AddForce(transform.up * jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		float L_11 = __this->___jumpForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_8, L_12, 1, NULL);
		// }
		return;
	}
}
// System.Void MovePlayer::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer_ResetJump_mE74D129271BB861221A2BF7904529836FBC15304 (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// readyToJump = true;
		__this->___readyToJump_9 = (bool)1;
		// }
		return;
	}
}
// System.Void MovePlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePlayer__ctor_m193AFF3E915B78AB820AF503E1E4772214351CDC (MovePlayer_tC84F96B706D7FDC59EA861A8ED037C663448DAF4* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode jumpKey = KeyCode.Space;
		__this->___jumpKey_10 = ((int32_t)32);
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
// System.Single[,] Noise::GenerateNoise(System.Int32,System.Int32,System.Int32,System.Single,System.Int32,System.Single,System.Single,UnityEngine.Vector2,Noise/NormalizedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* Noise_GenerateNoise_mD5FD40CB7389BA414123B37AE4A5B72263DD3F17 (int32_t ___width0, int32_t ___height1, int32_t ___seed2, float ___noise3, int32_t ___octaves4, float ___persistence5, float ___lacunarity6, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset7, int32_t ___mode8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_9 = NULL;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	{
		// float[,] noiseMap = new float[width, height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_2;
		// float maxNoise = float.MinValue;
		V_1 = (-(std::numeric_limits<float>::max)());
		// float minNoise = float.MaxValue;
		V_2 = ((std::numeric_limits<float>::max)());
		// System.Random prng = new System.Random(seed);
		int32_t L_4 = ___seed2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_5 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_5, L_4, NULL);
		V_3 = L_5;
		// float halfWidth = width / 2f;
		int32_t L_6 = ___width0;
		V_4 = ((float)(((float)L_6)/(2.0f)));
		// float halfHeight = height / 2f;
		int32_t L_7 = ___height1;
		V_5 = ((float)(((float)L_7)/(2.0f)));
		// float maxPossibleHeight = 0;
		V_6 = (0.0f);
		// float amplitude = 1;
		V_7 = (1.0f);
		// float frequency = 1;
		V_8 = (1.0f);
		// Vector2[] octaveOffsets = new Vector2[octaves];
		int32_t L_8 = ___octaves4;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_9 = L_9;
		// for (int i = 0; i < octaves; i++)
		V_10 = 0;
		goto IL_00ae;
	}

IL_0052:
	{
		// float offsetX = prng.Next(-100000, 100000) + offset.x;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = V_3;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_10, ((int32_t)-100000), ((int32_t)100000));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___offset7;
		float L_13 = L_12.___x_0;
		V_11 = ((float)il2cpp_codegen_add(((float)L_11), L_13));
		// float offsetY = prng.Next(-100000, 100000) - offset.y;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_14 = V_3;
		int32_t L_15;
		L_15 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_14, ((int32_t)-100000), ((int32_t)100000));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___offset7;
		float L_17 = L_16.___y_1;
		V_12 = ((float)il2cpp_codegen_subtract(((float)L_15), L_17));
		// octaveOffsets[i] = new Vector2(offsetX, offsetY);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = V_9;
		int32_t L_19 = V_10;
		float L_20 = V_11;
		float L_21 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_20, L_21, /*hidden argument*/NULL);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_22);
		// maxPossibleHeight += amplitude;
		float L_23 = V_6;
		float L_24 = V_7;
		V_6 = ((float)il2cpp_codegen_add(L_23, L_24));
		// amplitude *= persistence;
		float L_25 = V_7;
		float L_26 = ___persistence5;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// for (int i = 0; i < octaves; i++)
		int32_t L_27 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ae:
	{
		// for (int i = 0; i < octaves; i++)
		int32_t L_28 = V_10;
		int32_t L_29 = ___octaves4;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0052;
		}
	}
	{
		// if (noise <= 0)
		float L_30 = ___noise3;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// noise = 0.0001f;
		___noise3 = (9.99999975E-05f);
	}

IL_00c3:
	{
		// for (int y = 0; y < height; y++)
		V_13 = 0;
		goto IL_018e;
	}

IL_00cb:
	{
		// for (int x = 0; x < width; x++)
		V_14 = 0;
		goto IL_0180;
	}

IL_00d3:
	{
		// amplitude = 1;
		V_7 = (1.0f);
		// frequency = 1;
		V_8 = (1.0f);
		// float noiseHeight = 0;
		V_15 = (0.0f);
		// for (int i = 0; i < octaves; i++)
		V_16 = 0;
		goto IL_0156;
	}

IL_00ed:
	{
		// float sampleX = (x - halfWidth + octaveOffsets[i].x) / noise * frequency;
		int32_t L_31 = V_14;
		float L_32 = V_4;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_33 = V_9;
		int32_t L_34 = V_16;
		float L_35 = ((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___x_0;
		float L_36 = ___noise3;
		float L_37 = V_8;
		// float sampleY = (y - halfHeight + octaveOffsets[i].y) / noise * frequency;
		int32_t L_38 = V_13;
		float L_39 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_9;
		int32_t L_41 = V_16;
		float L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___y_1;
		float L_43 = ___noise3;
		float L_44 = V_8;
		V_17 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)L_38), L_39)), L_42))/L_43)), L_44));
		// float noiseValue = Mathf.PerlinNoise(sampleX, sampleY) * 2 - 1;
		float L_45 = V_17;
		float L_46;
		L_46 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)L_31), L_32)), L_35))/L_36)), L_37)), L_45, NULL);
		V_18 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_46, (2.0f))), (1.0f)));
		// noiseHeight += noiseValue * amplitude;
		float L_47 = V_15;
		float L_48 = V_18;
		float L_49 = V_7;
		V_15 = ((float)il2cpp_codegen_add(L_47, ((float)il2cpp_codegen_multiply(L_48, L_49))));
		// amplitude *= persistence;
		float L_50 = V_7;
		float L_51 = ___persistence5;
		V_7 = ((float)il2cpp_codegen_multiply(L_50, L_51));
		// frequency *= lacunarity;
		float L_52 = V_8;
		float L_53 = ___lacunarity6;
		V_8 = ((float)il2cpp_codegen_multiply(L_52, L_53));
		// for (int i = 0; i < octaves; i++)
		int32_t L_54 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0156:
	{
		// for (int i = 0; i < octaves; i++)
		int32_t L_55 = V_16;
		int32_t L_56 = ___octaves4;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00ed;
		}
	}
	{
		// if (noiseHeight > maxNoise)
		float L_57 = V_15;
		float L_58 = V_1;
		if ((!(((float)L_57) > ((float)L_58))))
		{
			goto IL_0166;
		}
	}
	{
		// maxNoise = noiseHeight;
		float L_59 = V_15;
		V_1 = L_59;
		goto IL_016e;
	}

IL_0166:
	{
		// else if (noiseHeight < minNoise)
		float L_60 = V_15;
		float L_61 = V_2;
		if ((!(((float)L_60) < ((float)L_61))))
		{
			goto IL_016e;
		}
	}
	{
		// minNoise = noiseHeight;
		float L_62 = V_15;
		V_2 = L_62;
	}

IL_016e:
	{
		// noiseMap[x, y] = noiseHeight;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_63 = V_0;
		int32_t L_64 = V_14;
		int32_t L_65 = V_13;
		float L_66 = V_15;
		(L_63)->SetAtUnchecked(L_64, L_65, L_66);
		// for (int x = 0; x < width; x++)
		int32_t L_67 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0180:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_68 = V_14;
		int32_t L_69 = ___width0;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00d3;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		int32_t L_70 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_018e:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_71 = V_13;
		int32_t L_72 = ___height1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00cb;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		V_19 = 0;
		goto IL_0202;
	}

IL_019b:
	{
		// for (int y = 0; y < height; y++)
		V_20 = 0;
		goto IL_01f7;
	}

IL_01a0:
	{
		// if (mode == NormalizedMode.Local)
		int32_t L_73 = ___mode8;
		if (L_73)
		{
			goto IL_01c1;
		}
	}
	{
		// noiseMap[x, y] = Mathf.InverseLerp(minNoise, maxNoise, noiseMap[x, y]);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_74 = V_0;
		int32_t L_75 = V_19;
		int32_t L_76 = V_20;
		float L_77 = V_2;
		float L_78 = V_1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_79 = V_0;
		int32_t L_80 = V_19;
		int32_t L_81 = V_20;
		float L_82;
		L_82 = (L_79)->GetAtUnchecked(L_80, L_81);
		float L_83;
		L_83 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_77, L_78, L_82, NULL);
		(L_74)->SetAtUnchecked(L_75, L_76, L_83);
		goto IL_01f1;
	}

IL_01c1:
	{
		// float normalizedHeight = (noiseMap[x, y] + 1) / (maxPossibleHeight);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_84 = V_0;
		int32_t L_85 = V_19;
		int32_t L_86 = V_20;
		float L_87;
		L_87 = (L_84)->GetAtUnchecked(L_85, L_86);
		float L_88 = V_6;
		V_21 = ((float)(((float)il2cpp_codegen_add(L_87, (1.0f)))/L_88));
		// noiseMap[x, y] = Mathf.Clamp(normalizedHeight, 0, int.MaxValue);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_89 = V_0;
		int32_t L_90 = V_19;
		int32_t L_91 = V_20;
		float L_92 = V_21;
		float L_93;
		L_93 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_92, (0.0f), (2.14748365E+09f), NULL);
		(L_89)->SetAtUnchecked(L_90, L_91, L_93);
	}

IL_01f1:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_94 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01f7:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_95 = V_20;
		int32_t L_96 = ___height1;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01a0;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_97 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_0202:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_98 = V_19;
		int32_t L_99 = ___width0;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_019b;
		}
	}
	{
		// return noiseMap;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_100 = V_0;
		return L_100;
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
// System.Void PlayerCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCam_Start_mB6F7D25207DD7B9B24B178E09777CC9FC1EEFF52 (PlayerCam_t1DEB32D9E60017CBE67E041C350E8035F8A9EFF8* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCam_Update_mC96960542813F57B69A941C031EC9A859A30844C (PlayerCam_t1DEB32D9E60017CBE67E041C350E8035F8A9EFF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxisRaw("Mouse X") * Time.deltaTime * sensX;
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___sensX_7;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxisRaw("Mouse Y") * Time.deltaTime * sensY;
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___sensY_8;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// yRotation += mouseX;
		float L_6 = __this->___yRotation_6;
		float L_7 = V_0;
		__this->___yRotation_6 = ((float)il2cpp_codegen_add(L_6, L_7));
		// xRotation -= mouseY;
		float L_8 = __this->___xRotation_5;
		float L_9 = V_1;
		__this->___xRotation_5 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_10 = __this->___xRotation_5;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (-90.0f), (90.0f), NULL);
		__this->___xRotation_5 = L_11;
		// transform.rotation = Quaternion.Euler(xRotation, yRotation, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_13 = __this->___xRotation_5;
		float L_14 = __this->___yRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_13, L_14, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
		// orientation.rotation = Quaternion.Euler(0, yRotation, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___orientation_4;
		float L_17 = __this->___yRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_17, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void PlayerCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCam__ctor_m5A4401652352851B23213E65C908C89593DA8501 (PlayerCam_t1DEB32D9E60017CBE67E041C350E8035F8A9EFF8* __this, const RuntimeMethod* method) 
{
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
// UnityEngine.Texture2D TextureGenerator::TextureFromColorMap(UnityEngine.Color[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colorMap0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Texture2D texture = new Texture2D(width, height);
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, L_0, L_1, NULL);
		// texture.filterMode = FilterMode.Point;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = L_2;
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_3, 0, NULL);
		// texture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_3;
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_4, 1, NULL);
		// texture.SetPixels(colorMap);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = L_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___colorMap0;
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_5, L_6, NULL);
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = L_5;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_7, NULL);
		// return texture;
		return L_7;
	}
}
// UnityEngine.Texture2D TextureGenerator::TextureFromNoiseMap(System.Single[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureGenerator_TextureFromNoiseMap_m16C5AE8391E0CC0392084E4BB767BC56FDF4961B (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___noiseMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int width = noiseMap.GetLength(0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = ___noiseMap0;
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		V_0 = L_1;
		// int height = noiseMap.GetLength(1);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ___noiseMap0;
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		V_1 = L_3;
		// Texture2D texture = new Texture2D(width, height);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_6, L_4, L_5, NULL);
		// Color[] colorMap = new Color[width * height];
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, L_8)));
		V_2 = L_9;
		// for (int y = 0; y < height; y++)
		V_3 = 0;
		goto IL_005d;
	}

IL_0025:
	{
		// for (int x = 0; x < width; x++)
		V_4 = 0;
		goto IL_0054;
	}

IL_002a:
	{
		// colorMap[y * width + x] =
		//     Color.Lerp(Color.black, Color.white, noiseMap[x, y]);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = V_2;
		int32_t L_11 = V_3;
		int32_t L_12 = V_0;
		int32_t L_13 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_16 = ___noiseMap0;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		float L_19;
		L_19 = (L_16)->GetAtUnchecked(L_17, L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_14, L_15, L_19, NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), L_13))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_20);
		// for (int x = 0; x < width; x++)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0054:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_005d:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0025;
		}
	}
	{
		// return TextureFromColorMap(colorMap, width, height);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30;
		L_30 = TextureGenerator_TextureFromColorMap_m4429D4CA5030F881048B358902413AF0A3DB698E(L_27, L_28, L_29, NULL);
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MathF_Max_m5C110C404CE4EE4A19347D8658D7B723A301A6CA_inline (float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___value2;
		float L_4 = ___a0;
		float L_5 = ___b1;
		float L_6 = ___a0;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4E7DDA30E35DD7E695BBB5E3B71E3D294D9DA285_gshared_inline (Queue_1_t240AF17A43CEE4383BFD687C370EDD72BD8E84D6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m382A0BE1657DE6A53C457CAA70F632EB4F89130B_gshared_inline (Action_1_t68603FA1C9E1BC60641DC12A696D3E2330673150* __this, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MapData_tEFF5E9C37A2686955E6AB4F2E8BEBC59D5061DAC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA933FD43BC368B3A5DAA7CDB5C59A24CEF59D2EA_gshared_inline (Queue_1_t0971DA5A77EE7952CA804472E4290DD675427802* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
