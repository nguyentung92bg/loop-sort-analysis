/* IL2CPP: SpriteAnimationEffect$$Update
void SpriteAnimationEffect__Update (SpriteAnimationEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpriteAnimationEffect$$Update
   void SpriteAnimationEffect__Update (SpriteAnimationEffect_o* __this, const MethodInfo* method);
    */

void SpriteAnimationEffect__Update_2573590(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar5 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  if (fVar5 < *(float *)(param_1 + 0x44)) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x40) = uVar2 + 1;
  *(float *)(param_1 + 0x44) = fVar5 + *(float *)(param_1 + 0x30);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_UI_Image__set_sprite_3cee6e8
                (*(long *)(param_1 + 0x38),*(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 0x40) / iVar1;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - iVar3 * iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

