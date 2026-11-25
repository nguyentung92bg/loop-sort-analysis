/* IL2CPP: PlayingMonitor$$OnGiveUpContinueClicked
void PlayingMonitor__OnGiveUpContinueClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnGiveUpContinueClicked
   void PlayingMonitor__OnGiveUpContinueClicked (PlayingMonitor_o* __this, const MethodInfo*
   method); */

void PlayingMonitor__OnGiveUpContinueClicked_2450c88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auStack_1d0 [80];
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  puVar2 = PTR_DAT_049c48a8;
  if ((bRam0000000004f4b8ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48a0);
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c48a8);
    FUN_021f03f8(PTR_DAT_049c48b0);
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c48b8);
    bRam0000000004f4b8ce = 1;
  }
  lStack_78 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uVar6 = FUN_024f7024(*(undefined8 *)(param_1 + 0x100),&lStack_78,*(undefined8 *)puVar2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((lStack_78 != 0) && (uVar6 = ReviveSystem__GetRevive_24e0f1c(lStack_78,0), lStack_78 != 0)) {
    uVar4 = ReviveSystem__GetContinueBoosterType_24e10e0(lStack_78,0);
    puVar2 = PTR_DAT_049c48b8;
    uStack_118 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_120 = *(undefined8 *)PTR_DAT_049c48b8;
    thunk_FUN_021f190c(&uStack_120);
    uStack_110 = CONCAT44(uStack_110._4_4_,1);
    if (uVar6 != 0) {
      uStack_100 = CONCAT44(*(undefined4 *)(uVar6 + 0x1c),(undefined4)uStack_100);
      func_0x04608620(&uStack_d0,&uStack_120,0x50);
      puVar1 = PTR_DAT_049b5310;
      lVar7 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      uStack_158 = *(undefined8 *)(lVar7 + 0x778);
      uStack_160 = *(undefined8 *)(lVar7 + 0x770);
      uStack_148 = *(undefined8 *)(lVar7 + 0x788);
      uStack_150 = *(undefined8 *)(lVar7 + 0x780);
      iVar5 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_160,0);
      if (iVar5 < 1) {
        lVar7 = *(long *)(param_1 + 0xd0);
        if (lVar7 == 0) goto LAB_02551050;
        func_0x04608620(auStack_1d0,&uStack_d0,0x50);
        uVar9 = EconomyModule__TryConsume_2533778(lVar7,auStack_1d0,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 200) != 0) {
            HapticModule__PlayWarning_25355b0(*(long *)(param_1 + 200),0);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar7 = Monitors__Get_object__26889d0
                                  (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0),
               lVar7 != 0)) {
              ShopMonitor__ShowPopup_245c378(lVar7,*(undefined8 *)puVar2,0);
              return;
            }
          }
          goto LAB_02551050;
        }
        plVar12 = *(long **)(param_1 + 0xf0);
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_138 = uVar6;
        thunk_FUN_021f190c(&uStack_138,uVar6);
        uVar3 = uStack_128;
        uVar6 = uStack_138;
        uStack_130 = (ulong)uVar4;
        uVar9 = uStack_130;
        if (plVar12 == (long *)0x0) goto LAB_02551050;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c48b0) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02550fd8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049c48b0,0);
LAB_02550fd8:
        uStack_68 = uVar9;
        uStack_70 = uVar6;
        uStack_60 = uVar3;
        (*(code *)*puVar8)(plVar12,&uStack_70,puVar8[1]);
      }
      else {
        plVar12 = *(long **)(param_1 + 0xf0);
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_138 = uVar6;
        thunk_FUN_021f190c(&uStack_138,uVar6);
        uStack_130 = (ulong)uVar4;
        if (plVar12 == (long *)0x0) goto LAB_02551050;
        lVar7 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uStack_178 = uStack_130;
        uStack_180 = uStack_138;
        uStack_170 = uStack_128;
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c48b0) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02550f34;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049c48b0,0);
LAB_02550f34:
        uStack_68 = uStack_178;
        uStack_70 = uStack_180;
        uStack_60 = uStack_170;
        (*(code *)*puVar8)(plVar12,&uStack_70,puVar8[1]);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar1;
        }
        lVar7 = *(long *)(lVar7 + 0xb8);
        iVar5 = CloudPrefsInt__get_Value_24e99c0(lVar7 + 0x770,0);
        CloudPrefsInt__set_Value_24e9a2c(lVar7 + 0x770,iVar5 + -1,0);
      }
      if (*(long *)(param_1 + 0x1a0) != 0) {
        uStack_70 = uStack_70 & 0xffffffffffffff00;
        Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
                  (*(long *)(param_1 + 0x1a0),&uStack_70,*(undefined8 *)PTR_DAT_049c48a0);
        if (*(long *)(param_1 + 0x98) != 0) {
          GameMachine__RequestStateChange_object__261a650
                    (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_049c4650);
          return;
        }
      }
    }
  }
LAB_02551050:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

