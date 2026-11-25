/* IL2CPP: HomeSceneView$$LateUpdate
void HomeSceneView__LateUpdate (HomeSceneView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$LateUpdate
   void HomeSceneView__LateUpdate (HomeSceneView_o* __this, const MethodInfo* method); */

void HomeSceneView__LateUpdate_242e0dc
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000004f4b7c1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b7c1 = 1;
  }
  if ((*(long *)(param_5 + 0x48) != 0) &&
     (plVar1 = (long *)UnityEngine_Transform__get_parent_3c2d470(*(long *)(param_5 + 0x48),0),
     plVar1 != (long *)0x0)) {
    if (*plVar1 != *(long *)PTR_DAT_049bc0c8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20();
    }
    UnityEngine_RectTransform__get_rect_3c2ba98(plVar1,0);
    if ((param_4 <= 0.0) ||
       (fVar4 = param_3 - *(float *)(param_5 + 0x68), fVar5 = param_4 - *(float *)(param_5 + 0x6c),
       fVar4 * fVar4 + fVar5 * fVar5 < _UNK_013aa3dc)) {
      return;
    }
    *(float *)(param_5 + 0x68) = param_3;
    *(float *)(param_5 + 0x6c) = param_4;
    if (*(long *)(param_5 + 0x40) != 0) {
      lVar3 = *(long *)(param_5 + 0x48);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      if (lVar3 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                  (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar3,0);
        lVar3 = *(long *)(param_5 + 0x48);
        if (lVar3 != 0) {
          if ((bRam0000000004f58a11 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a11 = 1;
          }
          if (lVar3 != 0) {
            lVar2 = *(long *)(lVar3 + 0x10);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
            }
            if (pcRam0000000004f58a78 == (code *)0x0) {
              pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
            }
            (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

