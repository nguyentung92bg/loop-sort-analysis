/* IL2CPP: Monitors$$Additive
void Monitors__Additive (Monitors_o* __this, System_Type_o* monitorType, ITransition_o* transition, bool sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Additive
   void Monitors__Additive (Monitors_o* __this, System_Type_o* monitorType, ITransition_o*
   transition, bool sorting, const MethodInfo* method); */

void Monitors__Additive_256e54c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  long lVar3;
  ulong uStack_40;
  uint uStack_34;
  
  if ((bRam0000000004f4c1ab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfe0);
    FUN_021f03f8(PTR_DAT_049cbfc8);
    bRam0000000004f4c1ab = 1;
  }
  Monitors__SetActive_256e2d8(param_1,param_2,param_3);
  uVar1 = 0;
  uVar2 = extraout_x1;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                      (*(long *)(param_1 + 0x20),param_2,&uStack_40,*(undefined8 *)PTR_DAT_049cbfc8)
    ;
    uVar2 = uStack_40;
    if (uStack_40 != 0) {
      lVar3 = *(long *)(uStack_40 + 0x48);
      if ((param_4 & 1) == 0) {
        uVar1 = 0;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_0266e62c;
        uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                          (*(long *)(param_1 + 0x30),uStack_40,&uStack_34,
                           *(undefined8 *)PTR_DAT_049cbfe0);
      }
      else {
        uStack_34 = *(uint *)(param_1 + 0x5c);
        *(uint *)(param_1 + 0x5c) = uStack_34 + 1;
      }
      uVar2 = (ulong)uStack_34;
      if (lVar3 != 0) {
        UnityEngine_Canvas__set_sortingOrder_3ec788c(lVar3,(ulong)uStack_34,0);
        return;
      }
    }
  }
LAB_0266e62c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar1,uVar2);
}

