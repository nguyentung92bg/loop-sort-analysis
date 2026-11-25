/* IL2CPP: TutorialSystem.<HandleTutorial>d__12$$MoveNext
void TutorialSystem__HandleTutorial_d__12__MoveNext (TutorialSystem__HandleTutorial_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TutorialSystem.<HandleTutorial>d__12$$MoveNext
   void TutorialSystem__HandleTutorial_d__12__MoveNext (TutorialSystem__HandleTutorial_d__12_o
   __this, const MethodInfo* method); */

void TutorialSystem__HandleTutorial_d__12__MoveNext_24e15a4(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bc6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c79f0);
    FUN_021f03f8(PTR_DAT_049c79f8);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c7a00);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c7a08);
    FUN_021f03f8(PTR_DAT_049c7a10);
    FUN_021f03f8(PTR_DAT_049c7a18);
    FUN_021f03f8(PTR_DAT_049c7a20);
                    /* try { // try from 025e1640 to 026e1703 has its CatchHandler @ 025e1640
                       catch() { ... } // from try @ 025e1640 with catch @ 025e1640
                       catch() { ... } // from try @ 025e1ab0 with catch @ 025e1640
                       catch() { ... } // from try @ 025e1b54 with catch @ 025e1640
                       catch() { ... } // from try @ 025e1c00 with catch @ 025e1640
                       catch() { ... } // from try @ 025e1c78 with catch @ 025e1640 */
    FUN_021f03f8(PTR_DAT_049c7a28);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4bc6c = 1;
  }
  uVar1 = *param_1;
  lVar11 = *(long *)(param_1 + 4);
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (2 < uVar1) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b38 to 026e1b3b has its CatchHandler @ 025e1bb4 */
      FUN_021f06a0();
    }
    if (*(long *)(lVar11 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b3c to 026e1b3f has its CatchHandler @ 025e1bb0 */
      FUN_021f06a0();
    }
    plVar4 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(lVar11 + 0x48),0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b40 to 026e1b43 has its CatchHandler @ 025e1bd0 */
      FUN_021f06a0();
    }
    uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if ((uVar5 & 1) == 0) goto LAB_025e17b0;
  }
  puVar2 = PTR_DAT_049b5310;
  if (uVar1 == 0) {
                    /* try { // try from 025e1714 to 026e1723 has its CatchHandler @ 025e1ba4 */
    uStack_48 = *(undefined8 *)(param_1 + 8);
    uStack_50 = *(undefined8 *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 0xffffffff;
LAB_025e1728:
                    /* try { // try from 025e172c to 026e1733 has its CatchHandler @ 025e1ba0 */
    FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c4768);
LAB_025e1740:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b34 to 026e1b37 has its CatchHandler @ 025e1bc0 */
      FUN_021f06a0();
    }
  }
  else {
    if (uVar1 == 1) {
      uStack_48 = *(undefined8 *)(param_1 + 8);
      uStack_50 = *(undefined8 *)(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 0xffffffff;
LAB_025e16f8:
                    /* try { // try from 025e1704 to 026e170b has its CatchHandler @ 025e1bbc */
      FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c4768);
      goto LAB_025e1740;
    }
    if (uVar1 == 2) {
      uStack_48 = *(undefined8 *)(param_1 + 8);
      uStack_50 = *(undefined8 *)(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 0xffffffff;
LAB_025e16c8:
      FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c4768);
      goto LAB_025e1740;
    }
                    /* try { // try from 025e17e0 to 026e17eb has its CatchHandler @ 025e1b90 */
    lVar7 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x60,0);
    if (iVar3 == 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b48 to 026e1b4b has its CatchHandler @ 025e1b98 */
        FUN_021f06a0();
      }
      if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b50 to 026e1b53 has its CatchHandler @ 025e1b88 */
        FUN_021f06a0();
      }
                    /* try { // try from 025e1904 to 026e19cf has its CatchHandler @ 025e1bc8 */
      auStack_60 = TutorialModule__TryPlay_object__26e2054
                             (*(long *)(lVar11 + 0x30),0,1,*(undefined8 *)(lVar11 + 0x20),
                              *(undefined8 *)PTR_DAT_049c7a10);
      FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4778);
      lVar10 = *(long *)PTR_DAT_049c4770;
      uStack_48 = uStack_38;
      uStack_50 = uStack_40;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar8 = thunk_FUN_0224e54c(&uStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 8) = uStack_48;
        *(undefined8 *)(param_1 + 6) = uStack_50;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c79f8);
        return;
      }
      goto LAB_025e1728;
    }
                    /* try { // try from 025e180c to 026e180f has its CatchHandler @ 025e1b60 */
                    /* try { // try from 025e1810 to 026e1823 has its CatchHandler @ 025e1b8c */
    if (iVar3 == 1) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b44 to 026e1b47 has its CatchHandler @ 025e1bac */
        FUN_021f06a0();
      }
      if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b4c to 026e1b4f has its CatchHandler @ 025e1bb8 */
        FUN_021f06a0();
      }
                    /* try { // try from 025e1828 to 026e183f has its CatchHandler @ 025e1bb8 */
      auStack_60 = TutorialModule__TryPlay_object__26e2054
                             (*(long *)(lVar11 + 0x30),0,1,*(undefined8 *)(lVar11 + 0x20),
                              *(undefined8 *)PTR_DAT_049c7a18);
                    /* try { // try from 025e1850 to 026e1857 has its CatchHandler @ 025e1b84 */
      FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4778);
                    /* try { // try from 025e1858 to 026e186b has its CatchHandler @ 025e1b80 */
      lVar10 = *(long *)PTR_DAT_049c4770;
      uStack_48 = uStack_38;
      uStack_50 = uStack_40;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 025e1878 to 026e187f has its CatchHandler @ 025e1b7c */
        lVar7 = FUN_02229718();
      }
                    /* try { // try from 025e1884 to 026e188f has its CatchHandler @ 025e1b78 */
      uVar8 = thunk_FUN_0224e54c(&uStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
                    /* try { // try from 025e1890 to 026e18a7 has its CatchHandler @ 025e1b74 */
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar3 == 0) {
                    /* try { // try from 025e18c0 to 026e18c3 has its CatchHandler @ 025e1b5c */
                    /* try { // try from 025e18c4 to 026e18df has its CatchHandler @ 025e1b70 */
        *param_1 = 1;
        *(undefined8 *)(param_1 + 8) = uStack_48;
        *(undefined8 *)(param_1 + 6) = uStack_50;
        thunk_FUN_021f190c(param_1 + 6,0);
                    /* try { // try from 025e18e4 to 026e18ef has its CatchHandler @ 025e1b6c */
        FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c79f8);
        return;
      }
      goto LAB_025e16f8;
    }
                    /* try { // try from 025e19e0 to 026e1a67 has its CatchHandler @ 025e1bcc */
    lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7a28);
    System_Object___ctor_3142338(lVar7,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e1b1c with catch @ 025e1b54
                       try { // try from 025e1b54 to 026e1be7 has its CatchHandler @ 025e1640 */
      FUN_021f06a0();
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e1b04 with catch @ 025e1b58 */
      FUN_021f06a0();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e18c0 with catch @ 025e1b5c */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x38);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e180c with catch @ 025e1b60 */
      FUN_021f06a0();
    }
    uVar5 = FeatureSheet__TryGetUnlockedFeature_255fc80(lVar10,iVar3 + 1,lVar7 + 0x10,0);
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(lVar11 + 0x30);
      uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c79f0);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar8,lVar7,*(undefined8 *)PTR_DAT_049c7a20,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e1784 with catch @ 025e1b64 */
        FUN_021f06a0();
      }
      auStack_60 = TutorialModule__TryPlay_object__26e2054
                             (lVar10,uVar8,1,*(undefined8 *)(lVar11 + 0x20),
                              *(undefined8 *)PTR_DAT_049c7a08);
                    /* try { // try from 025e1a74 to 026e1a93 has its CatchHandler @ 025e1bd0 */
      FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4778);
      lVar10 = *(long *)PTR_DAT_049c4770;
      uStack_48 = uStack_38;
      uStack_50 = uStack_40;
      lVar7 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 025e1aac to 026e1aaf has its CatchHandler @ 025e1ba8 */
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 025e1ab0 to 026e1b03 has its CatchHandler @ 025e1640 */
        lVar7 = FUN_02229718();
      }
      uVar8 = thunk_FUN_0224e54c(&uStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar3 == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 8) = uStack_48;
        *(undefined8 *)(param_1 + 6) = uStack_50;
                    /* try { // try from 025e1b04 to 026e1b0f has its CatchHandler @ 025e1b58 */
        thunk_FUN_021f190c(param_1 + 6,0);
                    /* try { // try from 025e1b1c to 026e1b2b has its CatchHandler @ 025e1b54 */
        FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c79f8);
        return;
      }
      goto LAB_025e16c8;
    }
  }
                    /* try { // try from 025e1744 to 026e174f has its CatchHandler @ 025e1b68 */
  plVar4 = *(long **)(lVar11 + 0x60);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e1b30 to 026e1b33 has its CatchHandler @ 025e1bc4 */
    FUN_021f06a0();
  }
  lVar11 = *plVar4;
  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c7a00) {
                    /* try { // try from 025e1798 to 026e17b7 has its CatchHandler @ 025e1b9c */
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_025e17a0;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 025e1784 to 026e1787 has its CatchHandler @ 025e1b64 */
  puVar6 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049c7a00,0);
LAB_025e17a0:
  (*(code *)*puVar6)(plVar4,0,puVar6[1]);
LAB_025e17b0:
  *param_1 = 0xfffffffe;
  FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 025e17c4 to 026e17cf has its CatchHandler @ 025e1b94 */
  return;
}

