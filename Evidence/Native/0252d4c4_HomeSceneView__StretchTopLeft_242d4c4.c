/* IL2CPP: HomeSceneView$$StretchTopLeft
void HomeSceneView__StretchTopLeft (UnityEngine_RectTransform_o* rt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$StretchTopLeft
   void HomeSceneView__StretchTopLeft (UnityEngine_RectTransform_o* rt, const MethodInfo* method);
    */

void HomeSceneView__StretchTopLeft_242d4c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7c3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  HomeSceneView__Stretch_242881c(param_1);
  if (param_1 != 0) {
    if ((bRam0000000004f58964 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26c78,0);
      bRam0000000004f58964 = 1;
    }
    if (param_1 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
      }
      if (pcRam0000000004f589c8 == (code *)0x0) {
        pcRam0000000004f589c8 = (code *)FUN_021f03bc(&UNK_013dc9da);
      }
      (*pcRam0000000004f589c8)(lVar2,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

