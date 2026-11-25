/* IL2CPP: LockCarrierGroup.<Unlock>d__17$$MoveNext
void LockCarrierGroup__Unlock_d__17__MoveNext (LockCarrierGroup__Unlock_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025a93e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LockCarrierGroup.<Unlock>d__17$$MoveNext
   void LockCarrierGroup__Unlock_d__17__MoveNext (LockCarrierGroup__Unlock_d__17_o __this, const
   MethodInfo* method); */

void LockCarrierGroup__Unlock_d__17__MoveNext_24a817c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,uint *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  undefined4 *puVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  ulong unaff_x21;
  uint *puVar27;
  long lVar28;
  ulong unaff_x22;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  undefined1 auStack_140 [16];
  undefined1 *puStack_130;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  auVar44._8_8_ = unaff_x22;
  auVar44._0_8_ = unaff_x21;
  if ((bRam0000000004f4bb21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c67b0);
    FUN_021f03f8(PTR_DAT_049c67b8);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2978);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2ac0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c67c0);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c67c8);
    FUN_021f03f8(PTR_DAT_049c67d0);
    FUN_021f03f8(PTR_DAT_049c67d8);
    FUN_021f03f8(PTR_DAT_049c67e0);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4bb21 = 1;
  }
  puVar17 = PTR_DAT_049c2978;
  puVar16 = PTR_DAT_049b6110;
  uStack_b8 = 0;
  auStack_c8._0_8_ = 0;
  auStack_c8._8_8_ = 0;
  auVar14 = ZEXT816(0);
  auVar13 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar43 = ZEXT816(0);
  auStack_d8._0_8_ = 0;
  auStack_d8._8_8_ = 0;
  auVar9 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  auStack_f0._0_8_ = 0;
  auStack_f0._8_8_ = 0;
  auVar10 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auStack_110._0_8_ = 0;
  auStack_110._8_8_ = 0;
  uVar22 = *param_5;
  lVar26 = *(long *)(param_5 + 6);
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_b0 = (ulong)uVar22 << 0x20;
  if ((int)uVar22 < 3) {
    if (uVar22 == 0) {
      uStack_b8 = *(undefined8 *)(param_5 + 10);
      uVar22 = param_5[0xc];
      param_5[10] = 0;
      param_5[0xb] = 0;
      param_5[0xc] = 0;
      uStack_b0 = CONCAT44(0xffffffff,uVar22);
      *param_5 = 0xffffffff;
LAB_025a85c8:
      auStack_c8 = auVar43;
      LitMotion_MotionAwaiter__GetResult_2eab2a8(&uStack_b8,0);
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar24 = *(long *)(*(long *)(param_5 + 8) + 0x10);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar32 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar24,0);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar26 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar35 = param_3;
      fVar39 = param_4;
      fVar36 = param_2;
      fVar33 = (float)UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar26 + 0xa8),0);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar24 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar37 = *(float *)(lVar24 + 0x18);
      fVar38 = *(float *)(lVar24 + 0x1c);
      fVar40 = *(float *)(lVar24 + 0x20);
      fVar34 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x42b40000,fVar37,fVar38,fVar40,0);
      auStack_d8 = LitMotion_LMotion__Create_2eaa2a0
                             (uVar32,param_2,param_3,param_4,
                              (fVar36 * fVar38 + fVar39 * fVar34 + fVar33 * fVar40) -
                              fVar35 * fVar37,
                              (fVar35 * fVar34 + fVar39 * fVar37 + fVar36 * fVar40) -
                              fVar33 * fVar38,
                              (fVar33 * fVar37 + fVar39 * fVar38 + fVar35 * fVar40) -
                              fVar36 * fVar34,
                              ((fVar39 * fVar40 - fVar33 * fVar34) - fVar36 * fVar37) -
                              fVar35 * fVar38,0);
      auVar44 = FUN_024f6e90(_UNK_013aa810,auStack_d8,0,1,*(undefined8 *)PTR_DAT_049c67c8);
      auStack_d8 = auVar44;
      auVar44 = FUN_024f4e50(auStack_d8,0x1a,*(undefined8 *)PTR_DAT_049c67d0);
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar44 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                          (auVar44._0_8_,auVar44._8_8_,
                           *(undefined8 *)(*(long *)(param_5 + 8) + 0x10),
                           *(undefined8 *)PTR_DAT_049c67c0);
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
      puVar15 = PTR_DAT_049b5138;
      uVar31 = *(undefined8 *)(lVar26 + 0x98);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_140 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(300,0,8,uVar31,0,0);
      thunk_FUN_021f190c(auStack_140,0);
      auStack_f0 = auStack_140;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar31 = auStack_f0._0_8_;
      auVar2 = auStack_d8;
      auVar4 = auStack_c8;
      if ((long *)auStack_f0._0_8_ != (long *)0x0) {
        lVar24 = *(long *)auStack_f0._0_8_;
        uVar30 = auStack_f0._8_8_ & 0xffff;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar19 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar20 = (undefined8 *)(lVar24 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_025a8924;
            }
            uVar19 = uVar19 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar19 != 0);
        }
        puVar20 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a8924:
        iVar18 = (*(code *)*puVar20)(uVar31,uVar30,puVar20[1]);
        auVar2 = auStack_d8;
        auVar4 = auStack_c8;
        if (iVar18 == 0) {
          uStack_b0 = CONCAT44(1,(uint)uStack_b0);
          *param_5 = 1;
          *(undefined1 (*) [16])(param_5 + 0xe) = auStack_f0;
          thunk_FUN_021f190c(param_5 + 0xe,0);
          FUN_0235c420(param_5 + 2,auStack_f0,param_5,*(undefined8 *)PTR_DAT_049c67b0);
          return;
        }
      }
