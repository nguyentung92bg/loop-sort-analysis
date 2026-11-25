/* IL2CPP: AreasMonitor$$FollowFill
void AreasMonitor__FollowFill (AreasMonitor_o* __this, float level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$FollowFill
   void AreasMonitor__FollowFill (AreasMonitor_o* __this, float level, const MethodInfo* method); */

void AreasMonitor__FollowFill_2437b6c
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f4b807 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b807 = 1;
  }
  if (*(long *)(param_5 + 0x98) == 0) {
LAB_02537d34:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *(long *)(*(long *)(param_5 + 0x98) + 0x50);
  if (cRam0000000004f49d58 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b3b98;
  if (lVar6 == 0) goto LAB_02537d34;
  fVar10 = INFINITY;
  iVar1 = -0x80000000;
  if ((float)(int)param_1 != INFINITY) {
    iVar1 = (int)param_1;
  }
  uVar3 = AreaSheet__GetArea_25579c0(lVar6,iVar1,0);
  uVar3 = AreasMonitor__FindAreaView_2434e68(param_5,uVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (uVar3,0x85f8a9cf,0);
  if ((lVar6 == 0) ||
     (lVar6 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar6,0), lVar6 == 0))
  goto LAB_02537d34;
  lVar7 = *(long *)(param_5 + 0xd8);
  UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
  fVar10 = param_4 + fVar10;
  UnityEngine_Transform__TransformPoint_3c2ec74(0,fVar10,0,lVar6,0);
  if (lVar7 == 0) goto LAB_02537d34;
  UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar7,0);
  if (*(long *)(param_5 + 0xd8) == 0) goto LAB_02537d34;
  fVar9 = fVar10;
  UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0xd8),0);
  plVar5 = *(long **)(param_5 + 0xd0);
  fVar11 = param_4;
  fVar8 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
  if (plVar5 == (long *)0x0) goto LAB_02537d34;
  fVar8 = (float)FUN_04608770(fVar8 * -10.0);
  fVar10 = (fVar9 + param_4 * 0.5) - fVar10;
  fVar9 = fVar10 * (1.0 - fVar8);
  (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
  if (plVar5[0xf] == 0) goto LAB_02513ae4;
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar5[0xf],0);
  fVar10 = fVar10 + fVar9;
  if (*(int *)((long)plVar5 + 0x44) == (int)plVar5[5]) {
    if (plVar5[0xf] == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(plVar5[0xf],0);
    fVar9 = fVar11;
    lVar6 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(plVar5,0);
    if (lVar6 == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
    fVar8 = 0.0;
    if (0.0 <= fVar11 - fVar9) {
      fVar8 = fVar11 - fVar9;
    }
    if (fVar8 <= fVar10) {
      fVar10 = fVar8;
    }
  }
  if (plVar5[0xf] != 0) {
    uVar3 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar5[0xf],0);
                    /* WARNING: Could not recover jumptable at 0x02513ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x4b8))(uVar3,fVar10,plVar5,*(undefined8 *)(*plVar5 + 0x4c0));
    return;
  }
LAB_02513ae4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

