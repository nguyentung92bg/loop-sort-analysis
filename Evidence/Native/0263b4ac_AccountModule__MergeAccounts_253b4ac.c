/* IL2CPP: AccountModule$$MergeAccounts
Cysharp_Threading_Tasks_UniTask_AccountMergeResult__o AccountModule__MergeAccounts (AccountModule_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule$$MergeAccounts
   Cysharp_Threading_Tasks_UniTask_AccountMergeResult__o AccountModule__MergeAccounts
   (AccountModule_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

undefined1  [16] AccountModule__MergeAccounts_253b4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5550;
  if ((bRam0000000004f4bf85 & 1) == 0) {
                    /* try { // try from 0263b4d8 to 0273b4e7 has its CatchHandler @ 0263b7b0 */
    FUN_021f03f8(PTR_DAT_049b5550);
                    /* try { // try from 0263b4ec to 0273b507 has its CatchHandler @ 0263b7ac */
    FUN_021f03f8(PTR_DAT_049ca3c8);
    FUN_021f03f8(PTR_DAT_049b5560);
    bRam0000000004f4bf85 = 1;
  }
  puVar3 = PTR_DAT_049ca3c8;
  puVar2 = PTR_DAT_049b5560;
                    /* try { // try from 0263b508 to 0273b51b has its CatchHandler @ 0263b790 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 0263b52c to 0273b547 has its CatchHandler @ 0263b78c */
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_80 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 0263b558 to 0273b55b has its CatchHandler @ 0263b788 */
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
                    /* try { // try from 0263b55c to 0273b567 has its CatchHandler @ 0263b784 */
  uStack_60 = param_1;
  thunk_FUN_021f190c(&uStack_60,param_1);
  uStack_58 = param_2;
                    /* try { // try from 0263b570 to 0273b57b has its CatchHandler @ 0263b780 */
  thunk_FUN_021f190c(&uStack_58,0);
                    /* try { // try from 0263b580 to 0273b58b has its CatchHandler @ 0263b7b4 */
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 0263b59c to 0273b5a7 has its CatchHandler @ 0263b778 */
  FUN_0235b7ac((ulong)&uStack_80 | 8,auStack_40,*(undefined8 *)puVar2);
  return auStack_40;
}

