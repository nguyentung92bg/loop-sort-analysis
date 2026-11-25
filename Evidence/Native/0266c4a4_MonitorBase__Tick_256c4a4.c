/* IL2CPP: MonitorBase$$Tick
void MonitorBase__Tick (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$Tick
   void MonitorBase__Tick (MonitorBase_o* __this, const MethodInfo* method); */

void MonitorBase__Tick_256c4a4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
                    /* try { // try from 0266c4b4 to 0276c4b7 has its CatchHandler @ 0266c7b4 */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar1,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0266c4d0 to 0276c4d7 has its CatchHandler @ 0266c7cc */
                    /* WARNING: Could not recover jumptable at 0x0266c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    return;
  }
  return;
}

