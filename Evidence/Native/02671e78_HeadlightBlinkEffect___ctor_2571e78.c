/* IL2CPP: HeadlightBlinkEffect$$.ctor
void HeadlightBlinkEffect___ctor (HeadlightBlinkEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HeadlightBlinkEffect$$.ctor
   void HeadlightBlinkEffect___ctor (HeadlightBlinkEffect_o* __this, const MethodInfo* method); */

undefined1  [16] HeadlightBlinkEffect___ctor_2571e78(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = _UNK_013a9ed0;
  uVar1 = _UNK_013a7c90;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x40) = _UNK_013a9ed8;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

