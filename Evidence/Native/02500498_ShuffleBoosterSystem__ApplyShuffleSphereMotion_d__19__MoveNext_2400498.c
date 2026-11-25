/* IL2CPP: ShuffleBoosterSystem.<ApplyShuffleSphereMotion>d__19$$MoveNext
void ShuffleBoosterSystem__ApplyShuffleSphereMotion_d__19__MoveNext (ShuffleBoosterSystem__ApplyShuffleSphereMotion_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ShuffleBoosterSystem.<ApplyShuffleSphereMotion>d__19$$MoveNext
   void ShuffleBoosterSystem__ApplyShuffleSphereMotion_d__19__MoveNext
   (ShuffleBoosterSystem__ApplyShuffleSphereMotion_d__19_o __this, const MethodInfo* method); */

void ShuffleBoosterSystem__ApplyShuffleSphereMotion_d__19__MoveNext_2400498
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  
  if ((bRam0000000004f4b696 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2530);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b696 = 1;
  }
  iVar1 = *param_4;
  auStack_70._8_4_ = 0;
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_80._0_8_ = 0;
  auVar16 = ZEXT816(0);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      auStack_70 = *(undefined1 (*) [12])(param_4 + 0x1a);
      param_4[0x1a] = 0;
      param_4[0x1b] = 0;
      param_4[0x1c] = 0;
      *param_4 = -1;
LAB_0250070c:
      auStack_80 = auVar16;
      LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_70,0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar9 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x10),0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar14 = param_2;
      fVar15 = param_3;
      fVar10 = (float)UnityEngine_Transform__get_forward_3c2db78(*(long *)(param_4 + 0x10),0);
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar12 = fVar14;
      fVar13 = fVar15;
      fVar11 = (float)UnityEngine_Transform__get_up_3c2dafc(*(long *)(param_4 + 0x10),0);
      fVar14 = fVar14 * _UNK_013aa658;
      fVar15 = fVar15 * _UNK_013aa658;
      param_4[0x17] = (int)(fVar9 + fVar10 * _UNK_013aa658 + fVar11 * 5.0);
      param_4[0x18] = (int)(param_2 + fVar14 + fVar12 * 5.0);
      param_4[0x19] = (int)(param_3 + fVar15 + fVar13 * 5.0);
      Freya_Random__get_InUnitSphere_2eff03c(0);
      if (*(long *)(param_4 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x12),0);
      auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
      auStack_80 = auVar16;
      auVar16 = FUN_024f4e50(auStack_80,0x1b,*(undefined8 *)PTR_DAT_049c1680);
      auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                          (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0x12),
                           *(undefined8 *)PTR_DAT_049c20a0);
      uVar3 = *(undefined8 *)(param_4 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar3,0);
      auVar17 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                          (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
      auStack_70 = auVar17;
      uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_70,0);
      puVar2 = PTR_DAT_049c2530;
      auVar16 = auStack_80;
      if ((uVar6 & 1) == 0) {
        *param_4 = 1;
        uVar3 = *(undefined8 *)puVar2;
        *(undefined1 (*) [12])(param_4 + 0x1a) = auStack_70;
        FUN_0235c25c(param_4 + 2,auStack_70,param_4,uVar3);
        return;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_025005f0;
      auStack_70 = *(undefined1 (*) [12])(param_4 + 0x1a);
      param_4[0x1a] = 0;
      param_4[0x1b] = 0;
      param_4[0x1c] = 0;
      *param_4 = -1;
    }
    auStack_80 = auVar16;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_70,0);
    Freya_Random__get_InUnitSphere_2eff03c(0);
    if (*(long *)(param_4 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x12),0);
    auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
    auStack_80 = auVar16;
    auVar16 = FUN_024f4e50(auStack_80,0x1b,*(undefined8 *)PTR_DAT_049c1680);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0x12),
                         *(undefined8 *)PTR_DAT_049c20a0);
    uVar3 = *(undefined8 *)(param_4 + 6);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar3,0);
    auVar17 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
    auStack_70 = auVar17;
    uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_70,0);
    puVar2 = PTR_DAT_049c2530;
    auVar16 = auStack_80;
    if ((uVar6 & 1) == 0) {
      *param_4 = 2;
      uVar3 = *(undefined8 *)puVar2;
      *(undefined1 (*) [12])(param_4 + 0x1a) = auStack_70;
      FUN_0235c25c(param_4 + 2,auStack_70,param_4,uVar3);
      return;
    }
