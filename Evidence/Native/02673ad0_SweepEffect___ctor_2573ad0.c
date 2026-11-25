/* IL2CPP: SweepEffect$$.ctor
void SweepEffect___ctor (SweepEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SweepEffect$$.ctor
   void SweepEffect___ctor (SweepEffect_o* __this, const MethodInfo* method); */

undefined1  [16] SweepEffect___ctor_2573ad0(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = _UNK_013a7c90;
  uVar3 = NEON_fmov(0xbf800000,4);
                    /* try { // try from 02673ae4 to 02773aef has its CatchHandler @ 02673b70 */
  *(undefined4 *)(param_1 + 0x30) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

