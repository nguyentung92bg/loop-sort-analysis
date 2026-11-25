/* IL2CPP: PlayingMonitor$$.ctor
void PlayingMonitor___ctor (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$.ctor
   void PlayingMonitor___ctor (PlayingMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] PlayingMonitor___ctor_24518b4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b8da & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b8da = 1;
  }
  puVar2 = PTR_DAT_049c16a0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uVar6 = *(undefined8 *)(lVar3 + 0x60);
  uVar5 = *(undefined8 *)(lVar3 + 0x78);
  uVar4 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  *(undefined8 *)(param_1 + 0x178) = uVar5;
  *(undefined8 *)(param_1 + 0x170) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x168,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar4,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x1b0,uVar4);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar4,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x1b8,uVar4);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}