LAB_025a8938:
      auStack_d8 = auVar2;
      auStack_c8 = auVar4;
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar31 = auStack_f0._0_8_;
      if ((long *)auStack_f0._0_8_ != (long *)0x0) {
        lVar24 = *(long *)auStack_f0._0_8_;
        uVar30 = auStack_f0._8_8_ & 0xffff;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar19 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar20 = (undefined8 *)(lVar24 + (long)(*piVar25 + 2) * 0x10 + 0x138);
              goto LAB_025a89bc;
            }
            uVar19 = uVar19 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar19 != 0);
        }
        puVar20 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a89bc:
        (*(code *)*puVar20)(uVar31,uVar30,puVar20[1]);
      }
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar24 = *(long *)(*(long *)(param_5 + 8) + 0x10);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar32 = UnityEngine_Transform__get_localScale_3c2dd20(lVar24,0);
      puVar15 = PTR_DAT_049c1690;
      lVar24 = *(long *)PTR_DAT_049c1690;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        FUN_021f0574();
        lVar24 = *(long *)puVar15;
      }
      puVar23 = *(undefined4 **)(lVar24 + 0xb8);
      auVar44 = LitMotion_LMotion__Create_2eaa1b4
                          (uVar32,param_2,param_3,*puVar23,puVar23[1],puVar23[2],_UNK_013aa810,0);
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar44 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar44._0_8_,auVar44._8_8_,
                           *(undefined8 *)(*(long *)(param_5 + 8) + 0x10),
                           *(undefined8 *)PTR_DAT_049c1670);
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar44 = Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
      auVar45 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                          (auVar44._0_8_,auVar44._8_8_ & 0xffffffff,0);
      uStack_b8 = auVar45._0_8_;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,auVar45._8_4_);
      uVar19 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(&uStack_b8,0);
      puVar15 = PTR_DAT_049c67b8;
      auVar3 = auStack_d8;
      auVar5 = auStack_f0;
      auVar11 = auStack_c8;
      if ((uVar19 & 1) == 0) {
        uStack_b0 = CONCAT44(2,(uint)uStack_b0);
        *param_5 = 2;
        uVar31 = *(undefined8 *)puVar15;
        *(undefined8 *)(param_5 + 10) = uStack_b8;
        param_5[0xc] = (uint)uStack_b0;
        FUN_0235c420(param_5 + 2,&uStack_b8,param_5,uVar31);
        return;
      }
    }
    else {
      if (uVar22 == 1) {
        auStack_f0 = *(undefined1 (*) [16])(param_5 + 0xe);
        param_5[0xe] = 0;
        param_5[0xf] = 0;
        param_5[0x10] = 0;
        param_5[0x11] = 0;
        uStack_b0 = 0xffffffff00000000;
        *param_5 = 0xffffffff;
        goto LAB_025a8938;
      }
      if (uVar22 != 2) goto LAB_025a83a8;
      uStack_b8 = *(undefined8 *)(param_5 + 10);
      uVar22 = param_5[0xc];
      param_5[10] = 0;
      param_5[0xb] = 0;
      param_5[0xc] = 0;
      uStack_b0 = CONCAT44(0xffffffff,uVar22);
      *param_5 = 0xffffffff;
    }
    auStack_d8 = auVar3;
    auStack_f0 = auVar5;
    auStack_c8 = auVar11;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(&uStack_b8,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar15 = PTR_DAT_049c1690;
    lVar24 = *(long *)PTR_DAT_049c1690;
    lVar21 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar32 = *(undefined4 *)(lVar21 + 0xc);
    uVar41 = *(undefined4 *)(lVar21 + 0x10);
    uVar42 = *(undefined4 *)(lVar21 + 0x14);
    if (*(int *)(lVar24 + 0xe4) == 0) {
      FUN_021f0574();
      lVar24 = *(long *)puVar15;
    }
    puVar23 = *(undefined4 **)(lVar24 + 0xb8);
    auVar44 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar32,uVar41,uVar42,*puVar23,puVar23[1],puVar23[2],_UNK_013aa810,0);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar44 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar44._0_8_,auVar44._8_8_,*(undefined8 *)(lVar26 + 0xa0),
                         *(undefined8 *)PTR_DAT_049c1670);
    if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar43 = Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
    auVar45 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar43._0_8_,auVar43._8_8_ & 0xffffffff,0);
    uStack_b8 = auVar45._0_8_;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,auVar45._8_4_);
    uVar19 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(&uStack_b8,0);
    puVar15 = PTR_DAT_049c67b8;
    auVar6 = auStack_d8;
    auVar7 = auStack_f0;
    auVar12 = auStack_c8;
    if ((uVar19 & 1) == 0) {
      uStack_b0 = CONCAT44(3,(uint)uStack_b0);
      *param_5 = 3;
      uVar31 = *(undefined8 *)puVar15;
      *(undefined8 *)(param_5 + 10) = uStack_b8;
      param_5[0xc] = (uint)uStack_b0;
      FUN_0235c420(param_5 + 2,&uStack_b8,param_5,uVar31);
      return;
    }
