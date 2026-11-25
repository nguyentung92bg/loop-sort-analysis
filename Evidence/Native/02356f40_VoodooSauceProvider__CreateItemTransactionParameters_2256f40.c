/* IL2CPP: VoodooSauceProvider$$CreateItemTransactionParameters
Voodoo_Sauce_Internal_Analytics_ItemTransactionParameters_o* VoodooSauceProvider__CreateItemTransactionParameters (EconomyModule_Transaction_o transaction, int32_t newAmount, int32_t transactionType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$CreateItemTransactionParameters
   Voodoo_Sauce_Internal_Analytics_ItemTransactionParameters_o*
   VoodooSauceProvider__CreateItemTransactionParameters (EconomyModule_Transaction_o transaction,
   int32_t newAmount, int32_t transactionType, const MethodInfo* method); */

long VoodooSauceProvider__CreateItemTransactionParameters_2256f40
               (undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  puVar4 = PTR_DAT_049b63f0;
  if ((bRam0000000004f49bd9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b63f8);
    FUN_021f03f8(PTR_DAT_049b63f0);
    FUN_021f03f8(PTR_DAT_049b6400);
    FUN_021f03f8(PTR_DAT_049b6408);
    FUN_021f03f8(PTR_DAT_049b6410);
    FUN_021f03f8(PTR_DAT_049b4130);
    FUN_021f03f8(PTR_DAT_049b6418);
    FUN_021f03f8(PTR_DAT_049b6140);
    FUN_021f03f8(PTR_DAT_049b6150);
    bRam0000000004f49bd9 = 1;
  }
  lVar14 = *(long *)puVar4;
  uStack_50 = *(undefined8 *)((long)param_1 + 0x1c);
  lVar10 = *(long *)(lVar14 + 0x20);
  uVar3 = *(ushort *)(lVar10 + 0x135);
  lVar11 = lVar10;
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_02229718(lVar10);
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar3 = *(ushort *)(lVar11 + 0x135);
  }
  puVar4 = PTR_DAT_049b6418;
  uVar9 = *(undefined4 *)(**(long **)(lVar10 + 0xc0) + 0xfc);
  if ((uVar3 & 1) == 0) {
    lVar11 = FUN_02229718(lVar11);
  }
  puVar6 = PTR_DAT_049b6110;
  uVar7 = thunk_FUN_0224e54c(&uStack_50,
                             *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x04608620(&uStack_60,uVar7,uVar9);
  lVar11 = *(long *)(*(long *)puVar4 + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  puVar5 = PTR_DAT_049b4340;
  puVar4 = PTR_DAT_049b4338;
  pcVar8 = (char *)thunk_FUN_0224e54c(&uStack_50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar9 = 0;
  if (*pcVar8 == '\0' || (int)uStack_60 != 1) {
    uVar9 = 2;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    FUN_021f0574(2);
  }
  uVar7 = Extensions__ToAnalyticsName_24e74e4(uVar1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  Voodoo_Sauce_Internal_Analytics_ItemTransactionInfo___ctor_4368ffc(&uStack_60,uVar7,uVar9,0);
  lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar11,*(undefined8 *)puVar4);
  puVar6 = PTR_DAT_049b6400;
  puVar4 = PTR_DAT_049b63f8;
  if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 023571a8 with catch @ 02357160 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar11,*(undefined8 *)PTR_DAT_049b6140,*(undefined8 *)PTR_DAT_049b6150,
               *(undefined8 *)PTR_DAT_049b4358);
    iVar2 = *(int *)((long)param_1 + 0x24);
    lVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                    /* try { // try from 0235719c to 024571a7 has its CatchHandler @ 023571c8 */
                    /* try { // try from 023571a8 to 024571f3 has its CatchHandler @ 02357160 */
    Voodoo_Sauce_Internal_Analytics_ItemTransactionParameters___ctor_4368e8c
              ((double)iVar2,lVar14,uStack_60,uStack_58,param_3,0);
    lVar13 = *(long *)puVar6;
    lVar12 = *(long *)(lVar13 + 0x20);
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar10 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_02229718(lVar12);
                    /* catch() { ... } // from try @ 0235719c with catch @ 023571c8 */
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar3 = *(ushort *)(lVar10 + 0x135);
    }
    puVar4 = PTR_DAT_049b4130;
    uVar9 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_02229718(lVar10);
    }
    uVar7 = thunk_FUN_0224e54c(param_1 + 5,
                               *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&uStack_70,uVar7,uVar9);
    iVar2 = (int)uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    dStack_80 = (double)iVar2;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_70,&dStack_80,*(undefined8 *)puVar4);
    puVar6 = PTR_DAT_049b6410;
    if (lVar14 != 0) {
      dStack_48 = (double)param_2;
      *(undefined8 *)(lVar14 + 0x40) = uStack_68;
      *(undefined8 *)(lVar14 + 0x38) = uStack_70;
      puVar5 = PTR_DAT_049b6408;
      dStack_80 = 0.0;
      uStack_78 = 0;
                    /* catch() { ... } // from try @ 0235737c with catch @ 02357278 */
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&dStack_80,&dStack_48,*(undefined8 *)puVar4);
      uVar7 = *(undefined8 *)puVar6;
      *(undefined8 *)(lVar14 + 0x58) = uStack_78;
      *(double *)(lVar14 + 0x50) = dStack_80;
      uVar7 = System_Nullable___Il2CppFullySharedGenericStructType___ToString_29042c0
                        (param_1 + 1,uVar7);
      *(undefined8 *)(lVar14 + 0x30) = uVar7;
      thunk_FUN_021f190c();
      lVar13 = *(long *)puVar5;
      lVar12 = *(long *)(lVar13 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
      lVar10 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718(lVar12);
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
      }
      uVar9 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_02229718(lVar10);
      }
      uVar7 = thunk_FUN_0224e54c((long)param_1 + 0x14,
                                 *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x20);
                    /* try { // try from 02357308 to 02457313 has its CatchHandler @ 023573bc */
      func_0x04608620(&dStack_48,uVar7,uVar9);
      uVar7 = Extensions__ToAnalyticsName_24e74e4((ulong)dStack_48 & 0xffffffff,0);
      *(undefined8 *)(lVar14 + 0x48) = uVar7;
      thunk_FUN_021f190c();
      *(undefined8 *)(lVar14 + 0x68) = *param_1;
      thunk_FUN_021f190c();
      *(long *)(lVar14 + 0x80) = lVar11;
                    /* try { // try from 02357350 to 0245735b has its CatchHandler @ 023573a8 */
      thunk_FUN_021f190c((long *)(lVar14 + 0x80),lVar11);
      return lVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02357370 to 0245737b has its CatchHandler @ 023573a0 */
  FUN_021f06a0();
}

