/* IL2CPP: ConveyorArrowSystem.<CreateArrows>d__11$$MoveNext
void ConveyorArrowSystem__CreateArrows_d__11__MoveNext (ConveyorArrowSystem__CreateArrows_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorArrowSystem.<CreateArrows>d__11$$MoveNext
   void ConveyorArrowSystem__CreateArrows_d__11__MoveNext (ConveyorArrowSystem__CreateArrows_d__11_o
   __this, const MethodInfo* method); */

void ConveyorArrowSystem__CreateArrows_d__11__MoveNext_24b1ec0(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4bb6b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ba0);
    FUN_021f03f8(PTR_DAT_049c6b78);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bb6b = 1;
  }
  lVar8 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar12 = (float)Conveyor__get_ActiveLength_24b03a0();
    param_1[6] = (int)fVar12;
    if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar13 = *(float *)(*(long *)(lVar8 + 0x30) + 0x48);
    if (cRam0000000004f49d58 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f49d58 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar12 = fVar12 / fVar13;
    iVar3 = -0x80000000;
    if ((float)(int)fVar12 != INFINITY) {
      iVar3 = (int)fVar12;
    }
    param_1[7] = iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        ConveyorArrowSystem__RentArrow_24b1ce8
                  (lVar8,1.0 <= *(double *)(*(long *)(lVar8 + 0x48) + 0x168));
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[7]);
    }
    puVar1 = PTR_DAT_049b5138;
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar10,0,0);
    thunk_FUN_021f190c(auStack_60,0);
    uVar2 = auStack_60._8_8_;
    uVar10 = auStack_60._0_8_;
    auStack_70 = auStack_60;
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
    if ((long *)uVar10 != (long *)0x0) {
      lVar5 = *(long *)uVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025b20f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(uVar10,*(long *)PTR_DAT_049b54e0,0);
LAB_025b20f0:
      iVar3 = (*(code *)*puVar4)(uVar10,uVar2 & 0xffffffff,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c6ba0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025b2188;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b2188:
    (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
  }
  puVar1 = PTR_DAT_049c6b78;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (1.0 <= *(double *)(*(long *)(lVar8 + 0x48) + 0x168)) {
    iVar3 = param_1[7];
    if (0 < iVar3) {
      fVar12 = (float)param_1[6];
      iVar9 = 0;
      do {
        if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar10 = Dreamteck_Splines_SplineComputer__Travel_2349410
                           (0,(fVar12 / (float)iVar3) * (float)iVar9,*(long *)(lVar8 + 0x38),1,0);
        if (*(long *)(lVar8 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(lVar8 + 0x58),iVar9,auStack_60,*(undefined8 *)puVar1);
        if ((long *)auStack_60._0_8_ == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        (**(code **)(*(long *)auStack_60._0_8_ + 0x2e8))
                  (uVar10,auStack_60._0_8_,0,0,*(undefined8 *)(*(long *)auStack_60._0_8_ + 0x2f0));
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1[7]);
    }
  }
  else {
    *(undefined1 *)(lVar8 + 0x60) = 1;
    ConveyorArrowSystem__Extend_24b1b94(lVar8);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

