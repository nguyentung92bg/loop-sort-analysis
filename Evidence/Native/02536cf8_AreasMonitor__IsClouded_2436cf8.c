/* IL2CPP: AreasMonitor$$IsClouded
bool AreasMonitor__IsClouded (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$IsClouded
   bool AreasMonitor__IsClouded (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo*
   method); */

bool AreasMonitor__IsClouded_2436cf8(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  
  if ((bRam0000000004f4b7f9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a18);
    FUN_021f03f8(PTR_DAT_049c39c8);
    bRam0000000004f4b7f9 = 1;
  }
  if (param_2 != 0) {
    piVar4 = (int *)thunk_FUN_0224e54c(param_2,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
    if (*(long *)(param_1 + 0xd0) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28);
      if (*piVar4 == iVar1 + -1) {
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 0x50), lVar5 == 0)) goto LAB_02536db8;
        iVar3 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                          (lVar5,*(undefined8 *)PTR_DAT_049c3a18);
        bVar2 = iVar1 < iVar3;
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
  }
LAB_02536db8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

