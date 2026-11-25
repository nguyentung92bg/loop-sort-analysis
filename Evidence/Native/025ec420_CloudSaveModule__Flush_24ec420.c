/* IL2CPP: CloudSaveModule$$Flush
Cysharp_Threading_Tasks_UniTask_o CloudSaveModule__Flush (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$Flush
   Cysharp_Threading_Tasks_UniTask_o CloudSaveModule__Flush (CloudSaveModule_o* __this, const
   MethodInfo* method); */

void CloudSaveModule__Flush_24ec420(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  CloudSaveModule__MarkDirty_24ed184();
  puVar1 = PTR_DAT_049c8080;
  if ((bRam0000000004f4bce4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8080);
    bRam0000000004f4bce4 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_48 = param_1;
  thunk_FUN_021f190c(&uStack_48,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_60 | 8,0);
  return;
}

