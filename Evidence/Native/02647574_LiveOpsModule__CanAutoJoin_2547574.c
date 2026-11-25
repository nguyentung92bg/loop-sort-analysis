/* IL2CPP: LiveOpsModule$$CanAutoJoin
bool LiveOpsModule__CanAutoJoin (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanAutoJoin
   bool LiveOpsModule__CanAutoJoin (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

void LiveOpsModule__CanAutoJoin_2547574(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_049b6110;
                    /* try { // try from 02647588 to 02747593 has its CatchHandler @ 026475e4 */
  if ((bRam0000000004f4c017 & 1) == 0) {
                    /* try { // try from 02647594 to 02747607 has its CatchHandler @ 02647404 */
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4c017 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar2 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026475d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

