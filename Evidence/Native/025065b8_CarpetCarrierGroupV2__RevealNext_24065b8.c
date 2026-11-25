/* IL2CPP: CarpetCarrierGroupV2$$RevealNext
void CarpetCarrierGroupV2__RevealNext (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2$$RevealNext
   void CarpetCarrierGroupV2__RevealNext (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
    */

void CarpetCarrierGroupV2__RevealNext_24065b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  if ((bRam0000000004f4b6b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c26a8);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    bRam0000000004f4b6b5 = 1;
  }
  puVar1 = PTR_DAT_049c2680;
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      return;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar2,*(int *)(lVar2 + 0x18) + -1,&lStack_28,*(undefined8 *)PTR_DAT_049c2680);
    lVar2 = lStack_28;
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar2 != 0) {
      Carrier__EnableInteraction_2404130(lVar2,uVar3);
      uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      Carrier__EnableTransferEnter_24089a4(lVar2,uVar3);
      Carrier__EnableTransferExit_2408a24(lVar2,uVar3);
      lVar4 = *(long *)(param_1 + 0xe8);
      if (lVar4 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (lVar4,*(int *)(lVar4 + 0x18) + -1,*(undefined8 *)PTR_DAT_049c26a8);
        lVar4 = *(long *)(param_1 + 0xe8);
        if (lVar4 != 0) {
          lVar5 = lVar2;
          if (*(int *)(lVar4 + 0x18) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar4,0,&lStack_28,*(undefined8 *)puVar1);
            lVar4 = *(long *)(param_1 + 0xe8);
            lVar5 = lStack_28;
            if (lVar4 == 0) goto LAB_02506700;
          }
          if (*(int *)(lVar4 + 0x18) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar4,*(int *)(lVar4 + 0x18) + -1,&lStack_28,*(undefined8 *)puVar1);
            lVar2 = lStack_28;
          }
          CarpetCarrierGroupV2__UpdateModel_2406704(param_1,lVar5,lVar2);
          return;
        }
      }
    }
  }
LAB_02506700:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

