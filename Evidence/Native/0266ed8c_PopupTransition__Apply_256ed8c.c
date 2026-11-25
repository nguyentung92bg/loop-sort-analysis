/* IL2CPP: PopupTransition$$Apply
Cysharp_Threading_Tasks_UniTask_o PopupTransition__Apply (PopupTransition_o __this, IMonitor_o* _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: PopupTransition$$Apply
   Cysharp_Threading_Tasks_UniTask_o PopupTransition__Apply (PopupTransition_o __this, IMonitor_o*
   _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined8 PopupTransition__Apply_256ed8c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4c1bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
                    /* try { // try from 0266ede0 to 0276ede3 has its CatchHandler @ 0266ee00 */
    FUN_021f03f8(PTR_DAT_049c2288);
                    /* try { // try from 0266ede4 to 0276ede7 has its CatchHandler @ 0266edfc */
                    /* try { // try from 0266ede8 to 0276ee3b has its CatchHandler @ 0266e978 */
                    /* catch() { ... } // from try @ 0266ec08 with catch @ 0266edec */
    FUN_021f03f8(PTR_DAT_049cbf60);
                    /* catch() { ... } // from try @ 0266ebd0 with catch @ 0266edf0 */
                    /* catch() { ... } // from try @ 0266ec40 with catch @ 0266edf4 */
                    /* catch() { ... } // from try @ 0266ec64 with catch @ 0266edf8 */
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 0266ede4 with catch @ 0266edfc */
                    /* catch() { ... } // from try @ 0266ede0 with catch @ 0266ee00 */
    bRam0000000004f4c1bf = 1;
  }
                    /* catch() { ... } // from try @ 0266ec24 with catch @ 0266ee04 */
  puVar2 = PTR_DAT_049b5138;
                    /* catch() { ... } // from try @ 0266eca8 with catch @ 0266ee08 */
                    /* catch() { ... } // from try @ 0266eccc with catch @ 0266ee0c */
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
                    /* catch() { ... } // from try @ 0266ebe8 with catch @ 0266ee10 */
  if (param_2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0266ec8c with catch @ 0266ee14 */
                    /* catch() { ... } // from try @ 0266eb3c with catch @ 0266ee18 */
                    /* catch() { ... } // from try @ 0266eb64 with catch @ 0266ee1c */
    bVar1 = *(byte *)(*(long *)PTR_DAT_049cbf60 + 0x130);
                    /* try { // try from 0266ee3c to 0276ee3f has its CatchHandler @ 0266ee60 */
                    /* try { // try from 0266ee40 to 0276ee63 has its CatchHandler @ 0266e978 */
    if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_049cbf60))
       && (uVar3 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                             (param_2,0x35030410,0), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 0266ee3c with catch @ 0266ee60 */
                    /* try { // try from 0266ee64 to 0276ee6b has its CatchHandler @ 0266ee74 */
                    /* try { // try from 0266ee6c to 0276ee77 has its CatchHandler @ 0266e978 */
      lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_2,0x35030410,0);
                    /* catch() { ... } // from try @ 0266ee64 with catch @ 0266ee74 */
      if (lVar4 != 0) {
                    /* try { // try from 0266ee78 to 0276ef83 has its CatchHandler @ 0266ee78
                       catch() { ... } // from try @ 0266ee78 with catch @ 0266ee78
                       catch() { ... } // from try @ 0266eff0 with catch @ 0266ee78
                       catch() { ... } // from try @ 0266f028 with catch @ 0266ee78
                       catch() { ... } // from try @ 0266f05c with catch @ 0266ee78
                       catch() { ... } // from try @ 0266f08c with catch @ 0266ee78
                       catch() { ... } // from try @ 0266f0b0 with catch @ 0266ee78 */
        uVar5 = UnityEngine_GameObject__get_transform_3c1ca74(lVar4,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        auStack_40 = LitMotion_LMotion__Create_2eaa1b4
                               (*(float *)(lVar4 + 0xc) * _UNK_013aa688,
                                *(float *)(lVar4 + 0x10) * _UNK_013aa688,
                                *(float *)(lVar4 + 0x14) * _UNK_013aa688,0);
        puVar2 = PTR_DAT_049c2288;
        lVar4 = *(long *)PTR_DAT_049c2288;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
          lVar4 = *(long *)puVar2;
        }
        auVar6 = FUN_02526574(auStack_40,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60),
                              *(undefined8 *)PTR_DAT_049c2bc0);
        auStack_40 = auVar6;
        auVar6 = FUN_024f4e50(auStack_40,0x1a,*(undefined8 *)PTR_DAT_049c1680);
        auVar6 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                           (auVar6._0_8_,auVar6._8_8_,uVar5,*(undefined8 *)PTR_DAT_049c1670);
        auVar6 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                           (auVar6._0_8_,auVar6._8_8_ & 0xffffffff,param_2,0);
        uVar5 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                          (auVar6._0_8_,auVar6._8_8_ & 0xffffffff,param_3,0);
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
                    /* try { // try from 0266ef84 to 0276ef8b has its CatchHandler @ 0266f068 */
  return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
}

