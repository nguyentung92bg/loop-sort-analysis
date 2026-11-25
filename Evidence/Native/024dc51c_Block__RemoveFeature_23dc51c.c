/* IL2CPP: Block$$RemoveFeature
void Block__RemoveFeature (Block_o* __this, int32_t feature, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$RemoveFeature
   void Block__RemoveFeature (Block_o* __this, int32_t feature, const MethodInfo* method); */

void Block__RemoveFeature_23dc51c(long param_1,undefined4 param_2)

{
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b5ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13a8);
    bRam0000000004f4b5ba = 1;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    uStack_24 = param_2;
    FUN_02333498(*(long *)(param_1 + 0x170),&uStack_24,*(undefined8 *)PTR_DAT_049c13a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