LAB_025a8b90:
    auStack_d8 = auVar6;
    auStack_f0 = auVar7;
    auStack_c8 = auVar12;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(&uStack_b8,0);
    uVar22 = 6;
    while( true ) {
      param_5[0x12] = uVar22;
      if ((int)uVar22 < 0) break;
      auVar43 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa978,0);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar31 = *(undefined8 *)(lVar26 + 0xb8);
      uVar22 = param_5[0x12];
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar43 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                          (auVar43._0_8_,auVar43._8_8_,uVar31,uVar22,*(undefined8 *)puVar17);
      unaff_x22 = auVar44._8_8_ & 0xffffffff00000000 | auVar43._8_8_ & 0xffffffff;
      auVar43 = Extensions__AddTo_24d83f4(auVar43._0_8_,unaff_x22,lVar26,0);
      unaff_x21 = auVar44._0_8_ & 0xffffffff00000000 | auVar43._8_8_ & 0xffffffff;
      auVar45 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4(auVar43._0_8_,unaff_x21,0);
      uStack_b8 = auVar45._0_8_;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,auVar45._8_4_);
      uVar19 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(&uStack_b8,0);
      puVar15 = PTR_DAT_049c67b8;
      if ((uVar19 & 1) == 0) {
        uStack_b0 = CONCAT44(4,(uint)uStack_b0);
        *param_5 = 4;
        uVar31 = *(undefined8 *)puVar15;
        *(undefined8 *)(param_5 + 10) = uStack_b8;
        param_5[0xc] = (uint)uStack_b0;
        FUN_0235c420(param_5 + 2,&uStack_b8,param_5,uVar31);
        return;
      }
