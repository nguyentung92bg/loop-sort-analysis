/* IL2CPP: AreasScrollRect$$get_DistanceFromTop
float AreasScrollRect__get_DistanceFromTop (AreasScrollRect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasScrollRect$$get_DistanceFromTop
   float AreasScrollRect__get_DistanceFromTop (AreasScrollRect_o* __this, const MethodInfo* method);
    */

float AreasScrollRect__get_DistanceFromTop_24137ec
                (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f4b733 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2be0);
    bRam0000000004f4b733 = 1;
  }
  if (*(long *)(param_3 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*(long *)(param_3 + 0x78),0);
  fVar8 = 0.0;
  plVar6 = *(long **)(param_3 + 0x30);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar1 = *(undefined4 *)(param_3 + 0x40);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    fVar8 = param_2;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2be0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_025138a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2be0,0);
LAB_025138a0:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  }
  fVar7 = (float)UnityEngine_UI_LoopScrollRectBase__get_contentSpacing_2eb9718(param_3,0);
  return param_2 + fVar8 + fVar7 * (float)*(int *)(param_3 + 0x40);
}

