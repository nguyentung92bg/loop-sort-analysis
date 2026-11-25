/* IL2CPP: LevelAnimationSystem.<ApplyLevelExit>d__32$$MoveNext
void LevelAnimationSystem__ApplyLevelExit_d__32__MoveNext (LevelAnimationSystem__ApplyLevelExit_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025db22c) */
/* WARNING: Removing unreachable block (ram,0x025db6d4) */
/* WARNING: Removing unreachable block (ram,0x025db6c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem.<ApplyLevelExit>d__32$$MoveNext
   void LevelAnimationSystem__ApplyLevelExit_d__32__MoveNext
   (LevelAnimationSystem__ApplyLevelExit_d__32_o __this, const MethodInfo* method); */

void LevelAnimationSystem__ApplyLevelExit_d__32__MoveNext_24daa08
               (undefined1 param_1 [16],ulong param_2,float param_3,int *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  int *piStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  undefined1 auStack_e0 [16];
  int iStack_cc;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 *apuStack_b0 [2];
  
  if ((bRam0000000004f4bc4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c7840);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c2550);
    FUN_021f03f8(PTR_DAT_049c6b50);
    FUN_021f03f8(PTR_DAT_049c2558);
    FUN_021f03f8(PTR_DAT_049c6b58);
    FUN_021f03f8(PTR_DAT_049c2560);
    FUN_021f03f8(PTR_DAT_049c6b60);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c7848);
    FUN_021f03f8(PTR_DAT_049c6b68);
    FUN_021f03f8(PTR_DAT_049c2568);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2248);
    FUN_021f03f8(PTR_DAT_049c22d8);
    FUN_021f03f8(PTR_DAT_049c7838);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4bc4b = 1;
  }
  iStack_cc = *param_4;
  lVar19 = *(long *)(param_4 + 4);
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  auStack_100._0_8_ = 0;
  auStack_100._8_8_ = 0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_120 = 0;
  piStack_118 = (int *)0x0;
  puStack_110 = (undefined8 *)0x0;
  auStack_130._0_8_ = 0;
  auStack_130._8_8_ = 0;
  auStack_140._0_8_ = 0;
  auStack_140._8_8_ = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  puStack_150 = (undefined8 *)0x0;
  if (iStack_cc == 0) {
    auStack_e0 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    iStack_cc = -1;
    *param_4 = -1;
  }
  else {
    if (iStack_cc == 1) {
      auStack_e0 = *(undefined1 (*) [16])(param_4 + 6);
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      iStack_cc = -1;
      *param_4 = -1;
      auStack_140 = ZEXT816(0);
      auStack_130 = ZEXT816(0);
      auStack_100 = ZEXT816(0);
      goto LAB_025db438;
    }
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar20 = System_TimeSpan__FromSeconds_311711c(0x3ff0000000000000,0);
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    _auStack_c0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar20,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_c0,0);
    auStack_e0 = _auStack_c0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar20 = auStack_e0._0_8_;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
      lVar16 = *(long *)auStack_e0._0_8_;
      uVar22 = auStack_e0._8_8_ & 0xffff;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_025dad1c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025dad1c:
      iVar11 = (*(code *)*puVar12)(uVar20,uVar22,puVar12[1]);
      if (iVar11 == 0) {
        iStack_cc = 0;
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 6) = auStack_e0;
        thunk_FUN_021f190c(param_4 + 6,0);
        FUN_0235c420(param_4 + 2,auStack_e0,param_4,*(undefined8 *)PTR_DAT_049c7840);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar20 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar16 = *(long *)auStack_e0._0_8_;
    uVar22 = auStack_e0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_025dadb0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025dadb0:
    (*(code *)*puVar12)(uVar20,uVar22,puVar12[1]);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = *(long *)(*(long *)(lVar19 + 0x60) + 0x58);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar16,auStack_c0,*(undefined8 *)PTR_DAT_049c6b68);
  auStack_100 = _auStack_c0;
  puVar10 = PTR_DAT_049c6b60;
  puVar9 = PTR_DAT_049c6b58;
  puVar7 = PTR_DAT_049c2558;
  puVar5 = PTR_DAT_049c1690;
  puVar4 = PTR_DAT_049c1680;
  puVar3 = PTR_DAT_049c1670;
  puVar2 = PTR_DAT_049bbf90;
  puStack_f0 = apuStack_b0[0];
  lStack_b8 = (long)&iStack_cc;
  auStack_c0 = (undefined1  [8])0x0;
  apuStack_b0[0] = (undefined8 *)auStack_100;
  while( true ) {
    uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (auStack_100,*(undefined8 *)puVar9);
    puVar8 = PTR_DAT_049c2560;
    puVar6 = PTR_DAT_049c20a0;
    if ((uVar17 & 1) == 0) break;
    lVar21 = *(long *)puVar10;
    lVar14 = *(long *)(lVar21 + 0x20);
    uVar1 = *(ushort *)(lVar14 + 0x135);
    lVar16 = lVar14;
    if ((uVar1 & 1) == 0) {
      lVar16 = FUN_02229718();
      lVar14 = *(long *)(lVar21 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
    }
    uVar26 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar14 = FUN_02229718();
    }
    uVar20 = thunk_FUN_0224e54c(auStack_100,
                                *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_c8,uVar20,uVar26);
    if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar20 = UnityEngine_Component__get_transform_3c18724(lStack_c8,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(puVar2);
      cRam0000000004f4a190 = '\x01';
    }
    lVar16 = *(long *)puVar5;
    lVar14 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar26 = *(undefined4 *)(lVar14 + 0xc);
    uVar34 = *(uint *)(lVar14 + 0x10);
    param_3 = *(float *)(lVar14 + 0x14);
    if (*(int *)(lVar16 + 0xe4) == 0) {
      FUN_021f0574();
      lVar16 = *(long *)puVar5;
    }
    puVar15 = *(undefined4 **)(lVar16 + 0xb8);
    param_2 = (ulong)uVar34;
    auVar35 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar26,param_2,param_3,*puVar15,puVar15[1],puVar15[2],0x3f000000,0);
    auVar35 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar35._0_8_,auVar35._8_8_,uVar20,*(undefined8 *)puVar3);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(lVar19 + 0x20),0);
  }
  if (iStack_cc < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (apuStack_b0[0],*(undefined8 *)PTR_DAT_049c6b50);
  }
  if (*(long *)(lVar19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = *(long *)(*(long *)(lVar19 + 0x68) + 0x58);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar16,auStack_c0,*(undefined8 *)PTR_DAT_049c2568);
  uVar27 = _UNK_013aa810;
  uVar26 = _UNK_013aa62c;
  puStack_110 = apuStack_b0[0];
  piStack_118 = (int *)lStack_b8;
  uStack_120 = auStack_c0;
  auStack_c0 = (undefined1  [8])0x0;
  lStack_b8 = (long)&iStack_cc;
  apuStack_b0[0] = &uStack_120;
  while( true ) {
    fVar33 = (float)param_2;
    uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_120,*(undefined8 *)puVar7);
    if ((uVar17 & 1) == 0) break;
    lVar21 = *(long *)puVar8;
    lVar14 = *(long *)(lVar21 + 0x20);
    uVar1 = *(ushort *)(lVar14 + 0x135);
    lVar16 = lVar14;
    if ((uVar1 & 1) == 0) {
      lVar16 = FUN_02229718();
      lVar14 = *(long *)(lVar21 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
    }
    uVar23 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar14 = FUN_02229718();
    }
    uVar20 = thunk_FUN_0224e54c(&uStack_120,
                                *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_c8,uVar20,uVar23);
    if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar16 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_c8,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar23 = UnityEngine_Transform__get_position_3c2d540(lVar16,0);
    fVar31 = param_3;
    fVar28 = fVar33;
    fVar24 = (float)UnityEngine_Transform__get_position_3c2d540(lVar16,0);
    fVar32 = fVar31;
    fVar29 = fVar28;
    fVar25 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar16,0);
    auVar35 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar23,fVar33,param_3,fVar24 - fVar25,fVar28 - fVar29,fVar31 - fVar32,
                         uVar26,0);
    auStack_130 = auVar35;
    auVar35 = FUN_024f4e50(auStack_130,0x1a,*(undefined8 *)puVar4);
    auVar35 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar35._0_8_,auVar35._8_8_,lVar16,*(undefined8 *)puVar6);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(lVar19 + 0x20),0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(puVar2);
      cRam0000000004f4a190 = '\x01';
    }
    lVar14 = *(long *)puVar5;
    lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar23 = *(undefined4 *)(lVar21 + 0xc);
    uVar34 = *(uint *)(lVar21 + 0x10);
    param_3 = *(float *)(lVar21 + 0x14);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      FUN_021f0574();
      lVar14 = *(long *)puVar5;
    }
    puVar15 = *(undefined4 **)(lVar14 + 0xb8);
    param_2 = (ulong)uVar34;
    auVar35 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar23,param_2,param_3,*puVar15,puVar15[1],puVar15[2],0x3f000000,0);
    auStack_130 = auVar35;
    auVar35 = FUN_024f4e50(auStack_130,0x1b,*(undefined8 *)puVar4);
    auStack_130 = auVar35;
    auVar35 = FUN_024f6e90(uVar27,auStack_130,0,0,*(undefined8 *)PTR_DAT_049c2808);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar35 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                        (auVar35._0_8_,auVar35._8_8_,lVar16,*(undefined8 *)PTR_DAT_049c2bd8);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(lVar19 + 0x20),0);
  }
  if (iStack_cc < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (apuStack_b0[0],*(undefined8 *)PTR_DAT_049c2550);
  }
  plVar13 = (long *)(lVar19 + 0xc0);
  if (*plVar13 == 0) {
    if (*(long *)(lVar19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar16 = PrefabModuleExtensions__Rent_object__269ed94
                       (*(undefined8 *)(lVar19 + 0x70),
                        *(undefined8 *)(*(long *)(lVar19 + 0x78) + 0x40),
                        *(undefined8 *)PTR_DAT_049c2248);
    *plVar13 = lVar16;
    thunk_FUN_021f190c(plVar13);
  }
  if (*(long *)(lVar19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  param_3 = (float)Dreamteck_Splines_SplineUser__CalculateLength_235e064
                             (0,0x3ff0000000000000,*(long *)(lVar19 + 0x58),1,0);
  param_3 = param_3 * _UNK_013aa424;
  param_2 = 0;
  auStack_140 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,param_3,0);
  uVar20 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar20,lVar19,*(undefined8 *)PTR_DAT_049c7848,0);
  auVar35 = FUN_024f6d0c(auStack_140,uVar20,*(undefined8 *)PTR_DAT_049c20a8);
  auVar35 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar35._0_8_,auVar35._8_8_ & 0xffffffff,*(undefined8 *)(lVar19 + 0x20),0);
  puVar2 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  _auStack_c0 = auVar35;
  thunk_FUN_021f190c(auStack_c0,0);
  auStack_e0 = _auStack_c0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar20 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar16 = *(long *)auStack_e0._0_8_;
    uVar22 = auStack_e0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_025db424;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025db424:
    iVar11 = (*(code *)*puVar12)(uVar20,uVar22,puVar12[1]);
    if (iVar11 == 0) {
      iStack_cc = 1;
      *param_4 = 1;
      *(undefined1 (*) [16])(param_4 + 6) = auStack_e0;
      thunk_FUN_021f190c(param_4 + 6,0);
      FUN_0235c420(param_4 + 2,auStack_e0,param_4,*(undefined8 *)PTR_DAT_049c7840);
      return;
    }
  }
