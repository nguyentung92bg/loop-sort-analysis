/* IL2CPP: Monitors$$Activate<object>
void Monitors__Activate_object_ (Monitors_o* __this, ITransition_o* transition, const MethodInfo_268887C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Activate<object>
   void Monitors__Activate_object_ (Monitors_o* __this, ITransition_o* transition, const
   MethodInfo_268887C* method); */

void Monitors__Activate_object__268887c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  undefined4 uStack_24;
  
  puVar1 = *(undefined8 **)(param_3 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_02229774(param_3);
    puVar1 = *(undefined8 **)(param_3 + 0x38);
  }
  uVar3 = *puVar1;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = System_Type__GetTypeFromHandle_310ebfc(uVar3,0);
  if ((bRam0000000004f4c1aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfe0,uVar3,param_2,0);
    FUN_021f03f8(PTR_DAT_049cbfc8);
    bRam0000000004f4c1aa = 1;
  }
  Monitors__DeactivateAll_256e4a0(param_1);
  Monitors__SetActive_256e2d8(param_1,uVar3,param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x20),uVar3,alStack_38,*(undefined8 *)PTR_DAT_049cbfc8);
    if ((alStack_38[0] != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      lVar2 = *(long *)(alStack_38[0] + 0x48);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x30),alStack_38[0],&uStack_24,*(undefined8 *)PTR_DAT_049cbfe0)
      ;
      if (lVar2 != 0) {
        UnityEngine_Canvas__set_sortingOrder_3ec788c(lVar2,uStack_24,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

