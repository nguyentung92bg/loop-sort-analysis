/* IL2CPP: AreasMonitor.<>c__DisplayClass66_0$$<PlayProgress>b__1
void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__1 (AreasMonitor___c__DisplayClass66_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor.<>c__DisplayClass66_0$$<PlayProgress>b__1
   void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__1
   (AreasMonitor___c__DisplayClass66_0_o* __this, float t, const MethodInfo* method); */

void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__1_2437f6c
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  lVar5 = *(long *)(param_5 + 0x10);
  if (lVar5 == 0) {
LAB_02537fa0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined4 *)(lVar5 + 0x120) = param_1;
  AreasMonitor__RenderElements_2434c48(lVar5,1);
  lVar5 = *(long *)(param_5 + 0x10);
  if (lVar5 == 0) goto LAB_02537fa0;
  iVar11 = *(int *)(param_5 + 0x18);
  if ((bRam0000000004f4b807 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b807 = 1;
  }
  if (*(long *)(lVar5 + 0x98) == 0) {
LAB_02537d34:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0x98) + 0x50);
  if (cRam0000000004f49d58 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b3b98;
  if (lVar7 == 0) goto LAB_02537d34;
  fVar12 = INFINITY;
  iVar1 = -0x80000000;
  if ((float)(int)(float)iVar11 != INFINITY) {
    iVar1 = (int)(float)iVar11;
  }
  uVar3 = AreaSheet__GetArea_25579c0(lVar7,iVar1,0);
  uVar3 = AreasMonitor__FindAreaView_2434e68(lVar5,uVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (uVar3,0x85f8a9cf,0);
  if ((lVar7 == 0) ||
     (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar7,0), lVar7 == 0))
  goto LAB_02537d34;
  lVar8 = *(long *)(lVar5 + 0xd8);
  UnityEngine_RectTransform__get_rect_3c2ba98(lVar7,0);
  fVar12 = param_4 + fVar12;
  UnityEngine_Transform__TransformPoint_3c2ec74(0,fVar12,0,lVar7,0);
  if (lVar8 == 0) goto LAB_02537d34;
  UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar8,0);
  if (*(long *)(lVar5 + 0xd8) == 0) goto LAB_02537d34;
  fVar10 = fVar12;
  UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(lVar5 + 0xd8),0);
  plVar6 = *(long **)(lVar5 + 0xd0);
  fVar13 = param_4;
  fVar9 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
  if (plVar6 == (long *)0x0) goto LAB_02537d34;
  fVar9 = (float)FUN_04608770(fVar9 * -10.0);
  fVar12 = (fVar10 + param_4 * 0.5) - fVar12;
  fVar10 = fVar12 * (1.0 - fVar9);
  (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
  if (plVar6[0xf] == 0) goto LAB_02513ae4;
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar6[0xf],0);
  fVar12 = fVar12 + fVar10;
  if (*(int *)((long)plVar6 + 0x44) == (int)plVar6[5]) {
    if (plVar6[0xf] == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(plVar6[0xf],0);
    fVar10 = fVar13;
    lVar5 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(plVar6,0);
    if (lVar5 == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar5,0);
    fVar9 = 0.0;
    if (0.0 <= fVar13 - fVar10) {
      fVar9 = fVar13 - fVar10;
    }
    if (fVar9 <= fVar12) {
      fVar12 = fVar9;
    }
  }
  if (plVar6[0xf] != 0) {
    uVar3 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar6[0xf],0);
                    /* WARNING: Could not recover jumptable at 0x02513ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x4b8))(uVar3,fVar12,plVar6,*(undefined8 *)(*plVar6 + 0x4c0));
    return;
  }
LAB_02513ae4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

