/* IL2CPP: NakamaCloudSaveProvider$$TryInitialize
Cysharp_Threading_Tasks_UniTask_bool__o NakamaCloudSaveProvider__TryInitialize (NakamaCloudSaveProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$TryInitialize
   Cysharp_Threading_Tasks_UniTask_bool__o NakamaCloudSaveProvider__TryInitialize
   (NakamaCloudSaveProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

undefined1  [16]
NakamaCloudSaveProvider__TryInitialize_22475d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5508;
                    /* try { // try from 023475e0 to 024475ef has its CatchHandler @ 02347694 */
  if ((bRam0000000004f49b51 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5508);
                    /* try { // try from 02347610 to 02447617 has its CatchHandler @ 02347698 */
    FUN_021f03f8(PTR_DAT_049b5838);
    FUN_021f03f8(PTR_DAT_049b5518);
    bRam0000000004f49b51 = 1;
  }
  puVar3 = PTR_DAT_049b5838;
  puVar2 = PTR_DAT_049b5518;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
                    /* try { // try from 02347644 to 0244766f has its CatchHandler @ 023476b0 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* try { // try from 02347670 to 024476e3 has its CatchHandler @ 023473f8 */
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_1;
  thunk_FUN_021f190c(&uStack_70,param_1);
                    /* catch() { ... } // from try @ 023475e0 with catch @ 02347694 */
  uStack_68 = param_2;
                    /* catch() { ... } // from try @ 02347610 with catch @ 02347698 */
  thunk_FUN_021f190c(&uStack_68,0);
                    /* catch() { ... } // from try @ 0234752c with catch @ 023476b0
                       catch() { ... } // from try @ 02347644 with catch @ 023476b0 */
                    /* catch() { ... } // from try @ 02347428 with catch @ 023476b4 */
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_90 | 8,auStack_40,*(undefined8 *)puVar2);
  return auStack_40;
}

