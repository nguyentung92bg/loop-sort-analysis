/* IL2CPP: LiveOpsSheet.Row$$set_IntervalTimestampUtc
void LiveOpsSheet_Row__set_IntervalTimestampUtc (LiveOpsSheet_Row_o* __this, CloudPrefsT_DateTimeOffset__o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$set_IntervalTimestampUtc
   void LiveOpsSheet_Row__set_IntervalTimestampUtc (LiveOpsSheet_Row_o* __this,
   CloudPrefsT_DateTimeOffset__o value, const MethodInfo* method); */

void LiveOpsSheet_Row__set_IntervalTimestampUtc_2563088(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_2[1];
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0xa8U >> 0xc & 0x3f),
                 (param_1 + 0xa8U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

