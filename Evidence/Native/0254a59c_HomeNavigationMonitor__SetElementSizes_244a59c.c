/* IL2CPP: HomeNavigationMonitor$$SetElementSizes
void HomeNavigationMonitor__SetElementSizes (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeNavigationMonitor$$SetElementSizes
   void HomeNavigationMonitor__SetElementSizes (HomeNavigationMonitor_o* __this, const MethodInfo*
   method); */

void HomeNavigationMonitor__SetElementSizes_244a59c(long param_1)

{
  float *pfVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b88a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b88a = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*(long *)(param_1 + 0x48) != 0) &&
      (plVar8 = (long *)UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x48),0),
      puVar4 = PTR_DAT_049bc0c8, plVar8 != (long *)0x0)) && (*plVar8 == *(long *)PTR_DAT_049bc0c8))
  {
    fVar14 = (float)UnityEngine_RectTransform__get_sizeDelta_3c2c02c(plVar8,0);
    fVar15 = _UNK_013aa778;
    if (fVar14 <= _UNK_013aa778) {
      fVar15 = fVar14;
    }
    fVar14 = (fVar15 / 5.0) / 3.0;
    fVar15 = (fVar15 - fVar14) / 5.0;
    fVar14 = fVar14 + fVar15;
    *(float *)(param_1 + 0xc0) = fVar15;
    pfVar13 = (float *)(param_1 + 0xc4);
    *pfVar13 = fVar14;
    lVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_1,0xd117e814,0);
    if (((lVar9 != 0) &&
        (plVar8 = (long *)UnityEngine_Component__get_transform_3c18724(lVar9,0),
        plVar8 != (long *)0x0)) && (*plVar8 == *(long *)puVar4)) {
      uVar16 = UnityEngine_RectTransform__get_sizeDelta_3c2c02c(plVar8,0);
      puVar4 = PTR_DAT_049b5480;
      fVar15 = *pfVar13;
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__WithX_3f0d00c(uVar16,fVar14,fVar15 + 100.0,0);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(plVar8,0);
      uVar11 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        uVar16 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar8,0);
        if ((*(long *)(param_1 + 0xa0) == 0) ||
           (lVar9 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                              (*(long *)(param_1 + 0xa0),0), lVar9 == 0)) goto LAB_0254a990;
        uVar17 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar9,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Extensions__WithX_3f0d00c(uVar16,fVar14,uVar17,0);
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(plVar8,0);
      }
      if (*(long *)(param_1 + 200) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_1 + 200),&uStack_a8,*(undefined8 *)PTR_DAT_049c3e88);
        puVar6 = PTR_DAT_049c3e80;
        puVar5 = PTR_DAT_049c3e78;
        uStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        uStack_80 = uStack_98;
        uStack_a8 = 0;
        puStack_a0 = &uStack_90;
        while( true ) {
          uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar7 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_90,*(undefined8 *)PTR_DAT_049c3e70);
            return;
          }
          lVar12 = *(long *)puVar6;
          lVar10 = *(long *)(lVar12 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
          lVar9 = lVar10;
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
            lVar10 = *(long *)(lVar12 + 0x20);
            uVar2 = *(ushort *)(lVar10 + 0x135);
          }
          uVar16 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          uVar11 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar11,uVar16);
          lVar9 = lStack_68;
          uVar11 = *(undefined8 *)(param_1 + 0xa0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(lVar9,uVar11,0);
          pfVar1 = pfVar13;
          if ((uVar7 & 1) == 0) {
            pfVar1 = (float *)(param_1 + 0xc0);
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fVar15 = *pfVar1;
          lVar10 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar9,0);
          lVar9 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar9,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar16 = UnityEngine_RectTransform__get_sizeDelta_3c2c02c(lVar9,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__WithX_3f0d00c(uVar16,fVar14,fVar15,0);
          if (lVar10 == 0) break;
          UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(lVar10,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_0254a990:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

