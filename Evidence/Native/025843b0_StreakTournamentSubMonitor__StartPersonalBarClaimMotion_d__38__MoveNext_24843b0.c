/* IL2CPP: StreakTournamentSubMonitor.<StartPersonalBarClaimMotion>d__38$$MoveNext
void StreakTournamentSubMonitor__StartPersonalBarClaimMotion_d__38__MoveNext (StreakTournamentSubMonitor__StartPersonalBarClaimMotion_d__38_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StreakTournamentSubMonitor.<StartPersonalBarClaimMotion>d__38$$MoveNext
   void StreakTournamentSubMonitor__StartPersonalBarClaimMotion_d__38__MoveNext
   (StreakTournamentSubMonitor__StartPersonalBarClaimMotion_d__38_o __this, const MethodInfo*
   method); */

void StreakTournamentSubMonitor__StartPersonalBarClaimMotion_d__38__MoveNext_24843b0(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong uVar22;
  int *piVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4ba22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5238);
    FUN_021f03f8(PTR_DAT_049c5b80);
    FUN_021f03f8(PTR_DAT_049c5b88);
    FUN_021f03f8(PTR_DAT_049c5b50);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2d50);
    FUN_021f03f8(PTR_DAT_049c5b30);
    FUN_021f03f8(PTR_DAT_049c2d60);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2d68);
    FUN_021f03f8(PTR_DAT_049c3ec8);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c5b58);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c5b90);
    FUN_021f03f8(PTR_DAT_049c5b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4ba22 = 1;
  }
  iVar16 = *param_1;
  lVar25 = *(long *)(param_1 + 6);
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar8 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar35 = ZEXT816(0);
  auStack_b0._8_4_ = 0;
  auStack_c0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auVar9 = ZEXT812(0);
  auVar5 = ZEXT812(0);
  auStack_d0._8_8_ = 0;
  auStack_c0._0_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auStack_e0._8_8_ = 0;
  auStack_d0._0_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  auStack_e0._0_8_ = 0;
  if (iVar16 < 2) {
    if (iVar16 == 0) {
      auStack_b0 = *(undefined1 (*) [12])(param_1 + 0x19);
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = -1;
LAB_02584be8:
      auStack_a0 = auVar35;
      LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_b0,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (*(undefined8 *)(param_1 + 8),0x240695d9,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      puVar11 = PTR_DAT_049bbf90;
      lVar17 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      auVar35 = LitMotion_LMotion__Create_2eaa1b4
                          (*(float *)(lVar17 + 0xc) * 0.25,*(float *)(lVar17 + 0x10) * 0.25,
                           *(float *)(lVar17 + 0x14) * 0.25,0);
      puVar13 = PTR_DAT_049c1680;
      auStack_a0 = auVar35;
      auVar35 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar17 = *(long *)(*(long *)(param_1 + 10) + 0x10);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar18 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar17,0);
      puVar12 = PTR_DAT_049c1670;
      auVar35 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar35._0_8_,auVar35._8_8_,uVar18,*(undefined8 *)PTR_DAT_049c1670);
      LitMotion_MotionHandleExtensions__AddTo_2eace68
                (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar17 = *(long *)(*(long *)puVar11 + 0xb8);
      auVar35 = LitMotion_LMotion__Create_2eaa1b4
                          (*(float *)(lVar17 + 0xc) * 0.25,*(float *)(lVar17 + 0x10) * 0.25,
                           *(float *)(lVar17 + 0x14) * 0.25,0);
      auStack_a0 = auVar35;
      auVar35 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)puVar13);
      auVar35 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar35._0_8_,auVar35._8_8_,*(undefined8 *)(param_1 + 0x12),
                           *(undefined8 *)puVar12);
      LitMotion_MotionHandleExtensions__AddTo_2eace68
                (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
      *(undefined1 *)(param_1 + 0x10) = 1;
      param_1[0xe] = param_1[0xf];
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar25 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StreakTournament__UpdatePersonal_2525504
                (*(long *)(lVar25 + 0xa0),*(undefined8 *)(param_1 + 0xd),
                 *(undefined8 *)(param_1 + 0xf),0);
      goto LAB_025852c4;
    }
    if (iVar16 == 1) {
      auStack_b0 = *(undefined1 (*) [12])(param_1 + 0x19);
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = -1;
      auStack_a0 = auVar35;
LAB_02584534:
      LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_b0,0);
      lVar17 = *(long *)(param_1 + 0x14);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0258543c to 02685447 has its CatchHandler @ 025857e4 */
        FUN_021f06a0();
      }
    }
    else {
LAB_02584918:
      lVar17 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c5b98);
      System_Object___ctor_3142338(lVar17,0);
      plVar24 = (long *)(param_1 + 10);
      *plVar24 = lVar17;
      thunk_FUN_021f190c(plVar24,lVar17);
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar25 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar35 = StreakTournament__get_Personal_2524224(*(long *)(lVar25 + 0xa0),0);
      lVar17 = *(long *)(param_1 + 10);
      *(undefined1 (*) [16])(param_1 + 0xd) = auVar35;
      lVar20 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                         (*(undefined8 *)(param_1 + 8),0x5f7a3f9f,0);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puVar19 = (undefined8 *)(lVar17 + 0x10);
      *puVar19 = *(undefined8 *)(lVar20 + 0x38);
      thunk_FUN_021f190c(puVar19);
      lVar17 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                         (*(undefined8 *)(param_1 + 8),0x78d4e5eb,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar18 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar17,0);
      piVar23 = param_1 + 0x12;
      *(undefined8 *)piVar23 = uVar18;
      thunk_FUN_021f190c(piVar23);
      if (*(long *)(lVar25 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar17 = *(long *)(*(long *)(lVar25 + 0xa8) + 0x120);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02585458 to 0268545b has its CatchHandler @ 025857c4 */
        FUN_021f06a0();
      }
      iVar15 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                         (lVar17,*(undefined8 *)PTR_DAT_049c5b50);
      iVar16 = auVar35._0_4_ + 1;
      if (iVar15 < iVar16) {
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        puVar13 = PTR_DAT_049c1690;
        puVar11 = PTR_DAT_049bbf90;
        lVar17 = *(long *)PTR_DAT_049c1690;
        lVar20 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar32 = *(undefined4 *)(lVar20 + 0xc);
        uVar33 = *(undefined4 *)(lVar20 + 0x10);
        uVar34 = *(undefined4 *)(lVar20 + 0x14);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          FUN_021f0574();
          lVar17 = *(long *)puVar13;
        }
        uVar10 = _UNK_013aa5a0;
        puVar21 = *(undefined4 **)(lVar17 + 0xb8);
        auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                               (uVar32,uVar33,uVar34,*puVar21,puVar21[1],puVar21[2],_UNK_013aa5a0,0)
        ;
        puVar12 = PTR_DAT_049c1680;
        auVar35 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
        if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar17 = *(long *)(*plVar24 + 0x10);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar18 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar17,0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        puVar14 = PTR_DAT_049c2bd8;
        auVar35 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                            (auVar35._0_8_,auVar35._8_8_,uVar18,*(undefined8 *)PTR_DAT_049c2bd8);
        LitMotion_MotionHandleExtensions__AddTo_2eace68
                  (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        lVar17 = *(long *)(*(long *)puVar11 + 0xb8);
        puVar21 = *(undefined4 **)(*(long *)puVar13 + 0xb8);
        auVar35 = LitMotion_LMotion__Create_2eaa1b4
                            (*(undefined4 *)(lVar17 + 0xc),*(undefined4 *)(lVar17 + 0x10),
                             *(undefined4 *)(lVar17 + 0x14),*puVar21,puVar21[1],puVar21[2],uVar10,0)
        ;
        auStack_a0 = auVar35;
        auVar35 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)puVar12);
        auVar35 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                            (auVar35._0_8_,auVar35._8_8_,*(undefined8 *)piVar23,
                             *(undefined8 *)puVar14);
        auVar35 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                            (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0
                            );
        auStack_b0 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                               (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,0);
        uVar22 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_b0,0);
        puVar11 = PTR_DAT_049c5b88;
        auVar35 = auStack_a0;
        if ((uVar22 & 1) == 0) {
          *param_1 = 0;
          uVar18 = *(undefined8 *)puVar11;
          *(undefined1 (*) [12])(param_1 + 0x19) = auStack_b0;
          FUN_0235c25c(param_1 + 2,auStack_b0,param_1,uVar18);
          return;
        }
        goto LAB_02584be8;
      }
      if (*(long *)(lVar25 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar17 = *(long *)(*(long *)(lVar25 + 0xa8) + 0x120);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_90._0_4_ = iVar16;
      lVar17 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                         (lVar17,auStack_90,*(undefined8 *)PTR_DAT_049c5b58);
      plVar28 = (long *)(param_1 + 0x14);
      *plVar28 = lVar17;
      thunk_FUN_021f190c(plVar28);
      lVar17 = *plVar28;
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02585474 to 02685493 has its CatchHandler @ 025857e0 */
        FUN_021f06a0();
      }
      if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined4 *)(*plVar24 + 0x18) = *(undefined4 *)(lVar17 + 0x18);
      if (0 < param_1[0xc]) {
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        puVar11 = PTR_DAT_049c1690;
        lVar17 = *(long *)PTR_DAT_049c1690;
        lVar20 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar32 = *(undefined4 *)(lVar20 + 0xc);
        uVar33 = *(undefined4 *)(lVar20 + 0x10);
        uVar34 = *(undefined4 *)(lVar20 + 0x14);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          FUN_021f0574();
          lVar17 = *(long *)puVar11;
        }
        puVar21 = *(undefined4 **)(lVar17 + 0xb8);
        auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                               (uVar32,uVar33,uVar34,*puVar21,puVar21[1],puVar21[2],_UNK_013aa5a0,0)
        ;
        auVar35 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
        uVar18 = *(undefined8 *)piVar23;
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar35 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                            (auVar35._0_8_,auVar35._8_8_,uVar18,*(undefined8 *)PTR_DAT_049c2bd8);
        auVar35 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                            (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0
                            );
        auStack_b0 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                               (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,0);
        uVar22 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_b0,0);
        puVar11 = PTR_DAT_049c5b88;
        if ((uVar22 & 1) == 0) {
          *param_1 = 1;
          uVar18 = *(undefined8 *)puVar11;
          *(undefined1 (*) [12])(param_1 + 0x19) = auStack_b0;
          FUN_0235c25c(param_1 + 2,auStack_b0,param_1,uVar18);
          return;
        }
        goto LAB_02584534;
      }
    }
    uVar18 = StreakTournamentPersonalRewardSheet_Row__GetRewards_2568380(lVar17,0);
    *(undefined8 *)(param_1 + 0x16) = uVar18;
    thunk_FUN_021f190c();
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StreakTournamentSubMonitor__UpdateRewardView_24836b0
              (lVar25,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x16));
    if (0 < param_1[0xc]) {
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar17 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      auVar35 = LitMotion_LMotion__Create_2eaa1b4
                          (*(float *)(lVar17 + 0xc) * 0.25,*(float *)(lVar17 + 0x10) * 0.25,
                           *(float *)(lVar17 + 0x14) * 0.25,0);
      auStack_a0 = auVar35;
      auVar35 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
      auVar35 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar35._0_8_,auVar35._8_8_,*(undefined8 *)(param_1 + 0x12),
                           *(undefined8 *)PTR_DAT_049c1670);
      LitMotion_MotionHandleExtensions__AddTo_2eace68
                (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
    }
    lVar17 = *(long *)(param_1 + 10);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar15 = param_1[0xf];
    iVar1 = *(int *)(lVar17 + 0x18);
    *(bool *)(param_1 + 0x18) = iVar1 <= iVar15;
    iVar16 = *(int *)(lVar17 + 0x18);
    if (iVar15 < iVar1) {
      iVar16 = iVar15;
    }
    fVar29 = (float)FUN_02596c9c((float)(iVar16 - param_1[0xe]) / (float)iVar1,0,0x3f800000,
                                 _UNK_013aa62c,0x3f000000,0);
    auStack_c0 = LitMotion_LMotion__Create_2eaa070(param_1[0xe],iVar16,0);
    fVar31 = _UNK_013aa698;
    auVar35 = FUN_024f6e90(_UNK_013aa698,auStack_c0,0,0,*(undefined8 *)PTR_DAT_049c3ec8);
    uVar27 = *(undefined8 *)(param_1 + 10);
    auStack_c0 = auVar35;
    uVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5238);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar18,uVar27,*(undefined8 *)PTR_DAT_049c5b90,0);
    auVar35 = FUN_024f6d0c(auStack_c0,uVar18,*(undefined8 *)PTR_DAT_049c2d68);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02585404 to 0268540f has its CatchHandler @ 025857dc */
      FUN_021f06a0();
    }
    fVar30 = (float)*(int *)(*(long *)(param_1 + 10) + 0x18);
    auStack_d0 = LitMotion_LMotion__Create_2eaa148
                           ((float)param_1[0xe] / fVar30,0x3f800000,(float)iVar16 / fVar30,
                            0x3f800000,fVar29,0);
    auVar35 = FUN_024f6e90(fVar31,auStack_d0,0,0,*(undefined8 *)PTR_DAT_049c3d28);
    lVar17 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                       (*(undefined8 *)(param_1 + 8),0x85f8a9cf,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar18 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar17,0);
    auVar35 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                        (auVar35._0_8_,auVar35._8_8_,uVar18,*(undefined8 *)PTR_DAT_049c2d60);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
    fVar29 = fVar29 + fVar31;
    fVar31 = _UNK_013aa734;
    if (_UNK_013aa734 <= fVar29) {
      fVar31 = fVar29;
    }
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar18 = System_TimeSpan__FromSeconds_311711c((double)fVar31,0);
    uVar27 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar25,0);
    puVar11 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar18,0,8,uVar27,0,0);
    thunk_FUN_021f190c(auStack_90,0);
    auStack_e0 = auStack_90;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar18 = auStack_e0._0_8_;
    auVar2 = auStack_d0;
    auVar3 = auStack_c0;
    auVar4 = auStack_a0;
    auVar5 = auStack_b0;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
      lVar17 = *(long *)auStack_e0._0_8_;
      uVar26 = auStack_e0._8_8_ & 0xffff;
      uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar19 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_02584f3c;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar19 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02584f3c:
      iVar16 = (*(code *)*puVar19)(uVar18,uVar26,puVar19[1]);
                    /* try { // try from 02584f4c to 02685013 has its CatchHandler @ 02584f4c
                       catch() { ... } // from try @ 02584f4c with catch @ 02584f4c
                       catch() { ... } // from try @ 025850e8 with catch @ 02584f4c
                       catch() { ... } // from try @ 0258518c with catch @ 02584f4c
                       catch() { ... } // from try @ 025851e0 with catch @ 02584f4c */
      auVar2 = auStack_d0;
      auVar3 = auStack_c0;
      auVar4 = auStack_a0;
      auVar5 = auStack_b0;
      if (iVar16 == 0) {
                    /* catch() { ... } // from try @ 025851c8 with catch @ 025851d4 */
                    /* try { // try from 025851d8 to 026851df has its CatchHandler @ 025851e8 */
        *param_1 = 2;
                    /* try { // try from 025851e0 to 026851eb has its CatchHandler @ 02584f4c */
        *(undefined1 (*) [16])(param_1 + 0x1c) = auStack_e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025851d8 with catch @ 025851e8
                        */
                    /* try { // try from 025851ec to 0268532b has its CatchHandler @ 025851ec
                       catch() { ... } // from try @ 025851ec with catch @ 025851ec
                       catch() { ... } // from try @ 025856ac with catch @ 025851ec
                       catch() { ... } // from try @ 02585788 with catch @ 025851ec
                       catch() { ... } // from try @ 0258583c with catch @ 025851ec */
        thunk_FUN_021f190c(param_1 + 0x1c,0);
        FUN_0235c25c(param_1 + 2,auStack_e0,param_1,*(undefined8 *)PTR_DAT_049c5b80);
        return;
      }
    }
