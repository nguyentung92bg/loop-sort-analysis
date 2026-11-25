/* IL2CPP: LavaQuestSubMonitor$$UpdatePlayerRenderOrder
void LavaQuestSubMonitor__UpdatePlayerRenderOrder (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$UpdatePlayerRenderOrder
   void LavaQuestSubMonitor__UpdatePlayerRenderOrder (LavaQuestSubMonitor_o* __this, const
   MethodInfo* method); */

void LavaQuestSubMonitor__UpdatePlayerRenderOrder_247a640(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  puVar2 = PTR_DAT_049c5698;
  if ((bRam0000000004f4b9df & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c56a0);
    FUN_021f03f8(PTR_DAT_049c5698);
    FUN_021f03f8(PTR_DAT_049c5940);
    FUN_021f03f8(PTR_DAT_049c5768);
    FUN_021f03f8(PTR_DAT_049c5948);
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049c4660);
    FUN_021f03f8(PTR_DAT_049c56b0);
    FUN_021f03f8(PTR_DAT_049c5950);
    FUN_021f03f8(PTR_DAT_049c5958);
    bRam0000000004f4b9df = 1;
  }
  puVar1 = PTR_DAT_049c56a0;
  auStack_48._8_8_ = 0;
  lStack_50 = 0;
  auStack_48._0_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c56b0;
  auStack_48 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_50,*(undefined8 *)puVar1);
  if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
            (lStack_50,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_049c5768);
  lVar5 = lStack_50;
  puVar1 = PTR_DAT_049c5958;
  lVar3 = *(long *)PTR_DAT_049c5958;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar6[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar6;
    lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c5940);
    System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
              (lVar8,uVar9,*(undefined8 *)PTR_DAT_049c5950,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar8;
    thunk_FUN_021f190c(plVar4,lVar8);
  }
  if (lVar5 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
              (lVar5,lVar8,*(undefined8 *)PTR_DAT_049c5948);
    puVar1 = PTR_DAT_049c4660;
    if (lStack_50 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lStack_50 + 0x18) <= iVar7) {
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_48,*(undefined8 *)puVar2);
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lStack_50,iVar7,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar5 = UnityEngine_Component__get_transform_3c18724(lStack_38,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__SetSiblingIndex_3c2f158(lVar5,iVar7,0);
        iVar7 = iVar7 + 1;
      } while (lStack_50 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

