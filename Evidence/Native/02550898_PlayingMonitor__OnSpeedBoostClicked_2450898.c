/* IL2CPP: PlayingMonitor$$OnSpeedBoostClicked
void PlayingMonitor__OnSpeedBoostClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnSpeedBoostClicked
   void PlayingMonitor__OnSpeedBoostClicked (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__OnSpeedBoostClicked_2450898(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_28;
  byte abStack_24 [4];
  
  if ((bRam0000000004f4b8c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5238);
    FUN_021f03f8(PTR_DAT_049c4870);
    FUN_021f03f8(PTR_DAT_049c4878);
    bRam0000000004f4b8c7 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x130);
  if (lVar7 != 0) {
    if (0.0 < *(float *)(lVar7 + 0x70)) {
      bVar4 = ConveyorSpeedSystem__IsSpeedBoostActive_24b5ddc(lVar7,0);
      puVar2 = PTR_DAT_049b5310;
      bVar4 = (bVar4 ^ 0xff) & 1;
      if ((bRam0000000004f4bb90 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b52a8,bVar4,0);
        FUN_021f03f8(PTR_DAT_049b5310);
        bRam0000000004f4bb90 = 1;
      }
      puVar3 = PTR_DAT_049b52a8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar3 = PTR_DAT_049b52a8;
      lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
      if ((bRam0000000004f5c3f2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cfad8,bVar4,0);
        FUN_021f03f8(PTR_DAT_049b52a8);
        bRam0000000004f5c3f2 = 1;
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        abStack_24[0] = bVar4;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (**(long **)(lVar6 + 0xb8),*(undefined8 *)(lVar7 + 0x9b0),abStack_24,
                   *(undefined8 *)PTR_DAT_049cfad8);
        UnityEngine_PlayerPrefs__SetInt_3c0faec(*(undefined8 *)(lVar7 + 0x9b0),bVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar7 = Monitors__Get_object__26889d0
                        (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4870);
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5238);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar5,param_1,*(undefined8 *)PTR_DAT_049c4878,0);
      puVar2 = PTR_DAT_049c3958;
      if (lVar7 != 0) {
        if ((bRam0000000004f4b95a & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b6110,uVar5,0);
          FUN_021f03f8(PTR_DAT_049c50f8);
          FUN_021f03f8(PTR_DAT_049c3958);
          FUN_021f03f8(PTR_DAT_049b4540);
          FUN_021f03f8(PTR_DAT_049b6128);
          FUN_021f03f8(PTR_DAT_049c47b8);
          bRam0000000004f4b95a = 1;
        }
        *(undefined8 *)(lVar7 + 0xc0) = uVar5;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0xc0),uVar5);
        lVar6 = *(long *)puVar2;
        lVar8 = *(long *)(lVar7 + 0x30);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar2;
        }
        abStack_24[0] = **(byte **)(lVar6 + 0xb8);
        uVar5 = thunk_FUN_0222c66c(lVar6,abStack_24);
        puVar2 = PTR_DAT_049b4540;
        if (lVar8 != 0) {
          Monitors__Additive_object__26888e8(lVar8,uVar5,1,*(undefined8 *)PTR_DAT_049c50f8);
          lVar6 = FUN_021f04e4(*(undefined8 *)puVar2,1);
          puVar3 = PTR_DAT_049c47b8;
          if (*(long *)(lVar7 + 0xb8) != 0) {
            uStack_28 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x20);
            uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_28);
            uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
LAB_025638f8:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              *(undefined8 *)(lVar6 + 0x20) = uVar5;
              thunk_FUN_021f190c();
              StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                        (lVar7,0x993134c1,lVar6,0);
              lVar6 = FUN_021f04e4(*(undefined8 *)puVar2,1);
              if ((*(long *)(lVar7 + 0xb8) != 0) &&
                 (uVar5 = System_Int32__ToString_30fbaa0(*(long *)(lVar7 + 0xb8) + 0x30,0),
                 lVar6 != 0)) {
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_025638f8;
                *(undefined8 *)(lVar6 + 0x20) = uVar5;
                thunk_FUN_021f190c();
                StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                          (lVar7,0x8bf4b3bd,lVar6,0);
                puVar2 = PTR_DAT_049b6110;
                if (*(long *)(lVar7 + 0xb8) != 0) {
                  iVar1 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x2c);
                  if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar5 = System_TimeSpan__FromSeconds_311711c((double)iVar1,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)puVar2);
                  }
                  uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
                  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                            (lVar7,0x517db143,uVar5,0);
                  if (*(long *)(lVar7 + 0xb8) != 0) {
                    uVar5 = System_TimeSpan__FromSeconds_311711c
                                      ((double)*(int *)(*(long *)(lVar7 + 0xb8) + 0x28),0);
                    uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
                    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                              (lVar7,0x4c676fd6,uVar5,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

