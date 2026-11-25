/* IL2CPP: AreasMonitor$$CreateRewards
void AreasMonitor__CreateRewards (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, AreaSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02535fc4) */
/* WARNING: Removing unreachable block (ram,0x02535fc8) */
/* WARNING: Removing unreachable block (ram,0x02536474) */
/* WARNING: Removing unreachable block (ram,0x025360a4) */
/* IL2CPP: AreasMonitor$$CreateRewards
   void AreasMonitor__CreateRewards (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, AreaSheet_Row_o* data, const MethodInfo*
   method); */

void AreasMonitor__CreateRewards_2435a6c(long param_1,long param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float in_s3;
  float fVar25;
  float fVar26;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  long **pplStack_108;
  long lStack_100;
  long **pplStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  if ((bRam0000000004f4b7f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b20);
    FUN_021f03f8(PTR_DAT_049c3a78);
    FUN_021f03f8(PTR_DAT_049c3b28);
    FUN_021f03f8(PTR_DAT_049c3b30);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049c3b38);
    FUN_021f03f8(PTR_DAT_049c3b40);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c3b48);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049befe0);
    FUN_021f03f8(PTR_DAT_049c3b50);
    FUN_021f03f8(PTR_DAT_049c3b58);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c3b60);
    FUN_021f03f8(PTR_DAT_049c3ae8);
    FUN_021f03f8(PTR_DAT_049c3af0);
    FUN_021f03f8(PTR_DAT_049c3b68);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    FUN_021f03f8(PTR_DAT_049c3b70);
    bRam0000000004f4b7f8 = 1;
  }
  uStack_a0 = 0;
  lStack_98 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_025363ac;
  uVar12 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                     (*(long *)(param_1 + 0xc0),param_2,&lStack_98,*(undefined8 *)PTR_DAT_049c3b28);
  if ((uVar12 & 1) == 0) {
    lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3b20);
    AreasMonitor_AreaView___ctor_2436a58();
    lStack_98 = lVar13;
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_025363ac;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0xc0),param_2,lVar13,*(undefined8 *)PTR_DAT_049c3b30);
  }
  if (lStack_98 == 0) goto LAB_025363ac;
  *(long *)(lStack_98 + 0x10) = param_3;
  thunk_FUN_021f190c((long *)(lStack_98 + 0x10),param_3);
  if ((lStack_98 == 0) || (lVar13 = *(long *)(lStack_98 + 0x28), lVar13 == 0)) goto LAB_025363ac;
  lVar18 = *(long *)PTR_DAT_049c3b58;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  uVar12 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
  if ((uVar12 & 1) == 0) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
  }
  else {
    iVar19 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    if (0 < iVar19) {
      System_Array__Clear_31229cc(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
    }
  }
  lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                     (param_2,0x78d4e5eb,0);
  if ((((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x20), lVar13 == 0)) ||
      (StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar13,0), puVar8 = PTR_DAT_049c3b70,
      puVar7 = PTR_DAT_049c3b50, puVar6 = PTR_DAT_049c2d00, puVar5 = PTR_DAT_049b6350,
      puVar4 = PTR_DAT_049b6348, param_3 == 0)) || (*(long *)(param_3 + 0x30) == 0))
  goto LAB_025363ac;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_3 + 0x30),&plStack_f0,*(undefined8 *)PTR_DAT_049c3b60);
  uStack_a0 = uStack_e0;
  pplStack_f8 = &plStack_b0;
  uStack_a8 = uStack_e8;
  plStack_b0 = plStack_f0;
  lStack_100 = 0;
  while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&plStack_b0,*(undefined8 *)PTR_DAT_049c3b40), lVar18 = lStack_100,
        puVar3 = PTR_DAT_049b5480, (uVar12 & 1) != 0) {
    lVar20 = *(long *)PTR_DAT_049c3b48;
    lVar14 = *(long *)(lVar20 + 0x20);
    uVar2 = *(ushort *)(lVar14 + 0x135);
    lVar18 = lVar14;
    if ((uVar2 & 1) == 0) {
      lVar18 = FUN_02229718();
      lVar14 = *(long *)(lVar20 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
    }
    uVar23 = *(undefined4 *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar14 = FUN_02229718();
    }
    uVar15 = thunk_FUN_0224e54c(&plStack_b0,
                                *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_f0,uVar15,uVar23);
    plVar9 = plStack_f0;
    if (plStack_f0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (plStack_f0[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (plStack_f0[4],&plStack_f0,*(undefined8 *)PTR_DAT_049b6370);
    uStack_c0 = uStack_e0;
    pplStack_108 = &plStack_d0;
    uStack_c8 = uStack_e8;
    plStack_d0 = plStack_f0;
    uStack_110 = 0;
    while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&plStack_d0,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
      lVar20 = *(long *)puVar5;
      lVar14 = *(long *)(lVar20 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
      lVar18 = lVar14;
      if ((uVar2 & 1) == 0) {
        lVar18 = FUN_02229718();
        lVar14 = *(long *)(lVar20 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x135);
      }
      uVar23 = *(undefined4 *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&plStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_f0,uVar15,uVar23);
      plVar10 = plStack_f0;
      uVar15 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar13,0);
      lVar18 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                         (uVar15,0x5f10bc4c,0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar21 = *(long **)(lVar18 + 0x38);
      uVar16 = AreasMonitor__FormatJourneyLevel_2436b34(*(undefined4 *)((long)plVar9 + 0x14));
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar16,uVar16);
      }
      (**(code **)(*plVar21 + 0x558))(plVar21,uVar16,*(undefined8 *)(*plVar21 + 0x560));
      if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar18 = *(long *)(*(long *)(param_1 + 0xa8) + 0x28);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_88 = SUB84(plVar10,0);
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar18,&uStack_88,&plStack_f0,*(undefined8 *)puVar6);
      uStack_128 = uStack_e8;
      plStack_130 = plStack_f0;
      uStack_120 = uStack_e0;
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                (uVar15,0xbcdc2f95,&plStack_130,0);
      if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar16 = Shop__FormatItemQuantity_2570348(*(long *)(param_1 + 0xa8),plVar10,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar15,0x9927ed9b,uVar16,0);
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar18 = *(long *)(lStack_98 + 0x28);
      plStack_f0 = (long *)0x0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_84 = 0;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a05968
                (&plStack_f0,uVar15,plVar9,&uStack_84,*(undefined8 *)puVar8);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_148 = uStack_e8;
      plStack_150 = plStack_f0;
      uStack_140 = uStack_e0;
      FUN_02333498(lVar18,&plStack_150,*(undefined8 *)puVar7);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&plStack_d0,*(undefined8 *)PTR_DAT_049b6330);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (pplStack_f8,*(undefined8 *)PTR_DAT_049c3b38);
  if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698(lVar18);
  }
  uVar11 = AreasMonitor__IsClouded_2436cf8(param_1,param_3);
  lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                     (param_2,0x321f4658,0);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_025363ac;
  fVar24 = 430.0;
  fVar26 = fVar24;
  if ((uVar11 & 1) == 0) {
    fVar26 = 0.0;
  }
  UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar13 + 0x20),uVar11 & 1,0);
  lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                     (param_2,0x78d4e5eb,0);
  if (lVar13 == 0) goto LAB_025363ac;
  lVar18 = *(long *)puVar3;
  uVar15 = *(undefined8 *)(lVar13 + 0x20);
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_021f0574(lVar18);
  }
  lVar13 = Extensions__GetRectTransform_3f0c498(uVar15,0);
  if (lVar13 == 0) goto LAB_025363ac;
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar13,0);
  Extensions__WithY_3f0d014(0);
  UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar13,0);
  if (*(int *)(*(long *)PTR_DAT_049befe0 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_3ed78b8(lVar13,0);
  UnityEngine_RectTransform__get_rect_3c2ba98(lVar13,0);
  lVar18 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                     (param_2,0x6d8b1339,0);
  if (lVar18 == 0) goto LAB_025363ac;
  lVar18 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar18,0);
  lVar14 = *(long *)(*(long *)PTR_DAT_049b3cf0 + 0x20);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02229718();
  }
  pcVar17 = (char *)thunk_FUN_0224e54c(&uStack_d8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80));
  if ((lStack_98 == 0) || (lVar14 = *(long *)(lStack_98 + 0x28), lVar14 == 0)) goto LAB_025363ac;
  cVar1 = *pcVar17;
  if (*(int *)(lVar14 + 0x18) < 1) {
    fVar22 = 170.0;
    if (cVar1 != '\0') goto LAB_02536250;
LAB_02536268:
    fVar22 = fVar22 - in_s3;
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar14,0,&plStack_f0,*(undefined8 *)PTR_DAT_049c3af0);
    if (plStack_f0 == (long *)0x0) goto LAB_025363ac;
    uVar15 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(plStack_f0,0);
    fVar22 = (float)AreasMonitor__GetHeightFromBottom_2436dbc(lVar13,uVar15);
    fVar24 = 170.0;
    fVar22 = fVar22 + 170.0;
    if (cVar1 == '\0') goto LAB_02536268;
