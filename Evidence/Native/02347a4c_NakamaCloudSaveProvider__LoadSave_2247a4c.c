/* IL2CPP: NakamaCloudSaveProvider$$LoadSave
Cysharp_Threading_Tasks_UniTask_o NakamaCloudSaveProvider__LoadSave (NakamaCloudSaveProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$LoadSave
   Cysharp_Threading_Tasks_UniTask_o NakamaCloudSaveProvider__LoadSave (NakamaCloudSaveProvider_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void NakamaCloudSaveProvider__LoadSave_2247a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5868;
                    /* try { // try from 02347a60 to 02447a6b has its CatchHandler @ 02347c78 */
  if ((bRam0000000004f49b55 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5868);
    bRam0000000004f49b55 = 1;
  }
                    /* try { // try from 02347a94 to 02447a97 has its CatchHandler @ 02347c74 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
                    /* try { // try from 02347aa8 to 02447bbf has its CatchHandler @ 02347c7c */
  uStack_48 = param_1;
  thunk_FUN_021f190c(&uStack_48,param_1);
  uStack_40 = param_2;
  thunk_FUN_021f190c(&uStack_40,0);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_60 | 8,0);
  return;
}

