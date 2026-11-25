/* IL2CPP: TournamentModule$$Submit
Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o TournamentModule__Submit (TournamentModule_o* __this, int64_t score, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TournamentModule$$Submit
   Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o TournamentModule__Submit
   (TournamentModule_o* __this, int64_t score, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

undefined1  [16]
TournamentModule__Submit_254b4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5bd8;
  if ((bRam0000000004f4c046 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bd8);
    FUN_021f03f8(PTR_DAT_049caa08);
    FUN_021f03f8(PTR_DAT_049b5be8);
    bRam0000000004f4c046 = 1;
  }
  puVar3 = PTR_DAT_049caa08;
  puVar2 = PTR_DAT_049b5be8;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_a0 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_80 = param_1;
  thunk_FUN_021f190c(&uStack_80,param_1);
  uStack_78 = param_2;
  uStack_70 = param_3;
  thunk_FUN_021f190c(&uStack_70,0);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_a0 | 8,auStack_50,*(undefined8 *)puVar2);
  return auStack_50;
}

