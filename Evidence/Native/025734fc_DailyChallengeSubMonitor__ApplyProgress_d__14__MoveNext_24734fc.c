/* IL2CPP: DailyChallengeSubMonitor.<ApplyProgress>d__14$$MoveNext
void DailyChallengeSubMonitor__ApplyProgress_d__14__MoveNext (DailyChallengeSubMonitor__ApplyProgress_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02573f28) */
/* IL2CPP: DailyChallengeSubMonitor.<ApplyProgress>d__14$$MoveNext
   void DailyChallengeSubMonitor__ApplyProgress_d__14__MoveNext
   (DailyChallengeSubMonitor__ApplyProgress_d__14_o __this, const MethodInfo* method); */

void DailyChallengeSubMonitor__ApplyProgress_d__14__MoveNext_24734fc
               (undefined1 param_1 [16],undefined4 param_2,int *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  int **ppiStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  int iStack_6c;
  int *piStack_68;
  
  piStack_68 = param_3;
  if ((bRam0000000004f4b9ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5658);
    FUN_021f03f8(PTR_DAT_049c5660);
    FUN_021f03f8(PTR_DAT_049c5668);
    FUN_021f03f8(PTR_DAT_049c5670);
    FUN_021f03f8(PTR_DAT_049c5678);
    FUN_021f03f8(PTR_DAT_049c2d60);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b9ba = 1;
  }
  puVar6 = PTR_DAT_049c5670;
  puVar5 = PTR_DAT_049c5668;
  puVar4 = PTR_DAT_049b54e0;
  puVar3 = PTR_DAT_049b5138;
  auStack_80._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auVar2 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  iStack_6c = *param_3;
  uStack_98 = 0;
  lVar14 = *(long *)(param_3 + 4);
  if (iStack_6c == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    iStack_6c = -1;
    *param_3 = -1;
LAB_02573638:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_80._0_8_;
      uVar16 = auStack_80._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_025737c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,2);
LAB_025737c0:
      (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                       (lVar14,0x6d8b1339,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar11,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar17 = UnityEngine_RectTransform__get_anchorMax_3c2bd04(lVar11,0);
    uVar18 = DailyChallengeSubMonitor__GetFillProgress_24730b8(lVar14,piStack_68[7]);
    auStack_90 = LitMotion_LMotion__Create_2eaa148(uVar17,param_2,uVar18,0x3f800000,0x3f000000,0);
    auVar19 = FUN_024f4e50(auStack_90,5,*(undefined8 *)PTR_DAT_049c2d70);
    auVar19 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                        (auVar19._0_8_,auVar19._8_8_,lVar11,*(undefined8 *)PTR_DAT_049c2d60);
    uVar10 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar14,0);
    auVar19 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar19._0_8_,auVar19._8_8_ & 0xffffffff,uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_c0 = auVar19;
    thunk_FUN_021f190c(auStack_c0,0);
    auStack_80 = auStack_c0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_80._0_8_;
    auVar19 = auStack_90;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_80._0_8_;
      uVar16 = auStack_80._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0257396c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,0);
LAB_0257396c:
      iVar7 = (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
      auVar19 = auStack_90;
      if (iVar7 == 0) {
        iStack_6c = 1;
        *piStack_68 = 1;
        *(undefined1 (*) [16])(piStack_68 + 8) = auStack_80;
        thunk_FUN_021f190c(piStack_68 + 8,0);
                    /* try { // try from 02573ab4 to 02673c2b has its CatchHandler @ 02573ab4
                       catch() { ... } // from try @ 02573ab4 with catch @ 02573ab4
                       catch() { ... } // from try @ 02573f3c with catch @ 02573ab4
                       catch() { ... } // from try @ 02573ff8 with catch @ 02573ab4
                       catch() { ... } // from try @ 025740a0 with catch @ 02573ab4 */
        FUN_0235c420(piStack_68 + 2,auStack_80,piStack_68,*(undefined8 *)PTR_DAT_049c5658);
        return;
      }
    }
LAB_02573980:
    auStack_90 = auVar19;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_80._0_8_;
      uVar16 = auStack_80._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_025739f8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,2);
