/* IL2CPP: HomeMonitor$$OnActivated
void HomeMonitor__OnActivated (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnActivated
   void HomeMonitor__OnActivated (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__OnActivated_24442b8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b85b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b85b = 1;
  }
  MonitorBase__OnActivated_256c9f4(param_1,0);
  lVar4 = *(long *)puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  *(undefined1 *)(param_1 + 0x198) = 0;
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(undefined1 *)(param_1 + 0x184) = 1;
  if (iVar1 == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_02544430;
    *(undefined1 *)(*(long *)(param_1 + 0x178) + 0x78) = 0;
  }
  puVar3 = PTR_DAT_049b5460;
  puVar2 = PTR_DAT_049b5310;
  HomeMonitor__FillLiveOpsSlotElements_2444434(param_1);
  HomeMonitor__UpdateView_24449e4(param_1);
  HomeMonitor__LoadAssets_2444a70(param_1);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar4 + 0xb8) + 0x1b0,&uStack_38,*(undefined8 *)puVar3);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  HomeMonitor__UpdatePlayerProfileView_2444d3c(param_1,&uStack_50);
  HomeMonitor__UpdateLevelMultiplier_2444f30(param_1);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c(param_1,0x3b77286f,0)
  ;
  if (lVar4 != 0) {
    lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
    if (((*(long *)(param_1 + 0xe8) != 0) &&
        (lVar6 = *(long *)(*(long *)(param_1 + 0xe8) + 0x50), lVar6 != 0)) && (lVar4 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,*(undefined1 *)(lVar6 + 0x48),0);
      lVar4 = *(long *)(param_1 + 0x128);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      return;
    }
  }
LAB_02544430:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

