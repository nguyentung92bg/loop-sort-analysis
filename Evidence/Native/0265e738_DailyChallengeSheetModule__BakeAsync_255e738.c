/* IL2CPP: DailyChallengeSheetModule$$BakeAsync
Cysharp_Threading_Tasks_UniTask_DailyChallengeSheetContainer__o DailyChallengeSheetModule__BakeAsync (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSheetModule$$BakeAsync
   Cysharp_Threading_Tasks_UniTask_DailyChallengeSheetContainer__o
   DailyChallengeSheetModule__BakeAsync (const MethodInfo* method); */

void DailyChallengeSheetModule__BakeAsync_255e738(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cb7c8;
  if ((bRam0000000004f4c102 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb7c8);
                    /* try { // try from 0265e774 to 0275e78f has its CatchHandler @ 0265ecf4 */
    FUN_021f03f8(PTR_DAT_049cb7d0);
    FUN_021f03f8(PTR_DAT_049cb7d8);
    bRam0000000004f4c102 = 1;
  }
  puVar3 = PTR_DAT_049cb7d8;
  puVar2 = PTR_DAT_049cb7d0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_60 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar2);
                    /* try { // try from 0265e800 to 0275e80b has its CatchHandler @ 0265eb90 */
  FUN_0235b7ac((ulong)&uStack_60 | 8,&uStack_78,*(undefined8 *)puVar3);
                    /* try { // try from 0265e81c to 0275e827 has its CatchHandler @ 0265eb8c */
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uStack_68;
  return;
}