LAB_025a8de0:
      auVar44._8_8_ = unaff_x22;
      auVar44._0_8_ = unaff_x21;
      LitMotion_MotionAwaiter__GetResult_2eab2a8(&uStack_b8,0);
      uVar22 = param_5[0x12] - 1;
    }
    auVar44 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa8dc,0);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar31 = *(undefined8 *)(lVar26 + 0xc0);
    if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar44 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar44._0_8_,auVar44._8_8_,uVar31,0,*(undefined8 *)puVar17);
    auVar44 = Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
    auVar45 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar44._0_8_,auVar44._8_8_ & 0xffffffff,0);
    uStack_b8 = auVar45._0_8_;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,auVar45._8_4_);
    uVar19 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(&uStack_b8,0);
    puVar17 = PTR_DAT_049c67b8;
    auVar8 = auStack_d8;
    auVar10 = auStack_f0;
    auVar13 = auStack_c8;
    if ((uVar19 & 1) == 0) {
      uStack_b0 = CONCAT44(5,(uint)uStack_b0);
      *param_5 = 5;
      uVar31 = *(undefined8 *)puVar17;
      *(undefined8 *)(param_5 + 10) = uStack_b8;
      param_5[0xc] = (uint)uStack_b0;
      FUN_0235c420(param_5 + 2,&uStack_b8,param_5,uVar31);
      return;
    }
  }
  else {
    if ((int)uVar22 < 5) {
      if (uVar22 != 3) {
        if (uVar22 == 4) {
          uStack_b8 = *(undefined8 *)(param_5 + 10);
          uVar22 = param_5[0xc];
          param_5[10] = 0;
          param_5[0xb] = 0;
          param_5[0xc] = 0;
          uStack_b0 = CONCAT44(0xffffffff,uVar22);
          *param_5 = 0xffffffff;
          auStack_d8 = auVar9;
          auStack_f0 = ZEXT816(0);
          auStack_c8 = auVar14;
          goto LAB_025a8de0;
        }
        goto LAB_025a83a8;
      }
      uStack_b8 = *(undefined8 *)(param_5 + 10);
      uVar22 = param_5[0xc];
      param_5[10] = 0;
      param_5[0xb] = 0;
      param_5[0xc] = 0;
      uStack_b0 = CONCAT44(0xffffffff,uVar22);
      *param_5 = 0xffffffff;
      goto LAB_025a8b90;
    }
    if (uVar22 != 5) {
      if (uVar22 == 6) {
        auStack_f0 = *(undefined1 (*) [16])(param_5 + 0xe);
        param_5[0xe] = 0;
        param_5[0xf] = 0;
        param_5[0x10] = 0;
        param_5[0x11] = 0;
        uStack_b0 = -0x100000000;
        *param_5 = 0xffffffff;
        goto LAB_025a911c;
      }
LAB_025a83a8:
      uVar31 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c67e0);
      System_Object___ctor_3142338(uVar31,0);
      puVar27 = param_5 + 8;
      *(undefined8 *)puVar27 = uVar31;
      thunk_FUN_021f190c(puVar27,uVar31);
      if (*(long *)(param_5 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar24 = *(long *)(*(long *)(param_5 + 4) + 0xa8);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar21 = *(long *)(param_5 + 8);
      uVar31 = UnityEngine_Component__get_transform_3c18724(lVar24,0);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puVar20 = (undefined8 *)(lVar21 + 0x10);
      *puVar20 = uVar31;
      thunk_FUN_021f190c(puVar20);
      lVar24 = *(long *)puVar27;
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar32 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar24 + 0x10),0);
      *(undefined4 *)(lVar24 + 0x18) = uVar32;
      *(float *)(lVar24 + 0x1c) = param_2;
      *(float *)(lVar24 + 0x20) = param_3;
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar26 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar24 = *(long *)puVar27;
      uVar32 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar26 + 0xa8),0);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined4 *)(lVar24 + 0x24) = uVar32;
      *(float *)(lVar24 + 0x28) = param_2;
      *(float *)(lVar24 + 0x2c) = param_3;
      lVar24 = *(long *)puVar27;
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar32 = UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar24 + 0x10),0);
      *(undefined4 *)(lVar24 + 0x30) = uVar32;
      *(float *)(lVar24 + 0x34) = param_2;
      *(float *)(lVar24 + 0x38) = param_3;
      *(float *)(lVar24 + 0x3c) = param_4;
      if (*(long *)(lVar26 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar24 = *(long *)puVar27;
      uVar32 = UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar26 + 0xa8),0);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined4 *)(lVar24 + 0x40) = uVar32;
      *(float *)(lVar24 + 0x44) = param_2;
      *(float *)(lVar24 + 0x48) = param_3;
      *(float *)(lVar24 + 0x4c) = param_4;
      lVar24 = *(long *)puVar27;
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar32 = UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(lVar24 + 0x10),0);
      *(undefined4 *)(lVar24 + 0x50) = uVar32;
      *(float *)(lVar24 + 0x54) = param_2;
      *(float *)(lVar24 + 0x58) = param_3;
      lVar24 = *(long *)puVar27;
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar31 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
      param_4 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
      fVar35 = param_4 * _UNK_013aa95c;
      *(ulong *)(lVar24 + 0x5c) =
           CONCAT44((float)((ulong)uVar31 >> 0x20) * 1.83,(float)uVar31 * 1.83);
      *(float *)(lVar24 + 100) = fVar35;
      param_2 = 1.0;
      param_3 = _UNK_013aa8f4;
      auStack_c8 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa8f4,0);
      uVar29 = *(undefined8 *)puVar27;
      uVar31 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar31,uVar29,*(undefined8 *)PTR_DAT_049c67d8,0);
      auVar44 = FUN_024f6d0c(auStack_c8,uVar31,*(undefined8 *)PTR_DAT_049c20a8);
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar44 = Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
      auVar45 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                          (auVar44._0_8_,auVar44._8_8_ & 0xffffffff,0);
      uStack_b8 = auVar45._0_8_;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,auVar45._8_4_);
      uVar30 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(&uStack_b8,0);
      uVar19 = uStack_b0;
      puVar15 = PTR_DAT_049c67b8;
      auVar43 = auStack_c8;
      if ((uVar30 & 1) == 0) {
        uStack_b0 = uStack_b0 & 0xffffffff;
        uVar30 = uStack_b0;
        *param_5 = 0;
        uStack_b0._0_4_ = (uint)uVar19;
        *(undefined8 *)(param_5 + 10) = uStack_b8;
        uVar31 = *(undefined8 *)puVar15;
        param_5[0xc] = (uint)uStack_b0;
        uStack_b0 = uVar30;
        FUN_0235c420(param_5 + 2,&uStack_b8,param_5,uVar31);
        return;
      }
      goto LAB_025a85c8;
    }
    uStack_b8 = *(undefined8 *)(param_5 + 10);
    uVar22 = param_5[0xc];
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    uStack_b0 = CONCAT44(0xffffffff,uVar22);
    *param_5 = 0xffffffff;
  }
  auStack_d8 = auVar8;
  auStack_f0 = auVar10;
  auStack_c8 = auVar13;
  LitMotion_MotionAwaiter__GetResult_2eab2a8(&uStack_b8,0);
  auVar44 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,0x3e800000,0);
  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar31 = UnityEngine_Component__get_transform_3c18724(lVar26,0);
  auVar44 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                      (auVar44._0_8_,auVar44._8_8_,uVar31,*(undefined8 *)PTR_DAT_049c2ac0);
  if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar44 = Extensions__AddTo_24d83f4(auVar44._0_8_,auVar44._8_8_ & 0xffffffff,lVar26,0);
  auVar44 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar44._0_8_,auVar44._8_8_ & 0xffffffff,*(undefined8 *)(lVar26 + 0x98),0);
  puVar16 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_140 = auVar44;
  thunk_FUN_021f190c(auStack_140,0);
  auStack_f0 = auStack_140;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar31 = auStack_f0._0_8_;
  auVar9 = auStack_d8;
  auVar14 = auStack_c8;
  if ((long *)auStack_f0._0_8_ != (long *)0x0) {
    lVar24 = *(long *)auStack_f0._0_8_;
    uVar30 = auStack_f0._8_8_ & 0xffff;
    uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar19 != 0) {
      piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar20 = (undefined8 *)(lVar24 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_025a9108;
        }
        uVar19 = uVar19 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar19 != 0);
    }
    puVar20 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a9108:
    iVar18 = (*(code *)*puVar20)(uVar31,uVar30,puVar20[1]);
    auVar9 = auStack_d8;
    auVar14 = auStack_c8;
    if (iVar18 == 0) {
      uStack_b0 = CONCAT44(6,(uint)uStack_b0);
      *param_5 = 6;
      *(undefined1 (*) [16])(param_5 + 0xe) = auStack_f0;
      thunk_FUN_021f190c(param_5 + 0xe,0);
      FUN_0235c420(param_5 + 2,auStack_f0,param_5,*(undefined8 *)PTR_DAT_049c67b0);
      return;
    }
  }
