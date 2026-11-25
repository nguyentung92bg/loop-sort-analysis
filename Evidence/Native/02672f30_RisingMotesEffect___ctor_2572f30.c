/* IL2CPP: RisingMotesEffect$$.ctor
void RisingMotesEffect___ctor (RisingMotesEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RisingMotesEffect$$.ctor
   void RisingMotesEffect___ctor (RisingMotesEffect_o* __this, const MethodInfo* method); */

long RisingMotesEffect___ctor_2572f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = _UNK_013a8018;
  uVar2 = _UNK_013a7b50;
  uVar1 = _UNK_013a7800;
  *(undefined4 *)(param_1 + 0x24) = 0x41c80000;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  puVar4 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

