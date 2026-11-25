/* IL2CPP: SheetContainer$$.ctor
void SheetContainer___ctor (SheetContainer_o* __this, Cathei_BakingSheet_ISheetImporter_array* importers, Microsoft_Extensions_Logging_ILogger_o* logger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetContainer$$.ctor
   void SheetContainer___ctor (SheetContainer_o* __this, Cathei_BakingSheet_ISheetImporter_array*
   importers, Microsoft_Extensions_Logging_ILogger_o* logger, const MethodInfo* method); */

void SheetContainer___ctor_2565644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* try { // try from 02665644 to 0276564f has its CatchHandler @ 02665a18 */
                    /* try { // try from 0266565c to 02765667 has its CatchHandler @ 02665a1c */
  Cathei_BakingSheet_SheetContainerBase___ctor_22dd9f0(param_1,param_3,0);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
                    /* try { // try from 0266566c to 0276567b has its CatchHandler @ 02665a20 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

