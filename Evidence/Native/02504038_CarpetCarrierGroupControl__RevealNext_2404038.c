/* IL2CPP: CarpetCarrierGroupControl$$RevealNext
void CarpetCarrierGroupControl__RevealNext (CarpetCarrierGroupControl_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl$$RevealNext
   void CarpetCarrierGroupControl__RevealNext (CarpetCarrierGroupControl_o* __this, const
   MethodInfo* method); */

void CarpetCarrierGroupControl__RevealNext_2404038(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  if ((bRam0000000004f4b6a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c26a8);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    bRam0000000004f4b6a6 = 1;
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      return;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar1,*(int *)(lVar1 + 0x18) + -1,&lStack_28,*(undefined8 *)PTR_DAT_049c2680);
    uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lStack_28 != 0) {
      Carrier__EnableInteraction_2404130(lStack_28,uVar2);
      uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      Carrier__EnableTransferEnter_24089a4(lStack_28,uVar2);
      Carrier__EnableTransferExit_2408a24(lStack_28,uVar2);
      lVar1 = *(long *)(param_1 + 0xd0);
      if (lVar1 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (lVar1,*(int *)(lVar1 + 0x18) + -1,*(undefined8 *)PTR_DAT_049c26a8);
        CarpetCarrierGroupControl__UpdateModel_24034a0(param_1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

