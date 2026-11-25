/* IL2CPP: SettingsPageMonitor.<SignIn>d__22$$MoveNext
void SettingsPageMonitor__SignIn_d__22__MoveNext (SettingsPageMonitor__SignIn_d__22_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0255eb38) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: SettingsPageMonitor.<SignIn>d__22$$MoveNext
   void SettingsPageMonitor__SignIn_d__22__MoveNext (SettingsPageMonitor__SignIn_d__22_o __this,
   const MethodInfo* method); */

void SettingsPageMonitor__SignIn_d__22__MoveNext_245e6a4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  uint uStack_24;
  
  if ((bRam0000000004f4b937 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ef0);
    FUN_021f03f8(PTR_DAT_049c4ef8);
    FUN_021f03f8(PTR_DAT_049c4f00);
    FUN_021f03f8(PTR_DAT_049c4728);
    FUN_021f03f8(PTR_DAT_049c4730);
    FUN_021f03f8(PTR_DAT_049c4f08);
    FUN_021f03f8(PTR_DAT_049c4f10);
    FUN_021f03f8(PTR_DAT_049c4738);
    bRam0000000004f4b937 = 1;
  }
  uStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  if (1 < uStack_24) {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_48 + 0x111) = 1;
    if (*(long *)(lStack_48 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_48 + 0xf0),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar3,1,0);
    param_1[7] = 1;
  }
  if (uStack_24 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 10);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uStack_24 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0255e88c:
    FUN_0235b3fc(&uStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4728);
    param_1[7] = uStack_40;
    if (uStack_40 != 3) {
LAB_0255e984:
      uVar5 = 0x10;
      goto LAB_0255ea08;
    }
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_90 = AccountModule__MergeAccounts_253b4ac(*(long *)(lStack_48 + 0xa8),0,0);
    FUN_0235b0c0(auStack_90,&uStack_40,*(undefined8 *)PTR_DAT_049c4f10);
    uStack_80 = CONCAT44(uStack_3c,uStack_40);
    lVar6 = *(long *)PTR_DAT_049c4f08;
    uStack_78 = uStack_38;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 != 0) goto LAB_0255e950;
    uStack_24 = 1;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xe) = uStack_78;
    *(undefined8 *)(param_1 + 0xc) = uStack_80;
    thunk_FUN_021f190c(param_1 + 0xc,0);
    FUN_0235c420(param_1 + 2,&uStack_80,param_1,*(undefined8 *)PTR_DAT_049c4ef8);
  }
  else {
    if (uStack_24 == 1) {
      uStack_78 = *(undefined8 *)(param_1 + 0xe);
      uStack_80 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      uStack_24 = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_0255e950:
      FUN_0235b3fc(&uStack_80,&uStack_40,*(undefined8 *)PTR_DAT_049c4f00);
      uVar5 = 1;
      if (uStack_40 != 1) {
        uVar5 = 2;
      }
      uVar1 = 0;
      if (uStack_40 != 0) {
        uVar1 = uVar5;
      }
      param_1[7] = uVar1;
      goto LAB_0255e984;
    }
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_70 = AccountModule__Link_253b260(*(long *)(lStack_48 + 0xa8),param_1[6],0,0);
    FUN_0235b0c0(auStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c4738);
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    lVar6 = *(long *)PTR_DAT_049c4730;
    uStack_58 = uStack_38;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 != 0) goto LAB_0255e88c;
    uStack_24 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 10) = uStack_58;
    *(undefined8 *)(param_1 + 8) = uStack_60;
    thunk_FUN_021f190c(param_1 + 8,0);
    FUN_0235c420(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c4ef0);
  }
  uVar5 = 6;
LAB_0255ea08:
  if ((int)uStack_24 < 0) {
    if ((((lStack_48 == 0) || (*(long *)(lStack_48 + 0xf0) == 0)) ||
        (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_48 + 0xf0),0),
        lVar3 == 0)) || (UnityEngine_GameObject__SetActive_3c1ce34(lVar3,0,0), lStack_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_48 + 0x111) = 0;
  }
  lVar3 = lStack_48;
  if ((uVar5 | 0x10) == 0x10) {
    uVar5 = param_1[7];
    if (uVar5 == 0) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined1 *)(lStack_48 + 0x110) = 1;
      uVar5 = param_1[6];
      uVar4 = Phrase__get_SignedIn_252f188(0);
      SettingsPageMonitor__ShowAuthInfo_245d990(lVar3,uVar5,0x9e8b7543,uVar4);
    }
    else if (uVar5 == 1) {
      uVar5 = param_1[6];
      uVar4 = Phrase__get_SignInFail_252f378(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      SettingsPageMonitor__ShowAuthInfo_245d990(lVar3,uVar5,0x18319ff2,uVar4);
    }
    else if (uVar5 == 2) {
      uVar5 = param_1[6];
      uVar4 = Phrase__get_SignInCancel_252f470(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      SettingsPageMonitor__ShowAuthInfo_245d990(lVar3,uVar5,0x8c922de4,uVar4);
    }
    *param_1 = 0xfffffffe;
    FUN_0235afc8(param_1 + 2,0);
  }
  return;
}

