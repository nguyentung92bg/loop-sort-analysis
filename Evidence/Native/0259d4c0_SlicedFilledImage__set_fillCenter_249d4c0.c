/* IL2CPP: SlicedFilledImage$$set_fillCenter
void SlicedFilledImage__set_fillCenter (SlicedFilledImage_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$set_fillCenter
   void SlicedFilledImage__set_fillCenter (SlicedFilledImage_o* __this, bool value, const
   MethodInfo* method); */

void SlicedFilledImage__set_fillCenter_249d4c0(long *param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte abStack_24 [4];
  
  puVar1 = PTR_DAT_049c6498;
  if ((bRam0000000004f4bace & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6498);
    bRam0000000004f4bace = 1;
  }
  abStack_24[0] = param_2 & 1;
  uVar2 = SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__2737bf4
                    (param_1 + 0x1d,abStack_24,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  }
  return;
}

