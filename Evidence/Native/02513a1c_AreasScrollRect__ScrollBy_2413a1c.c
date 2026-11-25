/* IL2CPP: AreasScrollRect$$ScrollBy
void AreasScrollRect__ScrollBy (AreasScrollRect_o* __this, float delta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasScrollRect$$ScrollBy
   void AreasScrollRect__ScrollBy (AreasScrollRect_o* __this, float delta, const MethodInfo*
   method); */

void AreasScrollRect__ScrollBy_2413a1c
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,long *param_5)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  if (param_5[0xf] == 0) goto LAB_02513ae4;
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_5[0xf],0);
  param_2 = param_2 + param_1;
  if (*(int *)((long)param_5 + 0x44) == (int)param_5[5]) {
    if (param_5[0xf] == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(param_5[0xf],0);
    fVar4 = param_4;
    lVar1 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(param_5,0);
    if (lVar1 == 0) goto LAB_02513ae4;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar1,0);
    fVar2 = 0.0;
    if (0.0 <= param_4 - fVar4) {
      fVar2 = param_4 - fVar4;
    }
    if (fVar2 <= param_2) {
      param_2 = fVar2;
    }
  }
  if (param_5[0xf] != 0) {
    uVar3 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_5[0xf],0);
                    /* WARNING: Could not recover jumptable at 0x02513ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x4b8))(uVar3,param_2,param_5,*(undefined8 *)(*param_5 + 0x4c0));
    return;
  }
LAB_02513ae4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

