/* IL2CPP: TutorialMonitor$$SetHand
void TutorialMonitor__SetHand (TutorialMonitor_o* __this, UnityEngine_Vector3_o worldPoint, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TutorialMonitor$$SetHand
   void TutorialMonitor__SetHand (TutorialMonitor_o* __this, UnityEngine_Vector3_o worldPoint,
   UnityEngine_Vector2_o offset, const MethodInfo* method); */

void TutorialMonitor__SetHand_24687f0
               (undefined4 param_1,float param_2,undefined4 param_3,float param_4,float param_5,
               long param_6)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [16];
  long lStack_58;
  
  fVar6 = param_2;
  if ((bRam0000000004f4b972 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c53a8);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    bRam0000000004f4b972 = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar9 = ZEXT816(0);
  if (*(long *)(param_6 + 0xb8) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_6 + 0xb8),0);
    auVar9._8_8_ = auStack_70._8_8_;
    auVar9._0_8_ = auStack_70._0_8_;
    if (lVar1 != 0) {
      uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar1,0);
      auVar9._8_8_ = auStack_70._8_8_;
      auVar9._0_8_ = auStack_70._0_8_;
      if (*(long *)(param_6 + 0xb8) != 0) {
        fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                                 (*(long *)(param_6 + 0xb8),0);
        auVar9._8_8_ = auStack_70._8_8_;
        auVar9._0_8_ = auStack_70._0_8_;
        if (*(long *)(param_6 + 0xb8) != 0) {
          lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_6 + 0xb8),0);
          auVar9._8_8_ = auStack_70._8_8_;
          auVar9._0_8_ = auStack_70._0_8_;
          if (lVar1 != 0) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
            fVar5 = param_2;
            MonitorBase__WorldToCanvasSpace_256cc8c
                      (param_1,param_2,param_3,param_6,*(undefined8 *)(param_6 + 0xb8),0);
            auVar9._8_8_ = auStack_70._8_8_;
            auVar9._0_8_ = auStack_70._0_8_;
            lVar1 = *(long *)(param_6 + 0xb8);
            if (lVar1 != 0) {
              fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar1,0);
              param_5 = param_5 + fVar5;
              UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                        (param_4 + fVar4,param_5,lVar1,0);
              auVar9._8_8_ = auStack_70._8_8_;
              auVar9._0_8_ = auStack_70._0_8_;
              if (*(long *)(param_6 + 0xb8) != 0) {
                fVar5 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                                         (*(long *)(param_6 + 0xb8),0);
                if ((uVar2 & 1) != 0) {
                  if (cRam0000000004f4a234 == '\0') {
                    FUN_021f03f8(PTR_DAT_049b8758);
                    cRam0000000004f4a234 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  auStack_70 = LitMotion_LMotion__Create_2eaa148
                                         (fVar3,fVar6,fVar5,param_5,
                                          SQRT((fVar3 - fVar5) * (fVar3 - fVar5) +
                                               (fVar6 - param_5) * (fVar6 - param_5)) *
                                          _UNK_013aa874,0);
                  auVar9 = FUN_024f4e50(auStack_70,0x1b,*(undefined8 *)PTR_DAT_049c2d70);
                  LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                            (auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(param_6 + 0xb8),
                             *(undefined8 *)PTR_DAT_049c2f70);
                }
                auVar9 = auStack_70;
                if (*(long *)(param_6 + 0xb8) != 0) {
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                            (*(long *)(param_6 + 0xb8),&lStack_58,*(undefined8 *)PTR_DAT_049c53a8);
                  auVar9 = auStack_70;
                  if (*(long *)(param_6 + 0x38) != 0) {
                    fVar6 = (float)UnityEngine_Camera__WorldToViewportPoint_3bce924
                                             (param_1,param_2,param_3,*(long *)(param_6 + 0x38),0);
                    auVar9 = auStack_70;
                    if (lStack_58 != 0) {
                      uVar8 = NEON_fmov(0x3f800000,4);
                      uVar7 = 0xbf800000;
                      if (fVar6 <= 0.75) {
                        uVar7 = 0x3f800000;
                      }
                      *(undefined8 *)(lStack_58 + 0x3c) = uVar8;
                      *(undefined4 *)(lStack_58 + 0x38) = uVar7;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_70 = auVar9;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

