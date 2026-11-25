/* IL2CPP: ToggleElement$$.ctor
void ToggleElement___ctor (ToggleElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ToggleElement$$.ctor
   void ToggleElement___ctor (ToggleElement_o* __this, const MethodInfo* method); */

undefined1  [16] ToggleElement___ctor_241f064(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x80) = 0x3ecccccd0000001b;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

