/* IL2CPP: TitlePopInEffect$$.ctor
void TitlePopInEffect___ctor (TitlePopInEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TitlePopInEffect$$.ctor
   void TitlePopInEffect___ctor (TitlePopInEffect_o* __this, const MethodInfo* method); */

undefined1  [16] TitlePopInEffect___ctor_2573f14(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _UNK_013a88a0;
                    /* try { // try from 02673f20 to 02773f23 has its CatchHandler @ 02673f84 */
  *(undefined8 *)(param_1 + 0x28) = _UNK_013a88a8;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  puVar2 = PTR_DAT_049b3b98;
                    /* try { // try from 02673f24 to 02773f27 has its CatchHandler @ 02673f80 */
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

