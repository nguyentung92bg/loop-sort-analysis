/* IL2CPP: NakamaPlayerProvider$$GetLocalPlayer
Cysharp_Threading_Tasks_UniTask_PlayerInfo__o NakamaPlayerProvider__GetLocalPlayer (NakamaPlayerProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPlayerProvider$$GetLocalPlayer
   Cysharp_Threading_Tasks_UniTask_PlayerInfo__o NakamaPlayerProvider__GetLocalPlayer
   (NakamaPlayerProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

void NakamaPlayerProvider__GetLocalPlayer_224f3c0
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5d70;
  if ((bRam0000000004f49b80 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d70);
    FUN_021f03f8(PTR_DAT_049b5d78);
    FUN_021f03f8(PTR_DAT_049b5d80);
    bRam0000000004f49b80 = 1;
  }
  puVar3 = PTR_DAT_049b5d80;
  puVar2 = PTR_DAT_049b5d78;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_80 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 0234f46c to 0244f473 has its CatchHandler @ 0234f68c */
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
                    /* try { // try from 0234f474 to 0244f477 has its CatchHandler @ 0234f67c */
  uStack_40 = param_3;
                    /* try { // try from 0234f478 to 0244f483 has its CatchHandler @ 0234f684 */
  thunk_FUN_021f190c(&uStack_40,0);
                    /* try { // try from 0234f48c to 0244f48f has its CatchHandler @ 0234f678 */
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar2);
                    /* try { // try from 0234f49c to 0244f51b has its CatchHandler @ 0234f6ac */
  FUN_0235b7ac((ulong)&uStack_80 | 8,&uStack_b8,*(undefined8 *)puVar3);
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[6] = uStack_88;
  return;
}

