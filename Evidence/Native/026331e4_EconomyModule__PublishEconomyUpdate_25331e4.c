/* IL2CPP: EconomyModule$$PublishEconomyUpdate
Cysharp_Threading_Tasks_UniTaskVoid_o EconomyModule__PublishEconomyUpdate (EconomyModule_o* __this, EconomyUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$PublishEconomyUpdate
   Cysharp_Threading_Tasks_UniTaskVoid_o EconomyModule__PublishEconomyUpdate (EconomyModule_o*
   __this, EconomyUpdateMessage_o m, const MethodInfo* method); */

undefined8 EconomyModule__PublishEconomyUpdate_25331e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049ca038;
  if ((bRam0000000004f4bf39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca038);
    bRam0000000004f4bf39 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
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
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_b0 | 8,0);
  uStack_a0 = param_1;
  thunk_FUN_021f190c(&uStack_a0,param_1);
  func_0x04608620(&uStack_98,param_2,0x58);
  thunk_FUN_021f190c(&uStack_98,0);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_b0 | 8,&uStack_b0,*(undefined8 *)puVar1);
  return 0;
}