LAB_025739f8:
      (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    DailyChallengeSubMonitor__SetProgress_2473030(lVar14,piStack_68[7]);
  }
  else {
    if (iStack_6c == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_3 + 8);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      iStack_6c = -1;
      *param_3 = -1;
      goto LAB_02573980;
    }
    if (iStack_6c == 2) goto LAB_02573a70;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    DailyChallengeSubMonitor__SetProgress_2473030(lVar14,param_3[6]);
    if (piStack_68[6] < piStack_68[7]) {
      uVar10 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar14,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_c0 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(400,0,8,uVar10,0,0);
      thunk_FUN_021f190c(auStack_c0,0);
      auStack_80 = auStack_c0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_80._0_8_;
        uVar16 = auStack_80._8_8_ & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02573ae0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,0);
LAB_02573ae0:
        iVar7 = (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
        if (iVar7 == 0) {
          iStack_6c = 0;
          *piStack_68 = 0;
          *(undefined1 (*) [16])(piStack_68 + 8) = auStack_80;
          thunk_FUN_021f190c(piStack_68 + 8,0);
          FUN_0235c420(piStack_68 + 2,auStack_80,piStack_68,*(undefined8 *)PTR_DAT_049c5658);
          return;
        }
      }
      goto LAB_02573638;
    }
  }
  if (*(long *)(lVar14 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar14 + 0x60),auStack_e0,*(undefined8 *)PTR_DAT_049c5678);
  auStack_c0._8_8_ = auStack_e0._8_8_;
  auStack_c0._0_8_ = auStack_e0._0_8_;
  uStack_a8 = uStack_c8;
  ppiStack_b0 = (int **)uStack_d0;
  *(undefined8 *)(piStack_68 + 0xe) = auStack_e0._8_8_;
  *(undefined8 *)(piStack_68 + 0xc) = auStack_e0._0_8_;
  *(undefined8 *)(piStack_68 + 0x12) = uStack_c8;
  *(undefined8 *)(piStack_68 + 0x10) = uStack_d0;
  thunk_FUN_021f190c(piStack_68 + 0xc,0);
  auStack_c0._8_8_ = &iStack_6c;
  auStack_c0._0_8_ = 0;
  ppiStack_b0 = &piStack_68;
  auVar2 = auStack_90;
  if (iStack_6c != 2) goto LAB_02573c48;