LAB_02500960:
    auStack_80 = auVar16;
    LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_70,0);
    if (*(long *)(param_4 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x12),0);
    auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
    auStack_80 = auVar16;
    auVar16 = FUN_024f4e50(auStack_80,3,*(undefined8 *)PTR_DAT_049c1680);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0x12),
                         *(undefined8 *)PTR_DAT_049c20a0);
    uVar3 = *(undefined8 *)(param_4 + 6);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar3,0);
    auVar17 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
    auStack_70 = auVar17;
    uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_70,0);
    puVar2 = PTR_DAT_049c2530;
    auVar16 = auStack_80;
    if ((uVar6 & 1) == 0) {
      *param_4 = 3;
      uVar3 = *(undefined8 *)puVar2;
      *(undefined1 (*) [12])(param_4 + 0x1a) = auStack_70;
      FUN_0235c25c(param_4 + 2,auStack_70,param_4,uVar3);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      auStack_70 = *(undefined1 (*) [12])(param_4 + 0x1a);
      param_4[0x1a] = 0;
      param_4[0x1b] = 0;
      param_4[0x1c] = 0;
      *param_4 = -1;
      goto LAB_02500960;
    }
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        auStack_70 = *(undefined1 (*) [12])(param_4 + 0x1a);
        param_4[0x1a] = 0;
        param_4[0x1b] = 0;
        param_4[0x1c] = 0;
        *param_4 = -1;
        auStack_80 = ZEXT816(0);
        goto LAB_02500ad8;
      }
LAB_025005f0:
      if (*(long *)(param_4 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 6),0);
      plVar8 = (long *)(param_4 + 0x10);
      *plVar8 = lVar5;
      thunk_FUN_021f190c(plVar8);
      if (*(long *)(param_4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar3 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 8),0);
      piVar7 = param_4 + 0x12;
      *(undefined8 *)piVar7 = uVar3;
      thunk_FUN_021f190c(piVar7);
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar9 = (float)UnityEngine_Transform__get_up_3c2dafc(*plVar8,0);
      fVar14 = param_2 + param_2;
      fVar15 = param_3 + param_3;
      param_2 = (float)param_4[0xb];
      param_3 = (float)param_4[0xc];
      param_4[0x14] = (int)(fVar9 + fVar9);
      param_4[0x15] = (int)fVar14;
      param_4[0x16] = (int)fVar15;
      auStack_80 = LitMotion_LMotion__Create_2eaa1b4(0);
      auVar16 = FUN_024f4e50(auStack_80,3,*(undefined8 *)PTR_DAT_049c1680);
      auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                          (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)piVar7,
                           *(undefined8 *)PTR_DAT_049c20a0);
      uVar3 = *(undefined8 *)(param_4 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar3,0);
      auStack_70 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                             (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
      uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_70,0);
      puVar2 = PTR_DAT_049c2530;
      auVar16 = auStack_80;
      if ((uVar6 & 1) == 0) {
        *param_4 = 0;
        uVar3 = *(undefined8 *)puVar2;
        *(undefined1 (*) [12])(param_4 + 0x1a) = auStack_70;
        FUN_0235c25c(param_4 + 2,auStack_70,param_4,uVar3);
        return;
      }
      goto LAB_0250070c;
    }
    auStack_70 = *(undefined1 (*) [12])(param_4 + 0x1a);
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
    *param_4 = -1;
  }
  auStack_80 = auVar16;
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_70,0);
  if (*(long *)(param_4 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x12),0);
  auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
  auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(param_4 + 0x12),
                       *(undefined8 *)PTR_DAT_049c20a0);
  uVar3 = *(undefined8 *)(param_4 + 6);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar3,0);
  auVar17 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                      (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
  auStack_70 = auVar17;
  uVar6 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_70,0);
  puVar2 = PTR_DAT_049c2530;
  if ((uVar6 & 1) == 0) {
    *param_4 = 4;
    uVar3 = *(undefined8 *)puVar2;
    *(undefined1 (*) [12])(param_4 + 0x1a) = auStack_70;
    FUN_0235c25c(param_4 + 2,auStack_70,param_4,uVar3);
    return;
  }
LAB_02500ad8:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_70,0);
  *param_4 = -2;
  piVar7 = param_4 + 0x10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_021f190c(piVar7,0);
  piVar7 = param_4 + 0x12;
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
          goto LAB_02500ca0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_02500ca0:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

