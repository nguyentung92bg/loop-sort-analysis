/* IL2CPP: NakamaGiftsProvider$$ClaimGifts
Cysharp_Threading_Tasks_UniTask_bool__o NakamaGiftsProvider__ClaimGifts (NakamaGiftsProvider_o* __this, System_Collections_Generic_List_Gift__o* gifts, System_Action_Gift__o* grant, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaGiftsProvider$$ClaimGifts
   Cysharp_Threading_Tasks_UniTask_bool__o NakamaGiftsProvider__ClaimGifts (NakamaGiftsProvider_o*
   __this, System_Collections_Generic_List_Gift__o* gifts, System_Action_Gift__o* grant,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16]
NakamaGiftsProvider__ClaimGifts_224a090
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5508;
  if ((bRam0000000004f49b63 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5508);
    FUN_021f03f8(PTR_DAT_049b59a8);
    FUN_021f03f8(PTR_DAT_049b5518);
    bRam0000000004f49b63 = 1;
  }
  puVar3 = PTR_DAT_049b59a8;
  puVar2 = PTR_DAT_049b5518;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* try { // try from 0234a118 to 0244a12b has its CatchHandler @ 0234a274 */
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_68 = param_3;
  thunk_FUN_021f190c(&uStack_68,param_3);
  uStack_60 = param_4;
  thunk_FUN_021f190c(&uStack_60,0);
                    /* try { // try from 0234a184 to 0244a197 has its CatchHandler @ 0234a270 */
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_90 | 8,auStack_50,*(undefined8 *)puVar2);
  return auStack_50;
}

