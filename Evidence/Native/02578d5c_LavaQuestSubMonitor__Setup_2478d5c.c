/* IL2CPP: LavaQuestSubMonitor$$Setup
void LavaQuestSubMonitor__Setup (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$Setup
   void LavaQuestSubMonitor__Setup (LavaQuestSubMonitor_o* __this, const MethodInfo* method); */

void LavaQuestSubMonitor__Setup_2478d5c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_54;
  
  if ((bRam0000000004f4b9d9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049c5890);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9d9 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_54 = 0;
  SubMonitorBase__Setup_2481334(param_1,0);
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xa66c44de,0);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_021f190c();
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x8ac5d054,0);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_021f190c();
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x271db996,0);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  thunk_FUN_021f190c();
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x517db21a,0);
  puVar8 = (undefined8 *)(param_1 + 0x78);
  *puVar8 = uVar4;
  thunk_FUN_021f190c(puVar8,uVar4);
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x18319ff2,0);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  thunk_FUN_021f190c();
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x1440f1d8,0);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar4);
  if (*(long *)(param_1 + 0x48) != 0) {
    LavaQuest__GetNewGame_251acdc(&uStack_98,*(long *)(param_1 + 0x48),0);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    LavaQuestSubMonitor__SetupButtons_2479170(param_1);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
    lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                      (*(undefined8 *)(param_1 + 0x68),0x99f4e89d,0);
    if ((lVar5 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0), lVar5 != 0)
       ) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
      puVar3 = PTR_DAT_049b5310;
      puVar2 = PTR_DAT_049b4540;
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar6 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x50),0xc,0);
        lVar5 = *(long *)puVar3;
        if ((uVar6 & 1) == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_021f0574();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = *(long *)(lVar5 + 0xb8);
          uStack_118 = *(undefined8 *)(lVar5 + 0x678);
          uStack_120 = *(undefined8 *)(lVar5 + 0x670);
          uStack_108 = *(undefined8 *)(lVar5 + 0x688);
          uStack_110 = *(undefined8 *)(lVar5 + 0x680);
          uStack_f8 = *(undefined8 *)(lVar5 + 0x698);
          uStack_100 = *(undefined8 *)(lVar5 + 0x690);
          CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                    (&uStack_120,&uStack_98,*(undefined8 *)PTR_DAT_049c5888);
          if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
          if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar6 = System_DateTimeOffset__op_GreaterThan_30e48c8
                            (uStack_98,uStack_90,auVar9._0_8_,auVar9._8_8_,0);
          uVar1 = 0x18319ff2;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0x517db21a;
          }
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
        }
        else {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_021f0574();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = *(long *)(lVar5 + 0xb8);
          uStack_a0 = *(undefined8 *)(lVar5 + 0x658);
          uStack_c8 = *(undefined8 *)(lVar5 + 0x630);
          uStack_d0 = *(undefined8 *)(lVar5 + 0x628);
          uStack_b8 = *(undefined8 *)(lVar5 + 0x640);
          uStack_c0 = *(undefined8 *)(lVar5 + 0x638);
          uStack_a8 = *(undefined8 *)(lVar5 + 0x650);
          uStack_b0 = *(undefined8 *)(lVar5 + 0x648);
          CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                    (&uStack_d0,&uStack_98,*(undefined8 *)PTR_DAT_049c5890);
          uStack_e8 = uStack_90;
          uStack_f0 = uStack_98;
          uStack_e0 = uStack_88;
          LavaQuestSubMonitor__SetGameState_2479450(param_1,&uStack_f0);
        }
        uVar7 = *puVar8;
        lVar5 = FUN_021f04e4(*(undefined8 *)puVar2,1);
        uStack_54 = 10;
        uVar4 = System_Int32__ToString_30fbaa0(&uStack_54,0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            thunk_FUN_021f190c();
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                      (uVar7,0x993134c1,lVar5,0);
            uVar7 = *puVar8;
            lVar5 = FUN_021f04e4(*(undefined8 *)puVar2,1);
            uVar4 = System_Int32__ToString_30fbaa0((long)&uStack_70 + 4,0);
            if (lVar5 == 0) goto LAB_02579168;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x20) = uVar4;
              thunk_FUN_021f190c();
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                        (uVar7,0x72c5b6c8,lVar5,0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
      }
    }
  }
LAB_02579168:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

