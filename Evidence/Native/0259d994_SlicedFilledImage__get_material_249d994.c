/* IL2CPP: SlicedFilledImage$$get_material
UnityEngine_Material_o* SlicedFilledImage__get_material (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$get_material
   UnityEngine_Material_o* SlicedFilledImage__get_material (SlicedFilledImage_o* __this, const
   MethodInfo* method); */

long SlicedFilledImage__get_material_249d994(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc688);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad4 = 1;
  }
  lVar5 = param_1[4];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return param_1[4];
  }
  uVar4 = SlicedFilledImage__get_activeSprite_249d660(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Implicit_3c23140(uVar4,0);
  if ((uVar3 & 1) != 0) {
    lVar5 = SlicedFilledImage__get_activeSprite_249d660(param_1);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = UnityEngine_Sprite__get_associatedAlphaSplitTexture_3bc4314(lVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049bc688 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar1 = PTR_DAT_049bc688;
      if ((bRam0000000004f5a7bd & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bc688);
        FUN_021f03f8(PTR_DAT_049b3b98);
        bRam0000000004f5a7bd = 1;
      }
      puVar2 = PTR_DAT_049b3b98;
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      uVar4 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar2);
      }
      uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = UnityEngine_Canvas__GetETC1SupportedCanvasMaterial_3ec82e4(0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574(lVar5);
          lVar5 = *(long *)puVar1;
        }
        **(undefined8 **)(lVar5 + 0xb8) = uVar4;
        thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      return **(long **)(lVar5 + 0xb8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0259dabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  return lVar5;
}

