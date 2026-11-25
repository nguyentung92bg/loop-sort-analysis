/* IL2CPP: NoInternetMonitor.<TryAgain>d__7$$MoveNext
void NoInternetMonitor__TryAgain_d__7__MoveNext (NoInternetMonitor__TryAgain_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoInternetMonitor.<TryAgain>d__7$$MoveNext
   void NoInternetMonitor__TryAgain_d__7__MoveNext (NoInternetMonitor__TryAgain_d__7_o __this, const
   MethodInfo* method); */

void NoInternetMonitor__TryAgain_d__7__MoveNext_244ee9c(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b8c0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4760);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4b8c0 = 1;
  }
  lVar5 = *(long *)(param_1 + 4);
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 8);
    uStack_50 = *(undefined8 *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar5 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_60 = ConnectivityModule__ProbeAsync_25316f8(*(long *)(lVar5 + 0x98),0);
    FUN_0235b0c0(auStack_60,&cStack_40,*(undefined8 *)PTR_DAT_049c4778);
    uStack_50 = CONCAT71(uStack_3f,cStack_40);
    lVar6 = *(long *)PTR_DAT_049c4770;
    uStack_48 = uStack_38;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    auVar1 = auStack_60;
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = uStack_48;
      *(undefined8 *)(param_1 + 6) = uStack_50;
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c4760);
      return;
    }
  }
  auStack_60 = auVar1;
  FUN_0235b3fc(&uStack_50,&cStack_40,*(undefined8 *)PTR_DAT_049c4768);
  if (cStack_40 == '\0') {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar5 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlayWarning_25355b0(*(long *)(lVar5 + 0xa0),0);
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    NoInternetMonitor__Close_244edac(lVar5);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

