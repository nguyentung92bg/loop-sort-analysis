/* IL2CPP: AreasMonitor$$RenderMarker
void AreasMonitor__RenderMarker (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, AreasMonitor_AreaView_o* areaView, float level, float fill, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$RenderMarker
   void AreasMonitor__RenderMarker (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, AreasMonitor_AreaView_o* areaView, float
   level, float fill, const MethodInfo* method); */

void AreasMonitor__RenderMarker_24374f4(float param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iStack_64;
  
  if ((bRam0000000004f4b7ff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4b7ff = 1;
  }
  iStack_64 = 0;
  if (*(long *)(param_2 + 0x98) != 0) {
    lVar6 = *(long *)(*(long *)(param_2 + 0x98) + 0x50);
    if (cRam0000000004f49d58 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f49d58 = '\x01';
    }
    puVar2 = PTR_DAT_049b8758;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar1 = -0x80000000;
    if ((float)(int)param_1 != INFINITY) {
      iVar1 = (int)param_1;
    }
    if ((lVar6 != 0) && (lVar6 = AreaSheet__GetArea_25579c0(lVar6,iVar1,0), param_4 != 0)) {
      lVar7 = *(long *)(param_4 + 0x10);
      lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_3,0xa018bd61,0);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar3,lVar6 == lVar7,0);
        if (lVar6 != lVar7) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar6 = Extensions__GetRectTransform_3f0c498(lVar3,0);
        if (lVar6 != 0) {
          UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar6,0);
          Extensions__WithY_3f0d014(0);
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar6,0);
          lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                            (param_3,0x5f10bc4c,0);
          if (lVar6 != 0) {
            plVar5 = *(long **)(lVar6 + 0x38);
            if (cRam0000000004f49d58 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f49d58 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iStack_64 = iVar1;
            uVar4 = System_Int32__ToString_30fbaa0(&iStack_64,0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
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

