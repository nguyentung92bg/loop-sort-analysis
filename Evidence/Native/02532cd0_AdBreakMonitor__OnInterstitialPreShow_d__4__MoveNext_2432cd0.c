/* IL2CPP: AdBreakMonitor.<OnInterstitialPreShow>d__4$$MoveNext
void AdBreakMonitor__OnInterstitialPreShow_d__4__MoveNext (AdBreakMonitor__OnInterstitialPreShow_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdBreakMonitor.<OnInterstitialPreShow>d__4$$MoveNext
   void AdBreakMonitor__OnInterstitialPreShow_d__4__MoveNext
   (AdBreakMonitor__OnInterstitialPreShow_d__4_o __this, const MethodInfo* method); */

void AdBreakMonitor__OnInterstitialPreShow_d__4__MoveNext_2432cd0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_34 [4];
  
  if ((bRam0000000004f4b7e7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39a8);
    FUN_021f03f8(PTR_DAT_049c39b0);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b7e7 = 1;
  }
  puVar2 = PTR_DAT_049c3958;
  lVar11 = *(long *)(param_1 + 6);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar11 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(*(long *)(lVar11 + 0xa8) + 0x48) == '\0') goto LAB_02532fb8;
    lVar12 = *(long *)(lVar11 + 0x30);
    lVar5 = *(long *)PTR_DAT_049c3958;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    auStack_34[0] = **(undefined1 **)(lVar5 + 0xb8);
    uVar6 = thunk_FUN_0222c66c(lVar5,auStack_34);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar6,uVar6);
    }
    Monitors__Additive_object__26888e8(lVar12,uVar6,0,*(undefined8 *)PTR_DAT_049c39b0);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = System_TimeSpan__FromSeconds_311711c(0x4000000000000000,0);
    puVar2 = PTR_DAT_049b5138;
    uVar13 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar6,1,8,uVar13,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar13 = auStack_50._8_8_;
    uVar6 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar6 != (long *)0x0) {
      lVar5 = *(long *)uVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02532ef4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(uVar6,*(long *)PTR_DAT_049b54e0,0);
LAB_02532ef4:
      iVar4 = (*(code *)*puVar7)(uVar6,uVar13 & 0xffffffff,puVar7[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c39a8);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_60._0_8_;
    uVar14 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02532f8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02532f8c:
    (*(code *)*puVar7)(uVar6,uVar14,puVar7[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__Deactivate_256e214(*(long *)(lVar11 + 0x30),lVar11,0,0);
  auVar1 = auStack_60;
LAB_02532fb8:
  cVar3 = cRam0000000004f49bfa;
  *param_1 = -2;
  auStack_60 = auVar1;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02533040;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02533040:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  return;
}

