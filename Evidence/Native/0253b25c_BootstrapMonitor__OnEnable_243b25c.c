/* IL2CPP: BootstrapMonitor$$OnEnable
void BootstrapMonitor__OnEnable (BootstrapMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapMonitor$$OnEnable
   void BootstrapMonitor__OnEnable (BootstrapMonitor_o* __this, const MethodInfo* method); */

void BootstrapMonitor__OnEnable_243b25c(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049bb338;
  if ((bRam0000000004f4b818 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb338);
    bRam0000000004f4b818 = 1;
  }
  uStack_28 = 0;
  MonitorBase__OnEnable_256c45c(param_1,0);
  uVar3 = Game__GetBuildVersion_24f4b28(0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x47b632,uVar3,0);
  uVar3 = Game__GetBuildNumber_24f4b90(0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x731bf136,uVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_SceneManagement_SceneManager__GetActiveScene_3c33e7c(0);
  uStack_28._4_4_ = uVar2;
  uVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex_3c335d0((long)&uStack_28 + 4,0);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
  uVar3 = System_Int32__ToString_30fbaa0(&uStack_28,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x25c8c8de,uVar3,0);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0x85f8a9cf,0);
  if ((lVar4 != 0) &&
     (lVar4 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar4,0), lVar4 != 0)) {
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

