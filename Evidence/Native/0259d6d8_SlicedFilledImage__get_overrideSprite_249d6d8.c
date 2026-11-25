/* IL2CPP: SlicedFilledImage$$get_overrideSprite
UnityEngine_Sprite_o* SlicedFilledImage__get_overrideSprite (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$get_overrideSprite
   UnityEngine_Sprite_o* SlicedFilledImage__get_overrideSprite (SlicedFilledImage_o* __this, const
   MethodInfo* method); */

undefined8 SlicedFilledImage__get_overrideSprite_249d6d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad1 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
  lVar1 = 0xf0;
  if ((uVar3 & 1) == 0) {
    lVar1 = 0xd8;
  }
  return *(undefined8 *)(param_1 + lVar1);
}

