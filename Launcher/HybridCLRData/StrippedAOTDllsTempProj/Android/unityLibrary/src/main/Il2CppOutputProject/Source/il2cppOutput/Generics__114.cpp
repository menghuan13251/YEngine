#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12;
// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642;
// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326;
// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F;
// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC;
// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>
struct IUniTaskAsyncEnumerable_1_t441C53D97012D553F19280070D1B14ABEFBD3118;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>
struct IUniTaskAsyncEnumerator_1_t35CB7B6535A60F2DD5565CDE8DA1A207CC9B73E2;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Cysharp.Threading.Tasks.AsyncUnit>
struct IUniTaskSource_1_t41EA7A95FBAE1E11C685B8E76E3A864529B3A81A;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>
struct _SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879;
// Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>
struct _SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99;
// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>
struct _SkipWhile_tEDB20E7E113428554400BB71336E7E697EF247D0;
// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>
struct _SkipWhileAwait_tB763CAE510EB8E4DECADB14AD850F26D443255E2;
// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>
struct _SkipWhileAwaitWithCancellation_t70EC45754372B0273B5DBD4E7B3B6A8784ED971D;
// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>
struct _SkipWhileInt_t80073D723B4E44088FF941BCDD57FF87744794DD;
// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>
struct _SkipWhileIntAwait_t66F7BA426E37227E9F8E2D735A95C2A13EDFFFB8;
// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>
struct _SkipWhileIntAwaitWithCancellation_tA0D74C7DFC356ABF35FF1B46393F5ECA3D9B16DB;
// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D;
// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388;
// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184;
// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494;
// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>
struct _TakeWhile_tFEFE7DA96CA3450AE8B65DCF8D43EF6E411E7981;
// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>
struct _TakeWhileAwait_tDB204261204654FC6622F893488195F7CF4B36B1;
// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>
struct _TakeWhileAwaitWithCancellation_t0E887BCDCDDD98932E791469C9A59509FDFF69A7;
// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>
struct _TakeWhileInt_t030FF829336EB98954C7F7F5F7F23DA09C1E0D6C;
// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>
struct _TakeWhileIntAwait_t6F818C259D1082287ECC84AFC29F44D71F0A9CD7;
// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>
struct _TakeWhileIntAwaitWithCancellation_t4838E8D9E145629338F9533F818A35EFC84A35AF;
// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>
struct _Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>
struct _ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>
struct _ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>
struct _ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835;
// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>
struct _Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A;
// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>
struct _Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA;
// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0;
// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B;
// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE;
// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t499828EAE94482E9690485DF439F969FB37D2947;
// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2;
// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileIntAwaitWithCancellation_TransformAsync_m01F39767695632944CB6E447A3369DBB4478BF49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileIntAwait_TransformAsync_m690B5FE42C70C7C0E054016F65ADC9A2D36C5557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileInt_TryMoveNextCore_m75773BCA8855B1C9C0E2A951725A641D5F0DFACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileIntAwaitWithCancellation_TransformAsync_m72C825BC76D920AF472295A3F9C98C695658D42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileIntAwait_TransformAsync_mCA7B3925366E7FD179B540A665BC7EFA417007B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileInt_TryMoveNextCore_mC28FA1FA054EFC8C4E230E9315948F7B1EE2EA9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwaitWithCancellation_MoveNext_m5B67E5008DBDE6450881941504D8171157069A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwait_MoveNext_m6E201E2075813B451F6487B94FC2BA07BDFA94DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _Where_MoveNext_mF364671EB88996E411E19FD33BEDC29CE702761E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
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

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	bool ___result_2;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Int32>
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int32_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
};

// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A__padding[1];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
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

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>
struct U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>4__this
	_ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>
struct _Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403  : public RuntimeObject
{
	// System.Exception Cysharp.Threading.Tasks.Linq.Throw`1/_Throw::exception
	Exception_t* ___exception_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Throw`1/_Throw::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>
struct _ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::source
	RuntimeObject* ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// System.Collections.Generic.IEnumerator`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::enumerator
	RuntimeObject* ___enumerator_2;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>
struct _ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::source
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::current
	RuntimeObject* ___current_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::called
	bool ___called_3;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>
struct _ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::source
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::current
	RuntimeObject* ___current_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::called
	bool ___called_3;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
};

// Cysharp.Threading.Tasks.UniTaskStatus
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	// System.Int32 Cysharp.Threading.Tasks.UniTaskStatus::value__
	int32_t ___value___2;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_t499828EAE94482E9690485DF439F969FB37D2947* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>4__this
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>4__this
	_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>
struct U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>4__this
	_ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>u__1
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>
struct U3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::other
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other_2;
	// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>4__this
	_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* ___U3CU3E4__this_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<System.Object>
struct U3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18::other
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other_2;
	// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<TSource> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18::<>4__this
	_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* ___U3CU3E4__this_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>
struct AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::source
	RuntimeObject* ___source_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::sourceMoveNext
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___sourceMoveNext_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TAwait> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::resultAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___resultAwaiter_7;
	// TSource Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::<SourceCurrent>k__BackingField
	RuntimeObject* ___U3CSourceCurrentU3Ek__BackingField_8;
	// TResult Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>
struct AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::enumerator
	RuntimeObject* ___enumerator_4;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::sourceMoveNext
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___sourceMoveNext_5;
	// TResult Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_6;
};

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>
struct _SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::source
	RuntimeObject* ___source_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_4;
	// System.Boolean Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::completed
	bool ___completed_5;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::enumerator
	RuntimeObject* ___enumerator_7;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::continueNext
	bool ___continueNext_9;
	// System.Exception Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::exception
	Exception_t* ___exception_10;
	// TSource Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_11;
};

// Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>
struct _SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::source
	RuntimeObject* ___source_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::cancellationToken2
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2_6;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_7;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::cancellationTokenRegistration2
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration2_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::isCanceled
	int32_t ___isCanceled_9;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::enumerator
	RuntimeObject* ___enumerator_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_11;
	// System.Boolean Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::continueNext
	bool ___continueNext_12;
	// TSource Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
};

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.Take`1/_Take::source
	RuntimeObject* ___source_2;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Take`1/_Take::count
	int32_t ___count_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Take`1/_Take::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.Take`1/_Take::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Take`1/_Take::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Take`1/_Take::index
	int32_t ___index_7;
	// TSource Cysharp.Threading.Tasks.Linq.Take`1/_Take::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_8;
};

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::source
	RuntimeObject* ___source_2;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::count
	int32_t ___count_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// System.Collections.Generic.Queue`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::iterateCompleted
	bool ___iterateCompleted_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::continueNext
	bool ___continueNext_9;
	// TSource Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::source
	RuntimeObject* ___source_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_4;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_5;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::completed
	bool ___completed_6;
	// System.Exception Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::exception
	Exception_t* ___exception_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::enumerator
	RuntimeObject* ___enumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_9;
	// TSource Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::source
	RuntimeObject* ___source_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationToken2
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2_6;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_7;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationTokenRegistration2
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration2_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::isCanceled
	bool ___isCanceled_9;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::enumerator
	RuntimeObject* ___enumerator_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_11;
	// TSource Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_12;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// System.IObservable`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::useCachedCurrent
	bool ___useCachedCurrent_4;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::current
	RuntimeObject* ___current_5;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::subscribeCompleted
	bool ___subscribeCompleted_6;
	// System.Collections.Generic.Queue`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::queuedResult
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queuedResult_7;
	// System.Exception Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::error
	Exception_t* ___error_8;
	// System.IDisposable Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::subscription
	RuntimeObject* ___subscription_9;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_10;
};

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>
struct _Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::index
	int32_t ___index_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>
