/* IL2CPP: BoosterContainer$$OnUpdateElement
void BoosterContainer__OnUpdateElement (BoosterContainer_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$OnUpdateElement
   void BoosterContainer__OnUpdateElement (BoosterContainer_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster, const
   MethodInfo* method); */

void BoosterContainer__OnUpdateElement_256a644(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_140 [80];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_64;
  int iStack_58;
  int iStack_54;
  
                    /* try { // try from 0266a674 to 0276a767 has its CatchHandler @ 0266a674
                       catch() { ... } // from try @ 0266a674 with catch @ 0266a674
                       catch() { ... } // from try @ 0266ae38 with catch @ 0266a674
                       catch() { ... } // from try @ 0266aef4 with catch @ 0266a674
                       catch() { ... } // from try @ 0266af8c with catch @ 0266a674
                       catch() { ... } // from try @ 0266aff4 with catch @ 0266a674 */
  if ((bRam0000000004f4c18f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbe30);
    FUN_021f03f8(PTR_DAT_049cbe38);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049cbe40);
    bRam0000000004f4c18f = 1;
  }
  puVar4 = PTR_DAT_049b6118;
  iStack_58 = 0;
  uStack_64 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0266ab20;
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x20) == '\0') {
    return;
  }
  if (param_3 == 0) goto LAB_0266ab20;
  lVar14 = *(long *)(param_1 + 0x38);
  plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
  uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
  uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
  func_0x04608620(&uStack_f0,uVar9,uVar5);
  if (lVar14 == 0) goto LAB_0266ab20;
  Boosters__Get_24e5ab0(&uStack_f0,lVar14,uStack_f0,0);
  puVar3 = PTR_DAT_049b6110;
  if (((*(long *)(param_1 + 0x28) == 0) ||
      (lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar14 == 0)) ||
     (plVar12 = (long *)CONCAT44(uStack_ec,uStack_f0), plVar12 == (long *)0x0)) goto LAB_0266ab20;
                    /* try { // try from 0266a768 to 0276a76b has its CatchHandler @ 0266a92c */
                    /* try { // try from 0266a76c to 0276a787 has its CatchHandler @ 0266a934 */
  uVar10 = (**(code **)(*plVar12 + 0x228))
                     (plVar12,*(undefined8 *)(lVar14 + 0x50),*(undefined8 *)(*plVar12 + 0x230));
  puVar1 = &uStack_d0;
                    /* try { // try from 0266a78c to 0276a797 has its CatchHandler @ 0266a930 */
  if ((uVar10 & 1) == 0) {
    puVar1 = &uStack_c8;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
            (param_2,0x13d626de,*puVar1,0);
  lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 0266a7a8 to 0276a87f has its CatchHandler @ 0266a938 */
  plVar12 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
  uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
  uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
  func_0x04608620(&uStack_f0,uVar9,uVar5);
  uVar5 = uStack_f0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = Extensions__ToEconomyItem_24e5d5c(uVar5,0);
  if (lVar14 == 0) goto LAB_0266ab20;
  uVar11 = EconomyModule__IsUpdateIntercepted_2534488(lVar14,uVar5,0);
  if ((uVar11 & 1) == 0) {
    uStack_64 = BoosterSheet_Booster__GetCount_2559e80(param_3,0);
    uVar9 = System_Int32__ToString_30fbaa0(&uStack_64,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0x5cac0bbb,uVar9,0);
  }
  uVar11 = BoosterSheet_Booster__IsUnlocked_2559dbc(param_3,0);
  if ((uVar11 & 1) == 0) {
    uVar7 = BoosterSheet_Booster__IsAtUnlockLevel_2559ddc(param_3,0);
                    /* try { // try from 0266a88c to 0276a8e7 has its CatchHandler @ 0266af5c */
    iVar8 = 0x39740faf;
    iVar13 = -0x344e7b76;
    uVar6 = uVar7;
LAB_0266a8a0:
    if ((uVar6 & 1) == 0) {
      iVar13 = iVar8;
    }
  }
  else {
    if ((uVar10 & 1) != 0) {
      uVar6 = BoosterSheet_Booster__IsAvailable_2559e60(param_3,0);
      uVar7 = 0;
      iVar8 = 0x544baef0;
      iVar13 = 0x177f7641;
      goto LAB_0266a8a0;
    }
    uVar7 = 0;
    iVar13 = 0x587a3ace;
  }
  lVar14 = *(long *)(param_1 + 0x98);
  plVar12 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
  uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
  uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
  func_0x04608620(&uStack_f0,uVar9,uVar5);
  if (lVar14 != 0) {
                    /* try { // try from 0266a8f8 to 0276a903 has its CatchHandler @ 0266a928 */
    uVar10 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                       (lVar14,&uStack_f0,&iStack_58,*(undefined8 *)PTR_DAT_049cbe30);
                    /* try { // try from 0266a910 to 0276a91f has its CatchHandler @ 0266a924 */
    if (((uVar10 & 1) == 0) || (iStack_58 != iVar13)) {
                    /* catch() { ... } // from try @ 0266a910 with catch @ 0266a924 */
                    /* catch() { ... } // from try @ 0266a8f8 with catch @ 0266a928 */
                    /* catch() { ... } // from try @ 0266a768 with catch @ 0266a92c */
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,iVar13,0);
    }
                    /* catch() { ... } // from try @ 0266a78c with catch @ 0266a930 */
                    /* catch() { ... } // from try @ 0266a76c with catch @ 0266a934 */
    lVar14 = *(long *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 0266a7a8 with catch @ 0266a938 */
    plVar12 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                    /* try { // try from 0266a944 to 0276a9c3 has its CatchHandler @ 0266af5c */
    uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
    uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
    func_0x04608620(&uStack_f0,uVar9,uVar5);
    if (lVar14 != 0) {
      iStack_54 = iVar13;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar14,&uStack_f0,&iStack_54,*(undefined8 *)PTR_DAT_049cbe38);
      if ((uVar7 & 1) != 0) {
        BoosterSheet_Booster__Unlock_2559e50(param_3,0);
        puVar2 = PTR_DAT_049b5310;
        lVar14 = *(long *)PTR_DAT_049b5310;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_021f0574();
          lVar14 = *(long *)puVar2;
        }
                    /* try { // try from 0266a9c4 to 0276a9cb has its CatchHandler @ 0266af48 */
        iVar8 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar14 + 0xb8) + 0x60,0);
        if (iVar8 < 3) {
          uVar6 = *(uint *)(param_3 + 0x24);
        }
        else {
          uVar6 = 0;
        }
                    /* try { // try from 0266a9e4 to 0276a9eb has its CatchHandler @ 0266af28 */
        lVar14 = *(long *)(param_1 + 0x48);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_a0 = (ulong)uVar6 << 0x20;
                    /* try { // try from 0266aa00 to 0276aa03 has its CatchHandler @ 0266af0c */
        plVar12 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                    /* try { // try from 0266aa08 to 0276aa13 has its CatchHandler @ 0266af20 */
        uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
        uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
                    /* try { // try from 0266aa24 to 0276aaab has its CatchHandler @ 0266af54 */
        func_0x04608620(&uStack_f0,uVar9,uVar5);
        uVar5 = uStack_f0;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = Extensions__ToEconomyItem_24e5d5c(uVar5,0);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        plVar12 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
        uVar5 = *(undefined4 *)(plVar12[1] + 0xfc);
        uVar9 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar12 + 0x80));
        func_0x04608620(&uStack_f0,uVar9,uVar5);
        uVar9 = Extensions__ToAnalyticsName_24e5df4(uStack_f0,0);
        uStack_c0 = System_String__Concat_2f72b28(uVar9,*(undefined8 *)PTR_DAT_049cbe40,0);
        thunk_FUN_021f190c(&uStack_c0,uStack_c0);
        if (lVar14 == 0) goto LAB_0266ab20;
        func_0x04608620(auStack_140,&uStack_c0,0x50);
                    /* try { // try from 0266aac0 to 0276aacf has its CatchHandler @ 0266af38 */
        EconomyModule__Add_25332a4(lVar14,auStack_140,0);
                    /* try { // try from 0266aad4 to 0276aadb has its CatchHandler @ 0266af2c */
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,0x177f7641,0);
      }
      if (*(char *)(param_3 + 0x68) != '\0') {
                    /* try { // try from 0266aaf0 to 0276aaf3 has its CatchHandler @ 0266af10 */
                    /* try { // try from 0266aaf8 to 0276ab03 has its CatchHandler @ 0266af24 */
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,0xc614fb00,0);
      }
                    /* try { // try from 0266ab14 to 0276ab9b has its CatchHandler @ 0266af50 */
      return;
    }
  }
LAB_0266ab20:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

