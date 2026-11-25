/* IL2CPP: LondonTrip$$CanShow
bool LondonTrip__CanShow (LondonTrip_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTrip$$CanShow
   bool LondonTrip__CanShow (LondonTrip_o* __this, const MethodInfo* method); */

bool LondonTrip__CanShow_25229ec(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000004f4be7e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c59e8);
    bRam0000000004f4be7e = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 200), lVar3 != 0)) {
    iVar1 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar3,*(undefined8 *)PTR_DAT_049c59e8);
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x30,0);
    return iVar2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

