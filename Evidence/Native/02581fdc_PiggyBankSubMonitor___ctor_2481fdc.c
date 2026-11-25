/* IL2CPP: PiggyBankSubMonitor$$.ctor
void PiggyBankSubMonitor___ctor (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBankSubMonitor$$.ctor
   void PiggyBankSubMonitor___ctor (PiggyBankSubMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] PiggyBankSubMonitor___ctor_2481fdc(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4ba0c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4ba0c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x208);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x210);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x68,0);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x218);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x220);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x78,0);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

