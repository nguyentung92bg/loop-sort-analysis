/* IL2CPP: PiggyBank$$.ctor
void PiggyBank___ctor (PiggyBank_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBank$$.ctor
   void PiggyBank___ctor (PiggyBank_o* __this, const MethodInfo* method); */

undefined1  [16] PiggyBank___ctor_2523f58(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be8b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x208);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x210);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x38,0);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x218);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x220);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x48,0);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x228);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x230);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x58,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