LAB_025a911c:
  auStack_d8 = auVar9;
  auStack_c8 = auVar14;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar31 = auStack_f0._0_8_;
  if ((long *)auStack_f0._0_8_ != (long *)0x0) {
    lVar24 = *(long *)auStack_f0._0_8_;
    uVar30 = auStack_f0._8_8_ & 0xffff;
    uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar19 != 0) {
      piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar20 = (undefined8 *)(lVar24 + (long)(*piVar25 + 2) * 0x10 + 0x138);
          goto LAB_025a91a0;
        }
        uVar19 = uVar19 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar19 != 0);
    }
    puVar20 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a91a0:
    (*(code *)*puVar20)(uVar31,uVar30,puVar20[1]);
  }
  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar24 = UnityEngine_Component__get_gameObject_3c187f4(lVar26,0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar24,0,0);
  if (*(long *)(param_5 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar24 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_5 + 4),0);
  if (lVar24 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar24,0,0);
    if (*(long *)(lVar26 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar26 + 0x100),auStack_140,*(undefined8 *)PTR_DAT_049c2640);
    auStack_110 = auStack_140;
    puVar17 = PTR_DAT_049c2638;
    puVar16 = PTR_DAT_049c2630;
    uStack_100 = puStack_130;
    auStack_140._8_8_ = (long)&uStack_b0 + 4;
    auStack_140._0_8_ = 0;
    puStack_130 = auStack_110;
    while( true ) {
      uVar19 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (auStack_110,*(undefined8 *)puVar16);
      if ((uVar19 & 1) == 0) {
        if ((long)uStack_b0 < 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (puStack_130,*(undefined8 *)PTR_DAT_049c2628);
        }
        puVar27 = param_5 + 8;
        puVar27[0] = 0;
        puVar27[1] = 0;
        *param_5 = 0xfffffffe;
        thunk_FUN_021f190c(puVar27,0);
        FUN_0235afc8(param_5 + 2,0);
        return;
      }
      lVar28 = *(long *)puVar17;
      lVar21 = *(long *)(lVar28 + 0x20);
      uVar1 = *(ushort *)(lVar21 + 0x135);
      lVar24 = lVar21;
      if ((uVar1 & 1) == 0) {
        lVar24 = FUN_02229718();
        lVar21 = *(long *)(lVar28 + 0x20);
        uVar1 = *(ushort *)(lVar21 + 0x135);
      }
      uVar32 = *(undefined4 *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar21 = FUN_02229718();
      }
      uVar31 = thunk_FUN_0224e54c(auStack_110,
                                  *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_a8,uVar31,uVar32);
      lVar24 = lStack_a8;
      uVar31 = UnityEngine_Component__get_gameObject_3c187f4(lVar26,0);
      if (lVar24 == 0) break;
      Carrier__EnableInteraction_2404130(lVar24,uVar31,0);
      uVar31 = UnityEngine_Component__get_gameObject_3c187f4(lVar26,0);
      Carrier__EnableTransfer_23fe4dc(lVar24,uVar31,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar31,uVar31);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

