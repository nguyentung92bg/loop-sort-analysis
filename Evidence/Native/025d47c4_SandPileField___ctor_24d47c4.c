/* IL2CPP: SandPileField$$.ctor
void SandPileField___ctor (SandPileField_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField$$.ctor
   void SandPileField___ctor (SandPileField_o* __this, const MethodInfo* method); */

undefined1  [16] SandPileField___ctor_24d47c4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
                    /* try { // try from 025d47c4 to 026d484b has its CatchHandler @ 025d47c4
                       catch() { ... } // from try @ 025d47c4 with catch @ 025d47c4
                       catch() { ... } // from try @ 025d4858 with catch @ 025d47c4
                       catch() { ... } // from try @ 025d48f8 with catch @ 025d47c4 */
  puVar3 = PTR_DAT_049c76b0;
  if ((bRam0000000004f4bc32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c76b0);
    bRam0000000004f4bc32 = 1;
  }
  uVar2 = _UNK_013aa068;
  uVar1 = _UNK_013aa060;
  uVar5 = _UNK_013a82e8;
  uVar4 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  uVar5 = FUN_021f04e4(uVar4,1);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_021f190c();
  *(undefined1 *)(param_1 + 0xc9) = 1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
                    /* try { // try from 025d484c to 026d4857 has its CatchHandler @ 025d48c0 */
  return auVar6;
}

