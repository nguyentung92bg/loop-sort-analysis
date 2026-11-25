/* IL2CPP: LevelSheet.Level$$set_Carriers
void LevelSheet_Level__set_Carriers (LevelSheet_Level_o* __this, Cathei_BakingSheet_Sheet_Reference_int__CarrierSheet_Row__o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelSheet.Level$$set_Carriers
   void LevelSheet_Level__set_Carriers (LevelSheet_Level_o* __this,
   Cathei_BakingSheet_Sheet_Reference_int__CarrierSheet_Row__o value, const MethodInfo* method); */

void LevelSheet_Level__set_Carriers_2562e74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 02662e80 to 02762e9f has its CatchHandler @ 02663440 */
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[2];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x40U >> 0xc & 0x3f),
                 (param_1 + 0x40U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

