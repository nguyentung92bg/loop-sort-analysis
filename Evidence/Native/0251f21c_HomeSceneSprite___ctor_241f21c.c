/* IL2CPP: HomeSceneSprite$$.ctor
void HomeSceneSprite___ctor (HomeSceneSprite_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSprite$$.ctor
   void HomeSceneSprite___ctor (HomeSceneSprite_o* __this, const MethodInfo* method); */

long HomeSceneSprite___ctor_241f21c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar5 = PTR_DAT_049c2fa8;
  if ((bRam0000000004f4b775 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fb0);
    FUN_021f03f8(PTR_DAT_049c2fa8);
    FUN_021f03f8(PTR_DAT_049c2fb8);
    bRam0000000004f4b775 = 1;
  }
  lVar7 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x18) = 1;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c2fb0;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20));
  lVar7 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c2fb8;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48));
  uVar1 = _UNK_013a7b30;
  lVar7 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x90) = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_021f190c();
  uVar4 = _UNK_013a91a8;
  uVar3 = _UNK_013a91a0;
  uVar2 = _UNK_013a8668;
  uVar1 = _UNK_013a7a40;
  *(undefined4 *)(param_1 + 0xac) = 0x3eb33333;
  *(undefined8 *)(param_1 + 0xa4) = uVar1;
  *(undefined8 *)(param_1 + 0xbc) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 200) = uVar3;
  return param_1;
}

