/* IL2CPP: Monitors$$SetActive
void Monitors__SetActive (Monitors_o* __this, System_Type_o* monitorType, ITransition_o* transition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$SetActive
   void Monitors__SetActive (Monitors_o* __this, System_Type_o* monitorType, ITransition_o*
   transition, const MethodInfo* method); */

void Monitors__SetActive_256e2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  if ((bRam0000000004f4c1a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfc8);
    FUN_021f03f8(PTR_DAT_049cbfd0);
    FUN_021f03f8(PTR_DAT_049cbfd8);
    bRam0000000004f4c1a9 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x20),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049cbfc8);
    if ((lStack_28 != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lStack_28,0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar2 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                          (*(long *)(param_1 + 0x38),lStack_28,*(undefined8 *)PTR_DAT_049cbfd8);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_0266e3c8;
          FUN_02333498(*(long *)(param_1 + 0x38),lStack_28,*(undefined8 *)PTR_DAT_049cbfd0);
        }
        Monitors__ApplyActivateMonitorTransition_256d6f4(param_1,lStack_28,param_3);
        return;
      }
    }
  }
LAB_0266e3c8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

