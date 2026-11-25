/* IL2CPP: Monitors$$DisableDragging
void Monitors__DisableDragging (Monitors_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$DisableDragging
   void Monitors__DisableDragging (Monitors_o* __this, Il2CppObject* owner, const MethodInfo*
   method); */

void Monitors__DisableDragging_256e91c(long param_1,long param_2)

{
  if ((bRam0000000004f4c1b1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4c1b1 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0266e98c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 0266e978 to 0276eb3b has its CatchHandler @ 0266e978
                       catch() { ... } // from try @ 0266e978 with catch @ 0266e978
                       catch() { ... } // from try @ 0266ebb0 with catch @ 0266e978
                       catch() { ... } // from try @ 0266ece0 with catch @ 0266e978
                       catch() { ... } // from try @ 0266ede8 with catch @ 0266e978
                       catch() { ... } // from try @ 0266ee40 with catch @ 0266e978
                       catch() { ... } // from try @ 0266ee6c with catch @ 0266e978 */
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x3c) = 100000;
    return;
  }
LAB_0266e98c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

