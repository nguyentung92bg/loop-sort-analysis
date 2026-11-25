/* IL2CPP: NakamaUpdateProvider$$GetRequirementAsync
Cysharp_Threading_Tasks_UniTask_GameUpdateRequirement__o NakamaUpdateProvider__GetRequirementAsync (NakamaUpdateProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaUpdateProvider$$GetRequirementAsync
   Cysharp_Threading_Tasks_UniTask_GameUpdateRequirement__o
   NakamaUpdateProvider__GetRequirementAsync (NakamaUpdateProvider_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16]
NakamaUpdateProvider__GetRequirementAsync_2250978(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_DAT_049b5ec0;
  if ((bRam0000000004f49b8f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5ec0);
    FUN_021f03f8(PTR_DAT_049b5ec8);
    FUN_021f03f8(PTR_DAT_049b5ed0);
    bRam0000000004f49b8f = 1;
  }
  puVar3 = PTR_DAT_049b5ed0;
  puVar2 = PTR_DAT_049b5ec8;
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
  FUN_0235b6cc((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_70 | 8,auStack_40,*(undefined8 *)puVar3);
  return auStack_40;
}

