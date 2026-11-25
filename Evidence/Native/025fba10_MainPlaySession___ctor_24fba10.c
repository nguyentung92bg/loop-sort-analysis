/* IL2CPP: MainPlaySession$$.ctor
void MainPlaySession___ctor (MainPlaySession_o* __this, SheetContainer_o* sheetContainer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$.ctor
   void MainPlaySession___ctor (MainPlaySession_o* __this, SheetContainer_o* sheetContainer, const
   MethodInfo* method); */

void MainPlaySession___ctor_24fba10(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  System_Object___ctor_3142338(param_1,0);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

