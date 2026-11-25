/* IL2CPP: SandFlowSystem$$RemoveAt
void SandFlowSystem__RemoveAt (SandFlowSystem_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$RemoveAt
   void SandFlowSystem__RemoveAt (SandFlowSystem_o* __this, int32_t index, const MethodInfo*
   method); */

void SandFlowSystem__RemoveAt_24c73ac(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uStack_34;
  
  if ((bRam0000000004f4bc04 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7200);
    FUN_021f03f8(PTR_DAT_049c24c0);
    FUN_021f03f8(PTR_DAT_049c7208);
    FUN_021f03f8(PTR_DAT_049c7210);
    FUN_021f03f8(PTR_DAT_049c2940);
    FUN_021f03f8(PTR_DAT_049c2950);
    bRam0000000004f4bc04 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 == 0) goto LAB_025c761c;
  if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_025c7620;
  lVar5 = (long)(int)param_2;
  lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_025c761c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(param_1 + 0xf0),lVar4,*(undefined8 *)PTR_DAT_049c24c0);
    puVar2 = PTR_DAT_049c2950;
    if (*(long *)(param_1 + 0x108) == 0) goto LAB_025c761c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x108),lVar4,*(undefined8 *)PTR_DAT_049c2950);
    if (*(long *)(param_1 + 600) == 0) goto LAB_025c761c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(param_1 + 600),lVar4,*(undefined8 *)PTR_DAT_049c7208);
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_025c761c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x128),lVar4,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_025c761c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(param_1 + 0x220),lVar4,*(undefined8 *)PTR_DAT_049c7210);
    if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_025c761c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(param_1 + 0x1f0),lVar4,*(undefined8 *)PTR_DAT_049c7200);
    if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_025c761c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x1f8),lVar4,*(undefined8 *)puVar2);
  }
  uVar1 = *(int *)(param_1 + 0x188) - 1;
  *(uint *)(param_1 + 0x188) = uVar1;
  if (uVar1 != param_2) {
    lVar4 = *(long *)(param_1 + 0xb0);
    if (lVar4 == 0) goto LAB_025c761c;
    if ((*(uint *)(lVar4 + 0x18) <= uVar1) || (*(uint *)(lVar4 + 0x18) <= param_2))
    goto LAB_025c7620;
    func_0x04608650(lVar4 + 0x20 + (long)(int)param_2 * 0x90,lVar4 + 0x20 + (long)(int)uVar1 * 0x90,
                    0x90);
    lVar4 = *(long *)(param_1 + 0xb8);
    if (lVar4 == 0) goto LAB_025c761c;
    if ((*(uint *)(lVar4 + 0x18) <= uVar1) || (*(uint *)(lVar4 + 0x18) <= param_2))
    goto LAB_025c7620;
    *(undefined8 *)(lVar4 + 0x20 + lVar5 * 8) = *(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar1 * 8)
    ;
    thunk_FUN_021f190c();
    lVar4 = *(long *)(param_1 + 0xb8);
    if (lVar4 == 0) goto LAB_025c761c;
    if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_025c7620;
    lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) goto LAB_025c761c;
      uStack_34 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0xf0),lVar4,&uStack_34,*(undefined8 *)PTR_DAT_049c2940);
    }
  }
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = 0;
      thunk_FUN_021f190c(puVar3,0);
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 == 0) goto LAB_025c761c;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        func_0x04608670(lVar4 + (long)(int)uVar1 * 0x90 + 0x20,0,0x90);
        return;
      }
    }
LAB_025c7620:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_025c761c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

