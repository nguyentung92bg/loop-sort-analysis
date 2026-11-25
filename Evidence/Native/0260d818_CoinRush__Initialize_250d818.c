/* IL2CPP: CoinRush$$Initialize
void CoinRush__Initialize (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$Initialize
   void CoinRush__Initialize (CoinRush_o* __this, const MethodInfo* method); */

void CoinRush__Initialize_250d818(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  int iStack_44;
  
  puVar4 = PTR_DAT_049c9180;
  puVar3 = PTR_DAT_049c2c18;
                    /* catch() { ... } // from try @ 0260d4f0 with catch @ 0260d818 */
  puVar2 = PTR_DAT_049c2c08;
                    /* catch() { ... } // from try @ 0260d7a4 with catch @ 0260d81c */
                    /* catch() { ... } // from try @ 0260d79c with catch @ 0260d820 */
                    /* catch() { ... } // from try @ 0260d47c with catch @ 0260d824 */
                    /* catch() { ... } // from try @ 0260d4c4 with catch @ 0260d828 */
                    /* catch() { ... } // from try @ 0260d480 with catch @ 0260d82c */
                    /* catch() { ... } // from try @ 0260d4d0 with catch @ 0260d830 */
                    /* catch() { ... } // from try @ 0260d790 with catch @ 0260d834 */
                    /* catch() { ... } // from try @ 0260d4a8 with catch @ 0260d838 */
  if ((bRam0000000004f4bde0 & 1) == 0) {
                    /* try { // try from 0260d858 to 0270d85b has its CatchHandler @ 0260d900 */
    FUN_021f03f8(PTR_DAT_049c2c08);
                    /* try { // try from 0260d85c to 0270d903 has its CatchHandler @ 0260d018 */
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c9180);
    FUN_021f03f8(PTR_DAT_049c9188);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c5598);
    bRam0000000004f4bde0 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar10 = *(long *)(lVar13 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar13);
    lVar10 = *(long *)(lVar13 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
                    /* catch() { ... } // from try @ 0260d7d0 with catch @ 0260d8fc */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0260d858 with catch @ 0260d900 */
    lVar10 = FUN_02229718();
  }
                    /* try { // try from 0260d904 to 0270d90b has its CatchHandler @ 0260d914 */
  if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 0260d90c to 0270d917 has its CatchHandler @ 0260d018 */
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9188;
  puVar3 = PTR_DAT_049c2f50;
  puVar2 = PTR_DAT_049c2c60;
                    /* catch() { ... } // from try @ 0260d904 with catch @ 0260d914 */
  lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar8,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar2);
  lVar10 = *(long *)(param_1 + 0x20);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar4,0);
  if (lVar10 != 0) {
    PurchasingModule__AddPurchaseListener_254a360(lVar10,*(undefined8 *)PTR_DAT_049c5598,uVar8,0);
    if ((bRam0000000004f4bde4 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c9190);
      FUN_021f03f8(PTR_DAT_049c9198);
      FUN_021f03f8(PTR_DAT_049c91a0);
      FUN_021f03f8(PTR_DAT_049c2cf0);
      FUN_021f03f8(PTR_DAT_049c91a8);
      bRam0000000004f4bde4 = 1;
    }
    puVar5 = PTR_DAT_049c91a0;
    puVar4 = PTR_DAT_049c9198;
    puVar3 = PTR_DAT_049c9190;
    puVar2 = PTR_DAT_049c2cf0;
    auStack_60._0_8_ = 0;
    auStack_60._8_8_ = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar10 != 0)) {
      auStack_60 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar10,*(undefined8 *)PTR_DAT_049c91a8);
      puStack_88 = auStack_60;
      uStack_90 = 0;
      while( true ) {
        uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                          (auStack_60,*(undefined8 *)puVar4);
        if ((uVar9 & 1) == 0) {
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_60,*(undefined8 *)puVar3);
          return;
        }
        lVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_60,*(undefined8 *)puVar5);
        iVar6 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x50,0);
        if (lVar10 == 0) break;
        plVar11 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar11[1] + 0xfc);
        uVar8 = thunk_FUN_0224e54c(lVar10,*(undefined8 *)(*plVar11 + 0x80));
        func_0x04608620(&iStack_44,uVar8,uVar1);
        if (iStack_44 <= iVar6) {
          uStack_78 = *(undefined8 *)(lVar10 + 0x48);
          uStack_80 = *(undefined8 *)(lVar10 + 0x40);
          uStack_68 = *(undefined8 *)(lVar10 + 0x58);
          uStack_70 = *(undefined8 *)(lVar10 + 0x50);
          CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
          uStack_78 = *(undefined8 *)(lVar10 + 0x28);
          uStack_80 = *(undefined8 *)(lVar10 + 0x20);
          uStack_68 = *(undefined8 *)(lVar10 + 0x38);
          uStack_70 = *(undefined8 *)(lVar10 + 0x30);
          CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
        }
        uStack_78 = *(undefined8 *)(lVar10 + 0x48);
        uStack_80 = *(undefined8 *)(lVar10 + 0x40);
        uStack_68 = *(undefined8 *)(lVar10 + 0x58);
        uStack_70 = *(undefined8 *)(lVar10 + 0x50);
        uVar9 = CloudPrefsBool__get_Value_24eb0d0(&uStack_80,0);
        if ((uVar9 & 1) == 0) {
          uStack_a8 = *(undefined8 *)(param_1 + 0x78);
          uStack_b0 = *(undefined8 *)(param_1 + 0x70);
          uStack_98 = *(undefined8 *)(param_1 + 0x88);
          uStack_a0 = *(undefined8 *)(param_1 + 0x80);
          iVar6 = *(int *)(lVar10 + 0x18);
          iVar7 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_b0,0);
          if (iVar6 <= iVar7) {
            uStack_78 = *(undefined8 *)(lVar10 + 0x48);
            uStack_80 = *(undefined8 *)(lVar10 + 0x40);
            uStack_68 = *(undefined8 *)(lVar10 + 0x58);
            uStack_70 = *(undefined8 *)(lVar10 + 0x50);
            CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

