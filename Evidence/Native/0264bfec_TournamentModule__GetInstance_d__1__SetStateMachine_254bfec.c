/* IL2CPP: TournamentModule.<GetInstance>d__1$$SetStateMachine
void TournamentModule__GetInstance_d__1__SetStateMachine (TournamentModule__GetInstance_d__1_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TournamentModule.<GetInstance>d__1$$SetStateMachine
   void TournamentModule__GetInstance_d__1__SetStateMachine (TournamentModule__GetInstance_d__1_o
   __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo*
   method); */

undefined1  [16]
TournamentModule__GetInstance_d__1__SetStateMachine_254bfec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049b5c80;
                    /* try { // try from 0264c004 to 0274c00f has its CatchHandler @ 0264c090 */
                    /* try { // try from 0264c010 to 0274c047 has its CatchHandler @ 0264bde8 */
  if ((bRam0000000004f4c04b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5c80);
    bRam0000000004f4c04b = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1 + 8;
  return auVar3;
}