LAB_025db438:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar20 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar16 = *(long *)auStack_e0._0_8_;
    uVar22 = auStack_e0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_025db4b8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025db4b8:
    (*(code *)*puVar12)(uVar20,uVar22,puVar12[1]);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = *(long *)(lVar19 + 0xa8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lStack_b8 = 0;
  apuStack_b0[0] = (undefined8 *)0x0;
  auStack_c0 = (undefined1  [8])((ulong)*(uint *)(lVar16 + 0x30) << 0x20);
  thunk_FUN_021f190c(&lStack_b8,0);
  apuStack_b0[0] = *(undefined8 **)(lVar16 + 0x28);
  thunk_FUN_021f190c(apuStack_b0);
  puVar3 = PTR_DAT_049c7838;
  puVar2 = PTR_DAT_049c22d8;
  lStack_158 = lStack_b8;
  uStack_160 = (long)auStack_c0;
  puStack_150 = apuStack_b0[0];
  while( true ) {
    do {
      iVar11 = (int)uStack_160 + -1;
      uStack_160 = CONCAT44(uStack_160._4_4_,iVar11);
      if (iVar11 < 0) {
        uStack_160._4_4_ = uStack_160._4_4_ - 1;
        uStack_160._0_4_ = iVar11;
        if ((int)uStack_160._4_4_ < 0) {
          *param_4 = -2;
          FUN_0235afc8(param_4 + 2,0);
          return;
        }
        lVar16 = puStack_150[(ulong)uStack_160._4_4_ + 4];
        lStack_158 = *(long *)(lVar16 + 0x18);
        thunk_FUN_021f190c((ulong)&uStack_160 | 8);
        iVar11 = *(int *)(lVar16 + 0x30) + -1;
        uStack_160 = CONCAT44(uStack_160._4_4_,iVar11);
      }
      if (*(long *)(lVar19 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar20 = *(undefined8 *)(lStack_158 + (long)iVar11 * 8 + 0x20);
      uVar17 = FUN_024f5708(*(long *)(lVar19 + 0xb8),uVar20,*(undefined8 *)puVar3);
      uVar34 = (uint)param_2;
    } while ((uVar17 & 1) == 0);
    if (*(long *)(lVar19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar13 = (long *)FUN_024f6008(*(long *)(lVar19 + 0xb0),uVar20,*(undefined8 *)puVar2);
    lVar16 = *plVar13;
    if (lVar16 == 0) break;
    lVar14 = UnityEngine_Component__get_transform_3c18724(lVar16,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar26 = UnityEngine_Transform__get_position_3c2d540(lVar14,0);
    fVar33 = param_3;
    uVar30 = uVar34;
    uVar27 = LevelAnimationSystem__GetPositionOutOfCameraBounds_24d89c4(lVar19,lVar14);
    param_2 = (ulong)uVar34;
    LevelAnimationSystem__ApplyMoveMotion_24d7e8c
              (uVar26,param_2,param_3,uVar27,uVar30,fVar33,lVar19,lVar16);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

