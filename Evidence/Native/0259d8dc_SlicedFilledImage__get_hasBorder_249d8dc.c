/* IL2CPP: SlicedFilledImage$$get_hasBorder
bool SlicedFilledImage__get_hasBorder (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$get_hasBorder
   bool SlicedFilledImage__get_hasBorder (SlicedFilledImage_o* __this, const MethodInfo* method); */

bool SlicedFilledImage__get_hasBorder_249d8dc
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad3 = 1;
  }
  uVar3 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    lVar5 = SlicedFilledImage__get_activeSprite_249d660(param_5);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar6 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar5,0);
    bVar2 = 0.0 < param_4 * param_4 + param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2;
  }
  return bVar2;
}

