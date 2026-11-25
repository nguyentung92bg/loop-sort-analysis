/* IL2CPP: WinStandartVariant$$.ctor
void WinStandartVariant___ctor (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$.ctor
   void WinStandartVariant___ctor (WinStandartVariant_o* __this, const MethodInfo* method); */

undefined1  [16] WinStandartVariant___ctor_24953dc(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4ba99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4ba99 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x68);
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x90,0);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