LAB_02536250:
    fVar22 = *(float *)(param_1 + 0xe8);
  }
  if (lVar18 != 0) {
    uVar23 = UnityEngine_RectTransform__get_offsetMax_3c2c628(lVar18,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__WithY_3f0d014(uVar23,fVar24,fVar22,0);
    UnityEngine_RectTransform__set_offsetMax_3c2c6c8(lVar18,0);
    if (lStack_98 != 0) {
      fVar24 = *(float *)(param_1 + 0xec);
      iVar19 = 0;
      fVar22 = fVar22 + in_s3 + fVar24;
      *(float *)(lStack_98 + 0x18) = fVar22;
      *(float *)(lStack_98 + 0x1c) = in_s3;
      *(float *)(lStack_98 + 0x20) = fVar24 / fVar22;
      while (lVar14 = *(long *)(lStack_98 + 0x28), lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) <= iVar19) {
          lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                             (param_2,0x297c952a,0);
          if ((lVar13 != 0) && (*(long *)(lVar13 + 0x20) != 0)) {
            uVar15 = UnityEngine_GameObject__SetActive_3c1ce34
                               (*(long *)(lVar13 + 0x20),cVar1 == '\0',0);
            AreasMonitor__PlaceJoints_2436e0c(uVar15,param_2,lStack_98,cVar1 == '\0');
            UnityEngine_Transform__SetAsLastSibling_3c2f0a4(lVar18,0);
            if ((param_2 != 0) &&
               (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                          (param_2,&plStack_f0,*(undefined8 *)PTR_DAT_049c3a78),
               plStack_f0 != (long *)0x0)) {
              (**(code **)(*plStack_f0 + 0x398))
                        (fVar26 + in_s3 + *(float *)(param_1 + 0xe4),plStack_f0,
                         *(undefined8 *)(*plStack_f0 + 0x3a0));
              return;
            }
          }
          break;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar14,iVar19,&plStack_f0,*(undefined8 *)PTR_DAT_049c3af0);
        uVar15 = uStack_e8;
        plVar9 = plStack_f0;
        if (plStack_f0 == (long *)0x0) break;
        fVar25 = *(float *)(param_1 + 0xec);
        uVar16 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(plStack_f0,0);
        fVar24 = (float)AreasMonitor__GetHeightFromBottom_2436dbc(lVar13,uVar16);
        if (lStack_98 == 0) break;
        lVar14 = *(long *)(lStack_98 + 0x28);
        plStack_f0 = (long *)0x0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        lStack_100 = CONCAT44(lStack_100._4_4_,(fVar25 + fVar24 + -92.0) / fVar22);
        System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a05968
                  (&plStack_f0,plVar9,uVar15,&lStack_100,*(undefined8 *)puVar8);
        if (lVar14 == 0) break;
        uStack_168 = uStack_e8;
        plStack_170 = plStack_f0;
        uStack_160 = uStack_e0;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                  (lVar14,iVar19,&plStack_170,*(undefined8 *)PTR_DAT_049c3b68);
        iVar19 = iVar19 + 1;
        if (lStack_98 == 0) break;
      }
    }
  }
LAB_025363ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