struct _Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.Where`1/_Where::source
	RuntimeObject* ___source_1;
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Where`1/_Where::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Where`1/_Where::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.Where`1/_Where::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// System.Action Cysharp.Threading.Tasks.Linq.Where`1/_Where::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_7;
	// TSource Cysharp.Threading.Tasks.Linq.Where`1/_Where::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_8;
};

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::source
	RuntimeObject* ___source_1;
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::predicate
	Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::awaiter2
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::predicate
	Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::awaiter2
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::index
	int32_t ___index_9;
	// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::index
	int32_t ___index_9;
	// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___U3CCurrentU3Ek__BackingField_11;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t499828EAE94482E9690485DF439F969FB37D2947  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_11;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::second
	RuntimeObject* ___second_5;
	// System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultSelector
	Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F* ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaiter
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::second
	RuntimeObject* ___second_5;
	// System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultSelector
	Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaiter
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>
struct _SkipWhile_tEDB20E7E113428554400BB71336E7E697EF247D0  : public AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F
{
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_7;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>
struct _SkipWhileAwait_tB763CAE510EB8E4DECADB14AD850F26D443255E2  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait::predicate
	Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>
struct _SkipWhileAwaitWithCancellation_t70EC45754372B0273B5DBD4E7B3B6A8784ED971D  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation::predicate
	Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>
struct _SkipWhileInt_t80073D723B4E44088FF941BCDD57FF87744794DD  : public AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F
{
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt::index
	int32_t ___index_8;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>
struct _SkipWhileIntAwait_t66F7BA426E37227E9F8E2D735A95C2A13EDFFFB8  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait::predicate
	Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>
struct _SkipWhileIntAwaitWithCancellation_tA0D74C7DFC356ABF35FF1B46393F5ECA3D9B16DB  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation::predicate
	Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>
struct _TakeWhile_tFEFE7DA96CA3450AE8B65DCF8D43EF6E411E7981  : public AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F
{
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_7;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>
struct _TakeWhileAwait_tDB204261204654FC6622F893488195F7CF4B36B1  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait::predicate
	Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>
struct _TakeWhileAwaitWithCancellation_t0E887BCDCDDD98932E791469C9A59509FDFF69A7  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation::predicate
	Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>
struct _TakeWhileInt_t030FF829336EB98954C7F7F5F7F23DA09C1E0D6C  : public AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F
{
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt::index
	int32_t ___index_8;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>
struct _TakeWhileIntAwait_t6F818C259D1082287ECC84AFC29F44D71F0A9CD7  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait::predicate
	Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>
struct _TakeWhileIntAwaitWithCancellation_t4838E8D9E145629338F9533F818A35EFC84A35AF  : public AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837
{
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation::predicate
	Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation::index
	int32_t ___index_11;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// Cysharp.Threading.Tasks.AwaiterActions

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.CompletedTasks::AsyncUnit
	UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A ___AsyncUnit_0;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::True
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___True_1;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::False
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___False_2;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::Zero
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___Zero_3;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::MinusOne
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___MinusOne_4;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::One
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___One_5;
};

// Cysharp.Threading.Tasks.CompletedTasks

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// Cysharp.Threading.Tasks.UniTaskVoid

// Cysharp.Threading.Tasks.UniTaskVoid

// System.Void

// System.Void

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.UniTaskStatus

// Cysharp.Threading.Tasks.UniTaskStatus

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<System.Object>

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>
struct AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::moveNextCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::setCurrentCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___setCurrentCallbackDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>
struct AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::moveNextCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>
struct _SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>
struct _SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::CancelDelegate2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Take`1/_Take::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::CancelDelegate2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::OnCanceledDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OnCanceledDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>

// System.Action

// System.Action
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromException<System.Boolean>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_gshared (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromCanceled<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<System.Object>>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516_m3A56C36E73B893AC91742B6F2DFAA366AE26A622_gshared (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9_mF589CA19C1FAF007C429FEEAEF43F339E0E712F7_gshared (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD_mD87EAD031F3D8E539EFD733F118400DF70B37964_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B_mAFEEA11012F6787A4F89C0308F7443CF4C5FC24A_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A_mF7EF6E7F4A63102835EFFBDB7CDBC6F7F884F349_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207_m4F419A502A5888A9D28345A34D26728F9B6DB1B5_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191_m306B5FFDCC893968C6288B7792AC41393EB7C644_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mF1BC165BA5A32CD0232228F23DA19A32EFE98208_gshared (U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mB79928C5E58E0B64106D0DD75C3DD6DB695820B2_gshared (U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m426C18CC240073CCFB5D7C305B6ECF7E9A90D435_gshared (U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m15EEF046F9E454CF3C44091106AB75008F5FE36B_gshared (U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m0C1E82DC2F4248E42B675230960B833E619994B9_gshared (U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m8F9205B3C4A94F7CE785F0EBFCF6DAF2C821BBBC_gshared (U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* __this, const RuntimeMethod* method) ;

// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromException<System.Boolean>(System.Exception)
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B (Exception_t* ___0_ex, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Exception_t*, const RuntimeMethod*))UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_gshared)(___0_ex, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromCanceled<System.Boolean>(System.Threading.CancellationToken)
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_gshared)(___0_cancellationToken, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared)(__this, method);
}
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
inline void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline)(__this, ___0_source, ___1_token, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared)(__this, ___0_error, method);
}
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
inline bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15, bool*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared)(__this, ___0_awaiter, ___1_result, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared)(__this, ___0_result, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<System.Object>>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516_m3A56C36E73B893AC91742B6F2DFAA366AE26A622 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516_m3A56C36E73B893AC91742B6F2DFAA366AE26A622_gshared)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared)(__this, ___0_cancellationToken, method);
}
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Threading.CancellationToken::op_Inequality(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_left, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9_mF589CA19C1FAF007C429FEEAEF43F339E0E712F7 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9_mF589CA19C1FAF007C429FEEAEF43F339E0E712F7_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD_mD87EAD031F3D8E539EFD733F118400DF70B37964_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD_mD87EAD031F3D8E539EFD733F118400DF70B37964_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B_mAFEEA11012F6787A4F89C0308F7443CF4C5FC24A_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B_mAFEEA11012F6787A4F89C0308F7443CF4C5FC24A_gshared_inline)(__this, ___0_stateMachine, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline)(__this, ___0_continuation, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A_mF7EF6E7F4A63102835EFFBDB7CDBC6F7F884F349_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A_mF7EF6E7F4A63102835EFFBDB7CDBC6F7F884F349_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207_m4F419A502A5888A9D28345A34D26728F9B6DB1B5_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207_m4F419A502A5888A9D28345A34D26728F9B6DB1B5_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
inline Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191_m306B5FFDCC893968C6288B7792AC41393EB7C644_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191_m306B5FFDCC893968C6288B7792AC41393EB7C644_gshared_inline)(__this, ___0_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
inline void U3CMoveNextAsyncU3Ed__7_MoveNext_mF1BC165BA5A32CD0232228F23DA19A32EFE98208 (U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD*, const RuntimeMethod*))U3CMoveNextAsyncU3Ed__7_MoveNext_mF1BC165BA5A32CD0232228F23DA19A32EFE98208_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
inline void U3CMoveNextAsyncU3Ed__7_MoveNext_mB79928C5E58E0B64106D0DD75C3DD6DB695820B2 (U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B*, const RuntimeMethod*))U3CMoveNextAsyncU3Ed__7_MoveNext_mB79928C5E58E0B64106D0DD75C3DD6DB695820B2_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline void U3CDisposeAsyncU3Ed__18_MoveNext_m426C18CC240073CCFB5D7C305B6ECF7E9A90D435 (U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_MoveNext_m426C18CC240073CCFB5D7C305B6ECF7E9A90D435_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__18_MoveNext_m15EEF046F9E454CF3C44091106AB75008F5FE36B (U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_MoveNext_m15EEF046F9E454CF3C44091106AB75008F5FE36B_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__21_MoveNext_m0C1E82DC2F4248E42B675230960B833E619994B9 (U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_m0C1E82DC2F4248E42B675230960B833E619994B9_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__21_MoveNext_m8F9205B3C4A94F7CE785F0EBFCF6DAF2C821BBBC (U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_m8F9205B3C4A94F7CE785F0EBFCF6DAF2C821BBBC_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,Cysharp.Threading.Tasks.UniTask,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil__ctor_m4682AE4758459D4ED76EDB8E7C0D58C5933C6387_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, RuntimeObject* ___0_source, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public _SkipUntil(IUniTaskAsyncEnumerable<TSource> source, UniTask other, CancellationToken cancellationToken1)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		__this->___cancellationToken1_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_4))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_3, L_4, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_6))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_6))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_002f:
	{
		// RunOther(other).Forget();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ___1_other;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = ((  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 (*) (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_7;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SkipUntil_get_Current_mC1A48148F8CDF9F21D8011A41323A75946E60CA9_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_set_Current_m219809F3C6CE67B127F4F2FD86C60A64DD3D42EB_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipUntil_MoveNextAsync_mD5985586D0ECE1B90C7DFFEC35A15D01D603659C_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (exception != null)
		Exception_t* L_0 = __this->___exception_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return UniTask.FromException<bool>(exception);
		Exception_t* L_1 = __this->___exception_10;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		// if (cancellationToken1.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_4);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return UniTask.FromCanceled<bool>(cancellationToken1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken1_4;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
		L_6 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_5, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		return L_6;
	}

IL_002d:
	{
		// if (enumerator == null)
		RuntimeObject* L_7 = __this->___enumerator_7;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken1);
		RuntimeObject* L_8 = __this->___source_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = __this->___cancellationToken1_4;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_8, L_9);
		__this->___enumerator_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_7), (void*)L_10);
	}

IL_004c:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_11, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (completed)
		bool L_12 = __this->___completed_5;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// SourceMoveNext();
		((  void (*) (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_0065:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_SourceMoveNext_m39E3E065C0753A1DC50C0D33F5B5CA724AD4419D_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	try
	{// begin try (depth: 1)

IL_0000_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = __this->___enumerator_7;
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_8 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_8))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_8);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_3, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0044_1;
			}
		}
		{
			// continueNext = true;
			__this->___continueNext_9 = (bool)1;
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			// if (continueNext)
			bool L_5 = __this->___continueNext_9;
			if (!L_5)
			{
				goto IL_0055_1;
			}
		}
		{
			// continueNext = false;
			__this->___continueNext_9 = (bool)0;
			// goto LOOP;
			goto IL_0000_1;
		}

IL_0044_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_6 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_8);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_2;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_6, L_7, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0055_1:
		{
			// }
			goto IL_0067;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{// begin catch(System.Exception)
		Exception_t* L_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_8;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_10 = V_1;
		bool L_11;
		L_11 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_9, L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0067;
	}// end catch (depth: 1)

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_MoveNextCore_m29A4849D9A2BD2BBEC19A58FD9A54D22C5D85272_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_SkipUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_1 = V_0;
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_8;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// self.Current = self.enumerator.Current;
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_6 = V_0;
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___enumerator_7;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_8);
		NullCheck(L_6);
		((  void (*) (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_6, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		// self.completionSource.TrySetResult(true);
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource_0);
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_11, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// if (self.continueNext)
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___continueNext_9;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		// self.SourceMoveNext();
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_0047:
	{
		// self.completionSource.TrySetResult(false);
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource_0);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::RunOther(Cysharp.Threading.Tasks.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _SkipUntil_RunOther_mFD45FBDA8DA6DE9228A340BB005F886162E2BB21_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = ___0_other;
		(&V_0)->___other_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other_2))->___source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_2 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__18_tDA646E85C809C3D4FC0B6688449810140DB18516_m3A56C36E73B893AC91742B6F2DFAA366AE26A622(L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_3 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_3, NULL);
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_OnCanceled1_m38BCE3645DB67A24112C73E880E7BF9CA10D4CF8_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* V_0 = NULL;
	{
		// var self = (_SkipUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// self.completionSource.TrySetCanceled(self.cancellationToken1);
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource_0);
		_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = L_3->___cancellationToken1_4;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _SkipUntil_DisposeAsync_m1E90CFBBBEA3FC6B11884E0C57468B0AA7940DC6_gshared (_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_6);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// if (enumerator != null)
		RuntimeObject* L_1 = __this->___enumerator_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_2 = __this->___enumerator_7;
		NullCheck((RuntimeObject*)L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return L_3;
	}

IL_001f:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil__cctor_mDC72DD552E7608B9BA36E649045DB6E7969FAE61_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), NULL);
		((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntil_t6985B8757A15F8E6CD64BBCA0E7259C657FE7879_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2), (void*)L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled__ctor_mBA3BE8B648542D1736C98C42653F2288219823C0_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public _SkipUntilCanceled(IUniTaskAsyncEnumerable<TSource> source, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_4), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		__this->___cancellationToken1_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_5))->____source_0), (void*)NULL);
		// this.cancellationToken2 = cancellationToken2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		__this->___cancellationToken2_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken2_6))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_7))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_7))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_0036:
	{
		// if (cancellationToken1 != cancellationToken2 && cancellationToken2.CanBeCanceled)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// this.cancellationTokenRegistration2 = cancellationToken2.RegisterWithoutCaptureExecutionContext(CancelDelegate2, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate2_2;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_11, L_12, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration2_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration2_8))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration2_8))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_005a:
	{
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SkipUntilCanceled_get_Current_m3F737B2ACF05D6568796D8C4B42A3B25E5DBAEBC_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_set_Current_mB86C1DA859D0E2DA65D0954DB6B48053A7E80F3A_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipUntilCanceled_MoveNextAsync_m566765CB2AE8C793EEAAF873F5246867336EC18B_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enumerator == null)
		RuntimeObject* L_0 = __this->___enumerator_10;
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = 1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_1 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_5);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = 1;
		__this->___isCanceled_9 = 1;
	}

IL_001c:
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = 1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken2_6);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = 1;
		__this->___isCanceled_9 = 1;
	}

IL_0030:
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken2); // use only AsyncEnumerator provided token.
		RuntimeObject* L_5 = __this->___source_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken2_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		__this->___enumerator_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_10), (void*)L_7);
	}

IL_0047:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_8, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (isCanceled != 0)
		int32_t L_9 = __this->___isCanceled_9;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// SourceMoveNext();
		((  void (*) (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_0060:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_11;
		L_11 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_10, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
		memset((&L_12), 0, sizeof(L_12));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_12), (RuntimeObject*)__this, L_11, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_SourceMoveNext_mE9E4B6414462C3A1A50A21A1DB2BB8BF3ABCB50E_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	try
	{// begin try (depth: 1)

IL_0000_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = __this->___enumerator_10;
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_11 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_11))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_11);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_3, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0044_1;
			}
		}
		{
			// continueNext = true;
			__this->___continueNext_12 = (bool)1;
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// if (continueNext)
			bool L_5 = __this->___continueNext_12;
			if (!L_5)
			{
				goto IL_0055_1;
			}
		}
		{
			// continueNext = false;
			__this->___continueNext_12 = (bool)0;
			// goto LOOP;
			goto IL_0000_1;
		}

IL_0044_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_6 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_11);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_3;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_6, L_7, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0055_1:
		{
			// }
			goto IL_0067;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{// begin catch(System.Exception)
		Exception_t* L_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_8;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_10 = V_1;
		bool L_11;
		L_11 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_9, L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0067;
	}// end catch (depth: 1)

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_MoveNextCore_m9F25A4A52A6683863FB32CFF551821AEE96621BA_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_SkipUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_1 = V_0;
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_11;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// self.Current = self.enumerator.Current;
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_6 = V_0;
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___enumerator_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8);
		NullCheck(L_6);
		((  void (*) (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_6, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// self.completionSource.TrySetResult(true);
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource_0);
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_11, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// if (self.continueNext)
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___continueNext_12;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		// self.SourceMoveNext();
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}

IL_0047:
	{
		// self.completionSource.TrySetResult(false);
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource_0);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_OnCanceled1_m2A0FCB14A4F2FB4E519490EBCBF53B6A89892A1A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* V_0 = NULL;
	{
		// var self = (_SkipUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.isCanceled == 0)
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (Interlocked.Increment(ref self.isCanceled) == 1)
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_3 = V_0;
		NullCheck(L_3);
		int32_t* L_4 = (int32_t*)(&L_3->___isCanceled_9);
		int32_t L_5;
		L_5 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// self.cancellationTokenRegistration2.Dispose();
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_6 = V_0;
		NullCheck(L_6);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_7 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_6->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_7, NULL);
		// self.SourceMoveNext();
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_8 = V_0;
		NullCheck(L_8);
		((  void (*) (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::OnCanceled2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_OnCanceled2_mEEF12BCC72587F30AFEB30072826208020E58278_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* V_0 = NULL;
	{
		// var self = (_SkipUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.isCanceled == 0)
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (Interlocked.Increment(ref self.isCanceled) == 1)
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_3 = V_0;
		NullCheck(L_3);
		int32_t* L_4 = (int32_t*)(&L_3->___isCanceled_9);
		int32_t L_5;
		L_5 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// self.cancellationTokenRegistration2.Dispose();
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_6 = V_0;
		NullCheck(L_6);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_7 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_6->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_7, NULL);
		// self.SourceMoveNext();
		_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* L_8 = V_0;
		NullCheck(L_8);
		((  void (*) (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	}

IL_002e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _SkipUntilCanceled_DisposeAsync_m368439BB368E0749BDE4DE5230C53F59FF5B2E6B_gshared (_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_7);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// cancellationTokenRegistration2.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_1 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_1, NULL);
		// if (enumerator != null)
		RuntimeObject* L_2 = __this->___enumerator_10;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_3 = __this->___enumerator_10;
		NullCheck((RuntimeObject*)L_3);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		return L_4;
	}

IL_002a:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5 = V_0;
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled__cctor_m5A3D1309820FFBB93A687B23504AE872FD1BC451_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> CancelDelegate2 = OnCanceled2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2), (void*)L_1);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_t5361ADEB409145AD5458EBA20FBBC0761C430E99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3), (void*)L_2);
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhile__ctor_mFC8B8B9969C42DF094CA70E249ABAB5954E64420_gshared (_SkipWhile_tEDB20E7E113428554400BB71336E7E697EF247D0* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhile_TryMoveNextCore_mEE1AF1A57580E12BB28AE011D94CAC53A022F148_gshared (_SkipWhile_tEDB20E7E113428554400BB71336E7E697EF247D0* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// if (predicate == null || !predicate(SourceCurrent))
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_7;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = __this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_4)
		{
			goto IL_0036;
		}
	}

IL_001e:
	{
		// predicate = null;
		__this->___predicate_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)(Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// result = default;
		bool* L_7 = ___1_result;
		*((int8_t*)L_7) = (int8_t)0;
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// result = false;
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)0;
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwait__ctor_m8A693ED28AACB67747070FACF2B84CC0B84FDFB9_gshared (_SkipWhileAwait_tB763CAE510EB8E4DECADB14AD850F26D443255E2* __this, RuntimeObject* ___0_source, Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileAwait_TransformAsync_m0589E67DC13217F6F929537FECE6AF951D739C2C_gshared (_SkipWhileAwait_tB763CAE510EB8E4DECADB14AD850F26D443255E2* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (predicate == null)
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_0 = __this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent);
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_2 = __this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
		L_4 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_4;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwait_TrySetCurrentCore_m28264D065E8528F22301D877974BFF7C46F0679A_gshared (_SkipWhileAwait_tB763CAE510EB8E4DECADB14AD850F26D443255E2* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (!awaitResult)
		bool L_0 = ___0_awaitResult;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration= false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// terminateIteration= false;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwaitWithCancellation__ctor_m41EB0A43926CB2D001A3A49F14A6D956D09AA920_gshared (_SkipWhileAwaitWithCancellation_t70EC45754372B0273B5DBD4E7B3B6A8784ED971D* __this, RuntimeObject* ___0_source, Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileAwaitWithCancellation_TransformAsync_m858DAB75C4A9C9DB58C721BE52B5813D5DA4239D_gshared (_SkipWhileAwaitWithCancellation_t70EC45754372B0273B5DBD4E7B3B6A8784ED971D* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (predicate == null)
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_0 = __this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, cancellationToken);
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_2 = __this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this)->___cancellationToken_4;
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_5;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwaitWithCancellation_TrySetCurrentCore_m214A970B9D47ACCE6EE1894553BB667B48363802_gshared (_SkipWhileAwaitWithCancellation_t70EC45754372B0273B5DBD4E7B3B6A8784ED971D* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileInt__ctor_m4B2799B7EC8D9FB93899E02D2A97893D1B77E337_gshared (_SkipWhileInt_t80073D723B4E44088FF941BCDD57FF87744794DD* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileInt_TryMoveNextCore_m75773BCA8855B1C9C0E2A951725A641D5F0DFACD_gshared (_SkipWhileInt_t80073D723B4E44088FF941BCDD57FF87744794DD* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileInt_TryMoveNextCore_m75773BCA8855B1C9C0E2A951725A641D5F0DFACD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (predicate == null || !predicate(SourceCurrent, checked(index++)))
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = __this->___predicate_7;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = __this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_4 = __this->___index_8;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileInt_TryMoveNextCore_m75773BCA8855B1C9C0E2A951725A641D5F0DFACD_RuntimeMethod_var);
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		bool L_7;
		L_7 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, L_3, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_7)
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		// predicate = null;
		__this->___predicate_7 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)(Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0047:
	{
		// result = default;
		bool* L_10 = ___1_result;
		*((int8_t*)L_10) = (int8_t)0;
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// result = false;
		bool* L_11 = ___1_result;
		*((int8_t*)L_11) = (int8_t)0;
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwait__ctor_mAA93E4499F0B82ADF80E1DAC9833EDA2E68BCE0C_gshared (_SkipWhileIntAwait_t66F7BA426E37227E9F8E2D735A95C2A13EDFFFB8* __this, RuntimeObject* ___0_source, Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileIntAwait_TransformAsync_m690B5FE42C70C7C0E054016F65ADC9A2D36C5557_gshared (_SkipWhileIntAwait_t66F7BA426E37227E9F8E2D735A95C2A13EDFFFB8* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileIntAwait_TransformAsync_m690B5FE42C70C7C0E054016F65ADC9A2D36C5557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (predicate == null)
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_0 = __this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, checked(index++));
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_2 = __this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		int32_t L_4 = __this->___index_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileIntAwait_TransformAsync_m690B5FE42C70C7C0E054016F65ADC9A2D36C5557_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_7;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwait_TrySetCurrentCore_m0A141D550D49926C0B0CEFEA722C33C39A6681AA_gshared (_SkipWhileIntAwait_t66F7BA426E37227E9F8E2D735A95C2A13EDFFFB8* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwaitWithCancellation__ctor_m4B088F09308C1D6C60B584FDCCA6B64B8276FA70_gshared (_SkipWhileIntAwaitWithCancellation_tA0D74C7DFC356ABF35FF1B46393F5ECA3D9B16DB* __this, RuntimeObject* ___0_source, Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileIntAwaitWithCancellation_TransformAsync_m01F39767695632944CB6E447A3369DBB4478BF49_gshared (_SkipWhileIntAwaitWithCancellation_tA0D74C7DFC356ABF35FF1B46393F5ECA3D9B16DB* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileIntAwaitWithCancellation_TransformAsync_m01F39767695632944CB6E447A3369DBB4478BF49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (predicate == null)
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_0 = __this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, checked(index++), cancellationToken);
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_2 = __this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		int32_t L_4 = __this->___index_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileIntAwaitWithCancellation_TransformAsync_m01F39767695632944CB6E447A3369DBB4478BF49_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this)->___cancellationToken_4;
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
		L_8 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_8;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwaitWithCancellation_TrySetCurrentCore_m21BD32E0F217E90C76F69891C408AD5199EDB14D_gshared (_SkipWhileIntAwaitWithCancellation_tA0D74C7DFC356ABF35FF1B46393F5ECA3D9B16DB* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__ctor_m7ADA35813B9D3562B9403042AA0F621C37FE9718_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Take(IUniTaskAsyncEnumerable<TSource> source, int count, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.count = count;
		int32_t L_1 = ___1_count;
		__this->___count_3 = L_1;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_4))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Take_get_Current_m007D7865AAF3714F39E41D791B78FED69D67EB82_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_set_Current_mFD8B1746E706DF9AE7D963187F5B42C242FEEDC7_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Take_MoveNextAsync_mFF2F91D25E2C59BF3F6C267CE71B6CF9511C4E2F_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = __this->___enumerator_5;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___source_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_4;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
	}

IL_002a:
	{
		// if (checked(index) >= count)
		int32_t L_5 = __this->___index_7;
		int32_t L_6 = __this->___count_3;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_7;
	}

IL_003e:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_8, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_9, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_11), (RuntimeObject*)__this, L_10, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_SourceMoveNext_m790F3E1C88F8E6095FA6396F27295489F8FE8B69_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = __this->___enumerator_5;
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_3, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_5 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 6)))->___MoveNextCoreDelegate_1;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_7;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_9 = V_1;
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_8, L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_MoveNextCore_m37D4A254828424C7A1A516F3938A4A9585721863_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_Take)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_1 = V_0;
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_6;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// self.index++;
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_6 = V_0;
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->___index_7;
		NullCheck(L_7);
		L_7->___index_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// self.Current = self.enumerator.Current;
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_9 = V_0;
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___enumerator_5;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_11);
		NullCheck(L_9);
		((  void (*) (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_9, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// self.completionSource.TrySetResult(true);
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_13 = V_0;
		NullCheck(L_13);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_14 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_13)->___completionSource_0);
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_14, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0047:
	{
		// self.completionSource.TrySetResult(false);
		_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource_0);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Take_DisposeAsync_m65691CAECCD8D6352EBDA75F6BC059214727DEBE_gshared (_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enumerator != null)
		RuntimeObject* L_0 = __this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_1 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__cctor_m17AC51F4E09BE1251DDFB65F2DBB08E103B45273_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), NULL);
		((_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___MoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Take_t4DF6686B9AD28481DDEFF617D27672BA3489568D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___MoveNextCoreDelegate_1), (void*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__ctor_mBDDF37BFF995FC011FB281EB6FC771EC19BD482B_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _TakeLast(IUniTaskAsyncEnumerable<TSource> source, int count, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.count = count;
		int32_t L_1 = ___1_count;
		__this->___count_3 = L_1;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_4))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeLast_get_Current_m41655F172BCE4BA9ECEBF0EF70F4C19078B6B657_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_set_Current_m5E27B742DBC9C3658C409C28CEFD785D56A8DBDA_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeLast_MoveNextAsync_mB3D4C39F9F6F0A603CAED659344BA5E216D25F34_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = __this->___enumerator_5;
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___source_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_4;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		// queue = new Queue<TSource>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___queue_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_7), (void*)L_5);
	}

IL_0035:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_6, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_8;
		L_8 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_7, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		memset((&L_9), 0, sizeof(L_9));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_9), (RuntimeObject*)__this, L_8, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_SourceMoveNext_mEED11BC1AAB5673EAAE85710FDB96D99639EBBA4_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (iterateCompleted)
		bool L_0 = __this->___iterateCompleted_8;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// if (queue.Count > 0)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = __this->___queue_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// Current = queue.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = __this->___queue_7;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		((  void (*) (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_5, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_7, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0043:
	{
	}

IL_0044:
	try
	{// begin try (depth: 1)

IL_0044_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_9 = __this->___enumerator_5;
			NullCheck(L_9);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
			L_10 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_9);
			V_0 = L_10;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_11;
			L_11 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_12, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_0088_1;
			}
		}
		{
			// continueNext = true;
			__this->___continueNext_9 = (bool)1;
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			// if (continueNext)
			bool L_14 = __this->___continueNext_9;
			if (!L_14)
			{
				goto IL_0099_1;
			}
		}
		{
			// continueNext = false;
			__this->___continueNext_9 = (bool)0;
			// goto LOOP; // avoid recursive
			goto IL_0044_1;
		}

IL_0088_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_16 = ((_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___MoveNextCoreDelegate_1;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_15, L_16, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0099_1:
		{
			// }
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Exception)
		Exception_t* L_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_17;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_19 = V_1;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ab;
	}// end catch (depth: 1)

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_MoveNextCore_mD3F09C56CE2A66F828109D0DE969BCF9AEC48ACC_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeLast)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_1 = V_0;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_6;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_009b;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0086;
		}
	}
	{
		// if (self.queue.Count < self.count)
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_6 = V_0;
		NullCheck(L_6);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = L_6->___queue_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___count_3;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		// self.queue.Enqueue(self.enumerator.Current);
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_11 = V_0;
		NullCheck(L_11);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = L_11->___queue_7;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___enumerator_5;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_14);
		NullCheck(L_12);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_12, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (!self.continueNext)
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___continueNext_9;
		if (L_17)
		{
			goto IL_00a2;
		}
	}
	{
		// self.SourceMoveNext();
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_18 = V_0;
		NullCheck(L_18);
		((  void (*) (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_0055:
	{
		// self.queue.Dequeue();
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_19 = V_0;
		NullCheck(L_19);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = L_19->___queue_7;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		// self.queue.Enqueue(self.enumerator.Current);
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_22 = V_0;
		NullCheck(L_22);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_23 = L_22->___queue_7;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___enumerator_5;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_25);
		NullCheck(L_23);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_23, L_26, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (!self.continueNext)
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_27 = V_0;
		NullCheck(L_27);
		bool L_28 = L_27->___continueNext_9;
		if (L_28)
		{
			goto IL_00a2;
		}
	}
	{
		// self.SourceMoveNext();
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_29 = V_0;
		NullCheck(L_29);
		((  void (*) (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_0086:
	{
		// self.continueNext = false;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_30 = V_0;
		NullCheck(L_30);
		L_30->___continueNext_9 = (bool)0;
		// self.iterateCompleted = true;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_31 = V_0;
		NullCheck(L_31);
		L_31->___iterateCompleted_8 = (bool)1;
		// self.SourceMoveNext();
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_32 = V_0;
		NullCheck(L_32);
		((  void (*) (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_009b:
	{
		// self.continueNext = false;
		_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* L_33 = V_0;
		NullCheck(L_33);
		L_33->___continueNext_9 = (bool)0;
	}

IL_00a2:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeLast_DisposeAsync_m905E572383F14D64C30EAA034FE764A5A0DB48B1_gshared (_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enumerator != null)
		RuntimeObject* L_0 = __this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_1 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__cctor_m55539A4A383B250D10E3C64F059A953473C80A53_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___MoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeLast_t84EE067ADA892C1978D1673FA2D86212B4BFC388_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___MoveNextCoreDelegate_1), (void*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,Cysharp.Threading.Tasks.UniTask,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__ctor_mA0012C91698ED6D7312BC7613E872E1493FF5644_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, RuntimeObject* ___0_source, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public _TakeUntil(IUniTaskAsyncEnumerable<TSource> source, UniTask other, CancellationToken cancellationToken1)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		__this->___cancellationToken1_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_4))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_3, L_4, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_5))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_5))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_002f:
	{
		// RunOther(other).Forget();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ___1_other;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = ((  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 (*) (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184*, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_7;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeUntil_get_Current_mD8C420939E60EAB0078993BC9C56E59AF67FE2DD_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_set_Current_m44D3756744DA7141DFF5A0BA96F4F5EE3397B158_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeUntil_MoveNextAsync_m6632F76DD7B1BA75F98F25628CD37C751FFA08D7_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (completed)
		bool L_0 = __this->___completed_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// if (exception != null)
		Exception_t* L_2 = __this->___exception_7;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return UniTask.FromException<bool>(exception);
		Exception_t* L_3 = __this->___exception_7;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
		L_4 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_3, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		// if (cancellationToken1.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_4);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_5, NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// return UniTask.FromCanceled<bool>(cancellationToken1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = __this->___cancellationToken1_4;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
		L_8 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_7, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		return L_8;
	}

IL_003b:
	{
		// if (enumerator == null)
		RuntimeObject* L_9 = __this->___enumerator_8;
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken1);
		RuntimeObject* L_10 = __this->___source_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken1_4;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_10, L_11);
		__this->___enumerator_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_8), (void*)L_12);
	}

IL_005a:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_13, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_14 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_15;
		L_15 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_14, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16;
		memset((&L_16), 0, sizeof(L_16));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_16), (RuntimeObject*)__this, L_15, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_16;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_SourceMoveNext_mAAA2DDAD1888FAE7864B15D7154ABEA4FC509879_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = __this->___enumerator_8;
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_9 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_9))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_9);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_3, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_5 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_9);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_2;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_7;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_9 = V_1;
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_8, L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_MoveNextCore_m55A5AFA50BF088FB28F81C277B9AC230D5CB071D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_1 = V_0;
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_9;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		// if (self.exception != null)
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_6 = V_0;
		NullCheck(L_6);
		Exception_t* L_7 = L_6->___exception_7;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// self.completionSource.TrySetException(self.exception);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_8)->___completionSource_0);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_10 = V_0;
		NullCheck(L_10);
		Exception_t* L_11 = L_10->___exception_7;
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_9, L_11, UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		// else if (self.cancellationToken1.IsCancellationRequested)
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_13 = V_0;
		NullCheck(L_13);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_14 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_13->___cancellationToken1_4);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_14, NULL);
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken1);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource_0);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_18 = V_0;
		NullCheck(L_18);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_19 = L_18->___cancellationToken1_4;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_17, L_19, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0055:
	{
		// self.Current = self.enumerator.Current;
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_21 = V_0;
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___enumerator_8;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_23);
		NullCheck(L_21);
		((  void (*) (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_21, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		// self.completionSource.TrySetResult(true);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_25 = V_0;
		NullCheck(L_25);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_26 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_25)->___completionSource_0);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_26, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_28)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_29, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0081:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::RunOther(Cysharp.Threading.Tasks.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _TakeUntil_RunOther_m324E1A5C53E44242F39C022AC3DEC0FA7AA2651D_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = ___0_other;
		(&V_0)->___other_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other_2))->___source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_2 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_tE419B2F2EB38B51B0800BC89FA6DFB4255D034E9_mF589CA19C1FAF007C429FEEAEF43F339E0E712F7(L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_3 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_3, NULL);
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_OnCanceled1_mD63A808AAB6C41CB20838AEE53E7099212E99A5B_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* V_0 = NULL;
	{
		// var self = (_TakeUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// self.completionSource.TrySetCanceled(self.cancellationToken1);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource_0);
		_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = L_3->___cancellationToken1_4;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeUntil_DisposeAsync_mF3012B4813E20A5EC22CB6C1B6CB081F849AB1F6_gshared (_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_5);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// if (enumerator != null)
		RuntimeObject* L_1 = __this->___enumerator_8;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_2 = __this->___enumerator_8;
		NullCheck((RuntimeObject*)L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return L_3;
	}

IL_001f:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__cctor_m387E63CEDCDD74FFAA2E33326926E9368C047070_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), NULL);
		((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t5A608B23C0C991C6D2A2640EBCE6AC4008994184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2), (void*)L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__ctor_m13B8F9E0A39D76C050E2B37AA90197B4AEA86A8A_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public _TakeUntilCanceled(IUniTaskAsyncEnumerable<TSource> source, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_4), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		__this->___cancellationToken1_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_5))->____source_0), (void*)NULL);
		// this.cancellationToken2 = cancellationToken2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		__this->___cancellationToken2_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken2_6))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_7))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_7))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_0036:
	{
		// if (cancellationToken1 != cancellationToken2 && cancellationToken2.CanBeCanceled)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// this.cancellationTokenRegistration2 = cancellationToken2.RegisterWithoutCaptureExecutionContext(CancelDelegate2, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate2_2;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_11, L_12, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration2_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration2_8))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration2_8))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_005a:
	{
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeUntilCanceled_get_Current_m9CF08A377D5B5B4B538EF44E4125C1A5AFE03B79_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_set_Current_m0F7C04B2748581F7F5280D3FE04650152139E3EC_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeUntilCanceled_MoveNextAsync_m7E8E5676D33AB76F4C4447F82BBEDDBA63092F11_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = true;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_5);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = true;
		__this->___isCanceled_9 = (bool)1;
	}

IL_0014:
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = true;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_2 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken2_6);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = true;
		__this->___isCanceled_9 = (bool)1;
	}

IL_0028:
	{
		// if (enumerator == null)
		RuntimeObject* L_4 = __this->___enumerator_10;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken2); // use only AsyncEnumerator provided token.
		RuntimeObject* L_5 = __this->___source_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken2_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		__this->___enumerator_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_10), (void*)L_7);
	}

IL_0047:
	{
		// if (isCanceled) return CompletedTasks.False;
		bool L_8 = __this->___isCanceled_9;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// if (isCanceled) return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_9;
	}

IL_0055:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_10, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_12;
		L_12 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_11, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
		memset((&L_13), 0, sizeof(L_13));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_13), (RuntimeObject*)__this, L_12, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_SourceMoveNext_m07C76A8C405E07721BB7510197A3356857DA075F_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = __this->___enumerator_10;
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_11 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_11))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_11);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_3, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_5 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_11);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_3;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_1 = L_7;
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_9 = V_1;
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_8, L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_MoveNextCore_m3D478DA101F5A1F009ECF6B9AB9A2EEC74228CCD_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_1 = V_0;
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___awaiter_11;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (self.isCanceled)
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->___isCanceled_9;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_8)->___completionSource_0);
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_9, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0030:
	{
		// self.Current = self.enumerator.Current;
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_11 = V_0;
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___enumerator_10;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_13);
		NullCheck(L_11);
		((  void (*) (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// self.completionSource.TrySetResult(true);
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_004f:
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_18 = V_0;
		NullCheck(L_18);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_18)->___completionSource_0);
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_19, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled1_m069A2661112CB3ACF36641176CEEB691997FF37E_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* V_0 = NULL;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (!self.isCanceled)
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// self.cancellationTokenRegistration2.Dispose();
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_3 = V_0;
		NullCheck(L_3);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_3->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_4, NULL);
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_5 = V_0;
		NullCheck(L_5);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_5)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::OnCanceled2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled2_m5213ACA347CFD74F0C9939FCF7FDF1F868A56D8A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* V_0 = NULL;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (!self.isCanceled)
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// self.cancellationTokenRegistration1.Dispose();
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_3 = V_0;
		NullCheck(L_3);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_3->___cancellationTokenRegistration1_7);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_4, NULL);
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* L_5 = V_0;
		NullCheck(L_5);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_5)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeUntilCanceled_DisposeAsync_m84FC8DB543275047ACB4E9E6851B6868B22812B0_gshared (_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_7);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// cancellationTokenRegistration2.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_1 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_1, NULL);
		// if (enumerator != null)
		RuntimeObject* L_2 = __this->___enumerator_10;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_3 = __this->___enumerator_10;
		NullCheck((RuntimeObject*)L_3);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		return L_4;
	}

IL_002a:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5 = V_0;
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__cctor_m6CE9FEE244610A29CEECC8545FBBC636E17132B2_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> CancelDelegate2 = OnCanceled2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2), (void*)L_1);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t640B0126EF6286F2DC80A6448F5A157E880A2494_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3), (void*)L_2);
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhile__ctor_m904AD0526E539693005157BC52ABB81777006330_gshared (_TakeWhile_tFEFE7DA96CA3450AE8B65DCF8D43EF6E411E7981* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhile_TryMoveNextCore_mD8AF668F54B2018B531B9017B14530DAF0790BBA_gshared (_TakeWhile_tFEFE7DA96CA3450AE8B65DCF8D43EF6E411E7981* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (predicate(SourceCurrent))
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck(L_1);
		bool L_3;
		L_3 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_5 = ___1_result;
		*((int8_t*)L_5) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// result = false;
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)0;
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwait__ctor_m9FECCBC4A92CAB0F8B6A294292E6773B4FA0B75D_gshared (_TakeWhileAwait_tDB204261204654FC6622F893488195F7CF4B36B1* __this, RuntimeObject* ___0_source, Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileAwait_TransformAsync_m55FE519E7673AAB6590029846FC12B00A852FC61_gshared (_TakeWhileAwait_tDB204261204654FC6622F893488195F7CF4B36B1* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	{
		// return predicate(sourceCurrent);
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_0 = __this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwait_TrySetCurrentCore_m089B2351A74076FFE7C3EA7A17ADFCC73CE78A4D_gshared (_TakeWhileAwait_tDB204261204654FC6622F893488195F7CF4B36B1* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwaitWithCancellation__ctor_m19534383A6290B0C1255A0D0849B4663ECA36535_gshared (_TakeWhileAwaitWithCancellation_t0E887BCDCDDD98932E791469C9A59509FDFF69A7* __this, RuntimeObject* ___0_source, Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileAwaitWithCancellation_TransformAsync_m97A303F9CBBE1E8E739BA6A83FE5F1086E109777_gshared (_TakeWhileAwaitWithCancellation_t0E887BCDCDDD98932E791469C9A59509FDFF69A7* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	{
		// return predicate(sourceCurrent, cancellationToken);
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_0 = __this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this)->___cancellationToken_4;
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_3;
		L_3 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_3;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwaitWithCancellation_TrySetCurrentCore_m4799753320B9CC0B8B1D79E44C7AC7BF590D71B2_gshared (_TakeWhileAwaitWithCancellation_t0E887BCDCDDD98932E791469C9A59509FDFF69A7* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileInt__ctor_m4E54532893FF64C37E68403B75413D88F7CB752F_gshared (_TakeWhileInt_t030FF829336EB98954C7F7F5F7F23DA09C1E0D6C* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileInt_TryMoveNextCore_mC28FA1FA054EFC8C4E230E9315948F7B1EE2EA9F_gshared (_TakeWhileInt_t030FF829336EB98954C7F7F5F7F23DA09C1E0D6C* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileInt_TryMoveNextCore_mC28FA1FA054EFC8C4E230E9315948F7B1EE2EA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (predicate(SourceCurrent, checked(index++)))
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = __this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_3 = __this->___index_8;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int64_t)L_4 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileInt_TryMoveNextCore_mC28FA1FA054EFC8C4E230E9315948F7B1EE2EA9F_RuntimeMethod_var);
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this);
		((  void (*) (AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_tFA7BA4F95F7503D2CAFB95428C9786907B62397F*)__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// result = false;
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)0;
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwait__ctor_mDE4E033F2386C9C104672178913D8C3D5A5D86E8_gshared (_TakeWhileIntAwait_t6F818C259D1082287ECC84AFC29F44D71F0A9CD7* __this, RuntimeObject* ___0_source, Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileIntAwait_TransformAsync_mCA7B3925366E7FD179B540A665BC7EFA417007B5_gshared (_TakeWhileIntAwait_t6F818C259D1082287ECC84AFC29F44D71F0A9CD7* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileIntAwait_TransformAsync_mCA7B3925366E7FD179B540A665BC7EFA417007B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return predicate(sourceCurrent, checked(index++));
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_0 = __this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		int32_t L_2 = __this->___index_11;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileIntAwait_TransformAsync_mCA7B3925366E7FD179B540A665BC7EFA417007B5_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_5;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwait_TrySetCurrentCore_m5D8984AD3E0637BFF610E24CF55FE4DF06328A98_gshared (_TakeWhileIntAwait_t6F818C259D1082287ECC84AFC29F44D71F0A9CD7* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwaitWithCancellation__ctor_m92AA6B24D4A20E5BB1F00926C586E1F7E62CB4AA_gshared (_TakeWhileIntAwaitWithCancellation_t4838E8D9E145629338F9533F818A35EFC84A35AF* __this, RuntimeObject* ___0_source, Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileIntAwaitWithCancellation_TransformAsync_m72C825BC76D920AF472295A3F9C98C695658D42C_gshared (_TakeWhileIntAwaitWithCancellation_t4838E8D9E145629338F9533F818A35EFC84A35AF* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileIntAwaitWithCancellation_TransformAsync_m72C825BC76D920AF472295A3F9C98C695658D42C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return predicate(sourceCurrent, checked(index++), cancellationToken);
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_0 = __this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		int32_t L_2 = __this->___index_11;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileIntAwaitWithCancellation_TransformAsync_m72C825BC76D920AF472295A3F9C98C695658D42C_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this)->___cancellationToken_4;
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
		L_6 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_6;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwaitWithCancellation_TrySetCurrentCore_m77E585406DC433FCC0E2C15A49A553DD50F28027_gshared (_TakeWhileIntAwaitWithCancellation_t4838E8D9E145629338F9533F818A35EFC84A35AF* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t3F074FBBEFBB62D02481B363AE5959F4D2A0D837*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
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
// System.Void Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::.ctor(System.Exception,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw__ctor_mA5391A9C5C0EBB1ED1E6740C46311282C6D85178_gshared (_Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403* __this, Exception_t* ___0_exception, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Throw(Exception exception, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.exception = exception;
		Exception_t* L_0 = ___0_exception;
		__this->___exception_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TValue Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Throw_get_Current_m2150C7DD9A282EF42968AC2B53709FB2ABB393C7_gshared (_Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// public TValue Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Throw_MoveNextAsync_m4CB275FDF29E7DA796FF8D953C9B71611BDBA64F_gshared (_Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_1);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// return UniTask.FromException<bool>(exception);
		Exception_t* L_1 = __this->___exception_0;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_2;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Throw_DisposeAsync_mCC193E2CAE1CA81BFE0BEC54B2A6BCD1360EB7DA_gshared (_Throw_t8B0282BD7B7A55278C47FDD33DEF3C8769491403* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
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
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable__ctor_m2A81F8713F8A9A274FCA8E4131C43EC280A72EEE_gshared (_ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerable(IEnumerable<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerable_get_Current_mD0953D56B8F74242219B0BC7CFB754D4866BF00B_gshared (_ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => enumerator.Current;
		RuntimeObject* L_0 = __this->___enumerator_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerable_MoveNextAsync_mD896542599CB900EF116E1ECA61C83135984A7CF_gshared (_ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_1);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = __this->___enumerator_2;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// enumerator = source.GetEnumerator();
		RuntimeObject* L_2 = __this->___source_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
		__this->___enumerator_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_2), (void*)L_3);
	}

IL_0024:
	{
		// if (enumerator.MoveNext())
		RuntimeObject* L_4 = __this->___enumerator_2;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// return CompletedTasks.True;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___True_1;
		return L_6;
	}

IL_0037:
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_7;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerable_DisposeAsync_m996A871508733D2CD3F9CF859546B2C110ED5638_gshared (_ToUniTaskAsyncEnumerable_t27F1EABA82E620E0A7C327BA2EAE556F7DF744D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// enumerator.Dispose();
		RuntimeObject* L_0 = __this->___enumerator_2;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = V_0;
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
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::.ctor(System.IObservable`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__ctor_mFF3EB5F12DEF7127656A70F7F47ABD21FC84F095_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public _ToUniTaskAsyncEnumerableObservable(IObservable<T> source, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.queuedResult = new Queue<T>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___queuedResult_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queuedResult_7), (void*)L_2);
		// if (cancellationToken.CanBeCanceled)
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// cancellationTokenRegistration = cancellationToken.RegisterWithoutCaptureExecutionContext(OnCanceledDelegate, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___OnCanceledDelegate_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration_10))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration_10))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_003a:
	{
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableObservable_get_Current_m32C843E604CEE8051451E987B56FC2DEC6226928_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, const RuntimeMethod* method) 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (useCachedCurrent)
		bool L_0 = __this->___useCachedCurrent_4;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return current;
		RuntimeObject* L_1 = __this->___current_5;
		return L_1;
	}

IL_000f:
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = __this->___queuedResult_7;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0063;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_1), NULL);
				// if (queuedResult.Count != 0)
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = __this->___queuedResult_7;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				if (!L_7)
				{
					goto IL_004e_1;
				}
			}
			{
				// current = queuedResult.Dequeue();
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = __this->___queuedResult_7;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___current_5 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___current_5), (void*)L_9);
				// useCachedCurrent = true;
				__this->___useCachedCurrent_4 = (bool)1;
				// return current;
				RuntimeObject* L_10 = __this->___current_5;
				V_2 = L_10;
				goto IL_0064;
			}

