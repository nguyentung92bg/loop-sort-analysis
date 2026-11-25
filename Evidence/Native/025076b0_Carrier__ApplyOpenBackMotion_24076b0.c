/* IL2CPP: Carrier$$ApplyOpenBackMotion
Cysharp_Threading_Tasks_UniTaskVoid_o Carrier__ApplyOpenBackMotion (Carrier_o* __this, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$ApplyOpenBackMotion
   Cysharp_Threading_Tasks_UniTaskVoid_o Carrier__ApplyOpenBackMotion (Carrier_o* __this, bool
   immediate, const MethodInfo* method); */

undefined8 Carrier__ApplyOpenBackMotion_24076b0(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c2838;
  if ((bRam0000000004f4b6bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2838);
    bRam0000000004f4b6bf = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_48 = CONCAT71(uStack_48._1_7_,param_2) & 0xffffffffffffff01;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

