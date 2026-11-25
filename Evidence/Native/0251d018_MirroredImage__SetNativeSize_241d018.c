/* IL2CPP: MirroredImage$$SetNativeSize
void MirroredImage__SetNativeSize (MirroredImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$SetNativeSize
   void MirroredImage__SetNativeSize (MirroredImage_o* __this, const MethodInfo* method); */

void MirroredImage__SetNativeSize_241d018(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b75b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b75b = 1;
  }
  lVar2 = MirroredImage__get_ActiveSprite_241bd74(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (lVar2 != 0) {
    UnityEngine_Sprite__get_rect_3bc3be8(lVar2,0);
    UnityEngine_Sprite__get_pixelsPerUnit_3bc41ac(lVar2,0);
    UnityEngine_Sprite__get_rect_3bc3be8(lVar2,0);
    UnityEngine_Sprite__get_pixelsPerUnit_3bc41ac(lVar2,0);
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_1,0);
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_1,0);
    if ((lVar4 != 0) && (UnityEngine_RectTransform__get_anchorMin_3c2bb70(lVar4,0), lVar2 != 0)) {
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(lVar2,0);
      lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_1,0);
      if (lVar2 != 0) {
        if ((bRam0000000004f58962 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26c78,0);
          bRam0000000004f58962 = 1;
        }
        if (lVar2 != 0) {
          lVar4 = *(long *)(lVar2 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
          }
          if (pcRam0000000004f589b8 == (code *)0x0) {
            pcRam0000000004f589b8 = (code *)FUN_021f03bc(&UNK_013d4c25);
          }
          (*pcRam0000000004f589b8)(lVar4,&stack0xffffffffffffffe8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

