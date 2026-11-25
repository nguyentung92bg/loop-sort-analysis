/* IL2CPP: MirroredImage$$get_ActiveSprite
UnityEngine_Sprite_o* MirroredImage__get_ActiveSprite (MirroredImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$get_ActiveSprite
   UnityEngine_Sprite_o* MirroredImage__get_ActiveSprite (MirroredImage_o* __this, const MethodInfo*
   method); */

undefined8 MirroredImage__get_ActiveSprite_241bd74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b756 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b756 = 1;
  }
  uVar3 = UnityEngine_UI_Image__get_overrideSprite_3cfba08(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
  puVar2 = PTR_DAT_049b3b98;
  if ((uVar4 & 1) != 0) {
    if ((bRam0000000004f5a7b3 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,0);
      bRam0000000004f5a7b3 = 1;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
    lVar1 = 0xe0;
    if ((uVar4 & 1) == 0) {
      lVar1 = 0xd8;
    }
    return *(undefined8 *)(param_1 + lVar1);
  }
  return *(undefined8 *)(param_1 + 0xd8);
}

