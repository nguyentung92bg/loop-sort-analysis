/* IL2CPP: SlicedFilledImage$$set_fillAmount
void SlicedFilledImage__set_fillAmount (SlicedFilledImage_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$set_fillAmount
   void SlicedFilledImage__set_fillAmount (SlicedFilledImage_o* __this, float value, const
   MethodInfo* method); */

void SlicedFilledImage__set_fillAmount_249d428(float param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fStack_24;
  
  puVar1 = PTR_DAT_049c6490;
  if ((bRam0000000004f4bacd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6490);
    bRam0000000004f4bacd = 1;
  }
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fStack_24 = 0.0;
  if (0.0 <= param_1) {
    fStack_24 = fVar3;
  }
  uVar2 = SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__2737bf4
                    ((long)param_2 + 0xe4,&fStack_24,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  }
  return;
}

