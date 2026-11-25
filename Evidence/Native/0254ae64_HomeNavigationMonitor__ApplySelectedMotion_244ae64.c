/* IL2CPP: HomeNavigationMonitor$$ApplySelectedMotion
void HomeNavigationMonitor__ApplySelectedMotion (HomeNavigationMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeNavigationMonitor$$ApplySelectedMotion
   void HomeNavigationMonitor__ApplySelectedMotion (HomeNavigationMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void HomeNavigationMonitor__ApplySelectedMotion_244ae64(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long lStack_58;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b88f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049c16a8);
    FUN_021f03f8(PTR_DAT_049c16b0);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c45a0);
    FUN_021f03f8(PTR_DAT_049c45a8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b88f = 1;
  }
  auStack_68._8_8_ = 0;
  lStack_58 = 0;
  auStack_78._8_8_ = 0;
  auStack_68._0_8_ = 0;
  auStack_78._0_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0xd0),param_2,&lStack_58,*(undefined8 *)PTR_DAT_049c16a8)
    ;
    if ((uVar4 & 1) == 0) {
      lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c16a0);
      LitMotion_CompositeMotionHandle___ctor_2e8ad94(lVar5,0);
      lStack_58 = lVar5;
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_0254b208;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0xd0),param_2,lVar5,*(undefined8 *)PTR_DAT_049c16b0);
    }
    if (lStack_58 != 0) {
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(lStack_58,0);
      if (param_2 != 0) {
        plVar6 = (long *)UnityEngine_Component__get_transform_3c18724(param_2,0);
        puVar2 = PTR_DAT_049bc0c8;
        auVar11._8_8_ = auStack_68._8_8_;
        auVar11._0_8_ = auStack_68._0_8_;
        if ((plVar6 != (long *)0x0) && (auStack_68 = auVar11, *plVar6 == *(long *)PTR_DAT_049bc0c8))
        {
          uVar9 = UnityEngine_RectTransform__get_sizeDelta_3c2c02c(plVar6,0);
          uVar1 = _UNK_013aa8fc;
          uVar10 = *(undefined4 *)(param_1 + 0xc4);
          auStack_68 = LitMotion_LMotion__Create_2ea9f9c(uVar9,uVar10,_UNK_013aa8fc,0);
          puVar3 = PTR_DAT_049c1358;
          auVar11 = FUN_024f4e50(auStack_68,0x1b,*(undefined8 *)PTR_DAT_049c1358);
          auVar11 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToSizeDeltaX___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2667998
                              (auVar11._0_8_,auVar11._8_8_,plVar6,*(undefined8 *)PTR_DAT_049c45a8);
          LitMotion_MotionHandleExtensions__AddTo_2eacb44
                    (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,lStack_58,0);
          lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                            (param_2,0x854128ce,0);
          if (lVar5 != 0) {
            plVar6 = (long *)UnityEngine_Component__get_transform_3c18724(lVar5,0);
            if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)puVar2)) {
              UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar6,0);
              uVar7 = 0x42a00000;
              uVar9 = uVar1;
              auVar11 = LitMotion_LMotion__Create_2ea9f9c(uVar10,0x42a00000,uVar1,0);
              auStack_68 = auVar11;
              auVar11 = FUN_024f4e50(auStack_68,0x1b,*(undefined8 *)puVar3);
              auVar11 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26671dc
                                  (auVar11._0_8_,auVar11._8_8_,plVar6,
                                   *(undefined8 *)PTR_DAT_049c45a0);
              LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,lStack_58,0);
              lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                                (param_2,0x8ac5d12b,0);
              if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
                lVar5 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar5 + 0x38),0);
                if (lVar5 != 0) {
                  uVar10 = UnityEngine_Transform__get_localScale_3c2dd20(lVar5,0);
                  if (cRam0000000004f4a190 == '\0') {
                    FUN_021f03f8(PTR_DAT_049bbf90);
                    cRam0000000004f4a190 = '\x01';
                  }
                  lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                  auStack_78 = LitMotion_LMotion__Create_2eaa1b4
                                         (uVar10,uVar7,uVar9,*(undefined4 *)(lVar8 + 0xc),
                                          *(undefined4 *)(lVar8 + 0x10),
                                          *(undefined4 *)(lVar8 + 0x14),uVar1,0);
                  auVar11 = FUN_024f4e50(auStack_78,0x1b,*(undefined8 *)PTR_DAT_049c1680);
                  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  auVar11 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                                      (auVar11._0_8_,auVar11._8_8_,lVar5,
                                       *(undefined8 *)PTR_DAT_049c2bd8);
                  LitMotion_MotionHandleExtensions__AddTo_2eacb44
                            (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,lStack_58,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0254b208:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

