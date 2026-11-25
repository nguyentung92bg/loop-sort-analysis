/* IL2CPP: StreakTowerSubMonitor.<ApplyMoveMotion>d__22$$MoveNext
void StreakTowerSubMonitor__ApplyMoveMotion_d__22__MoveNext (StreakTowerSubMonitor__ApplyMoveMotion_d__22_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StreakTowerSubMonitor.<ApplyMoveMotion>d__22$$MoveNext
   void StreakTowerSubMonitor__ApplyMoveMotion_d__22__MoveNext
   (StreakTowerSubMonitor__ApplyMoveMotion_d__22_o __this, const MethodInfo* method); */

void StreakTowerSubMonitor__ApplyMoveMotion_d__22__MoveNext_2489960(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_150 [16];
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined4 uStack_74;
  
  if ((bRam0000000004f4ba40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5ce0);
    FUN_021f03f8(PTR_DAT_049c5ce8);
    FUN_021f03f8(PTR_DAT_049c5cf0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c23f8);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba40 = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  auStack_f0._8_4_ = 0;
  auStack_d0._8_8_ = 0;
  auStack_d0._0_8_ = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  auStack_100._8_8_ = 0;
  auStack_f0._0_8_ = 0;
  auStack_100._0_8_ = 0;
  uStack_108 = 0;
  if (*param_1 == 0) {
    auStack_90 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_f0 = *(undefined1 (*) [12])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      *param_1 = -1;
      auStack_100 = ZEXT816(0);
      auStack_e0 = ZEXT816(0);
      auStack_d0 = ZEXT816(0);
      auStack_90 = ZEXT816(0);
      goto LAB_02589f68;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar11,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_150 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(800,0,8,uVar5,0,0);
    thunk_FUN_021f190c(auStack_150,0);
    uVar3 = auStack_150._8_8_;
    uVar5 = auStack_150._0_8_;
    auStack_90 = auStack_150;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar5 != (long *)0x0) {
      lVar7 = *(long *)uVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02589ba4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar5,*(long *)PTR_DAT_049b54e0,0);
LAB_02589ba4:
      iVar4 = (*(code *)*puVar6)(uVar5,uVar3 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_90;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c5ce0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_90._0_8_;
    uVar12 = auStack_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02589c3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02589c3c:
    (*(code *)*puVar6)(uVar5,uVar12,puVar6[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(lVar11 + 0xa0);
  uStack_74 = StreakTowerSubMonitor__get_Save_248736c();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
            (lVar7,&uStack_74,auStack_150,*(undefined8 *)PTR_DAT_049c5cf0);
  uVar5 = auStack_150._0_8_;
  if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0x78) + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__get_worldToLocalMatrix_3c2e170(auStack_150,lVar7,0);
  uStack_b8 = uStack_138;
  uStack_c0 = uStack_140;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  auStack_d0 = auStack_150;
  if (*(long *)(lVar11 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = uStack_140;
  uVar12 = uStack_120;
  fVar13 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar11 + 0x70),0);
  fVar19 = (float)uVar8;
  fVar22 = (float)uVar12;
  if (*(long *)(lVar11 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar23 = fVar22;
  fVar20 = fVar19;
  uVar14 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar11 + 0x70),0);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar15 = fVar20;
  UnityEngine_Transform__get_position_3c2d540(uVar5,0);
  if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar15 = (float)Extensions__WithY_3f0d5ec(uVar14,fVar20,fVar23,fVar15,0);
  if (cRam0000000004f4a234 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a234 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar16 = SQRT((fVar22 - fVar23) * (fVar22 - fVar23) +
                (fVar13 - fVar15) * (fVar13 - fVar15) + (fVar19 - fVar20) * (fVar19 - fVar20)) *
           _UNK_013aa62c;
  fVar21 = 3.0;
  if (fVar16 <= 3.0) {
    fVar21 = fVar16;
  }
  fVar24 = 0.5;
  if (0.5 <= fVar16) {
    fVar24 = fVar21;
  }
  uVar14 = 0x1b;
  if (fVar20 <= fVar19) {
    uVar14 = 9;
  }
  uVar17 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                     (fVar13,uVar8 & 0xffffffff,uVar12 & 0xffffffff,auStack_d0,0);
  uVar18 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c(fVar15,fVar20,fVar23,auStack_d0,0);
  auStack_e0 = LitMotion_LMotion__Create_2eaa1b4(uVar17,fVar19,fVar22,uVar18,fVar20,fVar23,fVar24,0)
  ;
  auVar25 = FUN_024f6e90(_UNK_013aa838,auStack_e0,0,1,*(undefined8 *)PTR_DAT_049c2808);
  auStack_e0 = auVar25;
  auVar25 = FUN_024f4e50(auStack_e0,uVar14,*(undefined8 *)PTR_DAT_049c1680);
  auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26713e0
                      (auVar25._0_8_,auVar25._8_8_,*(undefined8 *)(lVar11 + 0x70),
                       *(undefined8 *)PTR_DAT_049c23f8);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar25._0_8_,auVar25._8_8_ & 0xffffffff,lVar11,0)
  ;
  if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0x78) + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar14 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar7,0);
  fVar13 = fVar19;
  uVar17 = StreakTowerSubMonitor__GetContentPosition_248819c(lVar11,uVar5);
  auStack_100 = LitMotion_LMotion__Create_2eaa148(uVar14,fVar19,uVar17,fVar13,fVar24,0);
  auVar25 = FUN_024f6e90(_UNK_013aa8fc,auStack_100,0,1,*(undefined8 *)PTR_DAT_049c3d28);
  auStack_100 = auVar25;
  auVar25 = FUN_024f4e50(auStack_100,9,*(undefined8 *)PTR_DAT_049c2d70);
  if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar25 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                      (auVar25._0_8_,auVar25._8_8_,*(undefined8 *)(*(long *)(lVar11 + 0x78) + 0x20),
                       *(undefined8 *)PTR_DAT_049c2f70);
  auVar25 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                      (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,lVar11,0);
  auStack_f0 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                         (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,0);
  uVar8 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_f0,0);
  puVar1 = PTR_DAT_049c5ce8;
  if ((uVar8 & 1) == 0) {
    *param_1 = 1;
    uVar5 = *(undefined8 *)puVar1;
    *(undefined1 (*) [12])(param_1 + 0xc) = auStack_f0;
    FUN_0235c25c(param_1 + 2,auStack_f0,param_1,uVar5);
    return;
  }
LAB_02589f68:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_f0,0);
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0258a034;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_0258a034:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

