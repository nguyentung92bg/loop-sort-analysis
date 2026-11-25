/* IL2CPP: SlicedFilledImage$$set_sprite
void SlicedFilledImage__set_sprite (SlicedFilledImage_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$set_sprite
   void SlicedFilledImage__set_sprite (SlicedFilledImage_o* __this, UnityEngine_Sprite_o* value,
   const MethodInfo* method); */

void SlicedFilledImage__set_sprite_249d178(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049c6460;
  if ((bRam0000000004f4bacb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6460);
    bRam0000000004f4bacb = 1;
  }
  uVar2 = SlicedFilledImage_SetPropertyUtility__SetClass_object__2737b98
                    (param_1 + 0x1b,param_2,*(undefined8 *)puVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4badc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6468);
    FUN_021f03f8(PTR_DAT_049c6470);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6478);
    FUN_021f03f8(PTR_DAT_049c6480);
    bRam0000000004f4badc = 1;
  }
  uVar3 = SlicedFilledImage__get_activeSprite_249d660(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574(lVar4);
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = SlicedFilledImage__get_activeSprite_249d660(param_1);
    if (lVar4 == 0) {
LAB_0259d39c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = UnityEngine_Sprite__get_texture_3bc3d98(lVar4,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
    puVar1 = PTR_DAT_049c6480;
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_049c6480;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x28) == '\0') {
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6468);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar3,0,*(undefined8 *)PTR_DAT_049c6478,0);
        UnityEngine_U2D_SpriteAtlasManager__add_atlasRegistered_3c46178(uVar3,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
          lVar4 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x28) = 1;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
      if (lVar4 == 0) goto LAB_0259d39c;
      FUN_02333498(lVar4,param_1,*(undefined8 *)PTR_DAT_049c6470);
      *(undefined1 *)((long)param_1 + 0xfc) = 1;
    }
  }
  return;
}

