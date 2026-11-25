/* IL2CPP: ConstantSheetRow$$Delete
void ConstantSheetRow__Delete (ConstantSheetRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConstantSheetRow$$Delete
   void ConstantSheetRow__Delete (ConstantSheetRow_o* __this, const MethodInfo* method); */

void ConstantSheetRow__Delete_255d63c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

