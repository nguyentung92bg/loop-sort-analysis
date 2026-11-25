/* IL2CPP: ParallaxIntroEffect$$.ctor
void ParallaxIntroEffect___ctor (ParallaxIntroEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ParallaxIntroEffect$$.ctor
   void ParallaxIntroEffect___ctor (ParallaxIntroEffect_o* __this, const MethodInfo* method); */

long ParallaxIntroEffect___ctor_25729c8(long param_1)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0x28) = _UNK_013a7958;
  *(undefined4 *)(param_1 + 0x30) = 0x3f666666;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

