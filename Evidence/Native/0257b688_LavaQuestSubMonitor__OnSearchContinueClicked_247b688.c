/* IL2CPP: LavaQuestSubMonitor$$OnSearchContinueClicked
void LavaQuestSubMonitor__OnSearchContinueClicked (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$OnSearchContinueClicked
   void LavaQuestSubMonitor__OnSearchContinueClicked (LavaQuestSubMonitor_o* __this, const
   MethodInfo* method); */

void LavaQuestSubMonitor__OnSearchContinueClicked_247b688(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b9eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5890);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b9eb = 1;
  }
  puVar2 = PTR_DAT_049c5890;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uStack_40 = *(undefined8 *)(lVar3 + 0x658);
  uStack_68 = *(undefined8 *)(lVar3 + 0x630);
  uStack_70 = *(undefined8 *)(lVar3 + 0x628);
  uStack_58 = *(undefined8 *)(lVar3 + 0x640);
  uStack_60 = *(undefined8 *)(lVar3 + 0x638);
  uStack_48 = *(undefined8 *)(lVar3 + 0x650);
  uStack_50 = *(undefined8 *)(lVar3 + 0x648);
  CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
            (&uStack_70,&uStack_38,*(undefined8 *)puVar2);
  uStack_88 = uStack_30;
  uStack_90 = uStack_38;
  uStack_80 = uStack_28;
  LavaQuestSubMonitor__SetGameState_2479450(param_1,&uStack_90);
  return;
}

