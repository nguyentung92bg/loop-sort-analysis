/* IL2CPP: SlicedFilledImage$$RebuildImage
void SlicedFilledImage__RebuildImage (UnityEngine_U2D_SpriteAtlas_o* spriteAtlas, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$RebuildImage
   void SlicedFilledImage__RebuildImage (UnityEngine_U2D_SpriteAtlas_o* spriteAtlas, const
   MethodInfo* method); */

void SlicedFilledImage__RebuildImage_249f284(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long *plStack_38;
  
  puVar1 = PTR_DAT_049c6480;
  if ((bRam0000000004f4bade & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c64c8);
    FUN_021f03f8(PTR_DAT_049c64d0);
    FUN_021f03f8(PTR_DAT_049c64d8);
    FUN_021f03f8(PTR_DAT_049c6480);
    bRam0000000004f4bade = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_049c64d8;
  puVar2 = PTR_DAT_049c64c8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (lVar5 == 0) {
LAB_0259f3d8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar8 = *(int *)(lVar5 + 0x18);
  if (-1 < iVar8 + -1) {
    do {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      if (lVar5 == 0) goto LAB_0259f3d8;
      iVar8 = iVar8 + -1;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar5,iVar8,&plStack_38,*(undefined8 *)puVar3);
      plVar4 = plStack_38;
      if ((plStack_38 == (long *)0x0) ||
         (uVar6 = SlicedFilledImage__get_activeSprite_249d660(plStack_38), param_1 == 0))
      goto LAB_0259f3d8;
      uVar7 = UnityEngine_U2D_SpriteAtlas__CanBindTo_3c46704(param_1,uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar5 = *plVar4;
        (**(code **)(lVar5 + 0x2d8))(plVar4,*(undefined8 *)(lVar5 + 0x2e0));
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
        if (lVar5 == 0) goto LAB_0259f3d8;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (lVar5,iVar8,*(undefined8 *)puVar2);
      }
    } while (0 < iVar8);
  }
  return;
}

