/* IL2CPP: Monitors$$Additive<object>
void Monitors__Additive_object_ (Monitors_o* __this, ITransition_o* transition, bool sorting, const MethodInfo_26888E8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Additive<object>
   void Monitors__Additive_object_ (Monitors_o* __this, ITransition_o* transition, bool sorting,
   const MethodInfo_26888E8* method); */

void Monitors__Additive_object__26888e8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uStack_40;
  uint uStack_34;
  
  puVar3 = *(undefined8 **)(param_4 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_02229774(param_4);
    puVar3 = *(undefined8 **)(param_4 + 0x38);
  }
  uVar5 = *puVar3;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Type__GetTypeFromHandle_310ebfc(uVar5,0);
  if ((bRam0000000004f4c1ab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfe0);
    FUN_021f03f8(PTR_DAT_049cbfc8);
    bRam0000000004f4c1ab = 1;
  }
  Monitors__SetActive_256e2d8(param_1,uVar5,param_2);
  uVar1 = 0;
  uVar2 = extraout_x1;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                      (*(long *)(param_1 + 0x20),uVar5,&uStack_40,*(undefined8 *)PTR_DAT_049cbfc8);
    uVar2 = uStack_40;
    if (uStack_40 != 0) {
      lVar4 = *(long *)(uStack_40 + 0x48);
      if ((param_3 & 1) == 0) {
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
      if (lVar4 != 0) {
        UnityEngine_Canvas__set_sortingOrder_3ec788c(lVar4,(ulong)uStack_34,0);
        return;
      }
    }
  }
LAB_0266e62c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar1,uVar2);
}

