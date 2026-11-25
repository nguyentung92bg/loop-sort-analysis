/* IL2CPP: LiveOpsSheet.Row$$get_HasWeeklySchedule
bool LiveOpsSheet_Row__get_HasWeeklySchedule (LiveOpsSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$get_HasWeeklySchedule
   bool LiveOpsSheet_Row__get_HasWeeklySchedule (LiveOpsSheet_Row_o* __this, const MethodInfo*
   method); */

bool LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(long param_1)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  
  uVar3 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    sVar2 = System_String__get_Chars_2f7736c(*(long *)(param_1 + 0x28),0,0);
    bVar1 = sVar2 != 0x2d;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