IL_004e_1:
			{
				// return default; // undefined.
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_11 = V_3;
				V_2 = L_11;
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableObservable_MoveNextAsync_mE8810998AF65DDD546D184587DF4B9916139CAA0_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = __this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b0;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_00b0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				// useCachedCurrent = false;
				__this->___useCachedCurrent_4 = (bool)0;
				// if (cancellationToken.IsCancellationRequested)
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_3);
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_4, NULL);
				if (!L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				// return UniTask.FromCanceled<bool>(cancellationToken);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_3;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
				L_7 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_6, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
				V_2 = L_7;
				goto IL_00b1;
			}

IL_0033_1:
			{
				// if (subscription == null)
				RuntimeObject* L_8 = __this->___subscription_9;
				if (L_8)
				{
					goto IL_004d_1;
				}
			}
			{
				// subscription = source.Subscribe(this);
				RuntimeObject* L_9 = __this->___source_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, (RuntimeObject*)__this);
				__this->___subscription_9 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___subscription_9), (void*)L_10);
			}

IL_004d_1:
			{
				// if (error != null)
				Exception_t* L_11 = __this->___error_8;
				if (!L_11)
				{
					goto IL_0063_1;
				}
			}
			{
				// return UniTask.FromException<bool>(error);
				Exception_t* L_12 = __this->___error_8;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_12, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
				V_2 = L_13;
				goto IL_00b1;
			}

