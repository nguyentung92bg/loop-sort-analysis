/* IL2CPP: WeeklyMissionProgressSheet.Row$$set_Fulfill
void WeeklyMissionProgressSheet_Row__set_Fulfill (WeeklyMissionProgressSheet_Row_o* __this, CloudPrefsBool_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionProgressSheet.Row$$set_Fulfill
   void WeeklyMissionProgressSheet_Row__set_Fulfill (WeeklyMissionProgressSheet_Row_o* __this,
   CloudPrefsBool_o value, const MethodInfo* method); */

void WeeklyMissionProgressSheet_Row__set_Fulfill_2568e40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x40) = param_2[3];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x30U >> 0xc & 0x3f),
                 (param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

