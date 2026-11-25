/* IL2CPP: NakamaBootstrapper$$FinalizeNakamaInit
Cysharp_Threading_Tasks_UniTask_o NakamaBootstrapper__FinalizeNakamaInit (NakamaBootstrapper_o* __this, Voodoo_Nakama_Services_NakamaInitEventArgs_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$FinalizeNakamaInit
   Cysharp_Threading_Tasks_UniTask_o NakamaBootstrapper__FinalizeNakamaInit (NakamaBootstrapper_o*
   __this, Voodoo_Nakama_Services_NakamaInitEventArgs_o* result, const MethodInfo* method); */

void NakamaBootstrapper__FinalizeNakamaInit_2245420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b56c8;
                    /* try { // try from 0234542c to 02445437 has its CatchHandler @ 0234545c */
                    /* try { // try from 02345438 to 02445487 has its CatchHandler @ 02345334 */
  if ((bRam0000000004f49b3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b56c8);
                    /* catch() { ... } // from try @ 0234542c with catch @ 0234545c */
    bRam0000000004f49b3f = 1;
  }
                    /* catch() { ... } // from try @ 0234540c with catch @ 02345464 */
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* catch() { ... } // from try @ 023453c4 with catch @ 02345478 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_60 = param_1;
  thunk_FUN_021f190c(&uStack_60,param_1);
  uStack_68 = param_2;
  thunk_FUN_021f190c(&uStack_68,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_80 | 8,0);
  return;
}

