/* IL2CPP: SplineSheet.Layout$$PostLoad
void SplineSheet_Layout__PostLoad (SplineSheet_Layout_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineSheet.Layout$$PostLoad
   void SplineSheet_Layout__PostLoad (SplineSheet_Layout_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void SplineSheet_Layout__PostLoad_25678ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_049cb430;
  if ((bRam0000000004f4c16c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb430);
    bRam0000000004f4c16c = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar1);
  auVar2 = SplineSheet_Grid__Create_2567a10(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  thunk_FUN_021f190c((undefined1 (*) [16])(param_1 + 0x40),0);
  return;
}

