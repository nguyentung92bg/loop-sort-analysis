/* IL2CPP: RewardClaimMonitor$$OnClaimClicked
void RewardClaimMonitor__OnClaimClicked (RewardClaimMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RewardClaimMonitor$$OnClaimClicked
   void RewardClaimMonitor__OnClaimClicked (RewardClaimMonitor_o* __this, const MethodInfo* method);
    */

void RewardClaimMonitor__OnClaimClicked_245c718(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    RewardClaimMonitor__FulfillItems_245c78c(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
    plVar1 = (long *)(param_1 + 0xa8);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_021f190c(plVar1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0255c778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

