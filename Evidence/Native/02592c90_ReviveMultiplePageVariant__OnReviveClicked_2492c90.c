/* IL2CPP: ReviveMultiplePageVariant$$OnReviveClicked
void ReviveMultiplePageVariant__OnReviveClicked (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$OnReviveClicked
   void ReviveMultiplePageVariant__OnReviveClicked (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

void ReviveMultiplePageVariant__OnReviveClicked_2492c90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_108 [80];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b61b0;
  if ((bRam0000000004f4ba7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c48b0);
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049b61b0);
    bRam0000000004f4ba7f = 1;
  }
  uStack_a0 = *(undefined8 *)puVar1;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  thunk_FUN_021f190c(&uStack_a0);
  uStack_90 = CONCAT44(uStack_90._4_4_,1);
  if (*(long *)(param_1 + 0xd0) != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    uStack_80 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x1c),(undefined4)uStack_80);
    if (lVar8 != 0) {
      func_0x04608620(auStack_108,&uStack_a0,0x50);
      uVar5 = EconomyModule__TryConsume_2533778(lVar8,auStack_108,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x40) != 0) {
          HapticModule__PlayWarning_25355b0(*(long *)(param_1 + 0x40),0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar8 = Monitors__Get_object__26889d0
                                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c3cf0),
             lVar8 != 0)) {
            ShopMonitor__ShowPopup_245c378(lVar8,*(undefined8 *)puVar1,0);
            return;
          }
        }
      }
      else {
        uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
        plVar9 = *(long **)(param_1 + 0x90);
        uStack_b0 = 0;
        uStack_a8 = 0;
        thunk_FUN_021f190c(&uStack_b8);
        uVar4 = uStack_a8;
        uVar2 = uStack_b8;
        uStack_b0 = CONCAT44(*(undefined4 *)(param_1 + 200),(undefined4)uStack_b0);
        uVar3 = uStack_b0;
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c48b0) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02592e1c;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c48b0,0);
LAB_02592e1c:
          uStack_48 = uVar3;
          uStack_50 = uVar2;
          uStack_40 = uVar4;
          (*(code *)*puVar6)(plVar9,&uStack_50,puVar6[1]);
          if (*(long *)(param_1 + 0x48) != 0) {
            GameMachine__RequestStateChange_object__261a650
                      (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_049c4650);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

