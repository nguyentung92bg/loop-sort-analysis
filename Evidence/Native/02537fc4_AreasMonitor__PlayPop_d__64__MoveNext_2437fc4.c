/* IL2CPP: AreasMonitor.<PlayPop>d__64$$MoveNext
void AreasMonitor__PlayPop_d__64__MoveNext (AreasMonitor__PlayPop_d__64_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor.<PlayPop>d__64$$MoveNext
   void AreasMonitor__PlayPop_d__64__MoveNext (AreasMonitor__PlayPop_d__64_o __this, const
   MethodInfo* method); */

void AreasMonitor__PlayPop_d__64__MoveNext_2437fc4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b80b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c40);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b80b = 1;
  }
  puVar3 = PTR_DAT_049c1680;
  puVar2 = PTR_DAT_049c1670;
  puVar1 = PTR_DAT_049b5138;
  auStack_60._8_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_70._0_8_ = 0;
  auVar12 = ZEXT816(0);
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      auStack_70 = auVar12;
      goto LAB_02538438;
    }
    if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4
                      (*(long *)(param_1 + 4),0);
    piVar9 = param_1 + 10;
    *(undefined8 *)piVar9 = uVar5;
    thunk_FUN_021f190c(piVar9,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    auStack_70 = LitMotion_LMotion__Create_2eaa1b4(0);
    auVar12 = FUN_024f4e50(auStack_70,5,*(undefined8 *)puVar3);
    auVar12 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(param_1 + 8),
                         *(undefined8 *)puVar2);
    auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)piVar9,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    auStack_60 = auStack_50;
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
    uVar5 = auStack_60._0_8_;
    auVar12 = auStack_70;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02538218;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02538218:
      iVar4 = (*(code *)*puVar6)(uVar5,uVar10,puVar6[1]);
      auVar12 = auStack_70;
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c3c40);
        return;
      }
    }
  }
  auStack_70 = auVar12;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025382ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025382ac:
    (*(code *)*puVar6)(uVar5,uVar10,puVar6[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  fVar11 = (float)param_1[6];
  lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  auVar12 = LitMotion_LMotion__Create_2eaa1b4
                      (*(float *)(lVar7 + 0xc) * fVar11,*(float *)(lVar7 + 0x10) * fVar11,
                       *(float *)(lVar7 + 0x14) * fVar11,0);
  auStack_70 = auVar12;
  auVar12 = FUN_024f4e50(auStack_70,0x1a,*(undefined8 *)puVar3);
  auVar12 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)puVar2);
  auVar12 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = auVar12;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_60 = auStack_50;
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
  uVar5 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02538424;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02538424:
    iVar4 = (*(code *)*puVar6)(uVar5,uVar10,puVar6[1]);
    if (iVar4 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c3c40);
      return;
    }
  }
LAB_02538438:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025384b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025384b8:
    (*(code *)*puVar6)(uVar5,uVar10,puVar6[1]);
  }
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

