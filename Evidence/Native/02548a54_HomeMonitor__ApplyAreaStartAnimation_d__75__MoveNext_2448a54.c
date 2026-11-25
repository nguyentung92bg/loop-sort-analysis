/* IL2CPP: HomeMonitor.<ApplyAreaStartAnimation>d__75$$MoveNext
void HomeMonitor__ApplyAreaStartAnimation_d__75__MoveNext (HomeMonitor__ApplyAreaStartAnimation_d__75_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<ApplyAreaStartAnimation>d__75$$MoveNext
   void HomeMonitor__ApplyAreaStartAnimation_d__75__MoveNext
   (HomeMonitor__ApplyAreaStartAnimation_d__75_o __this, const MethodInfo* method); */

void HomeMonitor__ApplyAreaStartAnimation_d__75__MoveNext_2448a54(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4b883 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4478);
    FUN_021f03f8(PTR_DAT_049c43c8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c4480);
    bRam0000000004f4b883 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 6);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = *(undefined8 *)(lVar10 + 0x158);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar9,0,0);
    if ((uVar5 & 1) != 0) goto LAB_02548d18;
    if (*(long *)(lVar10 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (*(long *)(lVar10 + 0x158),auStack_40,*(undefined8 *)PTR_DAT_049c43c8);
    if (auStack_40._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(auStack_40._0_8_ + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = Spine_Unity_SkeletonGraphic__get_AnimationState_331b0d0
                       (*(long *)(auStack_40._0_8_ + 0x20),0);
    puVar1 = PTR_DAT_049c4480;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar10 + 0x6c) = 0x3f800000;
    Spine_AnimationState__SetAnimation_32d33f8(lVar10,0,*(undefined8 *)puVar1,0,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x4b0,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar9 = auStack_40._0_8_;
    auStack_50 = auStack_40;
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
    if ((long *)uVar9 != (long *)0x0) {
      lVar10 = *(long *)uVar9;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02548c70;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
LAB_02548c70:
      iVar4 = (*(code *)*puVar6)(uVar9,uVar3 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c4478);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_50._0_8_;
    uVar11 = auStack_50._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02548d08;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02548d08:
    (*(code *)*puVar6)(uVar9,uVar11,puVar6[1]);
  }
LAB_02548d18:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02548da0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_02548da0:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}

