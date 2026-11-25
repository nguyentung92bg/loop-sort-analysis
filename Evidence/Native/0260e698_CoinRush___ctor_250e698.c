/* IL2CPP: CoinRush$$.ctor
void CoinRush___ctor (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$.ctor
   void CoinRush___ctor (CoinRush_o* __this, const MethodInfo* method); */

undefined1  [16] CoinRush___ctor_250e698(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bde8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bde8 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x278);
  uVar4 = *(undefined8 *)(lVar2 + 0x290);
  uVar3 = *(undefined8 *)(lVar2 + 0x288);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x280);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x38,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0x298);
  uVar5 = *(undefined8 *)(lVar2 + 0x2b0);
  uVar4 = *(undefined8 *)(lVar2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x58,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0x2b8);
  uVar5 = *(undefined8 *)(lVar2 + 0x2d0);
  uVar4 = *(undefined8 *)(lVar2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x78,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

