/* IL2CPP: StreakTower$$OnReviveContinueResultUpdate
void StreakTower__OnReviveContinueResultUpdate (StreakTower_o* __this, ReviveContinueResultUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$OnReviveContinueResultUpdate
   void StreakTower__OnReviveContinueResultUpdate (StreakTower_o* __this,
   ReviveContinueResultUpdateMessage_o m, const MethodInfo* method); */

void StreakTower__OnReviveContinueResultUpdate_2528b58
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4beb9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9aa0);
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beb9 = 1;
  }
  puVar2 = PTR_DAT_049c9aa0;
  lVar3 = *(long *)puVar1;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                    (*(long *)(lVar3 + 0xb8) + 0x6a0,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_049c5be8;
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar3 + 0xb8) + 0x6a0,&uStack_40,*(undefined8 *)puVar2);
    uStack_50 = uStack_40;
    uStack_48 = uStack_38;
    lVar3 = StreakTower__GetCheckpointStage_25287e0(param_1);
    if (lVar3 == 0) {
LAB_02628d04:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar3 + 0x50) < (int)uStack_40) {
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                        (param_2,0x5c197d7d,0);
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) ||
         (uVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                            (*(long *)(lVar5 + 0x20),0), param_3 == 0)) goto LAB_02628d04;
      FUN_02333498(param_3,uVar6,*(undefined8 *)PTR_DAT_049c3e40);
      uVar7 = System_Int32__ToString_30fbaa0(&uStack_50,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar6,0xf0b1a402,uVar7,0);
      uStack_54 = *(undefined4 *)(lVar3 + 0x50);
      uVar7 = System_Int32__ToString_30fbaa0(&uStack_54,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar6,0x7504e018,uVar7,0);
    }
  }
  return;
}

