/* IL2CPP: VoodooAdjustProvider$$CompletePurchase
void VoodooAdjustProvider__CompletePurchase (int32_t purchaseCount, float usdPrice, float totalSpending, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023519bc) */
/* IL2CPP: VoodooAdjustProvider$$CompletePurchase
   void VoodooAdjustProvider__CompletePurchase (int32_t purchaseCount, float usdPrice, float
   totalSpending, const MethodInfo* method); */

void VoodooAdjustProvider__CompletePurchase_22516c0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  puVar5 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49b98 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5468);
    FUN_021f03f8(PTR_DAT_049b5458);
    FUN_021f03f8(PTR_DAT_049b3ca0);
    FUN_021f03f8(PTR_DAT_049b3ca8);
    FUN_021f03f8(PTR_DAT_049b3cb0);
    FUN_021f03f8(PTR_DAT_049b3cd0);
    FUN_021f03f8(PTR_DAT_049b5498);
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b98 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_68._8_8_ = 0;
  uStack_58 = 0;
  lStack_70 = 0;
  auStack_68._0_8_ = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar6 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = AdjustEventSheet__TryGetPurchaseConsumableToken_2556ff8(lVar6,param_3,&uStack_48,0);
  uVar9 = uStack_48;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar9);
  }
  uVar7 = AdjustEventSheet__TryGetIAPCountToken_25570f4(lVar6,param_3,&uStack_50,0);
  uVar9 = uStack_50;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar9);
  }
  puVar3 = PTR_DAT_049b5458;
  uVar7 = AdjustEventSheet__TryGetPurchasePriceToken_2556e88(param_1,lVar6,&uStack_58,0);
  uVar9 = uStack_58;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__TrackEvent_22514a4(uVar9);
  }
  puVar4 = PTR_DAT_049b5468;
                    /* try { // try from 02351838 to 02451863 has its CatchHandler @ 02351838
                       catch() { ... } // from try @ 02351838 with catch @ 02351838
                       catch() { ... } // from try @ 023519f0 with catch @ 02351838 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_68 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_70,*(undefined8 *)puVar4);
  puStack_98 = auStack_68;
  lStack_a0 = 0;
                    /* try { // try from 02351864 to 0245187b has its CatchHandler @ 02351a24 */
  uVar7 = AdjustEventSheet__TryGetIapCumulativeTokens_2556f54(param_2,lVar6,lStack_70,0);
  if ((uVar7 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_70,&uStack_b8,*(undefined8 *)PTR_DAT_049b3cd0);
    puVar4 = PTR_DAT_049b3cb0;
    puVar3 = PTR_DAT_049b3ca8;
                    /* try { // try from 0235189c to 024518a3 has its CatchHandler @ 02351a20 */
    puStack_88 = puStack_b0;
    uStack_90 = uStack_b8;
    uStack_80 = uStack_a8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_90;
    while( true ) {
      uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_90,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) break;
      lVar10 = *(long *)puVar4;
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar6 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718();
                    /* try { // try from 023518e4 to 024518ef has its CatchHandler @ 02351a10 */
        lVar8 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
                    /* try { // try from 023518f8 to 02451917 has its CatchHandler @ 02351a18 */
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_90,
                                 *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_28,uVar9,uVar1);
      uVar9 = uStack_28;
                    /* try { // try from 02351940 to 02451963 has its CatchHandler @ 02351a1c */
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar9);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)PTR_DAT_049b3ca0);
    lVar6 = lStack_a0;
  }
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (puStack_98,*(undefined8 *)PTR_DAT_049b5498);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar6);
}

