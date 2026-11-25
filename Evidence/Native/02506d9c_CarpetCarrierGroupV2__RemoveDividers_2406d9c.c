/* IL2CPP: CarpetCarrierGroupV2$$RemoveDividers
void CarpetCarrierGroupV2__RemoveDividers (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2$$RemoveDividers
   void CarpetCarrierGroupV2__RemoveDividers (CarpetCarrierGroupV2_o* __this, const MethodInfo*
   method); */

void CarpetCarrierGroupV2__RemoveDividers_2406d9c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b6b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27f0);
    FUN_021f03f8(PTR_DAT_049c27f8);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2800);
    bRam0000000004f4b6b8 = 1;
  }
  puVar3 = PTR_DAT_049c2800;
  puVar2 = PTR_DAT_049c27f0;
  if ((*(long *)(param_1 + 0xf0) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
    iVar6 = (*(int *)(*(long *)(param_1 + 0xf0) + 0x18) - *(int *)(*(long *)(param_1 + 0xe8) + 0x18)
            ) + 1;
    if (0 < iVar6) {
      do {
        lVar5 = *(long *)(param_1 + 0xf0);
        if (lVar5 == 0) goto LAB_02506e90;
        iVar1 = *(int *)(lVar5 + 0x18) + -1;
        if (-1 < iVar1) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar5,iVar1,&uStack_38,*(undefined8 *)puVar3);
          uVar4 = uStack_38;
          if (*(long *)(param_1 + 0xf0) == 0) goto LAB_02506e90;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                    (*(long *)(param_1 + 0xf0),iVar1,*(undefined8 *)puVar2);
          CarpetCarrierGroupV2__ApplyRemoveDividerMotion_2407030(param_1,uVar4);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return;
  }
LAB_02506e90:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

