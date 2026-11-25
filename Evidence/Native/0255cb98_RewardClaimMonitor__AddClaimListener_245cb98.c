/* IL2CPP: RewardClaimMonitor$$AddClaimListener
void RewardClaimMonitor__AddClaimListener (RewardClaimMonitor_o* __this, System_Action_o* listener, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RewardClaimMonitor$$AddClaimListener
   void RewardClaimMonitor__AddClaimListener (RewardClaimMonitor_o* __this, System_Action_o*
   listener, const MethodInfo* method); */

void RewardClaimMonitor__AddClaimListener_245cb98(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f4b925 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    bRam0000000004f4b925 = 1;
  }
  plVar3 = (long *)(param_1 + 0xa8);
  plVar1 = (long *)System_Delegate__Combine_3145640(*plVar3,param_2,0);
  if (plVar1 == (long *)0x0) {
    *plVar3 = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_049b4308;
    if ((*plVar1 != lVar2) || (*plVar3 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar1);
    }
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)plVar3 >> 0xc & 0x3f),
                 ((ulong)plVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