LAB_02584f50:
    auStack_d0 = auVar2;
    auStack_c0 = auVar3;
    auStack_a0 = auVar4;
    auStack_b0 = auVar5;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar18 = auStack_e0._0_8_;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
      lVar17 = *(long *)auStack_e0._0_8_;
      uVar26 = auStack_e0._8_8_ & 0xffff;
      uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar19 = (undefined8 *)(lVar17 + (long)(*piVar23 + 2) * 0x10 + 0x138);
            goto LAB_02584fd4;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar19 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02584fd4:
      (*(code *)*puVar19)(uVar18,uVar26,puVar19[1]);
    }
    if ((char)param_1[0x18] == '\0') {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585014 with catch @ 025851ac
                        */
      param_1[0xe] = param_1[0xf];
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0258545c to 0268546b has its CatchHandler @ 025857f0 */
        FUN_021f06a0();
      }
      if (*(long *)(lVar25 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025851c8 to 026851cb has its CatchHandler @ 025851d4 */
      StreakTournament__UpdatePersonal_2525504
                (*(long *)(lVar25 + 0xa0),*(undefined8 *)(param_1 + 0xd),
                 *(undefined8 *)(param_1 + 0xf),0);
      goto LAB_025852c4;
    }
    param_1[0xe] = 0;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    param_1[0xf] = param_1[0xf] - *(int *)(*(long *)(param_1 + 10) + 0x18);
    param_1[0xd] = param_1[0xd] + 1;
                    /* try { // try from 02585014 to 0268503b has its CatchHandler @ 025851ac */
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02585410 to 0268541b has its CatchHandler @ 025857d8 */
      FUN_021f06a0();
    }
    if (*(long *)(lVar25 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (*(long *)(lVar25 + 0x110),*(undefined8 *)(param_1 + 0x16),
               *(undefined8 *)PTR_DAT_049c5b30);
    if (*(long *)(lVar25 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StreakTournament__UpdatePersonal_2525504
              (*(long *)(lVar25 + 0xa0),*(undefined8 *)(param_1 + 0xd),
               *(undefined8 *)(param_1 + 0xf),0);
    if (*(long *)(lVar25 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StreakTournament__TrackPersonalRewardClaim_25265e0
              (*(long *)(lVar25 + 0xa0),*(undefined8 *)(param_1 + 0x16),param_1[0xd],0);
    lVar17 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (*(undefined8 *)(param_1 + 8),0xfe497a39,0);
                    /* try { // try from 02585078 to 026850a3 has its CatchHandler @ 025851a8 */
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02585420 to 02685433 has its CatchHandler @ 025857e8 */
      FUN_021f06a0();
    }
    lVar17 = *(long *)(lVar17 + 0x20);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar17,1,0);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar17,auStack_90,*(undefined8 *)PTR_DAT_049c2d50);
    if (auStack_90._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AssetKits_ParticleImage_ParticleImage__Play_32a75e0(auStack_90._0_8_,0);
    auVar35 = StreakTournamentSubMonitor__StartPersonalBarClaimMotion_2483a4c
                        (lVar25,*(undefined8 *)(param_1 + 8),param_1[0xc] + 1);
    puVar11 = PTR_DAT_049b5138;
                    /* try { // try from 025850e0 to 026850e7 has its CatchHandler @ 02585198 */
                    /* try { // try from 025850e8 to 0268517f has its CatchHandler @ 02584f4c */
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = auVar35;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_e0 = auStack_90;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar18 = auStack_e0._0_8_;
    auVar6 = auStack_d0;
    auVar7 = auStack_c0;
    auVar8 = auStack_a0;
    auVar9 = auStack_b0;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
      lVar25 = *(long *)auStack_e0._0_8_;
      uVar26 = auStack_e0._8_8_ & 0xffff;
      uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar22 != 0) {
                    /* try { // try from 02585180 to 02685183 has its CatchHandler @ 025851a4 */
        piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
                    /* try { // try from 02585184 to 02685187 has its CatchHandler @ 025851a0 */
                    /* try { // try from 02585188 to 0268518b has its CatchHandler @ 0258519c */
                    /* try { // try from 0258518c to 026851c7 has its CatchHandler @ 02584f4c */
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar19 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_0258521c;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025850e0 with catch @ 02585198
                        */
        } while (uVar22 != 0);
      }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585188 with catch @ 0258519c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585184 with catch @ 025851a0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585180 with catch @ 025851a4
                        */
      puVar19 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585078 with catch @ 025851a8
                        */
LAB_0258521c:
      iVar16 = (*(code *)*puVar19)(uVar18,uVar26,puVar19[1]);
      auVar6 = auStack_d0;
      auVar7 = auStack_c0;
      auVar8 = auStack_a0;
      auVar9 = auStack_b0;
      if (iVar16 == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x1c) = auStack_e0;
        thunk_FUN_021f190c(param_1 + 0x1c,0);
                    /* try { // try from 025853f0 to 026853fb has its CatchHandler @ 025857f8 */
        FUN_0235c25c(param_1 + 2,auStack_e0,param_1,*(undefined8 *)PTR_DAT_049c5b80);
        return;
      }
    }
  }
  else {
    if (iVar16 == 2) {
      auStack_e0 = *(undefined1 (*) [16])(param_1 + 0x1c);
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      goto LAB_02584f50;
    }
    if (iVar16 != 3) goto LAB_02584918;
    auStack_e0 = *(undefined1 (*) [16])(param_1 + 0x1c);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *param_1 = -1;
  }
  auStack_d0 = auVar6;
  auStack_c0 = auVar7;
  auStack_a0 = auVar8;
  auStack_b0 = auVar9;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar18 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar25 = *(long *)auStack_e0._0_8_;
    uVar26 = auStack_e0._8_8_ & 0xffff;
    uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar19 = (undefined8 *)(lVar25 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto LAB_025852b4;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar19 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025852b4:
    (*(code *)*puVar19)(uVar18,uVar26,puVar19[1]);
  }
