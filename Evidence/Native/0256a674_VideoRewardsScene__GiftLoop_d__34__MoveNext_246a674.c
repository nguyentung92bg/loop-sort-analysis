/* IL2CPP: VideoRewardsScene.<GiftLoop>d__34$$MoveNext
void VideoRewardsScene__GiftLoop_d__34__MoveNext (VideoRewardsScene__GiftLoop_d__34_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene.<GiftLoop>d__34$$MoveNext
   void VideoRewardsScene__GiftLoop_d__34__MoveNext (VideoRewardsScene__GiftLoop_d__34_o __this,
   const MethodInfo* method); */

void VideoRewardsScene__GiftLoop_d__34__MoveNext_246a674(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b980 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5410);
    FUN_021f03f8(PTR_DAT_049b5190);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b980 = 1;
  }
  puVar3 = PTR_DAT_049b54e0;
  puVar2 = PTR_DAT_049b5190;
  puVar1 = PTR_DAT_049b5138;
  auStack_80._8_8_ = 0;
  iVar4 = *param_1;
  auStack_80._0_8_ = 0;
  lVar10 = *(long *)(param_1 + 6);
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_0256a884;
    }
    if (iVar4 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_0256a93c;
    }
  }
  else {
    if (iVar4 == 2) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_0256abc0;
    }
    if (iVar4 == 3) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_0256ac48;
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 4);
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 0256a784 to 0266a793 has its CatchHandler @ 0256a7a4 */
  auStack_70 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x4b0,1,8,uVar13,0,0);
                    /* catch() { ... } // from try @ 0256a62c with catch @ 0256a794 */
  thunk_FUN_021f190c(auStack_70,0);
                    /* try { // try from 0256a798 to 0266a7af has its CatchHandler @ 0256a7b8 */
                    /* catch() { ... } // from try @ 0256a63c with catch @ 0256a7a4
                       catch() { ... } // from try @ 0256a784 with catch @ 0256a7a4 */
  auStack_80 = auStack_70;
  if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 0256a4e0 with catch @ 0256a7a8 */
                    /* try { // try from 0256a7b0 to 0266a7bb has its CatchHandler @ 0256a3e0 */
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 0256a798 with catch @ 0256a7b8 */
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar13 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
    uVar12 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0256a870;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,0);
LAB_0256a870:
    iVar4 = (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
    if (iVar4 == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5410);
      return;
    }
  }
LAB_0256a884:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  plVar11 = (long *)auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ == (long *)0x0) goto LAB_0256acd0;
  lVar7 = *(long *)auStack_80._0_8_;
  uVar12 = auStack_80._8_8_ & 0xffff;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) goto LAB_0256acb0;
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,2);
LAB_0256acc0:
  do {
    (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
LAB_0256acd0:
    do {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = System_Threading_CancellationToken__get_IsCancellationRequested_316293c(param_1 + 4,0)
      ;
      if ((uVar8 & 1) != 0) {
        *param_1 = -2;
        FUN_0235afc8(param_1 + 2,0);
        return;
      }
      uVar5 = UnityEngine_Random__Range_3c11c94(0x708,3000,0);
      uVar13 = *(undefined8 *)(param_1 + 4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar15 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(uVar5,1,8,uVar13,0,0);
      auStack_70 = auVar15;
      thunk_FUN_021f190c(auStack_70,0);
      auStack_80 = auStack_70;
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
      uVar13 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar12 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0256adec;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,0);
LAB_0256adec:
        iVar4 = (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
        if (iVar4 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5410);
          return;
        }
      }
LAB_0256a93c:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar13 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar12 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0256a9b4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,2);
LAB_0256a9b4:
        (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
      }
      fVar14 = (float)UnityEngine_Random__get_value_3c11d1c(0);
      if (_UNK_013aa8f4 <= fVar14) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar10 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar5 = UnityEngine_Random__Range_3c11c94
                          (0,*(undefined4 *)(*(long *)(lVar10 + 0x50) + 0x18),0);
        auVar15 = VideoRewardsScene__HopGift_246a5a8(lVar10,uVar5,*(undefined8 *)(param_1 + 4));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_70 = auVar15;
        thunk_FUN_021f190c(auStack_70,0);
        auStack_80 = auStack_70;
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
        uVar13 = auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_80._0_8_;
          uVar12 = auStack_80._8_8_ & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0256ac34;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,0);
LAB_0256ac34:
          iVar4 = (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
          if (iVar4 == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
            thunk_FUN_021f190c(param_1 + 8,0);
            FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5410);
            return;
          }
        }
LAB_0256ac48:
        if (cRam0000000004f49bf6 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf6 = '\x01';
        }
        plVar11 = (long *)auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_80._0_8_;
          uVar12 = auStack_80._8_8_ & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_0256aca0;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0256ac88;
        }
        goto LAB_0256acd0;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar15 = VideoRewardsScene__PeekLid_246a4f4(lVar10,*(undefined8 *)(param_1 + 4));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_70 = auVar15;
      thunk_FUN_021f190c(auStack_70,0);
      auStack_80 = auStack_70;
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
      uVar13 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar12 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0256abac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,0);
LAB_0256abac:
        iVar4 = (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
        if (iVar4 == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_80;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5410);
          return;
        }
      }
LAB_0256abc0:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      plVar11 = (long *)auStack_80._0_8_;
    } while ((long *)auStack_80._0_8_ == (long *)0x0);
    lVar7 = *(long *)auStack_80._0_8_;
    uVar12 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) goto LAB_0256acb0;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,2);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0256ac88:
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) goto LAB_0256acb0;
  }
LAB_0256aca0:
  puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar3,2);
  goto LAB_0256acc0;
LAB_0256acb0:
  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
  plVar11 = (long *)auStack_80._0_8_;
  goto LAB_0256acc0;
}

