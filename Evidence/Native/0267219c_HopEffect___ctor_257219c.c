/* IL2CPP: HopEffect$$.ctor
void HopEffect___ctor (HopEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HopEffect$$.ctor
   void HopEffect___ctor (HopEffect_o* __this, const MethodInfo* method); */

long HopEffect___ctor_257219c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = _UNK_013a86c8;
  uVar3 = _UNK_013a7df8;
  *(undefined8 *)(param_1 + 0x30) = _UNK_013a7bd8;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0x43960000;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
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

