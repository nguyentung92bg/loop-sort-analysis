/* IL2CPP: Carrier$$CancelIntake
bool Carrier__CancelIntake (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$CancelIntake
   bool Carrier__CancelIntake (Carrier_o* __this, Block_o* block, const MethodInfo* method); */

uint Carrier__CancelIntake_240872c(long param_1,long param_2)

{
  uint uVar1;
  
  if ((bRam0000000004f4b6cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1710);
    bRam0000000004f4b6cb = 1;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (*(long *)(param_1 + 0x1f8),param_2,*(undefined8 *)PTR_DAT_049c1710);
    if ((uVar1 & 1) != 0) {
      if (param_2 == 0) goto LAB_025087a0;
      Block__CancelMoveMotion_23dbb54(param_2,0);
    }
    return uVar1 & 1;
  }
LAB_025087a0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

