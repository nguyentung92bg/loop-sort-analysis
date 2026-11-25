/* IL2CPP: HomeMonitor$$HandleNotificationPopup
void HomeMonitor__HandleNotificationPopup (HomeMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t liveOps, LiveOpsBase_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$HandleNotificationPopup
   void HomeMonitor__HandleNotificationPopup (HomeMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t liveOps, LiveOpsBase_o* instance,
   const MethodInfo* method); */

void HomeMonitor__HandleNotificationPopup_24472b8
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c4388;
  if ((bRam0000000004f4b86e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4388);
    bRam0000000004f4b86e = 1;
  }
  uStack_38 = 0;
  plVar3 = (long *)thunk_FUN_0222c938(param_4,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    if (((*(long *)(param_1 + 0xe8) == 0) ||
        (lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x90), lVar4 == 0)) ||
       (lVar4 = HomeLiveOpsSheet__FindSlot_2560f84(lVar4,param_3,0), lVar4 == 0)) {
LAB_02547400:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = *plVar3;
      lVar4 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02547390;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar3,lVar4,0);
LAB_02547390:
      uVar2 = (*(code *)*puVar6)(plVar3,&uStack_38,puVar6[1]);
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_2,0xe3ae513d,0);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_02547400;
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar4 + 0x20),uVar2 & 1,0);
      if ((uVar2 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0xe3ae513d,uStack_38,0);
      }
    }
  }
  return;
}

