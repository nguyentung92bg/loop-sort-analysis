/* IL2CPP: PlayingMonitor$$OnDebugTimeScaleClicked
void PlayingMonitor__OnDebugTimeScaleClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnDebugTimeScaleClicked
   void PlayingMonitor__OnDebugTimeScaleClicked (PlayingMonitor_o* __this, const MethodInfo*
   method); */

void PlayingMonitor__OnDebugTimeScaleClicked_2451584(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fStack_24;
  
  if ((bRam0000000004f4b8d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4b8d4 = 1;
  }
  puVar1 = PTR_DAT_049b44e8;
  fStack_24 = 0.0;
  fStack_24 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
  puVar2 = PTR_DAT_049be928;
  uVar5 = 0x3f000000;
  if (fStack_24 <= 0.5) {
    if ((fStack_24 == 0.0) || (uVar5 = 0x3f800000, fStack_24 == 0.5)) goto LAB_0255161c;
  }
  else {
    uVar5 = 0x40000000;
    if ((fStack_24 == 1.0) || (uVar5 = 0x40400000, fStack_24 == 2.0)) goto LAB_0255161c;
  }
  uVar5 = 0;
LAB_0255161c:
  UnityEngine_Time__set_timeScale_3c29898(uVar5,0);
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  fStack_24 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  uVar3 = System_Single__ToString_31122f0(&fStack_24,uVar3,0);
  uVar3 = System_String__Concat_2f72b28(uVar3,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar4,0xbf689929,uVar3,0);
  return;
}

