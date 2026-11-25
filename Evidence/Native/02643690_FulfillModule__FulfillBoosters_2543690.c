/* IL2CPP: FulfillModule$$FulfillBoosters
void FulfillModule__FulfillBoosters (FulfillModule_o* __this, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillBoosters
   void FulfillModule__FulfillBoosters (FulfillModule_o* __this, double quantity, const MethodInfo*
   method); */

void FulfillModule__FulfillBoosters_2543690(double param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_148 [80];
  ulong auStack_f8 [2];
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined4 uStack_74;
  
  if ((bRam0000000004f4bfee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b60f8);
    FUN_021f03f8(PTR_DAT_049b6100);
    FUN_021f03f8(PTR_DAT_049b6108);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b6120);
    bRam0000000004f4bfee = 1;
  }
  puVar8 = PTR_DAT_049c2ce8;
  puVar7 = PTR_DAT_049b6118;
  puVar6 = PTR_DAT_049b6110;
  puVar5 = PTR_DAT_049b6108;
  puVar4 = PTR_DAT_049b6100;
  puVar3 = PTR_DAT_049b60f8;
  auStack_88._0_8_ = 0;
  auStack_88._8_8_ = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uVar1 = 0x80000000;
  if (param_1 != INFINITY) {
    uVar1 = (int)param_1;
  }
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_2 + 0x18) + 0x40), lVar9 != 0)) {
    auStack_88 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar9,*(undefined8 *)PTR_DAT_049b6120);
    puStack_e8 = auStack_88;
    auStack_f8[1] = 0;
    while( true ) {
      uVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                         (auStack_88,*(undefined8 *)puVar4);
      if ((uVar10 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_88,*(undefined8 *)puVar3);
        return;
      }
      lVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_88,*(undefined8 *)puVar5);
      lVar13 = *(long *)(param_2 + 0x10);
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_c0 = (ulong)uVar1 << 0x20;
      if (lVar9 == 0) break;
      plVar12 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
      uVar2 = *(undefined4 *)(plVar12[1] + 0xfc);
      uVar11 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
      func_0x04608620(auStack_f8,uVar11,uVar2);
      uVar10 = auStack_f8[0];
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_d0 = Extensions__ToEconomyItem_24e5d5c(uVar10 & 0xffffffff,0);
      uStack_74 = *(undefined4 *)(param_2 + 0x60);
      auStack_f8[0] = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (auStack_f8,&uStack_74,*(undefined8 *)puVar8);
      uStack_e0 = *(undefined8 *)(param_2 + 0x58);
      uStack_cc = (undefined4)auStack_f8[0];
      uStack_c8 = (undefined4)(auStack_f8[0] >> 0x20);
      thunk_FUN_021f190c(&uStack_e0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      func_0x04608620(auStack_148,&uStack_e0,0x50);
      EconomyModule__Add_25332a4(lVar13,auStack_148,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

