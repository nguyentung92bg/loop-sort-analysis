/* IL2CPP: PurchasingModule$$RemovePurchaseListener
void PurchasingModule__RemovePurchaseListener (PurchasingModule_o* __this, System_String_o* productId, System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$RemovePurchaseListener
   void PurchasingModule__RemovePurchaseListener (PurchasingModule_o* __this, System_String_o*
   productId, System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method); */

void PurchasingModule__RemovePurchaseListener_254a4b0
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_38;
  
  if ((bRam0000000004f4c02c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049ca930);
    FUN_021f03f8(PTR_DAT_049ca938);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02c = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(param_1 + 0x50),param_2,*(undefined8 *)PTR_DAT_049ca930);
    puVar1 = PTR_DAT_049ca920;
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar5,param_2,&lStack_38,*(undefined8 *)PTR_DAT_049ca920);
      lVar3 = System_Delegate__Remove_314582c(lStack_38,param_3,0);
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        uVar6 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar4 = thunk_FUN_0222c938(lVar3,uVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0264a59c to 0274a833 has its CatchHandler @ 0264a59c
                       catch() { ... } // from try @ 0264a59c with catch @ 0264a59c
                       catch() { ... } // from try @ 0264a8a0 with catch @ 0264a59c
                       catch() { ... } // from try @ 0264a948 with catch @ 0264a59c
                       catch() { ... } // from try @ 0264a990 with catch @ 0264a59c
                       catch() { ... } // from try @ 0264a9e4 with catch @ 0264a59c
                       catch() { ... } // from try @ 0264aa10 with catch @ 0264a59c */
          FUN_021f0a20(lVar3,uVar6);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar5,param_2,lVar4,*(undefined8 *)PTR_DAT_049ca928);
      if (*(long *)(param_1 + 0x50) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(param_1 + 0x50),param_2,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_0264a60c;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(param_1 + 0x50),param_2,*(undefined8 *)PTR_DAT_049ca938);
        }
        return;
      }
    }
  }
LAB_0264a60c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

