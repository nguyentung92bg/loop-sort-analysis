/* IL2CPP: GameBootstrapState$$OnEnter
void GameBootstrapState__OnEnter (GameBootstrapState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBootstrapState$$OnEnter
   void GameBootstrapState__OnEnter (GameBootstrapState_o* __this, const MethodInfo* method); */

void GameBootstrapState__OnEnter_24fbcf4(undefined8 param_1)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c8a18;
  if ((bRam0000000004f4bd53 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8a18);
    bRam0000000004f4bd53 = 1;
  }
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
  uStack_28 = 0;
  uStack_30 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_3021738(&uStack_a0,0);
  uStack_70 = uStack_98;
  uStack_78 = uStack_a0;
  uStack_60 = uStack_88;
  uStack_68 = uStack_90;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_021f190c(&uStack_58,param_1);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b3358
            ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  return;
}

