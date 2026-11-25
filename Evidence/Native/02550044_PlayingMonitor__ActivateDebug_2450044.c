/* IL2CPP: PlayingMonitor$$ActivateDebug
void PlayingMonitor__ActivateDebug (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$ActivateDebug
   void PlayingMonitor__ActivateDebug (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__ActivateDebug_2450044(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b44e8;
  if ((bRam0000000004f4b8d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4b8d3 = 1;
  }
  puVar2 = PTR_DAT_049be928;
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_24 = 0;
  uStack_24 = UnityEngine_Time__get_timeScale_3c29870(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  uVar3 = System_Single__ToString_31122f0(&uStack_24,uVar3,0);
  uVar3 = System_String__Concat_2f72b28(uVar3,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar4,0xbf689929,uVar3,0);
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  uVar4 = Game__GetBuildInfo_24f4a0c(0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar3,0x731bf136,uVar4,0);
  return;
}

