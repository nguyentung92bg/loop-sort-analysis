/* IL2CPP: LevelBuildSystem.<Build>d__15$$MoveNext
void LevelBuildSystem__Build_d__15__MoveNext (LevelBuildSystem__Build_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem.<Build>d__15$$MoveNext
   void LevelBuildSystem__Build_d__15__MoveNext (LevelBuildSystem__Build_d__15_o __this, const
   MethodInfo* method); */

void LevelBuildSystem__Build_d__15__MoveNext_24ddbf0(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bc57 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7908);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049c22d0);
    FUN_021f03f8(PTR_DAT_049c7910);
    FUN_021f03f8(PTR_DAT_049c7740);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049b52e8);
    bRam0000000004f4bc57 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  uStack_70 = 0;
  uStack_68 = 0;
  iVar2 = *param_1;
  uStack_60 = 0;
  lVar8 = *(long *)(param_1 + 4);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_025ddf60;
    }
    if (iVar2 != 1) goto LAB_025ddd38;
    auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_025de104;
  }
  if (iVar2 == 2) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_025de2a8;
  }
  if (iVar2 != 3) {
    if (iVar2 == 4) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_025de6b4;
    }
LAB_025ddd38:
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b3b90);
    UnityEngine_GameObject___ctor_3c1db70(lVar5,*(undefined8 *)PTR_DAT_049b52e8,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar4 = (undefined8 *)(lVar8 + 0x88);
    *puVar4 = uVar3;
    thunk_FUN_021f190c(puVar4);
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar8 + 0x48),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_parent_3c2ded4(lVar5,*puVar4,0);
    lVar5 = *(long *)(lVar8 + 0x40);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_68 = *(undefined8 *)(lVar5 + 0x58);
    uStack_70 = *(undefined8 *)(lVar5 + 0x50);
    uStack_60 = *(undefined8 *)(lVar5 + 0x60);
    lVar5 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                      (&uStack_70,*(undefined8 *)PTR_DAT_049c7740);
    plVar9 = (long *)(lVar8 + 0x90);
    *plVar9 = lVar5;
    thunk_FUN_021f190c(plVar9);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    piVar7 = param_1 + 6;
    *(undefined8 *)piVar7 = *(undefined8 *)(*plVar9 + 0x40);
    thunk_FUN_021f190c(piVar7);
    LevelBuildSystem__CreateSplinePoints_24dbfa8(lVar8,*(undefined8 *)piVar7);
    lVar5 = *plVar9;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lVar5 + 0x24) != '\0') {
      if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Dreamteck_Splines_SplineComputer__Close_2349cc4(*(long *)(lVar8 + 0x38),0);
      lVar5 = *plVar9;
      if (lVar5 == 0) goto LAB_025dde5c;
    }
    iVar2 = -1;
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(lVar5 + 0x2c) <= iVar2) {
        uVar3 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_50 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar3,0,0);
        thunk_FUN_021f190c(auStack_50,0);
        auStack_80 = auStack_50;
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
        uVar3 = auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ == (long *)0x0) goto LAB_025ddf60;
        lVar5 = *(long *)auStack_80._0_8_;
        uVar10 = auStack_80._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_025ddf30;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_025ddf18;
      }
      LevelBuildSystem__ApplySplineSubdivide_24dd310(lVar8);
      lVar5 = *plVar9;
    } while (lVar5 != 0);
LAB_025dde5c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -1;
  goto LAB_025de478;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_025ddf18:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_025ddf4c;
    }
  }
LAB_025ddf30:
  puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025ddf4c:
  iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  if (iVar2 == 0) {
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
    thunk_FUN_021f190c(param_1 + 8,0);
    FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c7908);
    return;
  }
LAB_025ddf60:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025ddfe0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025ddfe0:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Dreamteck_Splines_SplineComputer__RebuildImmediate_23495ec(*(long *)(lVar8 + 0x38),0);
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar11 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar3,0,0);
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_80 = auStack_50;
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
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025de0f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025de0f0:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c7908);
      return;
    }
  }
LAB_025de104:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025de184;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025de184:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  LevelBuildSystem__ApplyBeltLength_24dd644(lVar8);
  LevelBuildSystem__SetCarrierBlockArgs_24dd6bc(lVar8);
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar11 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar3,0,0);
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_80 = auStack_50;
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
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025de294;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025de294:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c7908);
      return;
    }
  }
LAB_025de2a8:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025de328;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025de328:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  LevelBuildSystem__CreateCarriers_24dc434(lVar8,*(undefined8 *)(param_1 + 6));
  LevelBuildSystem__ApplyCameraRotation_24dd598(lVar8);
  if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Dreamteck_Splines_SplineComputer__ResampleTransform_2346af4(*(long *)(lVar8 + 0x38),0);
  if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Dreamteck_Splines_SplineComputer__RebuildImmediate_23495ec(*(long *)(lVar8 + 0x38),0);
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar11 = Cysharp_Threading_Tasks_UniTask__DelayFrame_37c9280(2,8,uVar3,0,0);
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_80 = auStack_50;
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
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025de464;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025de464:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c7908);
      return;
    }
  }
LAB_025de478:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025de534;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025de534:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar9 = *(long **)(lVar8 + 0x78);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7910) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_025de5a4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c7910,0);
LAB_025de5a4:
  (*(code *)*puVar4)(plVar9,0,puVar4[1]);
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar11 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar3,0,0);
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_80 = auStack_50;
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
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025de6a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025de6a0:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c7908);
      return;
    }
  }
LAB_025de6b4:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_80._0_8_;
    uVar10 = auStack_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025de770;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025de770:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar9 = *(long **)(lVar8 + 0x80);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c22d0) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_025de7e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c22d0,0);
LAB_025de7e0:
  (*(code *)*puVar4)(plVar9,0,puVar4[1]);
  piVar7 = param_1 + 6;
  piVar7[0] = 0;
  piVar7[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar7,0);
  FUN_0235afc8(param_1 + 2,0);
  return;
}

