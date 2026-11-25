/* IL2CPP: SheetGoogleConverter$$get_Spreadsheets
UnityEngine_TextAsset_o* SheetGoogleConverter__get_Spreadsheets (SheetGoogleConverter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetGoogleConverter$$get_Spreadsheets
   UnityEngine_TextAsset_o* SheetGoogleConverter__get_Spreadsheets (SheetGoogleConverter_o* __this,
   const MethodInfo* method); */

undefined8 SheetGoogleConverter__get_Spreadsheets_2565f10(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049cbbf0;
  if ((bRam0000000004f4c159 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbbf0);
    bRam0000000004f4c159 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_TextAsset___ctor_3c226a4(uVar2,0);
  return uVar2;
}

