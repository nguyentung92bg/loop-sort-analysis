/* IL2CPP: FlyByEffect$$.ctor
void FlyByEffect___ctor (FlyByEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FlyByEffect$$.ctor
   void FlyByEffect___ctor (FlyByEffect_o* __this, const MethodInfo* method); */

long FlyByEffect___ctor_2571b34(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_013a8688;
  *(undefined8 *)(param_1 + 0x30) = _UNK_013a7df0;
  uVar1 = _UNK_013a7aa0;
  *(undefined8 *)(param_1 + 0x3c) = uVar3;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(param_1 + 0x38) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0x42700000;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
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

