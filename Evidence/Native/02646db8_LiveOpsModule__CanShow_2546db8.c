/* IL2CPP: LiveOpsModule$$CanShow
bool LiveOpsModule__CanShow (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanShow
   bool LiveOpsModule__CanShow (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
    */

void LiveOpsModule__CanShow_2546db8(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4c011 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4c011 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar2 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02646e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

