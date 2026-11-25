/* IL2CPP: SwipeablePageLayout$$GetPageTargetPosition
UnityEngine_Vector2_o SwipeablePageLayout__GetPageTargetPosition (SwipeablePageLayout_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$GetPageTargetPosition
   UnityEngine_Vector2_o SwipeablePageLayout__GetPageTargetPosition (SwipeablePageLayout_o* __this,
   int32_t idx, const MethodInfo* method); */

float SwipeablePageLayout__GetPageTargetPosition_244c490(long param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)SwipeablePageLayout__GetPageWidth_244cebc();
  iVar1 = *(int *)(param_1 + 0x28);
  if (cRam0000000004f4a195 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a195 = '\x01';
  }
  return fVar2 * (float)(param_2 - iVar1) *
         *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x28);
}

