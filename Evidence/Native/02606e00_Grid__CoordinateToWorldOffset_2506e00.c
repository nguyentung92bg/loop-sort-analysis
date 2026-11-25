/* IL2CPP: Grid$$CoordinateToWorldOffset
UnityEngine_Vector3_o Grid__CoordinateToWorldOffset (Grid_o* __this, UnityEngine_Vector2Int_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Grid$$CoordinateToWorldOffset
   UnityEngine_Vector3_o Grid__CoordinateToWorldOffset (Grid_o* __this, UnityEngine_Vector2Int_o c,
   const MethodInfo* method); */

float Grid__CoordinateToWorldOffset_2506e00(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x30);
    if (*(int *)(lVar1 + 0x18) == 1) {
      fVar2 = fVar2 * 1.5;
    }
    else {
      fVar2 = fVar2 + fVar2;
    }
    return fVar2 * (float)param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

