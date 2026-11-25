/* IL2CPP: KeyBlockGroup$$AddBlock
void KeyBlockGroup__AddBlock (KeyBlockGroup_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroup$$AddBlock
   void KeyBlockGroup__AddBlock (KeyBlockGroup_o* __this, Block_o* block, const MethodInfo* method);
    */

void KeyBlockGroup__AddBlock_23eba0c(long param_1,long param_2)

{
  if ((bRam0000000004f4b620 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c80);
    bRam0000000004f4b620 = 1;
  }
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     (FUN_02333498(*(long *)(param_1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_049c1c80), param_2 != 0)
     ) {
    *(long *)(param_2 + 0x150) = param_1;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << (param_2 + 0x150U >> 0xc & 0x3f),
                   (param_2 + 0x150U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

