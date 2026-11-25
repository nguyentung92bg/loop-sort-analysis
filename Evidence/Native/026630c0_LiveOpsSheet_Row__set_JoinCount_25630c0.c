/* IL2CPP: LiveOpsSheet.Row$$set_JoinCount
void LiveOpsSheet_Row__set_JoinCount (LiveOpsSheet_Row_o* __this, CloudPrefsInt_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$set_JoinCount
   void LiveOpsSheet_Row__set_JoinCount (LiveOpsSheet_Row_o* __this, CloudPrefsInt_o value, const
   MethodInfo* method); */

void LiveOpsSheet_Row__set_JoinCount_25630c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0xe0) = param_2[3];
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0xd0U >> 0xc & 0x3f),
                 (param_1 + 0xd0U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

