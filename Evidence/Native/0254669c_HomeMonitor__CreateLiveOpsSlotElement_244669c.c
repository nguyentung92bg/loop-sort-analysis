/* IL2CPP: HomeMonitor$$CreateLiveOpsSlotElement
void HomeMonitor__CreateLiveOpsSlotElement (HomeMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, HomeLiveOpsSheet_Slot_o* slot, LiveOpsSheet_Row_o* liveOpsSheet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$CreateLiveOpsSlotElement
   void HomeMonitor__CreateLiveOpsSlotElement (HomeMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, HomeLiveOpsSheet_Slot_o* slot,
   LiveOpsSheet_Row_o* liveOpsSheet, const MethodInfo* method); */

void HomeMonitor__CreateLiveOpsSlotElement_244669c
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar2 = PTR_DAT_049c4350;
  if ((bRam0000000004f4b86b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c4358);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c4360);
    FUN_021f03f8(PTR_DAT_049c4368);
    FUN_021f03f8(PTR_DAT_049c4370);
    FUN_021f03f8(PTR_DAT_049c4350);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b86b = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar7,0);
  if (lVar7 == 0) goto LAB_02546dcc;
  *(long *)(lVar7 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar7 + 0x10),param_1);
  puVar13 = (undefined8 *)(lVar7 + 0x20);
  *puVar13 = param_2;
  thunk_FUN_021f190c(puVar13,param_2);
  plVar14 = (long *)(lVar7 + 0x28);
  *plVar14 = param_4;
  thunk_FUN_021f190c(plVar14,param_4);
  puVar2 = PTR_DAT_049b6110;
  if (*plVar14 == 0) goto LAB_02546dcc;
  plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049c4360 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
  uVar8 = thunk_FUN_0224e54c(*plVar14,*(undefined8 *)(*plVar12 + 0x80));
  func_0x04608620(&uStack_e0,uVar8,uVar1);
  uVar4 = uStack_e0;
  lVar9 = *(long *)puVar2;
  *(undefined4 *)(lVar7 + 0x18) = (undefined4)uStack_e0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar9 = Extensions__ToClassInstance_24e79d0(uVar4 & 0xffffffff,0);
  plVar14 = (long *)(lVar7 + 0x30);
  *plVar14 = lVar9;
  thunk_FUN_021f190c(plVar14,lVar9);
  if (*(long *)(param_1 + 0x108) == 0) goto LAB_02546dcc;
  lVar9 = *(long *)(param_1 + 200);
  uVar1 = *(undefined4 *)(lVar7 + 0x18);
  uVar8 = SkinModule__get_Active_253a090(*(long *)(param_1 + 0x108),0);
  if (lVar9 == 0) goto LAB_02546dcc;
  LiveOpsData__GetData_256ff6c(&uStack_e0,lVar9,uVar1,uVar8,0);
  uVar4 = uStack_e0;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02546dcc;
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
            (*(long *)(param_1 + 0x1b0),uStack_e0,*(undefined8 *)PTR_DAT_049c4358);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar13,0x5f10e269,0);
  if ((int)uStack_a0 != 0) {
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*puVar13,uStack_a0 & 0xffffffff,0);
  }
  if (param_3 == 0) goto LAB_02546dcc;
  uVar1 = 0xcc127773;
  if (*(int *)(param_3 + 0x20) != 0) {
    uVar1 = 0x6896ff8;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar13,uVar1,0);
  uVar10 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(param_3,0);
  uVar1 = 0x39740faf;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0xcbb1848a;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar13,uVar1,0);
  lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (*puVar13,0x1a9a2c8b,0);
  if ((lVar9 == 0) ||
     (lVar9 = UnityEngine_Component__get_transform_3c18724(lVar9,0), puVar2 = PTR_DAT_049b3b98,
     lVar9 == 0)) goto LAB_02546dcc;
  iVar5 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar9,0);
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      lVar11 = UnityEngine_Transform__GetChild_3c2f8bc(lVar9,iVar5,0);
      if (lVar11 == 0) goto LAB_02546dcc;
      uVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar2);
      }
      UnityEngine_Object__Destroy_3c24380(uVar8,0);
      iVar5 = iVar5 + 1;
      iVar6 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar9,0);
    } while (iVar5 < iVar6);
  }
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_02546dcc;
    if (*(char *)(*(long *)(param_1 + 0x1a0) + 0x10) == '\0') goto LAB_02546be8;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_f0 = uStack_80;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (*puVar13,0x1a9a2c8b,&uStack_100,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uStack_a8,0,0);
    if ((uVar10 & 1) != 0) {
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (*puVar13,0xc24dc4d1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = UnityEngine_Object__Instantiate_object__2695b80
                        (uStack_a8,lVar9,*(undefined8 *)PTR_DAT_049c3bd8);
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5480);
      }
      lVar9 = Extensions__GetRectTransform_3f0c498(uVar8,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar9 == 0) goto LAB_02546dcc;
      lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                 *(undefined4 *)(lVar11 + 0x14),lVar9,0);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      puVar3 = PTR_DAT_049b8a18;
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                 (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar9,0);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                 (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],lVar9,0);
      if (cRam0000000004f4a194 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f4a194 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0
                (*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),lVar9,0);
      if (cRam0000000004f4a194 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f4a194 = '\x01';
      }
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      fVar16 = (float)((ulong)uVar8 >> 0x20) * 0.5;
      UnityEngine_RectTransform__set_pivot_3c2c28c
                (CONCAT44(fVar16,(float)uVar8 * 0.5),fVar16,lVar9,0);
    }
  }
  else {
LAB_02546be8:
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_118 = uStack_70;
    uStack_120 = uStack_78;
    uStack_110 = uStack_68;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (*puVar13,0x1a9a2c8b,&uStack_120,0);
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar8,0,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (*puVar13,0x1a9a2c8b,0);
      if (lVar9 == 0) goto LAB_02546dcc;
      UnityEngine_UI_Image__set_sprite_3cee6e8(lVar9,uVar8,0);
    }
    lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                      (*puVar13,0x854128ce,0);
    puVar3 = PTR_DAT_049c4368;
    puVar2 = PTR_DAT_049b8d80;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x100) != 0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar9 + 0x100),0);
      lVar9 = *(long *)(lVar9 + 0x100);
      uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,lVar7,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_049c4370;
      puVar2 = PTR_DAT_049b4308;
      if (lVar9 != 0) {
        UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar9,uVar8,0);
        uVar15 = *(undefined8 *)(param_1 + 0x130);
        uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
        System_Action___ctor_306b98c(uVar8,lVar7,*(undefined8 *)puVar3,0);
        plVar14 = (long *)System_Delegate__Combine_3145640(uVar15,uVar8,0);
        if (plVar14 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x130) = 0;
        }
        else {
          lVar7 = *(long *)puVar2;
          if ((*plVar14 != lVar7) || (*(long **)(param_1 + 0x130) = plVar14, *plVar14 != lVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(plVar14);
          }
        }
        thunk_FUN_021f190c(param_1 + 0x130,plVar14);
        uStack_130 = uStack_a8;
        uStack_158 = uStack_88;
        uStack_160 = uStack_90;
        uStack_148 = uStack_78;
        uStack_150 = uStack_80;
        uStack_138 = uStack_68;
        uStack_140 = uStack_70;
        uStack_168 = uVar4;
        uStack_128 = uStack_a0;
        HomeMonitor__HandleHomeViewItem_2446dd8(param_1,*puVar13,&uStack_168);
        return;
      }
    }
  }
LAB_02546dcc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

