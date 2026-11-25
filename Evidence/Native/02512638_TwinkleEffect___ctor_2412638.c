/* IL2CPP: TwinkleEffect$$.ctor
void TwinkleEffect___ctor (TwinkleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TwinkleEffect$$.ctor
   void TwinkleEffect___ctor (TwinkleEffect_o* __this, const MethodInfo* method); */

long TwinkleEffect___ctor_2412638(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_013a7e40;
  uVar1 = _UNK_013a7b40;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = 0x42b40000;
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

