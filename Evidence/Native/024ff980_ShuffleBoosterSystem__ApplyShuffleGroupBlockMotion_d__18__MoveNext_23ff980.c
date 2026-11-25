/* IL2CPP: ShuffleBoosterSystem.<ApplyShuffleGroupBlockMotion>d__18$$MoveNext
void ShuffleBoosterSystem__ApplyShuffleGroupBlockMotion_d__18__MoveNext (ShuffleBoosterSystem__ApplyShuffleGroupBlockMotion_d__18_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ShuffleBoosterSystem.<ApplyShuffleGroupBlockMotion>d__18$$MoveNext
   void ShuffleBoosterSystem__ApplyShuffleGroupBlockMotion_d__18__MoveNext
   (ShuffleBoosterSystem__ApplyShuffleGroupBlockMotion_d__18_o __this, const MethodInfo* method); */

void ShuffleBoosterSystem__ApplyShuffleGroupBlockMotion_d__18__MoveNext_23ff980
               (undefined1 param_1 [16],float param_2,float param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  
  if ((bRam0000000004f4b695 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2528);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b695 = 1;
  }
  iVar1 = *param_4;
  auStack_80._8_4_ = 0;
  auStack_90._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_90._0_8_ = 0;
  auVar18 = ZEXT816(0);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      auStack_80 = *(undefined1 (*) [12])(param_4 + 0x18);
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      param_4[0x1a] = 0;
      *param_4 = -1;
LAB_024ffd08:
      auStack_90 = auVar18;
      LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_80,0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar15 = param_2;
      fVar16 = param_3;
      fVar10 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
      auVar18 = LitMotion_LMotion__Create_2eaa1b4
                          (uVar9,param_2,param_3,fVar10 + (float)param_4[0x12],
                           fVar15 + (float)param_4[0x13],fVar16 + (float)param_4[0x14],_UNK_013aa838
                           ,0);
      auStack_90 = auVar18;
      auVar18 = FUN_024f4e50(auStack_90,0x1b,*(undefined8 *)PTR_DAT_049c1680);
      auVar18 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                          (auVar18._0_8_,auVar18._8_8_,*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)PTR_DAT_049c20a0);
      uVar3 = *(undefined8 *)(param_4 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar18 = Extensions__AddTo_24d83f4(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar3,0);
      auVar19 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                          (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,0);
      auStack_80 = auVar19;
      uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_80,0);
      puVar2 = PTR_DAT_049c2528;
      auVar18 = auStack_90;
      if ((uVar6 & 1) == 0) {
        *param_4 = 1;
        uVar3 = *(undefined8 *)puVar2;
        *(undefined1 (*) [12])(param_4 + 0x18) = auStack_80;
        FUN_0235c25c(param_4 + 2,auStack_80,param_4,uVar3);
        return;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_024ffadc;
      auStack_80 = *(undefined1 (*) [12])(param_4 + 0x18);
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      param_4[0x1a] = 0;
      *param_4 = -1;
    }
    auStack_90 = auVar18;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_80,0);
    if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
    if (cRam0000000004f4a234 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a234 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
    auVar18 = LitMotion_LMotion__Create_2eaa1b4(0);
    auStack_90 = auVar18;
    auVar18 = FUN_024f4e50(auStack_90,3,*(undefined8 *)PTR_DAT_049c1680);
    auVar18 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar18._0_8_,auVar18._8_8_,*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)PTR_DAT_049c20a0);
    uVar3 = *(undefined8 *)(param_4 + 6);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar18 = Extensions__AddTo_24d83f4(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar3,0);
    auVar19 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,0);
    auStack_80 = auVar19;
    uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_80,0);
    puVar2 = PTR_DAT_049c2528;
    auVar18 = auStack_90;
    if ((uVar6 & 1) == 0) {
      *param_4 = 2;
      uVar3 = *(undefined8 *)puVar2;
      *(undefined1 (*) [12])(param_4 + 0x18) = auStack_80;
      FUN_0235c25c(param_4 + 2,auStack_80,param_4,uVar3);
      return;
    }
LAB_024fff64:
    auStack_90 = auVar18;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_80,0);
    if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
    auVar18 = LitMotion_LMotion__Create_2eaa1b4(0);
    auStack_90 = auVar18;
    auVar18 = FUN_024f4e50(auStack_90,3,*(undefined8 *)PTR_DAT_049c1680);
    auVar18 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar18._0_8_,auVar18._8_8_,*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)PTR_DAT_049c20a0);
    uVar3 = *(undefined8 *)(param_4 + 6);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar18 = Extensions__AddTo_24d83f4(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar3,0);
    auVar19 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,0);
    auStack_80 = auVar19;
    uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_80,0);
    puVar2 = PTR_DAT_049c2528;
    auVar18 = auStack_90;
    if ((uVar6 & 1) == 0) {
      *param_4 = 3;
      uVar3 = *(undefined8 *)puVar2;
      *(undefined1 (*) [12])(param_4 + 0x18) = auStack_80;
      FUN_0235c25c(param_4 + 2,auStack_80,param_4,uVar3);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      auStack_80 = *(undefined1 (*) [12])(param_4 + 0x18);
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      param_4[0x1a] = 0;
      *param_4 = -1;
      goto LAB_024fff64;
    }
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        auStack_80 = *(undefined1 (*) [12])(param_4 + 0x18);
        param_4[0x18] = 0;
        param_4[0x19] = 0;
        param_4[0x1a] = 0;
        *param_4 = -1;
        auStack_90 = ZEXT816(0);
        goto LAB_025000dc;
      }
