/* IL2CPP: SpeedBoostBuyMonitor$$ShowPopup
void SpeedBoostBuyMonitor__ShowPopup (SpeedBoostBuyMonitor_o* __this, System_Action_int__o* onBought, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpeedBoostBuyMonitor$$ShowPopup
   void SpeedBoostBuyMonitor__ShowPopup (SpeedBoostBuyMonitor_o* __this, System_Action_int__o*
   onBought, const MethodInfo* method); */

void SpeedBoostBuyMonitor__ShowPopup_2463674(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_049c3958;
  if ((bRam0000000004f4b95a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c50f8);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c47b8);
    bRam0000000004f4b95a = 1;
  }
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0),param_2);
  lVar4 = *(long *)puVar2;
  lVar6 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  auStack_24[0] = **(undefined1 **)(lVar4 + 0xb8);
  uVar5 = thunk_FUN_0222c66c(lVar4,auStack_24);
  puVar2 = PTR_DAT_049b4540;
  if (lVar6 != 0) {
    Monitors__Additive_object__26888e8(lVar6,uVar5,1,*(undefined8 *)PTR_DAT_049c50f8);
    lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,1);
    puVar3 = PTR_DAT_049c47b8;
    if (*(long *)(param_1 + 0xb8) != 0) {
      uStack_28 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
      uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_28);
      uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_025638f8:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_021f190c();
        StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                  (param_1,0x993134c1,lVar4,0);
        lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,1);
        if ((*(long *)(param_1 + 0xb8) != 0) &&
           (uVar5 = System_Int32__ToString_30fbaa0(*(long *)(param_1 + 0xb8) + 0x30,0), lVar4 != 0))
        {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_025638f8;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          thunk_FUN_021f190c();
          StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                    (param_1,0x8bf4b3bd,lVar4,0);
          puVar2 = PTR_DAT_049b6110;
          if (*(long *)(param_1 + 0xb8) != 0) {
            iVar1 = *(int *)(*(long *)(param_1 + 0xb8) + 0x2c);
            if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar5 = System_TimeSpan__FromSeconds_311711c((double)iVar1,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar2);
            }
            uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
            StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                      (param_1,0x517db143,uVar5,0);
            if (*(long *)(param_1 + 0xb8) != 0) {
              uVar5 = System_TimeSpan__FromSeconds_311711c
                                ((double)*(int *)(*(long *)(param_1 + 0xb8) + 0x28),0);
              uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
              StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                        (param_1,0x4c676fd6,uVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

