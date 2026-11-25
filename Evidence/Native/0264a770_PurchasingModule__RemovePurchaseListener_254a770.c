/* IL2CPP: PurchasingModule$$RemovePurchaseListener
void PurchasingModule__RemovePurchaseListener (PurchasingModule_o* __this, int32_t productType, System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$RemovePurchaseListener
   void PurchasingModule__RemovePurchaseListener (PurchasingModule_o* __this, int32_t productType,
   System_Action_FulfillPurchaseMessage__o* onPurchase, const MethodInfo* method); */

void PurchasingModule__RemovePurchaseListener_254a770
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4c02e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049ca958);
    FUN_021f03f8(PTR_DAT_049ca960);
    FUN_021f03f8(PTR_DAT_049ca948);
    FUN_021f03f8(PTR_DAT_049ca950);
    bRam0000000004f4c02e = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uStack_48 = param_2;
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(param_1 + 0x58),&uStack_48,*(undefined8 *)PTR_DAT_049ca958);
    puVar1 = PTR_DAT_049ca948;
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      uStack_34 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar5,&uStack_34,&uStack_48,*(undefined8 *)PTR_DAT_049ca948);
                    /* try { // try from 0264a834 to 0274a83b has its CatchHandler @ 0264a9c0 */
      lVar3 = System_Delegate__Remove_314582c(CONCAT44(uStack_44,uStack_48),param_3,0);
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        uVar6 = *(undefined8 *)PTR_DAT_049c2f50;
                    /* try { // try from 0264a854 to 0274a89f has its CatchHandler @ 0264a9c4 */
        lVar4 = thunk_FUN_0222c938(lVar3,uVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar3,uVar6);
        }
      }
      uStack_48 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar5,&uStack_48,lVar4,*(undefined8 *)PTR_DAT_049ca950);
      if (*(long *)(param_1 + 0x58) != 0) {
        uStack_34 = param_2;
                    /* try { // try from 0264a8a0 to 0274a8bf has its CatchHandler @ 0264a59c */
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(param_1 + 0x58),&uStack_34,&uStack_48,*(undefined8 *)puVar1);
        if (CONCAT44(uStack_44,uStack_48) == 0) {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_0264a8e8;
                    /* try { // try from 0264a8c0 to 0274a8c3 has its CatchHandler @ 0264a994 */
                    /* try { // try from 0264a8c4 to 0274a8d3 has its CatchHandler @ 0264a99c */
          uStack_48 = param_2;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(param_1 + 0x58),&uStack_48,*(undefined8 *)PTR_DAT_049ca960);
        }
                    /* try { // try from 0264a8e0 to 0274a8ef has its CatchHandler @ 0264a9b8 */
        return;
      }
    }
  }
LAB_0264a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

