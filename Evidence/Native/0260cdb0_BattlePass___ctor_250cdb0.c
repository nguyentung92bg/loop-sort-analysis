/* IL2CPP: BattlePass$$.ctor
void BattlePass___ctor (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$.ctor
   void BattlePass___ctor (BattlePass_o* __this, const MethodInfo* method); */

undefined1  [16] BattlePass___ctor_250cdb0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bddb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bddb = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x500);
  uVar4 = *(undefined8 *)(lVar2 + 0x4f8);
  uVar3 = *(undefined8 *)(lVar2 + 0x508);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x510);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x70,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0x518);
  uVar5 = *(undefined8 *)(lVar2 + 0x530);
  uVar4 = *(undefined8 *)(lVar2 + 0x528);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar2 + 0x520);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x90,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0x538);
  uVar5 = *(undefined8 *)(lVar2 + 0x550);
  uVar4 = *(undefined8 *)(lVar2 + 0x548);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar2 + 0x540);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  thunk_FUN_021f190c(param_1 + 0xb0,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

