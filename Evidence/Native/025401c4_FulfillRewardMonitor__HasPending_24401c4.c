/* IL2CPP: FulfillRewardMonitor$$HasPending
bool FulfillRewardMonitor__HasPending (FulfillRewardMonitor_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$HasPending
   bool FulfillRewardMonitor__HasPending (FulfillRewardMonitor_o* __this, int32_t item, const
   MethodInfo* method); */

uint FulfillRewardMonitor__HasPending_24401c4(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b842 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4048);
    bRam0000000004f4b842 = 1;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    uStack_24 = param_2;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(param_1 + 0x100),&uStack_24,*(undefined8 *)PTR_DAT_049c4048);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

