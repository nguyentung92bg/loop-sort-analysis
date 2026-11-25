/* IL2CPP: Monitors$$RestoreRaycaster
void Monitors__RestoreRaycaster (Monitors_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$RestoreRaycaster
   void Monitors__RestoreRaycaster (Monitors_o* __this, Il2CppObject* owner, const MethodInfo*
   method); */

void Monitors__RestoreRaycaster_256eafc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_049cc020;
  if ((bRam0000000004f4c1b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc020);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0266eb3c to 0276eb43 has its CatchHandler @ 0266ee18 */
    bRam0000000004f4c1b4 = 1;
  }
  lVar2 = Monitors__Get_object__26889d0(param_1,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    RaycastBlockerMonitor__Unblock_245bb2c(lVar2,param_2,0);
                    /* try { // try from 0266eb64 to 0276ebaf has its CatchHandler @ 0266ee1c */
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x28);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 0266ebd0 to 0276ebdb has its CatchHandler @ 0266edf0 */
        return;
      }
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x50) + 0x28), plVar4 != (long *)0x0)) {
                    /* try { // try from 0266ebb0 to 0276ebcf has its CatchHandler @ 0266e978 */
                    /* WARNING: Could not recover jumptable at 0x0266ebc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

