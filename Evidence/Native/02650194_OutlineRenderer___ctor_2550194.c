/* IL2CPP: OutlineRenderer$$.ctor
void OutlineRenderer___ctor (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: OutlineRenderer$$.ctor
   void OutlineRenderer___ctor (OutlineRenderer_o* __this, const MethodInfo* method); */

undefined1  [16] OutlineRenderer___ctor_2550194(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  uVar2 = _UNK_013a90b8;
  uVar1 = _UNK_013a90b0;
  *(undefined4 *)(param_1 + 0x24) = 0x80;
  *(undefined4 *)(param_1 + 0x38) = 0x40000000;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

