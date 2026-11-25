/* IL2CPP: BoosterContainer$$<Setup>b__15_1
void BoosterContainer___Setup_b__15_1 (BoosterContainer_o* __this, BoosterCanceledMessage_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterContainer$$<Setup>b__15_1
   void BoosterContainer___Setup_b__15_1 (BoosterContainer_o* __this, BoosterCanceledMessage_o __,
   const MethodInfo* method); */

void BoosterContainer___Setup_b__15_1_256bd80(long param_1)

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
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5310);
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
      return;
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar11 != 0)) {
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
          iVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar8 + 0xb8) + 0x60,0);
          if (iVar6 < 2) {
            return;
          }
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar8 != 0)) {
              auStack_80 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                                     (lVar8,*(undefined8 *)PTR_DAT_049b6120);
              puVar5 = PTR_DAT_049cbe48;
              puVar4 = PTR_DAT_049b6118;
              puVar3 = PTR_DAT_049b6108;
              puVar2 = PTR_DAT_049b6100;
              puStack_88 = auStack_80;
              uStack_90 = 0;
              while( true ) {
                uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                  (auStack_80,*(undefined8 *)puVar2);
                if ((uVar7 & 1) == 0) {
                  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                            (auStack_80,*(undefined8 *)PTR_DAT_049b60f8);
                  return;
                }
                lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                                  (auStack_80,*(undefined8 *)puVar3);
                uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                   (lVar11,0);
                if (lVar8 == 0) break;
                lVar13 = *(long *)(param_1 + 0x90);
                plVar9 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
                uVar10 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar9 + 0x80));
                func_0x04608620(auStack_54,uVar10,uVar1);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar13,auStack_54,uVar12,*(undefined8 *)puVar5);
                BoosterContainer__OnRefreshElement_256afd4(param_1,uVar12,lVar8);
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
          else if ((*(long *)(param_1 + 0x78) != 0) &&
                  (plVar9 = *(long **)(*(long *)(param_1 + 0x78) + 0x88), plVar9 != (long *)0x0)) {
            uVar7 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if ((uVar7 & 1) == 0) {
              return;
            }
            if (((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
               (lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar11 != 0)) {
              uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x90)
                                  );
              lVar11 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                                 (lVar11,&uStack_90,*(undefined8 *)PTR_DAT_049c5ea8);
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
                  auVar14 = FUN_024f6e90(_UNK_013aa810,auStack_70,0,1,
                                         *(undefined8 *)PTR_DAT_049c20d8);
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
  FUN_021f06a0();
}

