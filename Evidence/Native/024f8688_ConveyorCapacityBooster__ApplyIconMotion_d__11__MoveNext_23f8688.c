/* IL2CPP: ConveyorCapacityBooster.<ApplyIconMotion>d__11$$MoveNext
void ConveyorCapacityBooster__ApplyIconMotion_d__11__MoveNext (ConveyorCapacityBooster__ApplyIconMotion_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ConveyorCapacityBooster.<ApplyIconMotion>d__11$$MoveNext
   void ConveyorCapacityBooster__ApplyIconMotion_d__11__MoveNext
   (ConveyorCapacityBooster__ApplyIconMotion_d__11_o __this, const MethodInfo* method); */

void ConveyorCapacityBooster__ApplyIconMotion_d__11__MoveNext_23f8688
               (undefined1 param_1 [16],int param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4b670 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c22f8);
    FUN_021f03f8(PTR_DAT_049c2300);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c2308);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c2310);
    bRam0000000004f4b670 = 1;
  }
  puVar4 = PTR_DAT_049c1680;
  puVar3 = PTR_DAT_049b6110;
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_a0._8_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auVar16 = ZEXT816(0);
  auStack_b0._0_8_ = 0;
  lVar12 = *(long *)(param_4 + 6);
  if (*param_4 == 0) {
    auStack_b0 = *(undefined1 (*) [16])(param_4 + 0xe);
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    *param_4 = -1;
  }
  else {
    if (*param_4 == 1) {
      auStack_b0 = *(undefined1 (*) [16])(param_4 + 0xe);
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[0x10] = 0;
      param_4[0x11] = 0;
      *param_4 = -1;
      auStack_a0 = ZEXT816(0);
      goto LAB_024f8e28;
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar12 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = Monitors__Get_object__26889d0(*(long *)(lVar12 + 0xd8),*(undefined8 *)PTR_DAT_049c2308);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (lVar8,0xbc1c109a,0);
    uVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                       (lVar8,0xcaf67d6a,0);
    *(undefined8 *)(param_4 + 8) = uVar13;
    thunk_FUN_021f190c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar6,auStack_90,*(undefined8 *)PTR_DAT_049c2300);
    if (auStack_90._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = BoosterContainer__GetBoosterView_256bc28(auStack_90._0_8_,6,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
    if (*(long *)(lVar12 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar5 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar12 + 0xc0),0);
    param_4[10] = iVar5;
    param_4[0xb] = param_2;
    param_4[0xc] = param_3;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar15 = UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                           (*(float *)(lVar8 + 0xc) * _UNK_013aa62c,
                            *(float *)(lVar8 + 0x10) * _UNK_013aa62c,
                            *(float *)(lVar8 + 0x14) * _UNK_013aa62c,0);
    auVar16 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)puVar4);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar12 + 200),
                         *(undefined8 *)PTR_DAT_049c1670);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0xe8),0);
    auVar16 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar15,param_2,param_3,param_4[10],param_4[0xb],param_4[0xc],0x3f000000,0);
    auStack_a0 = auVar16;
    auVar16 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)puVar4);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar12 + 0xc0),
                         *(undefined8 *)PTR_DAT_049c20a0);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0xe8),0);
    uVar13 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar12,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(700,0,8,uVar13,0,0);
    thunk_FUN_021f190c(auStack_90,0);
    auStack_b0 = auStack_90;
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
    uVar13 = auStack_b0._0_8_;
    auVar16 = auStack_a0;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_b0._0_8_;
      uVar14 = auStack_b0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_024f8a64;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)puVar2,0);
LAB_024f8a64:
      iVar5 = (*(code *)*puVar7)(uVar13,uVar14,puVar7[1]);
      auVar16 = auStack_a0;
      if (iVar5 == 0) {
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 0xe) = auStack_b0;
        thunk_FUN_021f190c(param_4 + 0xe,0);
        FUN_0235c25c(param_4 + 2,auStack_b0,param_4,*(undefined8 *)PTR_DAT_049c22f8);
        return;
      }
    }
  }
  auStack_a0 = auVar16;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar13 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_b0._0_8_;
    uVar14 = auStack_b0._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_024f8af0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)puVar2,2);
LAB_024f8af0:
    (*(code *)*puVar7)(uVar13,uVar14,puVar7[1]);
  }
  if (*(long *)(param_4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 8),0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar15 = UnityEngine_Transform__get_position_3c2d540(lVar8,0);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  auVar16 = LitMotion_LMotion__Create_2eaa1b4(0);
  auStack_a0 = auVar16;
  auVar16 = FUN_024f4e50(auStack_a0,0x19,*(undefined8 *)puVar4);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar12 + 200),
                       *(undefined8 *)PTR_DAT_049c1670);
  LitMotion_MotionHandleExtensions__AddTo_2eacb44
            (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0xe8),0);
  auVar16 = LitMotion_LMotion__Create_2eaa1b4
                      (param_4[10],param_4[0xb],param_4[0xc],uVar15,param_2,param_3,_UNK_013aa4b8,0)
  ;
  auStack_a0 = auVar16;
  auVar16 = FUN_024f4e50(auStack_a0,0x19,*(undefined8 *)puVar4);
  auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar12 + 0xc0),
                       *(undefined8 *)PTR_DAT_049c20a0);
  LitMotion_MotionHandleExtensions__AddTo_2eacb44
            (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0xe8),0);
  while( true ) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar13 = *(undefined8 *)(lVar12 + 0xe8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = Extensions__HasPlayingMotions_24e6bcc(uVar13,0);
    if ((uVar9 & 1) == 0) break;
    uVar13 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar12,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar13,0,0);
    auStack_90 = auVar16;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_b0 = auStack_90;
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
    uVar13 = auStack_b0._0_8_;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_b0._0_8_;
      uVar14 = auStack_b0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_024f8e14;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)puVar2,0);
LAB_024f8e14:
      iVar5 = (*(code *)*puVar7)(uVar13,uVar14,puVar7[1]);
      if (iVar5 == 0) {
        *param_4 = 1;
        *(undefined1 (*) [16])(param_4 + 0xe) = auStack_b0;
        thunk_FUN_021f190c(param_4 + 0xe,0);
        FUN_0235c25c(param_4 + 2,auStack_b0,param_4,*(undefined8 *)PTR_DAT_049c22f8);
        return;
      }
    }
LAB_024f8e28:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar13 = auStack_b0._0_8_;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_b0._0_8_;
      uVar14 = auStack_b0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_024f8ea0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)puVar2,2);
LAB_024f8ea0:
      (*(code *)*puVar7)(uVar13,uVar14,puVar7[1]);
    }
  }
  lVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetAnimator_3350cf8
                     (*(undefined8 *)(param_4 + 8),0xd490dd47,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_References_AnimatorReference__SetTrigger_3345b68
            (lVar12,*(undefined8 *)PTR_DAT_049c2310,0);
  *param_4 = -2;
  param_4[8] = 0;
  param_4[9] = 0;
  thunk_FUN_021f190c(param_4 + 8,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar11 = *(long **)(param_4 + 2);
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar12 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b56d0) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_024f8fdc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_024f8fdc:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
  return;
}

