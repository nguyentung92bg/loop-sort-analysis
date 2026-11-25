/* IL2CPP: SheetInstaller$$Initialize
Cysharp_Threading_Tasks_UniTask_o SheetInstaller__Initialize (SheetInstaller_o* __this, System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller$$Initialize
   Cysharp_Threading_Tasks_UniTask_o SheetInstaller__Initialize (SheetInstaller_o* __this,
   System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method); */

void SheetInstaller__Initialize_2565f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_DAT_049cbbf8;
  if ((bRam0000000004f4c15a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbbf8);
    bRam0000000004f4c15a = 1;
  }
  uStack_40 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_80 = param_1;
  thunk_FUN_021f190c(&uStack_80,param_1);
  uStack_88 = param_2;
  thunk_FUN_021f190c(&uStack_88,param_2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_a0 | 8,0);
  return;
}