LAB_024ffadc:
      if (*(long *)(param_4 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 6),0);
      if (*(long *)(param_4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar3 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 8),0);
      piVar7 = param_4 + 0x10;
      *(undefined8 *)piVar7 = uVar3;
      thunk_FUN_021f190c(piVar7);
      fVar15 = (float)param_4[10];
      fVar16 = (float)param_4[0xd];
      uVar3 = *(undefined8 *)(param_4 + 0xb);
      uVar17 = *(undefined8 *)(param_4 + 0xe);
      if (cRam0000000004f4a55c == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55c = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar15 = fVar15 - fVar16;
      fVar16 = (float)uVar3 - (float)uVar17;
      fVar10 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      fVar12 = SQRT(fVar10 * fVar10 + fVar15 * fVar15 + fVar16 * fVar16);
      if (fVar12 <= _UNK_013aa920) {
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        fVar11 = **(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar3 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
      }
      else {
        fVar11 = fVar15 / fVar12;
        uVar3 = CONCAT44(fVar10 / fVar12,fVar16 / fVar12);
        fVar15 = fVar12;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar16 = (float)UnityEngine_Transform__get_up_3c2dafc(lVar5,0);
      fVar14 = (float)((ulong)uVar3 >> 0x20);
      uVar17 = NEON_fmov(0x3f400000,4);
      fVar13 = 0.75;
      fVar10 = ((float)uVar3 * fVar12 - fVar14 * fVar15) * (float)uVar17;
      param_4[0x14] = (int)((fVar11 * fVar15 - fVar16 * (float)uVar3) * 0.75);
      *(ulong *)(param_4 + 0x12) =
           CONCAT44((fVar14 * fVar16 - fVar11 * fVar12) * (float)((ulong)uVar17 >> 0x20),fVar10);
      fVar15 = (float)UnityEngine_Transform__get_up_3c2dafc(lVar5,0);
      param_2 = (float)param_4[0xe];
      param_3 = (float)param_4[0xf];
      param_4[0x15] = (int)(fVar15 + fVar15);
      param_4[0x16] = (int)(fVar10 + fVar10);
      param_4[0x17] = (int)(fVar13 + fVar13);
      auStack_90 = LitMotion_LMotion__Create_2eaa1b4(0);
      auVar18 = FUN_024f4e50(auStack_90,3,*(undefined8 *)PTR_DAT_049c1680);
      auVar18 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                          (auVar18._0_8_,auVar18._8_8_,*(undefined8 *)piVar7,
                           *(undefined8 *)PTR_DAT_049c20a0);
      uVar3 = *(undefined8 *)(param_4 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar18 = Extensions__AddTo_24d83f4(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar3,0);
      auStack_80 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                             (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,0);
      uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_80,0);
      puVar2 = PTR_DAT_049c2528;
      auVar18 = auStack_90;
      if ((uVar6 & 1) == 0) {
        *param_4 = 0;
        uVar3 = *(undefined8 *)puVar2;
        *(undefined1 (*) [12])(param_4 + 0x18) = auStack_80;
        FUN_0235c25c(param_4 + 2,auStack_80,param_4,uVar3);
        return;
      }
      goto LAB_024ffd08;
    }
    auStack_80 = *(undefined1 (*) [12])(param_4 + 0x18);
    param_4[0x18] = 0;
    param_4[0x19] = 0;
    param_4[0x1a] = 0;
    *param_4 = -1;
  }
  auStack_90 = auVar18;
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_80,0);
  if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
  auVar18 = LitMotion_LMotion__Create_2eaa1b4(0);
  auVar18 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                      (auVar18._0_8_,auVar18._8_8_,*(undefined8 *)(param_4 + 0x10),
                       *(undefined8 *)PTR_DAT_049c20a0);
  uVar3 = *(undefined8 *)(param_4 + 6);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar18 = Extensions__AddTo_24d83f4(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar3,0);
  auVar19 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                      (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,0);
  auStack_80 = auVar19;
  uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_80,0);
  puVar2 = PTR_DAT_049c2528;
  if ((uVar6 & 1) == 0) {
    *param_4 = 4;
    uVar3 = *(undefined8 *)puVar2;
    *(undefined1 (*) [12])(param_4 + 0x18) = auStack_80;
    FUN_0235c25c(param_4 + 2,auStack_80,param_4,uVar3);
    return;
  }
LAB_025000dc:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_80,0);
  *param_4 = -2;
  piVar7 = param_4 + 0x10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_021f190c(piVar7,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar8 = *(long **)(param_4 + 2);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02500294;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_02500294:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

