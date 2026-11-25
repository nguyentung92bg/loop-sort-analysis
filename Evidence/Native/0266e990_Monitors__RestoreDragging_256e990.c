/* IL2CPP: Monitors$$RestoreDragging
void Monitors__RestoreDragging (Monitors_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$RestoreDragging
   void Monitors__RestoreDragging (Monitors_o* __this, Il2CppObject* owner, const MethodInfo*
   method); */

void Monitors__RestoreDragging_256e990(long param_1,long param_2)

{
  if ((bRam0000000004f4c1b2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4c1b2 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0266ea1c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_049c13f0);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x20) < 1) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0266ea1c;
      *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x3c) = *(undefined4 *)(param_1 + 0x58);
    }
    return;
  }
LAB_0266ea1c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

