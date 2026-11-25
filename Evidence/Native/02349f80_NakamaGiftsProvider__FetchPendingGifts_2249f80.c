/* IL2CPP: NakamaGiftsProvider$$FetchPendingGifts
Cysharp_Threading_Tasks_UniTask_List_Gift___o NakamaGiftsProvider__FetchPendingGifts (NakamaGiftsProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaGiftsProvider$$FetchPendingGifts
   Cysharp_Threading_Tasks_UniTask_List_Gift___o NakamaGiftsProvider__FetchPendingGifts
   (NakamaGiftsProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

void NakamaGiftsProvider__FetchPendingGifts_2249f80
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  puVar1 = PTR_DAT_049b5990;
  if ((bRam0000000004f49b62 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5990);
    FUN_021f03f8(PTR_DAT_049b5998);
    FUN_021f03f8(PTR_DAT_049b59a0);
    bRam0000000004f49b62 = 1;
  }
  puVar3 = PTR_DAT_049b59a0;
  puVar2 = PTR_DAT_049b5998;
  uStack_40 = 0;
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
                    /* try { // try from 0234a018 to 0244a07b has its CatchHandler @ 02349cfc */
  func_0x04608670((ulong)&uStack_70 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_50 = param_3;
  thunk_FUN_021f190c(&uStack_50,0);
                    /* catch() { ... } // from try @ 02349e4c with catch @ 0234a048 */
                    /* catch() { ... } // from try @ 02349e54 with catch @ 0234a050 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_70 | 8,&uStack_88,*(undefined8 *)puVar3);
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
                    /* try { // try from 0234a07c to 0244a117 has its CatchHandler @ 0234a07c
                       catch() { ... } // from try @ 0234a07c with catch @ 0234a07c
                       catch() { ... } // from try @ 0234a1f8 with catch @ 0234a07c */
  param_1[2] = uStack_78;
  return;
}