LAB_02573a70:
  ppiStack_b0 = &piStack_68;
  auStack_c0._8_8_ = &iStack_6c;
  auStack_c0._0_8_ = 0;
  iStack_6c = -1;
  auStack_80 = *(undefined1 (*) [16])(piStack_68 + 8);
  piStack_68[8] = 0;
  piStack_68[9] = 0;
  piStack_68[10] = 0;
  piStack_68[0xb] = 0;
  *piStack_68 = -1;
  auStack_90 = auVar2;
  do {
    do {
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar10 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_80._0_8_;
        uVar16 = auStack_80._8_8_ & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    /* try { // try from 02573c2c to 02673c53 has its CatchHandler @ 02574064 */
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_02573c38;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,2);
LAB_02573c38:
        (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
      }
LAB_02573c48:
      do {
        uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (piStack_68 + 0xc,*(undefined8 *)puVar5);
        piVar13 = piStack_68;
        if ((uVar12 & 1) == 0) {
          iVar7 = 0xe;
          goto LAB_02573e3c;
        }
        lVar15 = *(long *)puVar6;
        lVar9 = *(long *)(lVar15 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x135);
        lVar11 = lVar9;
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar9 = *(long *)(lVar15 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x135);
        }
                    /* try { // try from 02573c90 to 02673cbb has its CatchHandler @ 02574060 */
        uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(piVar13 + 0xc,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(auStack_e0,uVar10,uVar17);
        uVar10 = auStack_e0._8_8_;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar14 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = DailyChallenge__ClaimReward_251604c(*(long *)(lVar14 + 0x40),auStack_e0._0_8_,0);
      } while (lVar11 == 0);
                    /* try { // try from 02573cf4 to 02673cfb has its CatchHandler @ 02574054 */
                    /* try { // try from 02573cfc to 02673d07 has its CatchHandler @ 02574058 */
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (uVar10,0x93dbeb55,0);
      lVar15 = *(long *)(lVar14 + 0x58);
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (uVar10,0xbcdc2f95,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02573f38 to 02673f3b has its CatchHandler @ 0257405c */
        FUN_021f06a0();
      }
      UnityEngine_Transform__get_position_3c2d540(lVar9,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 02573d3c to 02673d47 has its CatchHandler @ 0257402c */
      FulfillItemsMonitor__Show_243ebf8(lVar15,lVar11,0);
                    /* try { // try from 02573d4c to 02673d57 has its CatchHandler @ 02574014 */
      uVar10 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar14,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar19 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(300,0,8,uVar10,0,0);
                    /* try { // try from 02573d80 to 02673d8b has its CatchHandler @ 02574034 */
      auStack_e0 = auVar19;
      thunk_FUN_021f190c(auStack_e0,0);
                    /* try { // try from 02573d90 to 02673d9b has its CatchHandler @ 02574010 */
      auStack_80 = auStack_e0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02573dcc to 02673dd7 has its CatchHandler @ 0257403c */
      if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 02573ddc to 02673de7 has its CatchHandler @ 02574020 */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_80._0_8_;
    } while ((long *)auStack_80._0_8_ == (long *)0x0);
    lVar11 = *(long *)auStack_80._0_8_;
    uVar16 = auStack_80._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 02573e10 to 02673e1b has its CatchHandler @ 02574040 */
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02573ec0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
                    /* try { // try from 02573e20 to 02673e2b has its CatchHandler @ 0257401c */
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar4,0);
LAB_02573ec0:
                    /* try { // try from 02573ec8 to 02673ed3 has its CatchHandler @ 02574030 */
    iVar7 = (*(code *)*puVar8)(uVar10,uVar16,puVar8[1]);
    if (iVar7 == 0) {
                    /* try { // try from 02573ed8 to 02673ee3 has its CatchHandler @ 02574004 */
      iStack_6c = 2;
      *piStack_68 = 2;
      *(undefined1 (*) [16])(piStack_68 + 8) = auStack_80;
      thunk_FUN_021f190c(piStack_68 + 8,0);
                    /* try { // try from 02573ef8 to 02673f0b has its CatchHandler @ 02574068 */
      FUN_0235c420(piStack_68 + 2,auStack_80,piStack_68,*(undefined8 *)PTR_DAT_049c5658);
      iVar7 = 8;
LAB_02573e3c:
                    /* try { // try from 02573e3c to 02673e47 has its CatchHandler @ 02574028 */
      if (iStack_6c < 0) {
                    /* try { // try from 02573e4c to 02673e5b has its CatchHandler @ 02574008 */
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (*ppiStack_b0 + 0xc,*(undefined8 *)PTR_DAT_049c5660);
      }
                    /* try { // try from 02573e6c to 02673e77 has its CatchHandler @ 02574024 */
      if ((iVar7 == 0xe) || (iVar7 == 0)) {
                    /* try { // try from 02573e7c to 02673e87 has its CatchHandler @ 0257400c */
        *piStack_68 = -2;
        piStack_68[0xe] = 0;
        piStack_68[0xf] = 0;
        piStack_68[0xc] = 0;
        piStack_68[0xd] = 0;
        piStack_68[0x12] = 0;
        piStack_68[0x13] = 0;
        piStack_68[0x10] = 0;
        piStack_68[0x11] = 0;
        FUN_0235afc8(piStack_68 + 2,0);
      }
                    /* try { // try from 02573e98 to 02673ea3 has its CatchHandler @ 02574038 */
                    /* try { // try from 02573ea8 to 02673eb7 has its CatchHandler @ 02574018 */
      return;
    }
  } while( true );
}

