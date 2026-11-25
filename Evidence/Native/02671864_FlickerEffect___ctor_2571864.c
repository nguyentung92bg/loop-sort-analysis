/* IL2CPP: FlickerEffect$$.ctor
void FlickerEffect___ctor (FlickerEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FlickerEffect$$.ctor
   void FlickerEffect___ctor (FlickerEffect_o* __this, const MethodInfo* method); */

long FlickerEffect___ctor_2571864(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = _UNK_013a8010;
  *(undefined4 *)(param_1 + 0x30) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3e800000;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = _UNK_013a77e8;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

