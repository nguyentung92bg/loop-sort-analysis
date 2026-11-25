/* IL2CPP: HomeSceneFx$$.ctor
void HomeSceneFx___ctor (HomeSceneFx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFx$$.ctor
   void HomeSceneFx___ctor (HomeSceneFx_o* __this, const MethodInfo* method); */

undefined1  [16] HomeSceneFx___ctor_241f590(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_049c2fb8;
  if ((bRam0000000004f4b777 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fd0);
    FUN_021f03f8(PTR_DAT_049c2fd8);
    FUN_021f03f8(PTR_DAT_049c2fb8);
    bRam0000000004f4b777 = 1;
  }
  uVar1 = _UNK_013a7948;
  auVar6 = NEON_fmov(0x3f800000,4);
  uVar7 = NEON_fmov(0xbf800000,4);
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined8 *)(param_1 + 0x54) = 0xbf800000ffffffff;
  uVar2 = _UNK_013a93a8;
  uVar1 = _UNK_013a93a0;
  *(long *)(param_1 + 0x34) = auVar6._8_8_;
  *(long *)(param_1 + 0x2c) = auVar6._0_8_;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 100) = uVar2;
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c2fd0;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x70) = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x70));
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x78) = 0xbf800000;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c2fd8;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80));
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f8ccccd;
  uVar1 = _UNK_013a7a88;
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf4) = 0xbf800000;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = 0x7fc000007fc00000;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x108) = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_021f190c(param_1 + 0x108);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

