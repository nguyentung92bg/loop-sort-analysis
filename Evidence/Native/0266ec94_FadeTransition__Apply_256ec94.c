/* IL2CPP: FadeTransition$$Apply
Cysharp_Threading_Tasks_UniTask_o FadeTransition__Apply (FadeTransition_o __this, IMonitor_o* _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FadeTransition$$Apply
   Cysharp_Threading_Tasks_UniTask_o FadeTransition__Apply (FadeTransition_o __this, IMonitor_o*
   _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void FadeTransition__Apply_256ec94(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [16];
  
                    /* try { // try from 0266eca8 to 0276ecb3 has its CatchHandler @ 0266ee08 */
  if ((bRam0000000004f4c1bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2be8);
                    /* try { // try from 0266eccc to 0276ecdf has its CatchHandler @ 0266ee0c */
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
                    /* try { // try from 0266ece0 to 0276eddf has its CatchHandler @ 0266e978 */
    bRam0000000004f4c1bd = 1;
  }
  puVar3 = PTR_DAT_049c2bf0;
  puVar2 = PTR_DAT_049c2be8;
  puVar1 = PTR_DAT_049c2288;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*param_1 != 0) {
    UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*param_1,0);
    auStack_40 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,(int)param_1[1],0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    auVar5 = FUN_02526574(auStack_40,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60),
                          *(undefined8 *)puVar3);
    auVar5 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                       (auVar5._0_8_,auVar5._8_8_,*param_1,*(undefined8 *)puVar2);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar5._0_8_,auVar5._8_8_ & 0xffffffff,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

