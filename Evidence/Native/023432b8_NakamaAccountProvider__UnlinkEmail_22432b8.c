/* IL2CPP: NakamaAccountProvider$$UnlinkEmail
Cysharp_Threading_Tasks_UniTask_bool__o NakamaAccountProvider__UnlinkEmail (NakamaAccountProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider$$UnlinkEmail
   Cysharp_Threading_Tasks_UniTask_bool__o NakamaAccountProvider__UnlinkEmail
   (NakamaAccountProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const
   MethodInfo* method); */

undefined1  [16] NakamaAccountProvider__UnlinkEmail_22432b8(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_DAT_049b5508;
                    /* try { // try from 023432c4 to 024432f3 has its CatchHandler @ 023432c4
                       catch() { ... } // from try @ 023432c4 with catch @ 023432c4
                       catch() { ... } // from try @ 02343340 with catch @ 023432c4 */
  if ((bRam0000000004f49b2b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5508);
                    /* try { // try from 023432f4 to 024432ff has its CatchHandler @ 02343340 */
    FUN_021f03f8(PTR_DAT_049b5548);
    FUN_021f03f8(PTR_DAT_049b5518);
    bRam0000000004f49b2b = 1;
  }
  puVar3 = PTR_DAT_049b5548;
  puVar2 = PTR_DAT_049b5518;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 02343334 to 0244333f has its CatchHandler @ 02343344 */
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* catch() { ... } // from try @ 023432f4 with catch @ 02343340
                       try { // try from 02343340 to 0244335f has its CatchHandler @ 023432c4 */
                    /* catch() { ... } // from try @ 02343334 with catch @ 02343344 */
  func_0x04608670((ulong)&uStack_80 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 02343360 to 02443397 has its CatchHandler @ 02343360
                       catch() { ... } // from try @ 02343360 with catch @ 02343360
                       catch() { ... } // from try @ 023433a8 with catch @ 02343360 */
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 02343398 to 024433a7 has its CatchHandler @ 023433bc */
  FUN_0235b7ac((ulong)&uStack_80 | 8,auStack_40,*(undefined8 *)puVar2);
                    /* try { // try from 023433a8 to 024433cf has its CatchHandler @ 02343360 */
  return auStack_40;
}

