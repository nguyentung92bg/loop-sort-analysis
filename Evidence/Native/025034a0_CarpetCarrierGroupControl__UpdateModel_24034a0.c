/* IL2CPP: CarpetCarrierGroupControl$$UpdateModel
void CarpetCarrierGroupControl__UpdateModel (CarpetCarrierGroupControl_o* __this, bool withMotion, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarpetCarrierGroupControl$$UpdateModel
   void CarpetCarrierGroupControl__UpdateModel (CarpetCarrierGroupControl_o* __this, bool
   withMotion, const MethodInfo* method); */

void CarpetCarrierGroupControl__UpdateModel_24034a0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               ulong param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  float *pfVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  long lStack_d8;
  undefined8 uStack_d0;
  int iStack_c4;
  undefined1 auStack_c0 [16];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if ((bRam0000000004f4b6a4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c2670);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c1fd0);
    FUN_021f03f8(PTR_DAT_049c2688);
    FUN_021f03f8(PTR_DAT_049c2690);
    FUN_021f03f8(PTR_DAT_049c2698);
    bRam0000000004f4b6a4 = 1;
  }
  puVar9 = PTR_DAT_049c2688;
  puVar8 = PTR_DAT_049c2680;
  puVar7 = PTR_DAT_049c20a0;
  puVar5 = PTR_DAT_049c1670;
  puVar4 = PTR_DAT_049b6110;
  lVar10 = *(long *)(param_4 + 0xd0);
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  iStack_c4 = 0;
  fVar31 = _UNK_013aa838;
  if ((param_5 & 1) == 0) {
    fVar31 = 0.0;
  }
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
      if (*(long *)(param_4 + 0xa8) != 0) {
        UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0xa8),0);
        lVar12 = *(long *)puVar9;
        lVar11 = *(long *)(lVar12 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
        lVar10 = lVar11;
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718(lVar11);
          lVar10 = *(long *)(lVar12 + 0x20);
          uVar3 = *(ushort *)(lVar10 + 0x135);
        }
        uVar26 = *(undefined4 *)(**(long **)(lVar11 + 0xc0) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar10 = FUN_02229718(lVar10);
        }
        uVar16 = thunk_FUN_0224e54c(param_4 + 0xbc,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x20
                                   );
        func_0x04608620(&lStack_d8,uVar16,uVar26);
        lVar10 = UnityEngine_Component__get_transform_3c18724(param_4,0);
        if (lVar10 != 0) {
          UnityEngine_Transform__get_position_3c2d540(lVar10,0);
          auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
          uVar16 = UnityEngine_Component__get_transform_3c18724(param_4,0);
          auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                              (auVar32._0_8_,auVar32._8_8_,uVar16,*(undefined8 *)puVar7);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
          if (*(long *)(param_4 + 0xa0) != 0) {
            UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_4 + 0xa0),0);
            auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
            auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                (auVar32._0_8_,auVar32._8_8_,*(undefined8 *)(param_4 + 0xa0),
                                 *(undefined8 *)puVar5);
            Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
            if (*(long *)(param_4 + 0xa8) != 0) {
              UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_4 + 0xa8),0);
              auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
              auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar32._0_8_,auVar32._8_8_,*(undefined8 *)(param_4 + 0xa8),
                                   *(undefined8 *)puVar5);
              Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
              if (*(long *)(param_4 + 0xa8) != 0) {
                UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0xa8),0);
                auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
                auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                    (auVar32._0_8_,auVar32._8_8_,*(undefined8 *)(param_4 + 0xa8),
                                     *(undefined8 *)puVar7);
                Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                if (*(long *)(param_4 + 0xb0) != 0) {
                  UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_4 + 0xb0),0);
                  auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
                  auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                      (auVar32._0_8_,auVar32._8_8_,*(undefined8 *)(param_4 + 0xb0),
                                       *(undefined8 *)puVar5);
                  Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                  if (*(long *)(param_4 + 0xb0) != 0) {
                    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0xb0),0);
                    auStack_c0 = LitMotion_LMotion__Create_2eaa1b4(0);
                    uVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                    System_Action___ctor_306b98c(uVar16,param_4,*(undefined8 *)PTR_DAT_049c2670,0);
                    auVar32 = FUN_024f6b84(auStack_c0,uVar16,*(undefined8 *)PTR_DAT_049c1fd0);
                    auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                        (auVar32._0_8_,auVar32._8_8_,*(undefined8 *)(param_4 + 0xb0)
                                         ,*(undefined8 *)puVar7);
                    Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      fVar29 = _UNK_013aa838;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar10,0,&lStack_d8,*(undefined8 *)PTR_DAT_049c2680);
      lVar10 = lStack_d8;
      lVar11 = *(long *)(param_4 + 0xd0);
      if ((((lVar11 != 0) &&
           (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar11,*(int *)(lVar11 + 0x18) + -1,&lStack_d8,*(undefined8 *)puVar8),
           lVar10 != 0)) && (lStack_d8 != 0)) &&
         (lVar11 = *(long *)(lStack_d8 + 0x110), lVar11 != 0)) {
        lVar10 = *(long *)(lVar10 + 0x110);
        fVar19 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
        if (lVar10 != 0) {
          fVar25 = fVar29;
          fVar21 = param_3;
          fVar20 = (float)UnityEngine_Transform__get_position_3c2d540(lVar10,0);
          fVar28 = fVar21;
          if (cRam0000000004f4a55c == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a55c = '\x01';
          }
          puVar5 = PTR_DAT_049b8758;
          fVar19 = fVar19 - fVar20;
          fVar29 = fVar29 - fVar25;
          param_3 = param_3 - fVar21;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar6 = PTR_DAT_049bbf90;
          fVar25 = _UNK_013aa920;
          fVar20 = param_3 * param_3;
          fVar21 = SQRT(fVar20 + fVar19 * fVar19 + fVar29 * fVar29);
          if (fVar21 <= _UNK_013aa920) {
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a233 = '\x01';
            }
            pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
            fVar19 = *pfVar17;
            fVar29 = pfVar17[1];
            param_3 = pfVar17[2];
          }
          else {
            fVar19 = fVar19 / fVar21;
            fVar29 = fVar29 / fVar21;
            param_3 = param_3 / fVar21;
          }
          fVar22 = (float)UnityEngine_Transform__get_right_3c2da80(lVar10,0);
          lVar18 = *(long *)puVar9;
          lVar12 = *(long *)(lVar18 + 0x20);
          uVar3 = *(ushort *)(lVar12 + 0x135);
          fVar21 = fVar20;
          fVar30 = fVar28;
          if ((uVar3 & 1) == 0) {
            FUN_02229718();
            lVar12 = *(long *)(lVar18 + 0x20);
            uVar3 = *(ushort *)(lVar12 + 0x135);
          }
          puVar9 = PTR_DAT_049c2698;
          if ((uVar3 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          thunk_FUN_0224e54c(param_4 + 0xbc,
                             *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x20);
          lVar12 = *(long *)(*(long *)puVar9 + 0x20);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          fVar29 = param_3 * fVar28 + fVar19 * fVar22 + fVar29 * fVar20;
          pcVar13 = (char *)thunk_FUN_0224e54c(param_4 + 0xbc,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80));
          if (*pcVar13 == '\0') {
            fVar20 = (float)UnityEngine_Transform__get_position_3c2d540(lVar10,0);
            fVar19 = fVar21;
            fVar28 = fVar30;
            fVar22 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
            if (cRam0000000004f4a55c == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f4a55c = '\x01';
            }
            fVar20 = fVar20 - fVar22;
            fVar21 = fVar21 - fVar19;
            fVar30 = fVar30 - fVar28;
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            fStack_a4 = SQRT(fVar30 * fVar30 + fVar20 * fVar20 + fVar21 * fVar21);
            if (fStack_a4 <= fVar25) {
              if (cRam0000000004f4a233 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a233 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
              fStack_ac = *pfVar17;
              fVar21 = pfVar17[1];
              fStack_a4 = pfVar17[2];
            }
            else {
              fStack_ac = fVar20 / fStack_a4;
              fVar21 = fVar21 / fStack_a4;
              fStack_a4 = fVar30 / fStack_a4;
            }
            lStack_d8 = 0;
            uStack_d0 = 0;
            fStack_a8 = fVar21;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&lStack_d8,&fStack_ac,*(undefined8 *)PTR_DAT_049c2690);
            *(undefined8 *)(param_4 + 0xc4) = uStack_d0;
            *(long *)(param_4 + 0xbc) = lStack_d8;
          }
          lVar10 = *(long *)(param_4 + 0xd0);
          if (fVar29 <= 0.0) {
            iStack_c4 = -2;
          }
          else {
            iStack_c4 = System_Index__op_Implicit_30f94e8(0,0);
          }
          if (lVar10 != 0) {
            iVar2 = *(int *)(lVar10 + 0x18);
            uVar14 = System_Index__get_IsFromEnd_30f9438(&iStack_c4,0);
            iVar1 = 0;
            if ((uVar14 & 1) != 0) {
              iVar1 = iVar2 + 1;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar10,iStack_c4 + iVar1,&lStack_d8,*(undefined8 *)puVar8);
            lVar10 = lStack_d8;
            lVar11 = *(long *)(param_4 + 0xd0);
            if (fVar29 <= 0.0) {
              iStack_c4 = System_Index__op_Implicit_30f94e8(0,0);
            }
            else {
              iStack_c4 = -2;
            }
            if (lVar11 != 0) {
              iVar2 = *(int *)(lVar11 + 0x18);
              uVar14 = System_Index__get_IsFromEnd_30f9438(&iStack_c4,0);
              iVar1 = 0;
              if ((uVar14 & 1) != 0) {
                iVar1 = iVar2 + 1;
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar11,iStack_c4 + iVar1,&lStack_d8,*(undefined8 *)puVar8);
              lVar11 = lStack_d8;
              if (((lVar10 != 0) && (lStack_d8 != 0)) &&
                 (lVar12 = *(long *)(lVar10 + 0x110), lVar12 != 0)) {
                lVar18 = *(long *)(lStack_d8 + 0x110);
                UnityEngine_Transform__get_position_3c2d540(lVar12,0);
                if (lVar18 != 0) {
                  fVar29 = fVar21;
                  UnityEngine_Transform__get_position_3c2d540(lVar18,0);
                  lVar15 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                  if (lVar15 != 0) {
                    fVar21 = fVar21 + fVar29;
                    UnityEngine_Transform__get_position_3c2d540(lVar15,0);
                    auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
                    uVar16 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                    auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                        (auVar32._0_8_,auVar32._8_8_,uVar16,*(undefined8 *)puVar7);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    Extensions__AddTo_24d83f4(auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                    lVar15 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                    UnityEngine_Transform__get_rotation_3c2d7a8(lVar12,0);
                    if (lVar15 != 0) {
                      UnityEngine_Transform__set_rotation_3c2d86c(lVar15,0);
                      UnityEngine_Transform__get_position_3c2d540(lVar12,0);
                      fVar29 = fVar21;
                      UnityEngine_Transform__get_position_3c2d540(lVar18,0);
                      if (cRam0000000004f4a234 == '\0') {
                        FUN_021f03f8(PTR_DAT_049b8758);
                        cRam0000000004f4a234 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      if (*(long *)(param_4 + 0xa0) != 0) {
                        fVar29 = (fVar21 - fVar29) * (fVar21 - fVar29);
                        uVar26 = *(undefined4 *)(param_4 + 0xb8);
                        UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_4 + 0xa0),0);
                        auVar32 = LitMotion_LMotion__Create_2eaa1b4(0);
                        auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                            (auVar32._0_8_,auVar32._8_8_,
                                             *(undefined8 *)(param_4 + 0xa0),
                                             *(undefined8 *)PTR_DAT_049c1670);
                        Extensions__AddTo_24d83f4
                                  (auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                        if (*(long *)(param_4 + 0xa8) != 0) {
                          uVar23 = UnityEngine_Transform__get_position_3c2d540
                                             (*(long *)(param_4 + 0xa8),0);
                          if (*(long *)(lVar10 + 0x110) != 0) {
                            uVar27 = uVar26;
                            fVar19 = fVar29;
                            uVar24 = UnityEngine_Transform__get_position_3c2d540
                                               (*(long *)(lVar10 + 0x110),0);
                            auVar32 = LitMotion_LMotion__Create_2eaa1b4
                                                (uVar23,uVar26,fVar29,uVar24,uVar27,fVar19,fVar31,0)
                            ;
                            auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                                (auVar32._0_8_,auVar32._8_8_,
                                                 *(undefined8 *)(param_4 + 0xa8),
                                                 *(undefined8 *)puVar7);
                            Extensions__AddTo_24d83f4
                                      (auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                            if (*(long *)(param_4 + 0xb0) != 0) {
                              uVar23 = UnityEngine_Transform__get_position_3c2d540
                                                 (*(long *)(param_4 + 0xb0),0);
                              lVar12 = *(long *)(lVar11 + 0x110);
                              if (lVar12 != 0) {
                                uVar27 = uVar26;
                                fVar19 = fVar29;
                                uVar24 = UnityEngine_Transform__get_position_3c2d540(lVar12,0);
                                auVar32 = LitMotion_LMotion__Create_2eaa1b4
                                                    (uVar23,uVar26,fVar29,uVar24,uVar27,fVar19,
                                                     fVar31,0);
                                auVar32 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                                    (auVar32._0_8_,auVar32._8_8_,
                                                     *(undefined8 *)(param_4 + 0xb0),
                                                     *(undefined8 *)puVar7);
                                Extensions__AddTo_24d83f4
                                          (auVar32._0_8_,auVar32._8_8_ & 0xffffffff,param_4,0);
                                if (*(long *)(lVar10 + 0x110) != 0) {
                                  lVar12 = *(long *)(param_4 + 0xa8);
                                  UnityEngine_Transform__get_rotation_3c2d7a8
                                            (*(long *)(lVar10 + 0x110),0);
                                  if (lVar12 != 0) {
                                    UnityEngine_Transform__set_rotation_3c2d86c(lVar12,0);
                                    lVar10 = *(long *)(lVar11 + 0x110);
                                    if (lVar10 != 0) {
                                      lVar11 = *(long *)(param_4 + 0xb0);
                                      UnityEngine_Transform__get_rotation_3c2d7a8(lVar10,0);
                                      if (lVar11 != 0) {
                                        UnityEngine_Transform__set_rotation_3c2d86c(lVar11,0);
                                        lVar10 = *(long *)(param_4 + 0xa8);
                                        if (cRam0000000004f4a190 == '\0') {
                                          FUN_021f03f8(PTR_DAT_049bbf90);
                                          cRam0000000004f4a190 = '\x01';
                                        }
                                        if (lVar10 != 0) {
                                          lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
                                          UnityEngine_Transform__set_localScale_3c2ddfc
                                                    (*(undefined4 *)(lVar11 + 0xc),
                                                     *(undefined4 *)(lVar11 + 0x10),
                                                     *(undefined4 *)(lVar11 + 0x14),lVar10,0);
                                          lVar10 = *(long *)(param_4 + 0xb0);
                                          if (cRam0000000004f4a190 == '\0') {
                                            FUN_021f03f8(PTR_DAT_049bbf90);
                                            cRam0000000004f4a190 = '\x01';
                                          }
                                          if (lVar10 != 0) {
                                            lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
                                            UnityEngine_Transform__set_localScale_3c2ddfc
                                                      (*(undefined4 *)(lVar11 + 0xc),
                                                       *(undefined4 *)(lVar11 + 0x10),
                                                       *(undefined4 *)(lVar11 + 0x14),lVar10,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

