/* IL2CPP: NakamaCloudSaveProvider$$EnsureAuthenticated
Cysharp_Threading_Tasks_UniTask_bool__o NakamaCloudSaveProvider__EnsureAuthenticated (NakamaCloudSaveProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$EnsureAuthenticated
   Cysharp_Threading_Tasks_UniTask_bool__o NakamaCloudSaveProvider__EnsureAuthenticated
   (NakamaCloudSaveProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

undefined1  [16]
NakamaCloudSaveProvider__EnsureAuthenticated_22474d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5508;
  if ((bRam0000000004f49b50 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5508);
    FUN_021f03f8(PTR_DAT_049b5830);
    FUN_021f03f8(PTR_DAT_049b5518);
    bRam0000000004f49b50 = 1;
  }
  puVar3 = PTR_DAT_049b5830;
  puVar2 = PTR_DAT_049b5518;
                    /* try { // try from 0234752c to 02447543 has its CatchHandler @ 023476b0 */
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_70 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,0);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_70 | 8,auStack_40,*(undefined8 *)puVar2);
  return auStack_40;
}

