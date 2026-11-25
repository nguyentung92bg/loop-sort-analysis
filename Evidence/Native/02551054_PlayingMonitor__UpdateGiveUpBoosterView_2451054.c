/* IL2CPP: PlayingMonitor$$UpdateGiveUpBoosterView
void PlayingMonitor__UpdateGiveUpBoosterView (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$UpdateGiveUpBoosterView
   void PlayingMonitor__UpdateGiveUpBoosterView (PlayingMonitor_o* __this, const MethodInfo*
   method); */

void PlayingMonitor__UpdateGiveUpBoosterView_2451054(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_049c48a8;
  if ((bRam0000000004f4b8cf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c48c0);
    bRam0000000004f4b8cf = 1;
  }
  lStack_50 = 0;
  uVar4 = FUN_024f7024(*(undefined8 *)(param_1 + 0x100),&lStack_50,*(undefined8 *)puVar1);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (lStack_50 != 0) {
    lVar5 = ReviveSystem__GetRevive_24e0f1c(lStack_50,0);
    puVar1 = PTR_DAT_049c48c0;
    if (((*(long *)(param_1 + 0xa0) != 0) && (lVar5 != 0)) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x40), lVar6 != 0)) {
      uStack_44 = *(undefined4 *)(lVar5 + 0x18);
      uVar7 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar6,&uStack_44,*(undefined8 *)PTR_DAT_049c48c0);
      if ((*(long *)(param_1 + 0xa0) != 0) && (lStack_50 != 0)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x40);
        uVar2 = ReviveSystem__GetContinueBoosterType_24e10e0(lStack_50,0);
        if (lVar6 != 0) {
          uStack_44 = uVar2;
          uVar8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar6,&uStack_44,*(undefined8 *)puVar1);
          uVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                            (*(undefined8 *)(param_1 + 0x120),0xbc1c109a,0);
          uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                             (*(undefined8 *)(param_1 + 0x120),0x517db143,0);
          uVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                             (*(undefined8 *)(param_1 + 0x120),0x4c676fd6,0);
          if (*(long *)(param_1 + 0x118) != 0) {
            BoosterContainer__OnRefreshReviveElement_256b358
                      (*(long *)(param_1 + 0x118),uVar9,uVar8,lVar5,0);
            if (*(long *)(param_1 + 0x118) != 0) {
              BoosterContainer__OnRefreshReviveElement_256b358
                        (*(long *)(param_1 + 0x118),uVar10,uVar8,lVar5,0);
              if (*(long *)(param_1 + 0x118) != 0) {
                BoosterContainer__OnRefreshReviveElement_256b358
                          (*(long *)(param_1 + 0x118),uVar11,uVar7,lVar5,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (uVar11,0x4c676fd6,0);
                puVar1 = PTR_DAT_049b5310;
                lVar6 = *(long *)PTR_DAT_049b5310;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar6 = *(long *)puVar1;
                }
                lVar6 = *(long *)(lVar6 + 0xb8);
                uStack_68 = *(undefined8 *)(lVar6 + 0x778);
                uStack_70 = *(undefined8 *)(lVar6 + 0x770);
                uStack_58 = *(undefined8 *)(lVar6 + 0x788);
                uStack_60 = *(undefined8 *)(lVar6 + 0x780);
                iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_70,0);
                uVar2 = 0x544baef0;
                if (0 < iVar3) {
                  uVar2 = 0xc614fb00;
                }
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (uVar9,uVar2,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (uVar10,uVar2,0);
                if (1 < *(int *)(lVar5 + 0x20)) {
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                            (uVar11,0xd7ad136f,0);
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                            (uVar9,0xd7ad136f,0);
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                            (uVar10,0xd7ad136f,0);
                }
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (*(undefined8 *)(param_1 + 0x120),0x5f10e269,0);
                if (*(long *)(param_1 + 0x128) != 0) {
                  if (*(char *)(*(long *)(param_1 + 0x128) + 0x11) != '\0') {
                    lVar5 = *(long *)puVar1;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      FUN_021f0574();
                      lVar5 = *(long *)puVar1;
                    }
                    lVar5 = *(long *)(lVar5 + 0xb8);
                    uStack_88 = *(undefined8 *)(lVar5 + 0x68);
                    uStack_90 = *(undefined8 *)(lVar5 + 0x60);
                    uStack_78 = *(undefined8 *)(lVar5 + 0x78);
                    uStack_80 = *(undefined8 *)(lVar5 + 0x70);
                    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_90,0);
                    if (*(long *)(param_1 + 0x128) == 0) goto LAB_02551350;
                    if (*(int *)(*(long *)(param_1 + 0x128) + 0x18) <= iVar3 + 1) {
                      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                                (*(undefined8 *)(param_1 + 0x120),0x4c676fd6,0);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02551350:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

