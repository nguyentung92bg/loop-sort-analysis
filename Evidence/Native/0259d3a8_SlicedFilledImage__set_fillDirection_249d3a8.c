/* IL2CPP: SlicedFilledImage$$set_fillDirection
void SlicedFilledImage__set_fillDirection (SlicedFilledImage_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$set_fillDirection
   void SlicedFilledImage__set_fillDirection (SlicedFilledImage_o* __this, int32_t value, const
   MethodInfo* method); */

void SlicedFilledImage__set_fillDirection_249d3a8(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c6488;
  if ((bRam0000000004f4bacc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6488);
    bRam0000000004f4bacc = 1;
  }
  uStack_24 = param_2;
  uVar2 = SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__2737bf4
                    (param_1 + 0x1c,&uStack_24,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  }
  return;
}

