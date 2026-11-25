/* IL2CPP: HomeSceneView$$Place
void HomeSceneView__Place (UnityEngine_RectTransform_o* rt, float x, float y, float w, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$Place
   void HomeSceneView__Place (UnityEngine_RectTransform_o* rt, float x, float y, float w, float h,
   const MethodInfo* method); */

void HomeSceneView__Place_2427788(undefined4 param_1,float param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__set_pivot_3c2c28c(0,0x3f800000,param_3,0);
  UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,param_3,0);
  UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,param_3,0);
  UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(param_1,-param_2,param_3,0);
  if ((bRam0000000004f58962 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26c78,0);
    bRam0000000004f58962 = 1;
  }
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
    }
    if (pcRam0000000004f589b8 == (code *)0x0) {
      pcRam0000000004f589b8 = (code *)FUN_021f03bc(&UNK_013d4c25);
    }
    (*pcRam0000000004f589b8)(lVar1,&stack0xffffffffffffffe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

