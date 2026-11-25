/* IL2CPP: BobEffect$$.ctor
void BobEffect___ctor (BobEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BobEffect$$.ctor
   void BobEffect___ctor (BobEffect_o* __this, const MethodInfo* method); */

long BobEffect___ctor_2570608(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = _UNK_013a7880;
  *(undefined4 *)(param_1 + 0x2c) = 0x40000000;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
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

