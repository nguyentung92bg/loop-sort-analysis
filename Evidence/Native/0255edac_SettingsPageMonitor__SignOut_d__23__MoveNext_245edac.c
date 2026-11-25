/* IL2CPP: SettingsPageMonitor.<SignOut>d__23$$MoveNext
void SettingsPageMonitor__SignOut_d__23__MoveNext (SettingsPageMonitor__SignOut_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor.<SignOut>d__23$$MoveNext
   void SettingsPageMonitor__SignOut_d__23__MoveNext (SettingsPageMonitor__SignOut_d__23_o __this,
   const MethodInfo* method); */

void SettingsPageMonitor__SignOut_d__23__MoveNext_245edac(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_a0;
  uint *puStack_98;
  long *plStack_90;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  uint uStack_24;
  
  if ((bRam0000000004f4b938 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4f18);
    FUN_021f03f8(PTR_DAT_049c4920);
    FUN_021f03f8(PTR_DAT_049c4928);
    FUN_021f03f8(PTR_DAT_049c4930);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4b938 = 1;
  }
  puVar2 = PTR_DAT_049b6110;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 6);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_78 = 0;
  if (1 < uStack_24) {
    uVar1 = param_1[4];
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Extensions__IsAutoLinkType_24e7828(uVar1,0);
    if ((uVar4 & 1) != 0) goto LAB_0255f298;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_48 + 0x111) = 1;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  lVar5 = lStack_48;
  puStack_98 = &uStack_24;
  plStack_90 = &lStack_48;
  uStack_a0 = 0;
  if (uStack_24 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uStack_24 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0255f064:
    FUN_0235b3fc(&uStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4768);
    *(undefined1 *)((long)param_1 + 0x21) = uStack_40;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_48 + 0xe0),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
    if (*(char *)((long)param_1 + 0x21) != '\0') {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_48 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_48 + 0xf0),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar5,1,0);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_48 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_70 = AccountModule__Unlink_253b384(*(long *)(lStack_48 + 0xa8),param_1[4],0,0);
      FUN_0235b0c0(auStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c4778);
      uStack_60 = CONCAT71(uStack_3f,uStack_40);
      lVar10 = *(long *)PTR_DAT_049c4770;
      uStack_58 = uStack_38;
      lVar5 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar7 = thunk_FUN_0224e54c(&uStack_60,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
      lVar5 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
      if (iVar3 != 0) goto LAB_0255f17c;
      uStack_24 = 1;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xc) = uStack_58;
      *(undefined8 *)(param_1 + 10) = uStack_60;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c420(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c4f18);
      goto LAB_0255f21c;
    }
LAB_0255f19c:
    iVar3 = 0xd;
  }
  else {
    if (uStack_24 == 1) {
      uStack_58 = *(undefined8 *)(param_1 + 0xc);
      uStack_60 = *(undefined8 *)(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      uStack_24 = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_0255f17c:
      FUN_0235b3fc(&uStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4768);
      *(undefined1 *)(param_1 + 8) = uStack_40;
      goto LAB_0255f19c;
    }
    if (*(int *)(*(long *)PTR_DAT_049c4930 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___Create_27df7e4
                      (*(undefined8 *)PTR_DAT_049c4920);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar8 = (undefined8 *)(lVar5 + 0xf8);
    *puVar8 = uVar7;
    thunk_FUN_021f190c(puVar8);
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_48 + 0xe0),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar5,1,0);
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = *(undefined8 *)(lStack_48 + 0xe0);
    uVar7 = Phrase__get_SignOutFrom_252f2fc(0);
    uVar1 = param_1[4];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = Extensions__ToDisplayName_24e7724(uVar1,0);
    uVar7 = System_String__Format_2f73700(uVar7,uVar6,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar9,0x993134c1,uVar7,0);
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___get_Task_27dfe9c
              (*(long *)(lStack_48 + 0xf8),&uStack_40,*(undefined8 *)PTR_DAT_049c4928);
    auStack_70._0_8_ = CONCAT71(uStack_3f,uStack_40);
    auStack_70._8_8_ = uStack_38;
    FUN_0235b0c0(auStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c4778);
    uStack_60 = CONCAT71(uStack_3f,uStack_40);
    lVar10 = *(long *)PTR_DAT_049c4770;
    uStack_58 = uStack_38;
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    if (iVar3 != 0) goto LAB_0255f064;
    uStack_24 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = uStack_58;
    *(undefined8 *)(param_1 + 10) = uStack_60;
    thunk_FUN_021f190c(param_1 + 10,0);
    FUN_0235c420(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c4f18);
LAB_0255f21c:
    iVar3 = 8;
  }
  FUN_0201afa8(&uStack_a0);
  lVar5 = lStack_48;
  if ((iVar3 != 0xd) && (iVar3 != 0)) {
    return;
  }
  if (*(char *)((long)param_1 + 0x21) != '\0') {
    uVar1 = param_1[4];
    if ((char)param_1[8] == '\0') {
      uVar7 = Phrase__get_SignOutFail_252f3f4(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      SettingsPageMonitor__ShowAuthInfo_245d990(lVar5,uVar1,0x18319ff2,uVar7);
    }
    else {
      uVar7 = Phrase__get_SignedOut_252f204(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      SettingsPageMonitor__ShowAuthInfo_245d990(lVar5,uVar1,0x9e8b7543,uVar7);
    }
  }
LAB_0255f298:
  *param_1 = 0xfffffffe;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

