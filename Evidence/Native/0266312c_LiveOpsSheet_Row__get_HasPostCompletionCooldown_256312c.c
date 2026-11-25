/* IL2CPP: LiveOpsSheet.Row$$get_HasPostCompletionCooldown
bool LiveOpsSheet_Row__get_HasPostCompletionCooldown (LiveOpsSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$get_HasPostCompletionCooldown
   bool LiveOpsSheet_Row__get_HasPostCompletionCooldown (LiveOpsSheet_Row_o* __this, const
   MethodInfo* method); */

bool LiveOpsSheet_Row__get_HasPostCompletionCooldown_256312c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0();
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 02663158 to 027631df has its CatchHandler @ 0266342c */
      bVar1 = *(char *)(param_1 + 0x30) == '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}

