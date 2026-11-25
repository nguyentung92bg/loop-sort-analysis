/* IL2CPP: BoosterContainer$$RefreshElements
void BoosterContainer__RefreshElements (BoosterContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterContainer$$RefreshElements
   void BoosterContainer__RefreshElements (BoosterContainer_o* __this, const MethodInfo* method); */

void BoosterContainer__RefreshElements_256ab24(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong uStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_54 [4];
  
  if ((bRam0000000004f4c18c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbe48);
    FUN_021f03f8(PTR_DAT_049b60f8);
    FUN_021f03f8(PTR_DAT_049b6100);
    FUN_021f03f8(PTR_DAT_049b6108);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c4938);
    FUN_021f03f8(PTR_DAT_049cbe50);
    FUN_021f03f8(PTR_DAT_049c20d8);
                    /* try { // try from 0266abb0 to 0276abbb has its CatchHandler @ 0266af54 */
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0266abc8 to 0276ac23 has its CatchHandler @ 0266af5c */
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b6120);
    FUN_021f03f8(PTR_DAT_049c5ea8);
    bRam0000000004f4c18c = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar12,0,0);
    if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 0266aee8 with catch @ 0266af34 */
                    /* catch() { ... } // from try @ 0266aac0 with catch @ 0266af38 */
                    /* catch() { ... } // from try @ 0266ad18 with catch @ 0266af3c */
                    /* catch() { ... } // from try @ 0266acf0 with catch @ 0266af40 */
                    /* catch() { ... } // from try @ 0266ad38 with catch @ 0266af44 */
                    /* catch() { ... } // from try @ 0266a9c4 with catch @ 0266af48 */
                    /* catch() { ... } // from try @ 0266ace0 with catch @ 0266af4c */
                    /* catch() { ... } // from try @ 0266ab14 with catch @ 0266af50
                       catch() { ... } // from try @ 0266ac38 with catch @ 0266af50 */
      return;
    }
                    /* try { // try from 0266ac38 to 0276ac43 has its CatchHandler @ 0266af50 */
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar11 != 0)) {
                    /* try { // try from 0266ac50 to 0276accf has its CatchHandler @ 0266af5c */
      uVar7 = FUN_024f7024(*(undefined8 *)(lVar11 + 0x50),param_1 + 0x78,
                           *(undefined8 *)PTR_DAT_049c4938);
      if ((uVar7 & 1) == 0) {
        return;
      }
      lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                         (param_1,0xbc1c109a,0);
      if (lVar11 != 0) {
        StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar11,0);
        if (*(long *)(param_1 + 0x78) != 0) {
          uVar7 = BoosterSystem__get_Selected_24e561c(*(long *)(param_1 + 0x78),0);
          uVar1 = 0xf7b703e5;
          if ((uVar7 & 1) == 0) {
            uVar1 = 0x15b02e4f;
          }
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
          puVar2 = PTR_DAT_049b5310;
          lVar8 = *(long *)PTR_DAT_049b5310;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            FUN_021f0574();
            lVar8 = *(long *)puVar2;
          }
                    /* try { // try from 0266acdc to 0276acdf has its CatchHandler @ 0266af18 */
                    /* try { // try from 0266ace0 to 0276aceb has its CatchHandler @ 0266af4c */
          iVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar8 + 0xb8) + 0x60,0);
          if (iVar6 < 2) {
            return;
          }
                    /* try { // try from 0266acf0 to 0276acff has its CatchHandler @ 0266af40 */
          if ((uVar7 & 1) == 0) {
                    /* try { // try from 0266ae38 to 0276ae63 has its CatchHandler @ 0266a674 */
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar8 != 0)) {
              auStack_80 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                                     (lVar8,*(undefined8 *)PTR_DAT_049b6120);
              puVar5 = PTR_DAT_049cbe48;
              puVar4 = PTR_DAT_049b6118;
              puVar3 = PTR_DAT_049b6108;
              puVar2 = PTR_DAT_049b6100;
                    /* try { // try from 0266ae64 to 0276ae6f has its CatchHandler @ 0266af00 */
              puStack_88 = auStack_80;
                    /* try { // try from 0266ae7c to 0276ae8b has its CatchHandler @ 0266aefc */
              uStack_90 = 0;
              while( true ) {
                uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                  (auStack_80,*(undefined8 *)puVar2);
                if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 0266aa08 with catch @ 0266af20 */
                    /* catch() { ... } // from try @ 0266aaf8 with catch @ 0266af24 */
                    /* catch() { ... } // from try @ 0266a9e4 with catch @ 0266af28 */
                    /* catch() { ... } // from try @ 0266aad4 with catch @ 0266af2c */
                    /* catch() { ... } // from try @ 0266aeec with catch @ 0266af30 */
                  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                            (auStack_80,*(undefined8 *)PTR_DAT_049b60f8);
                  return;
                }
                lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                                  (auStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 0266aea0 to 0276aeab has its CatchHandler @ 0266aef8 */
                uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                   (lVar11,0);
                if (lVar8 == 0) break;
                    /* try { // try from 0266aeb8 to 0276aec7 has its CatchHandler @ 0266aef4 */
                lVar13 = *(long *)(param_1 + 0x90);
                plVar9 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
                uVar10 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar9 + 0x80));
                    /* try { // try from 0266aee8 to 0276aeeb has its CatchHandler @ 0266af34 */
                func_0x04608620(auStack_54,uVar10,uVar1);
                    /* try { // try from 0266aeec to 0276aeef has its CatchHandler @ 0266af30 */
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266a88c with catch @ 0266af5c
                       catch() { ... } // from try @ 0266a944 with catch @ 0266af5c
                       catch() { ... } // from try @ 0266abc8 with catch @ 0266af5c
                       catch() { ... } // from try @ 0266ac50 with catch @ 0266af5c */
                  FUN_021f06a0();
                }
                    /* try { // try from 0266aef0 to 0276aef3 has its CatchHandler @ 0266af1c */
                    /* catch() { ... } // from try @ 0266aeb8 with catch @ 0266aef4
                       try { // try from 0266aef4 to 0276af73 has its CatchHandler @ 0266a674 */
                    /* catch() { ... } // from try @ 0266aea0 with catch @ 0266aef8 */
                    /* catch() { ... } // from try @ 0266ae7c with catch @ 0266aefc */
                    /* catch() { ... } // from try @ 0266ae64 with catch @ 0266af00 */
                    /* catch() { ... } // from try @ 0266ae28 with catch @ 0266af04 */
                    /* catch() { ... } // from try @ 0266ae10 with catch @ 0266af08 */
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar13,auStack_54,uVar12,*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 0266aa00 with catch @ 0266af0c */
                    /* catch() { ... } // from try @ 0266aaf0 with catch @ 0266af10 */
                    /* catch() { ... } // from try @ 0266ad14 with catch @ 0266af14 */
                    /* catch() { ... } // from try @ 0266acdc with catch @ 0266af18 */
                BoosterContainer__OnRefreshElement_256afd4(param_1,uVar12,lVar8);
                    /* catch() { ... } // from try @ 0266aef0 with catch @ 0266af1c */
              }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266ad54 with catch @ 0266af58 */
              FUN_021f06a0();
            }
          }
          else if ((*(long *)(param_1 + 0x78) != 0) &&
                  (plVar9 = *(long **)(*(long *)(param_1 + 0x78) + 0x88), plVar9 != (long *)0x0)) {
            uVar7 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                    /* try { // try from 0266ad14 to 0276ad17 has its CatchHandler @ 0266af14 */
            if ((uVar7 & 1) == 0) {
              return;
            }
                    /* try { // try from 0266ad18 to 0276ad33 has its CatchHandler @ 0266af3c */
            if (((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
               (lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar11 != 0)) {
                    /* try { // try from 0266ad38 to 0276ad43 has its CatchHandler @ 0266af44 */
              uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x90)
                                  );
              lVar11 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                                 (lVar11,&uStack_90,*(undefined8 *)PTR_DAT_049c5ea8);
                    /* try { // try from 0266ad54 to 0276adfb has its CatchHandler @ 0266af58 */
              lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                                (param_1,0x993134c1,0);
              if ((lVar8 != 0) && (lVar11 != 0)) {
                lVar8 = *(long *)(lVar8 + 0x38);
                plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
                uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
                uVar12 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar9 + 0x80));
                func_0x04608620(&uStack_90,uVar12,uVar1);
                uVar7 = uStack_90;
                if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar12 = Extensions__ToLocalizedDesc_24e60d4(uVar7 & 0xffffffff,0);
                if (lVar8 != 0) {
                  TMPro_TMP_Text__SetText_3b0f78c(lVar8,uVar12,0);
                  auStack_70 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3f000000,0);
                    /* try { // try from 0266ae10 to 0276ae1b has its CatchHandler @ 0266af08 */
                  auVar14 = FUN_024f6e90(_UNK_013aa810,auStack_70,0,1,
                                         *(undefined8 *)PTR_DAT_049c20d8);
                    /* try { // try from 0266ae28 to 0276ae37 has its CatchHandler @ 0266af04 */
                  LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266b3e0
                            (auVar14._0_8_,auVar14._8_8_,lVar8,*(undefined8 *)PTR_DAT_049cbe50);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266aa24 with catch @ 0266af54
                       catch() { ... } // from try @ 0266abb0 with catch @ 0266af54 */
  FUN_021f06a0();
}

