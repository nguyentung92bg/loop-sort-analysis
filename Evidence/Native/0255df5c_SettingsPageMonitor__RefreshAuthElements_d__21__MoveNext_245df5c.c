/* IL2CPP: SettingsPageMonitor.<RefreshAuthElements>d__21$$MoveNext
void SettingsPageMonitor__RefreshAuthElements_d__21__MoveNext (SettingsPageMonitor__RefreshAuthElements_d__21_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor.<RefreshAuthElements>d__21$$MoveNext
   void SettingsPageMonitor__RefreshAuthElements_d__21__MoveNext
   (SettingsPageMonitor__RefreshAuthElements_d__21_o __this, const MethodInfo* method); */

void SettingsPageMonitor__RefreshAuthElements_d__21__MoveNext_245df5c(int *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  int *piStack_c8;
  int **ppiStack_c0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  char acStack_78 [4];
  int iStack_74;
  int *piStack_70;
  char acStack_64 [4];
  
  piStack_70 = param_1;
  if ((bRam0000000004f4b936 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ec0);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c4e78);
    FUN_021f03f8(PTR_DAT_049c4ec8);
    FUN_021f03f8(PTR_DAT_049c4ed0);
    FUN_021f03f8(PTR_DAT_049c4ed8);
    FUN_021f03f8(PTR_DAT_049c4ee0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c4ee8);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4b936 = 1;
  }
  puVar9 = PTR_DAT_049c4ee0;
  puVar8 = PTR_DAT_049c4ed8;
  puVar7 = PTR_DAT_049c4ec8;
  puVar6 = PTR_DAT_049c4e78;
  puVar5 = PTR_DAT_049c4778;
  puVar4 = PTR_DAT_049c4770;
  puVar3 = PTR_DAT_049c4768;
  puVar2 = PTR_DAT_049b6110;
  acStack_78[0] = '\0';
  uStack_88 = 0;
  uStack_90 = 0;
  iStack_74 = *param_1;
  lVar19 = *(long *)(param_1 + 4);
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_a8 = 0;
  if (iStack_74 != 0) {
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar19 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar19 + 0x100),&iStack_f0,*(undefined8 *)PTR_DAT_049c4ee8);
    piStack_c8 = (int *)uStack_e8;
    ppiStack_c0 = (int **)uStack_e0;
    *(undefined8 *)(piStack_70 + 8) = uStack_e8;
    *(ulong *)(piStack_70 + 6) = CONCAT44(uStack_ec,iStack_f0);
    *(undefined8 *)(piStack_70 + 10) = uStack_e0;
    thunk_FUN_021f190c(piStack_70 + 6,0);
    piStack_c8 = &iStack_74;
    lStack_d0 = 0;
    ppiStack_c0 = &piStack_70;
    param_1 = piStack_70;
    if (iStack_74 != 0) goto LAB_0255e228;
  }
  ppiStack_c0 = &piStack_70;
  piStack_c8 = &iStack_74;
  lStack_d0 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0x16);
  uStack_90 = *(undefined8 *)(param_1 + 0x14);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iStack_74 = -1;
  *param_1 = -1;
  do {
    FUN_0235b3fc(&uStack_90,&iStack_f0,*(undefined8 *)puVar3);
    if (*(long *)(piStack_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    cVar10 = (char)iStack_f0;
    acStack_64[0] = (char)iStack_f0;
    iStack_f0 = piStack_70[0x12];
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(piStack_70 + 0x10),&iStack_f0,acStack_64,*(undefined8 *)puVar7);
    acStack_78[0] = cVar10;
    piVar13 = piStack_70 + 0x10;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_021f190c(piVar13,0);
    if (acStack_78[0] == '\0') {
      uVar14 = *(undefined8 *)(piStack_70 + 0xe);
    }
    else {
      uVar14 = Phrase__get_SignOut_252f10c(0);
      if (acStack_78[0] != '\0') {
        iVar12 = piStack_70[0xc];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar15 = Extensions__IsAutoLinkType_24e7828(iVar12,0);
        if ((uVar15 & 1) != 0) {
          uVar14 = Phrase__get_Connected_252f090(0);
        }
      }
    }
    iVar12 = piStack_70[0xc];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar15 = Extensions__ToTextRole_24e842c(iVar12,0);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar15,uVar15 & 0xffffffff);
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
              (lVar19,uVar15 & 0xffffffff,uVar14,0);
    piVar13 = piStack_70 + 0xe;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_021f190c(piVar13,0);
LAB_0255e228:
    uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (piStack_70 + 6,*(undefined8 *)puVar8);
    piVar13 = piStack_70;
    if ((uVar15 & 1) == 0) {
      iVar12 = 0xe;
      goto LAB_0255e4a4;
    }
    lVar20 = *(long *)puVar9;
    lVar16 = *(long *)(lVar20 + 0x20);
    uVar1 = *(ushort *)(lVar16 + 0x135);
    lVar17 = lVar16;
    if ((uVar1 & 1) == 0) {
      lVar17 = FUN_02229718();
      lVar16 = *(long *)(lVar20 + 0x20);
      uVar1 = *(ushort *)(lVar16 + 0x135);
    }
    uVar11 = *(undefined4 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar16 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(piVar13 + 6,
                                *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&iStack_f0,uVar14,uVar11);
    piStack_70[0xc] = iStack_f0;
    uVar14 = Phrase__get_SignInWith_252f280(0);
    iVar12 = piStack_70[0xc];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar18 = Extensions__ToDisplayName_24e7724(iVar12,0);
    uVar14 = System_String__Format_2f73700(uVar14,uVar18,0);
    *(undefined8 *)(piStack_70 + 0xe) = uVar14;
    thunk_FUN_021f190c();
    if (*(long *)(lVar19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iStack_f0 = piStack_70[0xc];
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
              (*(long *)(lVar19 + 0x108),&iStack_f0,acStack_78,*(undefined8 *)puVar6);
    if (acStack_78[0] == '\0') {
      uVar14 = *(undefined8 *)(piStack_70 + 0xe);
    }
    else {
      uVar14 = Phrase__get_SignOut_252f10c(0);
      if (acStack_78[0] != '\0') {
        iVar12 = piStack_70[0xc];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar15 = Extensions__IsAutoLinkType_24e7828(iVar12,0);
        if ((uVar15 & 1) != 0) {
          uVar14 = Phrase__get_Connected_252f090(0);
        }
      }
    }
    iVar12 = piStack_70[0xc];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = Extensions__ToTextRole_24e842c(iVar12,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar19,uVar11,uVar14,0);
    *(undefined8 *)(piStack_70 + 0x10) = *(undefined8 *)(lVar19 + 0x108);
    thunk_FUN_021f190c();
    piStack_70[0x12] = piStack_70[0xc];
    if (*(long *)(lVar19 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar21 = AccountModule__IsLinked_253b13c(*(long *)(lVar19 + 0xa8),piStack_70[0xc],0,0);
    auStack_a0 = auVar21;
    FUN_0235b0c0(auStack_a0,&iStack_f0,*(undefined8 *)puVar5);
    lVar16 = *(long *)puVar4;
    uStack_90 = CONCAT44(uStack_ec,iStack_f0);
    lVar17 = *(long *)(lVar16 + 0x20);
    uStack_88 = uStack_e8;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0x80));
    lVar17 = *(long *)(lVar16 + 0x20);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_02229718();
    }
    iVar12 = FUN_0235b2a0(uVar14,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
  } while (iVar12 != 0);
  iStack_74 = 0;
  *piStack_70 = 0;
  *(undefined8 *)(piStack_70 + 0x16) = uStack_88;
  *(undefined8 *)(piStack_70 + 0x14) = uStack_90;
  thunk_FUN_021f190c(piStack_70 + 0x14,0);
  FUN_0235c420(piStack_70 + 2,&uStack_90,piStack_70,*(undefined8 *)PTR_DAT_049c4ec0);
  iVar12 = 10;
LAB_0255e4a4:
  if (*piStack_c8 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (*ppiStack_c0 + 6,*(undefined8 *)PTR_DAT_049c4ed0);
  }
  if (lStack_d0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if ((iVar12 == 0xe) || (iVar12 == 0)) {
    piStack_70[8] = 0;
    piStack_70[9] = 0;
    piStack_70[10] = 0;
    piStack_70[0xb] = 0;
    piStack_70[6] = 0;
    piStack_70[7] = 0;
    *piStack_70 = -2;
    FUN_0235afc8(piStack_70 + 2,0);
  }
  return;
}