LAB_025852c4:
  *param_1 = -2;
  piVar23 = param_1 + 10;
  piVar23[0] = 0;
  piVar23[1] = 0;
  thunk_FUN_021f190c(piVar23,0);
  piVar23 = param_1 + 0x12;
  piVar23[0] = 0;
  piVar23[1] = 0;
  thunk_FUN_021f190c(piVar23,0);
  piVar23 = param_1 + 0x14;
  piVar23[0] = 0;
  piVar23[1] = 0;
  thunk_FUN_021f190c(piVar23,0);
  piVar23 = param_1 + 0x16;
  piVar23[0] = 0;
  piVar23[1] = 0;
  thunk_FUN_021f190c(piVar23,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
                    /* try { // try from 0258532c to 02685353 has its CatchHandler @ 02585808 */
  plVar24 = *(long **)(param_1 + 2);
  if (plVar24 != (long *)0x0) {
    lVar25 = *plVar24;
    uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar19 = (undefined8 *)(lVar25 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto LAB_0258538c;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar19 = (undefined8 *)FUN_02229a4c(plVar24,*(long *)PTR_DAT_049b56d0,2);
LAB_0258538c:
                    /* try { // try from 02585390 to 026853bb has its CatchHandler @ 02585804 */
    (*(code *)*puVar19)(plVar24,puVar19[1]);
  }
  return;
}

