/* IL2CPP: BoosterBase$$OnDestroy
void BoosterBase__OnDestroy (BoosterBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBase$$OnDestroy
   void BoosterBase__OnDestroy (BoosterBase_o* __this, const MethodInfo* method); */

undefined8 BoosterBase__OnDestroy_24e4d18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  GameBehaviourBase__OnDestroy_24f6ac8(param_1,0);
  puVar1 = PTR_DAT_049c7aa8;
  if ((bRam0000000004f4bc7b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7aa8);
    bRam0000000004f4bc7b = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

