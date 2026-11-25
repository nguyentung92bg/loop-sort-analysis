/* IL2CPP: SwipeablePageLayout$$CanTransitionTo
bool SwipeablePageLayout__CanTransitionTo (SwipeablePageLayout_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$CanTransitionTo
   bool SwipeablePageLayout__CanTransitionTo (SwipeablePageLayout_o* __this, int32_t idx, const
   MethodInfo* method); */

bool SwipeablePageLayout__CanTransitionTo_244c200(long param_1,int param_2)

{
  if ((bRam0000000004f4b89d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c0);
    bRam0000000004f4b89d = 1;
  }
  if (-1 < param_2) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (param_2 < *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
      return *(int *)(param_1 + 0x28) != param_2;
    }
  }
  return false;
}

