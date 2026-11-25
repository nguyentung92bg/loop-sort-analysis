/* IL2CPP: Monitors$$Activate
void Monitors__Activate (Monitors_o* __this, System_Type_o* monitorType, ITransition_o* transition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Activate
   void Monitors__Activate (Monitors_o* __this, System_Type_o* monitorType, ITransition_o*
   transition, const MethodInfo* method); */

void Monitors__Activate_256e3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c1aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfe0);
    FUN_021f03f8(PTR_DAT_049cbfc8);
    bRam0000000004f4c1aa = 1;
  }
  Monitors__DeactivateAll_256e4a0(param_1);
  Monitors__SetActive_256e2d8(param_1,param_2,param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x20),param_2,&lStack_38,*(undefined8 *)PTR_DAT_049cbfc8);
    if ((lStack_38 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      lVar1 = *(long *)(lStack_38 + 0x48);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x30),lStack_38,&uStack_24,*(undefined8 *)PTR_DAT_049cbfe0);
      if (lVar1 != 0) {
        UnityEngine_Canvas__set_sortingOrder_3ec788c(lVar1,uStack_24,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

