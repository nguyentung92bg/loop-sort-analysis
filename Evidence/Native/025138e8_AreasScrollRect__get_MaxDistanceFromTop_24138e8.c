/* IL2CPP: AreasScrollRect$$get_MaxDistanceFromTop
float AreasScrollRect__get_MaxDistanceFromTop (AreasScrollRect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasScrollRect$$get_MaxDistanceFromTop
   float AreasScrollRect__get_MaxDistanceFromTop (AreasScrollRect_o* __this, const MethodInfo*
   method); */

float AreasScrollRect__get_MaxDistanceFromTop_24138e8
                (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
                long param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f4b734 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2be0);
    bRam0000000004f4b734 = 1;
  }
  plVar8 = *(long **)(param_5 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (*(long *)(param_5 + 0x78) == 0) goto LAB_02513a18;
    UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x78),0);
    param_2 = param_4;
  }
  else {
    lVar5 = *plVar8;
    uVar1 = *(undefined4 *)(param_5 + 0x28);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c2be0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02513994;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c2be0,0);
LAB_02513994:
    (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
  }
  fVar10 = *(float *)(param_5 + 0x60);
  fVar11 = *(float *)(param_5 + 100);
  fVar9 = (float)UnityEngine_UI_LoopScrollRectBase__get_contentSpacing_2eb9718(param_5,0);
  iVar2 = *(int *)(param_5 + 0x28);
  lVar5 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(param_5,0);
  if (lVar5 != 0) {
    uVar3 = iVar2 - 1;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar5,0);
    param_4 = (param_2 + fVar10 + fVar11 +
              fVar9 * (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) - param_4;
    fVar9 = 0.0;
    if (0.0 <= param_4) {
      fVar9 = param_4;
    }
    return fVar9;
  }
LAB_02513a18:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

