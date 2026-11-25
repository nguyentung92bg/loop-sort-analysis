/* IL2CPP: PurchasingModule$$AddPurchaseListener
void PurchasingModule__AddPurchaseListener (PurchasingModule_o* __this, System_String_o* productId, System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$AddPurchaseListener
   void PurchasingModule__AddPurchaseListener (PurchasingModule_o* __this, System_String_o*
   productId, System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method); */

void PurchasingModule__AddPurchaseListener_254a360
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c02b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049ca918);
    FUN_021f03f8(PTR_DAT_049ca908);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02b = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x50),param_2,&uStack_38,*(undefined8 *)PTR_DAT_049ca908)
    ;
    lVar4 = *(long *)(param_1 + 0x50);
    if ((uVar1 & 1) == 0) {
      if (lVar4 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar4,param_2,param_3,*(undefined8 *)PTR_DAT_049ca918);
    }
    else {
      if (lVar4 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar4,param_2,&uStack_28,*(undefined8 *)PTR_DAT_049ca920);
      lVar2 = System_Delegate__Combine_3145640(uStack_28,param_3,0);
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar3 = thunk_FUN_0222c938(lVar2,uVar5);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar2,uVar5);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar4,param_2,lVar3,*(undefined8 *)PTR_DAT_049ca928);
    }
    return;
  }
LAB_0264a4ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

