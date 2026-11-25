/* IL2CPP: ButtonClickEffect$$.ctor
void ButtonClickEffect___ctor (ButtonClickEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ButtonClickEffect$$.ctor
   void ButtonClickEffect___ctor (ButtonClickEffect_o* __this, const MethodInfo* method); */

undefined1  [16] ButtonClickEffect___ctor_2571134(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c31e8;
  puVar1 = PTR_DAT_049c31e0;
  if ((bRam0000000004f4c1da & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31e8);
    FUN_021f03f8(PTR_DAT_049c31e0);
    bRam0000000004f4c1da = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar3);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

