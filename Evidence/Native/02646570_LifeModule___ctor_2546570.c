/* IL2CPP: LifeModule$$.ctor
void LifeModule___ctor (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$.ctor
   void LifeModule___ctor (LifeModule_o* __this, const MethodInfo* method); */

undefined1  [16] LifeModule___ctor_2546570(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c00d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c00d = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0xe8);
  uVar4 = *(undefined8 *)(lVar2 + 0xe0);
  uVar3 = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x20,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar4 = *(undefined8 *)(lVar2 + 0x108);
  uVar3 = *(undefined8 *)(lVar2 + 0x100);
  uVar6 = *(undefined8 *)(lVar2 + 0x118);
  uVar5 = *(undefined8 *)(lVar2 + 0x110);
  uVar7 = *(undefined8 *)(lVar2 + 0x120);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar2 + 0x128);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_021f190c(param_1 + 0x48,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar4 = *(undefined8 *)(lVar2 + 0x138);
  uVar3 = *(undefined8 *)(lVar2 + 0x130);
  uVar6 = *(undefined8 *)(lVar2 + 0x148);
  uVar5 = *(undefined8 *)(lVar2 + 0x140);
  uVar7 = *(undefined8 *)(lVar2 + 0x150);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar2 + 0x158);
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  thunk_FUN_021f190c(param_1 + 0x78,0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1;
  return auVar8;
}

