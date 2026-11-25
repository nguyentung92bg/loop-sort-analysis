/* IL2CPP: PlayerModule$$UpdatePlayerProfile
Cysharp_Threading_Tasks_UniTask_UpdatePlayerProfileResponse__o PlayerModule__UpdatePlayerProfile (PlayerModule_o* __this, PlayerProfile_o profile, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule$$UpdatePlayerProfile
   Cysharp_Threading_Tasks_UniTask_UpdatePlayerProfileResponse__o PlayerModule__UpdatePlayerProfile
   (PlayerModule_o* __this, PlayerProfile_o profile, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

void PlayerModule__UpdatePlayerProfile_2551b84
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [7];
  
  puVar1 = PTR_DAT_049b5d58;
  if ((bRam0000000004f4c07c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d58);
    FUN_021f03f8(PTR_DAT_049cae90);
    FUN_021f03f8(PTR_DAT_049b5d68);
    bRam0000000004f4c07c = 1;
  }
  puVar3 = PTR_DAT_049cae90;
  puVar2 = PTR_DAT_049b5d68;
  func_0x04608670(auStack_e0,0,0x90);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_d8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_d8,0);
  uStack_a8 = param_2;
  thunk_FUN_021f190c(&uStack_a8,param_2);
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_90 = param_3[2];
  thunk_FUN_021f190c(&uStack_98,0);
  auStack_88[0] = param_4;
  thunk_FUN_021f190c(auStack_88,0);
  auStack_e0[0] = 0xffffffff;
  FUN_0235b6cc(auStack_d8,auStack_e0,*(undefined8 *)puVar3);
  FUN_0235b7ac(auStack_d8,&uStack_110,*(undefined8 *)puVar2);
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}

