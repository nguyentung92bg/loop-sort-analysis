/* IL2CPP: NakamaPlayerProvider$$UpdatePlayerProfile
Cysharp_Threading_Tasks_UniTask_UpdatePlayerProfileResponse__o NakamaPlayerProvider__UpdatePlayerProfile (NakamaPlayerProvider_o* __this, PlayerProfile_o profile, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPlayerProvider$$UpdatePlayerProfile
   Cysharp_Threading_Tasks_UniTask_UpdatePlayerProfileResponse__o
   NakamaPlayerProvider__UpdatePlayerProfile (NakamaPlayerProvider_o* __this, PlayerProfile_o
   profile, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void NakamaPlayerProvider__UpdatePlayerProfile_224f288
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b5d58;
  if ((bRam0000000004f49b7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d58);
    FUN_021f03f8(PTR_DAT_049b5d60);
    FUN_021f03f8(PTR_DAT_049b5d68);
    bRam0000000004f49b7f = 1;
  }
  puVar3 = PTR_DAT_049b5d68;
  puVar2 = PTR_DAT_049b5d60;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
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
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  uStack_58 = param_3[2];
  thunk_FUN_021f190c(&uStack_60,0);
  uStack_50 = param_4;
                    /* try { // try from 0234f364 to 0244f38b has its CatchHandler @ 0234f688 */
  thunk_FUN_021f190c(&uStack_50,0);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar2);
                    /* try { // try from 0234f394 to 0244f39f has its CatchHandler @ 0234f68c */
  FUN_0235b7ac((ulong)&uStack_a0 | 8,&uStack_d0,*(undefined8 *)puVar3);
                    /* try { // try from 0234f3a4 to 0244f45b has its CatchHandler @ 0234f690 */
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}

