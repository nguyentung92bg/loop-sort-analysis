/* IL2CPP: SlicedFilledImage$$set_material
void SlicedFilledImage__set_material (SlicedFilledImage_o* __this, UnityEngine_Material_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$set_material
   void SlicedFilledImage__set_material (SlicedFilledImage_o* __this, UnityEngine_Material_o* value,
   const MethodInfo* method); */

void SlicedFilledImage__set_material_249dac4(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f5a786 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,param_2,0);
    bRam0000000004f5a786 = 1;
  }
  lVar3 = param_1[4];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,param_2,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  param_1[4] = param_2;
  thunk_FUN_021f190c(param_1 + 4,param_2);
                    /* WARNING: Could not recover jumptable at 0x03df79a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  return;
}

