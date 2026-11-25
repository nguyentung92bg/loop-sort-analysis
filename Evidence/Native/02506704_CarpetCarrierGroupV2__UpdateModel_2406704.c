/* IL2CPP: CarpetCarrierGroupV2$$UpdateModel
void CarpetCarrierGroupV2__UpdateModel (CarpetCarrierGroupV2_o* __this, Carrier_o* firstTarget, Carrier_o* lastTarget, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarpetCarrierGroupV2$$UpdateModel
   void CarpetCarrierGroupV2__UpdateModel (CarpetCarrierGroupV2_o* __this, Carrier_o* firstTarget,
   Carrier_o* lastTarget, const MethodInfo* method); */

void CarpetCarrierGroupV2__UpdateModel_2406704
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_a0 [16];
  
  if ((bRam0000000004f4b6b7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c27e0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c27e8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c20a8);
    bRam0000000004f4b6b7 = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar16 = ZEXT816(0);
  if (((param_5 != 0) && (auVar16 = ZEXT816(0), param_6 != 0)) &&
     (lVar9 = *(long *)(param_5 + 0x110), auVar16 = ZEXT816(0), lVar9 != 0)) {
    lVar10 = *(long *)(param_6 + 0x110);
    fVar11 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar9,0);
    if (cRam0000000004f4a55a == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55a = '\x01';
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar14 = *(float *)(lVar8 + 0x48);
    fVar15 = *(float *)(lVar8 + 0x4c);
    fVar13 = *(float *)(lVar8 + 0x50);
    if (cRam0000000004f4a5db == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a5db = '\x01';
    }
    puVar3 = PTR_DAT_049b8758;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar12 = SQRT((param_3 * param_3 + fVar11 * fVar11 + param_2 * param_2) *
                  (fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15));
    if (_UNK_013aa374 <= fVar12) {
      fVar12 = (param_3 * fVar13 + fVar11 * fVar14 + param_2 * fVar15) / fVar12;
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar13 = -1.0;
      if (-1.0 <= fVar12) {
        fVar13 = fVar11;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      FUN_046086c0((double)fVar13);
    }
    auVar16._8_8_ = auStack_a0._8_8_;
    auVar16._0_8_ = auStack_a0._0_8_;
    if (*(long *)(param_4 + 0xe8) != 0) {
      iVar1 = *(int *)(*(long *)(param_4 + 0xe8) + 0x18);
      UnityEngine_Transform__get_position_3c2d540(lVar9,0);
      auVar16._8_8_ = auStack_a0._8_8_;
      auVar16._0_8_ = auStack_a0._0_8_;
      if (lVar10 != 0) {
        UnityEngine_Transform__get_position_3c2d540(lVar10,0);
        UnityEngine_Transform__get_forward_3c2db78(lVar9,0);
        lVar8 = UnityEngine_Component__get_transform_3c18724(param_4,0);
        puVar4 = PTR_DAT_049c20a0;
        puVar2 = PTR_DAT_049b6110;
        auVar16._8_8_ = auStack_a0._8_8_;
        auVar16._0_8_ = auStack_a0._0_8_;
        if (lVar8 != 0) {
          UnityEngine_Transform__get_position_3c2d540(lVar8,0);
          auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
          uVar7 = UnityEngine_Component__get_transform_3c18724(param_4,0);
          auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                              (auVar16._0_8_,auVar16._8_8_,uVar7,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
          UnityEngine_Transform__get_position_3c2d540(lVar9,0);
          UnityEngine_Transform__get_position_3c2d540(lVar10,0);
          if (cRam0000000004f4a234 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a234 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar3 = PTR_DAT_049c1670;
          auVar16._8_8_ = auStack_a0._8_8_;
          auVar16._0_8_ = auStack_a0._0_8_;
          if (*(long *)(param_4 + 0xa0) != 0) {
            UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_4 + 0xa0),0);
            auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
            auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0xa0),
                                 *(undefined8 *)puVar3);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
            puVar6 = PTR_DAT_049c27e0;
            puVar5 = PTR_DAT_049c20a8;
            puVar3 = PTR_DAT_049c2058;
            auVar16._8_8_ = auStack_a0._8_8_;
            auVar16._0_8_ = auStack_a0._0_8_;
            if (*(long *)(param_4 + 0xe8) != 0) {
              auStack_a0 = LitMotion_LMotion__Create_2ea9f9c
                                     (*(undefined4 *)(param_4 + 0xe0),
                                      (float)*(int *)(*(long *)(param_4 + 0xe8) + 0x18),0x3f000000,0
                                     );
              uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
              System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                        (uVar7,param_4,*(undefined8 *)puVar6,0);
              auVar16 = FUN_024f6d0c(auStack_a0,uVar7,*(undefined8 *)puVar5);
              Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
              auVar16 = auStack_a0;
              if (*(long *)(param_4 + 0xe8) != 0) {
                *(float *)(param_4 + 0xe0) = (float)*(int *)(*(long *)(param_4 + 0xe8) + 0x18);
                CarpetCarrierGroupV2__RemoveDividers_2406d9c(param_4);
                UnityEngine_Transform__get_position_3c2d540(lVar10,0);
                UnityEngine_Transform__get_forward_3c2db78(lVar10,0);
                auVar16 = auStack_a0;
                if (*(long *)(param_4 + 0xb0) != 0) {
                  UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0xb0),0);
                  auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
                  auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0xb0),
                                       *(undefined8 *)puVar4);
                  Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
                  if (iVar1 == 0) {
                    auVar16 = auStack_a0;
                    if (*(long *)(param_4 + 0xa8) != 0) {
                      UnityEngine_Transform__set_parent_3c2ded4
                                (*(long *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xa0),0);
                      goto LAB_02506d04;
                    }
                  }
                  else {
                    UnityEngine_Transform__get_position_3c2d540(lVar9,0);
                    UnityEngine_Transform__get_forward_3c2db78(lVar9,0);
                    auVar16 = auStack_a0;
                    if (*(long *)(param_4 + 0xa8) != 0) {
                      UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0xa8),0);
                      auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
                      auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                          (auVar16._0_8_,auVar16._8_8_,
                                           *(undefined8 *)(param_4 + 0xa8),*(undefined8 *)puVar4);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
LAB_02506d04:
                      puVar3 = PTR_DAT_049c27e8;
                      auVar16 = LitMotion_LMotion__Create_2ea9f9c(0,0x43b40000,0x3f000000,0);
                      auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAnglesZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671254
                                          (auVar16._0_8_,auVar16._8_8_,
                                           *(undefined8 *)(param_4 + 0xd8),*(undefined8 *)puVar3);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
                      if (iVar1 == 0) {
                        CarpetCarrierGroupV2__ApplyRemoveRollMotion_2406e94(0x3f000000,param_4);
                      }
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
  auStack_a0 = auVar16;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

