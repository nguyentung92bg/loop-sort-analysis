/* IL2CPP: DataInstaller$$Initialize
Cysharp_Threading_Tasks_UniTask_o DataInstaller__Initialize (DataInstaller_o* __this, System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataInstaller$$Initialize
   Cysharp_Threading_Tasks_UniTask_o DataInstaller__Initialize (DataInstaller_o* __this,
   System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method); */

void DataInstaller__Initialize_24f9e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c88d0;
  if ((bRam0000000004f4bd42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c88d0);
    bRam0000000004f4bd42 = 1;
  }
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
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_1;
  thunk_FUN_021f190c(&uStack_70,param_1);
  uStack_78 = param_2;
                    /* try { // try from 025f9ee8 to 026f9eef has its CatchHandler @ 025fa348 */
  thunk_FUN_021f190c(&uStack_78,param_2);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_90 | 8,0);
                    /* try { // try from 025f9f10 to 026f9f5b has its CatchHandler @ 025fa39c */
  return;
}

