/* IL2CPP: NakamaPlayerProvider$$GetPlayers
Cysharp_Threading_Tasks_UniTask_Dictionary_string__PlayerInfo___o NakamaPlayerProvider__GetPlayers (NakamaPlayerProvider_o* __this, System_Collections_Generic_IEnumerable_string__o* userIds, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPlayerProvider$$GetPlayers
   Cysharp_Threading_Tasks_UniTask_Dictionary_string__PlayerInfo___o
   NakamaPlayerProvider__GetPlayers (NakamaPlayerProvider_o* __this,
   System_Collections_Generic_IEnumerable_string__o* userIds, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

void NakamaPlayerProvider__GetPlayers_224f4dc
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  puVar1 = PTR_DAT_049b5d88;
  if ((bRam0000000004f49b81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d88);
    FUN_021f03f8(PTR_DAT_049b5d90);
                    /* try { // try from 0234f528 to 0244f537 has its CatchHandler @ 0234f674 */
    FUN_021f03f8(PTR_DAT_049b5d98);
                    /* try { // try from 0234f538 to 0244f547 has its CatchHandler @ 0234f670 */
    bRam0000000004f49b81 = 1;
  }
  puVar3 = PTR_DAT_049b5d98;
  puVar2 = PTR_DAT_049b5d90;
                    /* try { // try from 0234f548 to 0244f553 has its CatchHandler @ 0234f658 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* try { // try from 0234f574 to 0244f583 has its CatchHandler @ 0234f654 */
                    /* try { // try from 0234f584 to 0244f593 has its CatchHandler @ 0234f650 */
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 0234f594 to 0244f59f has its CatchHandler @ 0234f64c */
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_3;
  thunk_FUN_021f190c(&uStack_70,param_3);
  uStack_68 = param_4;
  thunk_FUN_021f190c(&uStack_68,0);
                    /* try { // try from 0234f5c0 to 0244f5cf has its CatchHandler @ 0234f6ac */
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar2);
                    /* try { // try from 0234f5d0 to 0244f5d7 has its CatchHandler @ 0234f648 */
                    /* try { // try from 0234f5d8 to 0244f5e3 has its CatchHandler @ 0234f694 */
  FUN_0235b7ac((ulong)&uStack_90 | 8,&uStack_a8,*(undefined8 *)puVar3);
  param_1[1] = uStack_a0;
  *param_1 = uStack_a8;
  param_1[2] = uStack_98;
                    /* try { // try from 0234f604 to 0244f60f has its CatchHandler @ 0234f644 */
  return;
}

