/* IL2CPP: SlicedFilledImage$$UpdateMaterial
void SlicedFilledImage__UpdateMaterial (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$UpdateMaterial
   void SlicedFilledImage__UpdateMaterial (SlicedFilledImage_o* __this, const MethodInfo* method);
    */

void SlicedFilledImage__UpdateMaterial_249e4e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad6 = 1;
  }
  UnityEngine_UI_Graphic__UpdateMaterial_3cf83a0(param_1,0);
  uVar2 = SlicedFilledImage__get_activeSprite_249d660(param_1);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574(lVar5);
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    lVar5 = SlicedFilledImage__get_activeSprite_249d660(param_1);
    if (lVar5 != 0) {
      lVar5 = UnityEngine_Sprite__get_associatedAlphaSplitTexture_3bc4314(lVar5,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574(lVar4);
      }
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer_3cf7774(param_1,0);
      if (lVar4 != 0) goto LAB_0259e5c4;
    }
  }
  else {
    lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer_3cf7774(param_1,0);
    if (lVar4 != 0) {
      lVar5 = 0;
LAB_0259e5c4:
      if ((bRam0000000004f5bca1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a386a0,lVar5,0);
        FUN_021f03f8(PTR_DAT_04a25a08);
        bRam0000000004f5bca1 = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = *(long *)(lVar4 + 0x10);
      if (lVar6 != 0) {
        if (*(long *)(*(long *)PTR_DAT_04a25a08 + 0x38) == 0) {
          FUN_02229774();
        }
        uVar2 = 0;
        if (lVar5 != 0) {
          uVar2 = *(undefined8 *)(lVar5 + 0x10);
        }
        if (pcRam0000000004f5bd90 == (code *)0x0) {
          pcRam0000000004f5bd90 = (code *)FUN_021f03bc(&UNK_013cdb75);
        }
                    /* WARNING: Could not recover jumptable at 0x03fc455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f5bd90)(lVar6,uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