IL_0063_1:
			{
				// if (queuedResult.Count != 0)
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = __this->___queuedResult_7;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				if (!L_15)
				{
					goto IL_0078_1;
				}
			}
			{
				// return CompletedTasks.True;
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___True_1;
				V_2 = L_16;
				goto IL_00b1;
			}

IL_0078_1:
			{
				// if (subscribeCompleted)
				bool L_17 = __this->___subscribeCompleted_6;
				if (!L_17)
				{
					goto IL_0088_1;
				}
			}
			{
				// return CompletedTasks.False;
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_18 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
				V_2 = L_18;
				goto IL_00b1;
			}

IL_0088_1:
			{
				// completionSource.Reset();
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
				UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_19, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
				// return new UniTask<bool>(this, completionSource.Version);
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
				int16_t L_21;
				L_21 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_20, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				memset((&L_22), 0, sizeof(L_22));
				UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_22), (RuntimeObject*)__this, L_21, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
				V_2 = L_22;
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
		// }
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23 = V_2;
		return L_23;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableObservable_DisposeAsync_m6A2108575288E9BE8CBB491D2891DA938162FDE7_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// subscription.Dispose();
		RuntimeObject* L_0 = __this->___subscription_9;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		// cancellationTokenRegistration.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_1 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration_10);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_1, NULL);
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCompleted_mC6EA9BDB343DA487B2982E1A27720A9AA38996AE_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = __this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// subscribeCompleted = true;
			__this->___subscribeCompleted_6 = (bool)1;
			// completionSource.TrySetResult(false);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_4 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
			bool L_5;
			L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_4, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			// }
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnError_mB5F4AC49DCB0D7CF1FA54F46DF475EB002F9AC9D_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = __this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// this.error = error;
			Exception_t* L_4 = ___0_error;
			__this->___error_8 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___error_8), (void*)L_4);
			// completionSource.TrySetException(error);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
			Exception_t* L_6 = ___0_error;
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
			// }
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnNext_mFC7CAB1CB3AEDDBF77DD23773539527D30CDD123_gshared (_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = __this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// queuedResult.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = __this->___queuedResult_7;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			// completionSource.TrySetResult(true); // include callback execution, too long lock?
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			// }
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnCanceled(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCanceled_mE2AE1A06D3611E904C8D8B2D64A5505F346167CA_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_1 = NULL;
	bool V_2 = false;
	{
		// var self = (_ToUniTaskAsyncEnumerableObservable)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// lock (self.queuedResult)
		_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* L_1 = V_0;
		NullCheck(L_1);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = L_1->___queuedResult_7;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_2), NULL);
			// self.completionSource.TrySetCanceled(self.cancellationToken);
			_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* L_6 = V_0;
			NullCheck(L_6);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_6)->___completionSource_0);
			_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC* L_8 = V_0;
			NullCheck(L_8);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = L_8->___cancellationToken_3;
			bool L_10;
			L_10 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_7, L_9, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
			// }
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__cctor_mEB17A805F76911D45C75BA099D5038EC4DC2E345_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> OnCanceledDelegate = OnCanceled;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), NULL);
		((_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___OnCanceledDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ToUniTaskAsyncEnumerableObservable_t84CE00FCA30F5F7BBB51A17F81E65F88967C49CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___OnCanceledDelegate_1), (void*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::.ctor(System.Threading.Tasks.Task`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask__ctor_m4A3F003DB2EABB4C4DE1B3A8834CCDD2749FE493_gshared (_ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A* __this, Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerableTask(Task<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// this.called = false;
		__this->___called_3 = (bool)0;
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableTask_get_Current_mA3D320C481D29D51DE6740013A2AA7C2A597ACCF_gshared (_ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => current;
		RuntimeObject* L_0 = __this->___current_2;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableTask_MoveNextAsync_mBF5D81BED6B5D74FE6EAF5E304BC9B2DD5001852_gshared (_ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline(AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_1 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD_mD87EAD031F3D8E539EFD733F118400DF70B37964_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_2 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableTask_DisposeAsync_mF59C0ED7784D65C655AEA019834C6D53E7AD901F_gshared (_ToUniTaskAsyncEnumerableTask_t0D9BEFA16B5CD4749FD0296452F53EF8BB12395A* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
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
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask__ctor_mCEE94E3849E5C5F9F9CD9F4805EDA2E6B88CB4DE_gshared (_ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerableUniTask(UniTask<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___source_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___source_0))->___result_1), (void*)NULL);
		#endif
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// this.called = false;
		__this->___called_3 = (bool)0;
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableUniTask_get_Current_m503D75F73908A0D52755315E9701108E38D9A1C6_gshared (_ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => current;
		RuntimeObject* L_0 = __this->___current_2;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableUniTask_MoveNextAsync_m41BF4E15705CFDB20E4E12D650F5569ADD64CB34_gshared (_ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline(AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_1 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B_mAFEEA11012F6787A4F89C0308F7443CF4C5FC24A_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_2 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableUniTask_DisposeAsync_m2C8098F150CB2203C91E83E2B8769C8B47FE1FF5_gshared (_ToUniTaskAsyncEnumerableUniTask_t97B269EA0A322D15500442491507D723673F6835* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_m44B57CB3088816D30F6893728DE145208885A354_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _Where(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, bool> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_7), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Where_get_Current_mB107B93934861216085C7E03626F47F3FD9765D1_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m2AF97893028FACA29D11C14DFA3B1F2752C0E5D3_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Where_MoveNextAsync_mF2542759470E61A9A38B343F46BC033B0E13DDE7_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_mF364671EB88996E411E19FD33BEDC29CE702761E_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Where_MoveNext_mF364671EB88996E411E19FD33BEDC29CE702761E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00cb_1;
		}

IL_0021_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_0038_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007b_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_7;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_0110;
		}

IL_007b_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00cb_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// if (predicate(Current, checked(index++)))
			Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = __this->___index_8;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _Where_MoveNext_mF364671EB88996E411E19FD33BEDC29CE702761E_RuntimeMethod_var);
			__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			NullCheck(L_16);
			bool L_21;
			L_21 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (!L_21)
			{
				goto IL_00bf_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_00fb;
		}

IL_00bf_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_00cb_1:
		{
			// goto DONE;
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{// begin catch(System.Exception)
		Exception_t* L_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_22;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_24 = V_3;
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_23, L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0110;
	}// end catch (depth: 1)

IL_00e5:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_26 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_26, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_00fb:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_28, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0110:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Where_DisposeAsync_mC5923EAC897F0FA036C2A8CA0DBCD8451993CC26_gshared (_Where_tADD8F5516CE54CEA57A496B726F09BDF3E2FAC0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_mDAC47BEFE4779CA05885354C629E78395F9239B6_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _Where(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, bool> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_7), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Where_get_Current_m85B595C5D6B7271CD60EAF49316AE98634939CE7_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m8798E4766B364B77CFF123A0C2BC02C374AF5DBE_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Where_MoveNextAsync_m01C3413FE893EC1015BC07C7F4AD52D8ED2BABED_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_m7F4AF3CEAAB34C2D0FFA394716704A7F9ED9A3DA_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00ba_1;
		}

IL_0021_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_0038_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007b_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_7;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_00ff;
		}

IL_007b_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00ba_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// if (predicate(Current))
			Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			NullCheck(L_16);
			bool L_18;
			L_18 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (!L_18)
			{
				goto IL_00ae_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_00ea;
		}

IL_00ae_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_00ba_1:
		{
			// goto DONE;
			goto IL_00d4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.Exception)
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_2 = L_19;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_21 = V_2;
		bool L_22;
		L_22 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ff;
	}// end catch (depth: 1)

IL_00d4:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_00ea:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_00ff:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Where_DisposeAsync_m0FA2899E568854A6B311E77217F188E1801517D3_gshared (_Where_t8382A46866CAC9701F6B4CF8C9ADC3D97C96B1EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_m4A7916F54A610F1372BB5967CBCB816C96BC25DA_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, RuntimeObject* ___0_source, Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwait(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwait_get_Current_m19E0CF97AFD4FED290DBC57A7E82FBFE3A79CE8E_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_m464DDD649DB3F403CCB13AA65F812697B93C6001_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwait_MoveNextAsync_mF3ACC74CA1F2511570668778E3B40FEA97F3AD6E_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_mD1F8251A0B484FB13C53C017C3316FA4A0A6DC37_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00e5_1;
				}
			}
		}
		{
			goto IL_0100_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_0145;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00e3_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current).GetAwaiter();
			Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			NullCheck(L_16);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_18;
			L_18 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_2_t5E34637B60FF44BDDF78F98837B78BD0C5C2ACB1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_18;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19;
			L_19 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter2_7 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_20, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00e5_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_22, L_23, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_0145;
		}

IL_00e3_1:
		{
			// goto DONE;
			goto IL_011a;
		}

IL_00e5_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_25;
			L_25 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_24, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_25)
			{
				goto IL_00f4_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0130;
		}

IL_00f4_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0100_1:
		{
			// goto DONE;
			goto IL_011a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0102;
		}
		throw e;
	}

CATCH_0102:
	{// begin catch(System.Exception)
		Exception_t* L_26 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_2 = L_26;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_28 = V_2;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0145;
	}// end catch (depth: 1)

IL_011a:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_30, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0130:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_32, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0145:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwait_DisposeAsync_m6BA215403104BC9AD9B8F9B3591584D71105482B_gshared (_WhereAwait_t07AF547021E184BAFB5DF162ABAA2F71E0E6DDC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_mBD9EAF1DFB27D5178713B2A4EF0BF916A6E41E55_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, RuntimeObject* ___0_source, Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwait(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwait_get_Current_mDAB434C94F767B12FA5BC6266D7813F8793509A3_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_mC871D7464A88DAB230CE3F796A695D70E9D85BFF_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwait_MoveNextAsync_mEC05B350275074C9CECD105FCB798629826CFCD7_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_m6E201E2075813B451F6487B94FC2BA07BDFA94DF_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwait_MoveNext_m6E201E2075813B451F6487B94FC2BA07BDFA94DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00f6_1;
				}
			}
		}
		{
			goto IL_0111_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_0156;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00f4_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, checked(index++)).GetAwaiter();
			Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = __this->___index_9;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwait_MoveNext_m6E201E2075813B451F6487B94FC2BA07BDFA94DF_RuntimeMethod_var);
			__this->___index_9 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			NullCheck(L_16);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
			L_21 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t369EBD6BF45C88CAB80999282744B9F9E0031642*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_21;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
			L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter2_7 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_23 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_23, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00f6_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_25 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_25, L_26, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_0156;
		}

IL_00f4_1:
		{
			// goto DONE;
			goto IL_012b;
		}

IL_00f6_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_28;
			L_28 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_27, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_28)
			{
				goto IL_0105_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0141;
		}

IL_0105_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0111_1:
		{
			// goto DONE;
			goto IL_012b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0113;
		}
		throw e;
	}

CATCH_0113:
	{// begin catch(System.Exception)
		Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_29;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_31 = V_3;
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0156;
	}// end catch (depth: 1)

IL_012b:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_33 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_33, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0141:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_35 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_36;
		L_36 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_35, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0156:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwait_DisposeAsync_mCD19AE77D9262A5A79FF9D901BBB15685D1F457F_gshared (_WhereAwait_t8EACA51D3D25C82B552D5BB52D2BF6ACF694B42B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_mA2D4E029EB016DD2FA32228651941355FC0D8E57_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, RuntimeObject* ___0_source, Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwaitWithCancellation_get_Current_m21C523F973857A3C47C1750147358A6FDD1FD20B_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m4FD20C4B4E199C9921F80D183540237757A44300_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m2BF9D2102287221CCE040CCB31D9EB6A5BE95E85_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m37BD20FEB1340FA4B8B9E71DE9CDDD803A438AE6_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00eb_1;
				}
			}
		}
		{
			goto IL_0106_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00e9_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, cancellationToken).GetAwaiter();
			Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = __this->___cancellationToken_3;
			NullCheck(L_16);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_19;
			L_19 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_3_t5B91D1CAC44C6E863DF1E93B246BF7A03BBB0A12*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_19;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20;
			L_20 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter2_7 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_21, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00eb_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_23 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_23, L_24, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_00e9_1:
		{
			// goto DONE;
			goto IL_0120;
		}

IL_00eb_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_25 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_26;
			L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_25, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_26)
			{
				goto IL_00fa_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0136;
		}

IL_00fa_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0106_1:
		{
			// goto DONE;
			goto IL_0120;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{// begin catch(System.Exception)
		Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_2 = L_27;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_29 = V_2;
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_28, L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014b;
	}// end catch (depth: 1)

IL_0120:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_31, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0136:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_33 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_33, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_014b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_mFBA03E75A51828D9C037591278522F02B7EAC370_gshared (_WhereAwaitWithCancellation_t099C0B664A254A40E4066D77C131F2110D656DFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_mAA44D01BE72F056F7B236FD1756704068942658C_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, RuntimeObject* ___0_source, Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwaitWithCancellation_get_Current_m4E46AACFA6F96D2BCF9D36A3690555C3D96FD741_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m7CD30D463FC6B125FCEC2D283D179EDD479B85C6_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m6F5896A40982A093042DDCA77C2D0F99A16253A3_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m5B67E5008DBDE6450881941504D8171157069A05_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwaitWithCancellation_MoveNext_m5B67E5008DBDE6450881941504D8171157069A05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = __this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00fc_1;
				}
			}
		}
		{
			goto IL_0117_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = __this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = __this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_8 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_8, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_10 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_12, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00fa_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = __this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, checked(index++), cancellationToken).GetAwaiter();
			Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC* L_16 = __this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = __this->___index_9;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwaitWithCancellation_MoveNext_m5B67E5008DBDE6450881941504D8171157069A05_RuntimeMethod_var);
			__this->___index_9 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = __this->___cancellationToken_3;
			NullCheck(L_16);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
			L_22 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Func_4_tE4F4D8E179813335E30A64F9645515D895A9E5AC*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_22;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
			L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			__this->___awaiter2_7 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_25;
			L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_24, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00fc_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = __this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_26, L_27, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_00fa_1:
		{
			// goto DONE;
			goto IL_0131;
		}

IL_00fc_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___awaiter2_7);
			bool L_29;
			L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline(L_28, Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_29)
			{
				goto IL_010b_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0147;
		}

IL_010b_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0117_1:
		{
			// goto DONE;
			goto IL_0131;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{// begin catch(System.Exception)
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_30;
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_32 = V_3;
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_31, L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_015c;
	}// end catch (depth: 1)

IL_0131:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_34 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_35;
		L_35 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_34, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0147:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_36 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_37;
		L_37 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_36, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_015c:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_m22C44746B6ACC10F0604892F46A3441DB229BFA2_gshared (_WhereAwaitWithCancellation_t61BB1509EC4E16C1477B62E255BA079A9CD36437* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_mC331AE8B657D8BEF721335EDE22F8484B2B35007_gshared (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_3), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_4), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* L_2 = ___2_resultSelector;
		__this->___resultSelector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_6))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A _Zip_get_Current_m218A2E29A924F4DE8C9D9808D80D9F63B73BB639_gshared (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___U3CCurrentU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m7899CC6D653536275843BCD81410A4AA6AD77514_gshared (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_11))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_11))->___Item2_1), (void*)NULL);
		#endif
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Zip_MoveNextAsync_mEE56EC378EC57C7520D33AD8C2332EC04A0ADD9B_gshared (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = __this->___firstEnumerator_7;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___first_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_6;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_7), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = __this->___second_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_8), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = __this->___firstEnumerator_7;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		__this->___firstAwaiter_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_11 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_9);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_11, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_13 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_9);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m208ECAEAC965F381403449DEA85A8BADEB88FAF6_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_1 = V_0;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___firstAwaiter_9;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_6 = V_0;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___secondEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_11;
		// self.completionSource.TrySetException(ex);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource_0);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_16 = V_0;
		NullCheck(L_16);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_16->___secondAwaiter_10);
		bool L_18;
		L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_17, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_20 = V_0;
		NullCheck(L_20);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_20->___secondAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_23 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_21, L_22, (RuntimeObject*)L_23, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m096727B2A1D8C7F4C74B02FEBFF0DDFB848B988F_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_1 = V_0;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___secondAwaiter_10;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_6 = V_0;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_7 = V_0;
		NullCheck(L_7);
		Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* L_8 = L_7->___resultSelector_5;
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___firstEnumerator_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___secondEnumerator_8;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
		NullCheck(L_8);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_15;
		L_15 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		NullCheck(L_6);
		((  void (*) (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_6, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_2 = L_16;
		// self.completionSource.TrySetException(ex);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_17 = V_0;
		NullCheck(L_17);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_17)->___completionSource_0);
		Exception_t* L_19 = V_2;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_21 = V_0;
		NullCheck(L_21);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_22 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_21->___cancellationToken_6);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_22, NULL);
		if (!L_23)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_26 = V_0;
		NullCheck(L_26);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = L_26->___cancellationToken_6;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_25, L_27, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_29 = V_0;
		NullCheck(L_29);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_30, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* L_32 = V_0;
		NullCheck(L_32);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_33 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_32)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_33, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Zip_DisposeAsync_m09F30B60A0994F82B7D51F04DD4D023A19614729_gshared (_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A_mF7EF6E7F4A63102835EFFBDB7CDBC6F7F884F349_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_m4A032CB3518725ADFB15FB62C6E8AA617BCCBB56_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t4A0BCD0EA40173F9413347917C470D7D3F3A4B2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_m05169384C08D753AD84B25B602E866E28CCFB0E8_gshared (_Zip_t499828EAE94482E9690485DF439F969FB37D2947* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_3), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_4), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_2 = ___2_resultSelector;
		__this->___resultSelector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_6))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Zip_get_Current_mD4772D2589D3BFC332613329B52649917AF8DE88_gshared (_Zip_t499828EAE94482E9690485DF439F969FB37D2947* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m3CC7DD7F83E272F2227176F388CB2FCD743B6249_gshared (_Zip_t499828EAE94482E9690485DF439F969FB37D2947* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Zip_MoveNextAsync_m2738339D21D6F6C8595E912B3D5E966C096FC509_gshared (_Zip_t499828EAE94482E9690485DF439F969FB37D2947* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = __this->___firstEnumerator_7;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___first_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_6;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_7), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = __this->___second_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_8), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = __this->___firstEnumerator_7;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		__this->___firstAwaiter_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_11 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_9);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_11, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_13 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_9);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m293EE3B833AEB76A714AB7D3B7C583F6892196EA_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t499828EAE94482E9690485DF439F969FB37D2947* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t499828EAE94482E9690485DF439F969FB37D2947*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_1 = V_0;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___firstAwaiter_9;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_6 = V_0;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___secondEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_11;
		// self.completionSource.TrySetException(ex);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource_0);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_16 = V_0;
		NullCheck(L_16);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_16->___secondAwaiter_10);
		bool L_18;
		L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_17, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_20 = V_0;
		NullCheck(L_20);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_20->___secondAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_23 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_21, L_22, (RuntimeObject*)L_23, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m65AF8C5915D140EFEA708E1729855F88FCEE6785_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t499828EAE94482E9690485DF439F969FB37D2947* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t499828EAE94482E9690485DF439F969FB37D2947*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_1 = V_0;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___secondAwaiter_10;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_6 = V_0;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_7 = V_0;
		NullCheck(L_7);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_8 = L_7->___resultSelector_5;
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___firstEnumerator_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___secondEnumerator_8;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
		NullCheck(L_8);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		NullCheck(L_6);
		((  void (*) (_Zip_t499828EAE94482E9690485DF439F969FB37D2947*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_6, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_2 = L_16;
		// self.completionSource.TrySetException(ex);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_17 = V_0;
		NullCheck(L_17);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_17)->___completionSource_0);
		Exception_t* L_19 = V_2;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_21 = V_0;
		NullCheck(L_21);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_22 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_21->___cancellationToken_6);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_22, NULL);
		if (!L_23)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_26 = V_0;
		NullCheck(L_26);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = L_26->___cancellationToken_6;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_25, L_27, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_29 = V_0;
		NullCheck(L_29);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_30, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t499828EAE94482E9690485DF439F969FB37D2947* L_32 = V_0;
		NullCheck(L_32);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_33 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_32)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_33, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Zip_DisposeAsync_m2E0B95F033697D5EF3A0A93020DD3BBB04DA04EA_gshared (_Zip_t499828EAE94482E9690485DF439F969FB37D2947* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207_m4F419A502A5888A9D28345A34D26728F9B6DB1B5_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_mA1746CCB870EE12A3B5307C893586FF8B5021DA3_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t499828EAE94482E9690485DF439F969FB37D2947_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_mBBF4D978F27D37460EB146E4963D92EED2C41FE7_gshared (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwait(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_4), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_5), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F* L_2 = ___2_resultSelector;
		__this->___resultSelector_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_7))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ZipAwait_get_Current_m629A079A5C12404903C6C51AD0BE5CF83DB22C4D_gshared (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_m348F8D2432D9F2B7AFD425248F26A1EBEC1F63D1_gshared (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwait_MoveNextAsync_m66054BF7EF6755EAE3C8CBC31F02EE00EA9B41F9_gshared (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = __this->___firstEnumerator_8;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___first_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_7;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_8), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = __this->___second_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_7;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_9), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = __this->___firstEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		__this->___firstAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_11 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_11, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_13 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_mFACFDCD22F88B296F3B606CD28AF262B301663A3_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_1 = V_0;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___firstAwaiter_10;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_6 = V_0;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___secondEnumerator_9;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_11;
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource_0);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_16 = V_0;
		NullCheck(L_16);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_16->___secondAwaiter_11);
		bool L_18;
		L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_17, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_20 = V_0;
		NullCheck(L_20);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_20->___secondAwaiter_11);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_23 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_21, L_22, (RuntimeObject*)L_23, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_m377D931DDE178EAD48986FF6505E3A87D30FE2B3_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_1 = V_0;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___secondAwaiter_11;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current).GetAwaiter();
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_6 = V_0;
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_7 = V_0;
			NullCheck(L_7);
			Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F* L_8 = L_7->___resultSelector_6;
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->___firstEnumerator_8;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = L_12->___secondEnumerator_9;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
			NullCheck(L_8);
			UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_15;
			L_15 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Func_3_tC46DBBBEAAAE0DD5C08C657B2DB941EC94B73C7F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_2 = L_15;
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_16;
			L_16 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
			NullCheck(L_6);
			L_6->___resultAwaiter_12 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
			#endif
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_17 = V_0;
			NullCheck(L_17);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_18 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_17->___resultAwaiter_12);
			bool L_19;
			L_19 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline(L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
			if (!L_19)
			{
				goto IL_005e_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_20 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))((RuntimeObject*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
			goto IL_006f_1;
		}

IL_005e_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_21 = V_0;
			NullCheck(L_21);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_22 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_21->___resultAwaiter_12);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3;
			_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_24 = V_0;
			Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(L_22, L_23, (RuntimeObject*)L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		}

IL_006f_1:
		{
			// }
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Exception)
		Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_25;
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_26 = V_0;
		NullCheck(L_26);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_26)->___completionSource_0);
		Exception_t* L_28 = V_3;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_008e;
	}// end catch (depth: 1)

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_30 = V_0;
		NullCheck(L_30);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_30)->___completionSource_0);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_31, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_m150D16A83360CDBEC787A10BC630718EB8465EF6_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_1 = V_0;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_3 = L_2->___resultAwaiter_12;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_5);
		((  void (*) (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_8 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_7->___cancellationToken_7);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource_0);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = L_12->___cancellationToken_7;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_11, L_13, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwait_DisposeAsync_m0EE6C9501001497ED5E73972E59049EE98E9D77C_gshared (_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191_m306B5FFDCC893968C6288B7792AC41393EB7C644_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_m97EDBF610FEC42FD8504C3430110F97F6BDA006B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), NULL);
		((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t1C8A86DB8D303A1F3BA5F8AD98878D2565DB87B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3), (void*)L_2);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_m7AB16A5CCDB24DFE7943DDA5BE99651A267C300C_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwaitWithCancellation(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, CancellationToken, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_4), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_5), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* L_2 = ___2_resultSelector;
		__this->___resultSelector_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_7))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ZipAwaitWithCancellation_get_Current_mB506D8CDCFA7BDEDDBE7C0716DBA9A20C92A99F3_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_m331D67B5930C42447BE6829A935FC306FD0E260A_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwaitWithCancellation_MoveNextAsync_m97705087627C7C53160B09B86F034D3DCAA82483_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = __this->___firstEnumerator_8;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = __this->___first_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_7;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_8), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = __this->___second_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_7;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_9), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = __this->___firstEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		__this->___firstAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_11 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_11, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_13 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_mFA0A072A3BE5F3565E73BABF5BBD2014BA894AD2_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___firstAwaiter_10;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_6 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___secondEnumerator_9;
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_11;
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource_0);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_16 = V_0;
		NullCheck(L_16);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_16->___secondAwaiter_11);
		bool L_18;
		L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_17, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_20 = V_0;
		NullCheck(L_20);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_20->___secondAwaiter_11);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_23 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_21, L_22, (RuntimeObject*)L_23, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_mDBFF561C42C2132E89F13E1B3341AB0E7943694A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = L_2->___secondAwaiter_11;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current, self.cancellationToken).GetAwaiter();
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_6 = V_0;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_7 = V_0;
			NullCheck(L_7);
			Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* L_8 = L_7->___resultSelector_6;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->___firstEnumerator_8;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = L_12->___secondEnumerator_9;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_15 = V_0;
			NullCheck(L_15);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = L_15->___cancellationToken_7;
			NullCheck(L_8);
			UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_17;
			L_17 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E*, RuntimeObject*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_2 = L_17;
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_18;
			L_18 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
			NullCheck(L_6);
			L_6->___resultAwaiter_12 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
			#endif
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_19 = V_0;
			NullCheck(L_19);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_20 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_19->___resultAwaiter_12);
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
			if (!L_21)
			{
				goto IL_0064_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_22 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))((RuntimeObject*)L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
			goto IL_0075_1;
		}

IL_0064_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_23 = V_0;
			NullCheck(L_23);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_24 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_23->___resultAwaiter_12);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_25 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_26 = V_0;
			Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(L_24, L_25, (RuntimeObject*)L_26, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		}

IL_0075_1:
		{
			// }
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception ex)
		V_3 = L_27;
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_28)->___completionSource_0);
		Exception_t* L_30 = V_3;
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_29, L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0094;
	}// end catch (depth: 1)

IL_0087:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_32 = V_0;
		NullCheck(L_32);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_33 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_32)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_33, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m7F91876C1100E60ED7981561FFC4D1991198101D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_3 = L_2->___resultAwaiter_12;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_5);
		((  void (*) (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_8 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_7->___cancellationToken_7);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource_0);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = L_12->___cancellationToken_7;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_11, L_13, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwaitWithCancellation_DisposeAsync_mF1CB8FAA3F89C48AA85EEC1CCC5DC76AF4107680_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mAB2F1E0C02340FCEBF13253E1F166FD63956D976_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) 
{
	{
		// public short Version => version;
		int16_t L_0 = __this->___version_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.token = token;
		int16_t L_1 = ___1_token;
		__this->___token_2 = L_1;
		// this.result = default;
		bool* L_2 = (bool*)(&__this->___result_1);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_8 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_9 = L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD_mD87EAD031F3D8E539EFD733F118400DF70B37964_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CMoveNextAsyncU3Ed__7_tCAFA5E89951566AFB5DAE02A1E0229B991108ADD* L_0 = ___0_stateMachine;
		U3CMoveNextAsyncU3Ed__7_MoveNext_mF1BC165BA5A32CD0232228F23DA19A32EFE98208(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_5;
	}

IL_0028:
	{
		// return UniTask.FromResult(result);
		bool L_6 = __this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B_mAFEEA11012F6787A4F89C0308F7443CF4C5FC24A_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CMoveNextAsyncU3Ed__7_t388C1E42870C8F76A49C4384023E1FDA3ADF476B* L_0 = ___0_stateMachine;
		U3CMoveNextAsyncU3Ed__7_MoveNext_mB79928C5E58E0B64106D0DD75C3DD6DB695820B2(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_continuation;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_continuation;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_8 = L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_3 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		bool L_4 = L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_6 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_7 = L_6->___token_2;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A_mF7EF6E7F4A63102835EFFBDB7CDBC6F7F884F349_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_t9D40003FD78109D63F14ACA0F2BE1AC22DB89F2A* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__18_MoveNext_m426C18CC240073CCFB5D7C305B6ECF7E9A90D435(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207_m4F419A502A5888A9D28345A34D26728F9B6DB1B5_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_t9EF29ACF453BF0B9351207C45C13E4CD2611B207* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__18_MoveNext_m15EEF046F9E454CF3C44091106AB75008F5FE36B(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_8 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_9 = L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191_m306B5FFDCC893968C6288B7792AC41393EB7C644_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_t99E588E36C92DA636860FEF3D855A2746C537191* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__21_MoveNext_m0C1E82DC2F4248E42B675230960B833E619994B9(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__21_MoveNext_m8F9205B3C4A94F7CE785F0EBFCF6DAF2C821BBBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = __this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___0_task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = __this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
