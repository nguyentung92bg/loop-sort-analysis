/* IL2CPP: AreasMonitor$$<ScrollToEnd>b__45_0
void AreasMonitor___ScrollToEnd_b__45_0 (AreasMonitor_o* __this, float d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$<ScrollToEnd>b__45_0
   void AreasMonitor___ScrollToEnd_b__45_0 (AreasMonitor_o* __this, float d, const MethodInfo*
   method); */

void AreasMonitor___ScrollToEnd_b__45_0_2437e6c
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  plVar2 = *(long **)(param_5 + 0xd0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar4 = (float)AreasScrollRect__get_DistanceFromTop_24137ec(plVar2,0);
  (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
  if (plVar2[0xf] == 0) goto LAB_02513ae4;
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar2[0xf],0);
  param_2 = param_2 + (param_1 - fVar4);
  if (*(int *)((long)plVar2 + 0x44) == (int)plVar2[5]) {
    if (plVar2[0xf] == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(plVar2[0xf],0);
    fVar4 = param_4;
    lVar1 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(plVar2,0);
    if (lVar1 == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar1,0);
    fVar3 = 0.0;
    if (0.0 <= param_4 - fVar4) {
      fVar3 = param_4 - fVar4;
    }
    if (fVar3 <= param_2) {
      param_2 = fVar3;
    }
  }
  if (plVar2[0xf] != 0) {
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar2[0xf],0);
                    /* WARNING: Could not recover jumptable at 0x02513ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x4b8))(uVar5,param_2,plVar2,*(undefined8 *)(*plVar2 + 0x4c0));
    return;
  }
LAB_02513ae4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

