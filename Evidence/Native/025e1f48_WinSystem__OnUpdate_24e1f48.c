/* IL2CPP: WinSystem$$OnUpdate
void WinSystem__OnUpdate (WinSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinSystem$$OnUpdate
   void WinSystem__OnUpdate (WinSystem_o* __this, float deltaTime, const MethodInfo* method); */

void WinSystem__OnUpdate_24e1f48(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bc6f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fe8);
                    /* try { // try from 025e1f78 to 026e1f7f has its CatchHandler @ 025e2284 */
    FUN_021f03f8(PTR_DAT_049c7a38);
    bRam0000000004f4bc6f = 1;
  }
  SystemBase__OnUpdate_2555ef8(param_1,param_2,0);
  puVar1 = PTR_DAT_049c7a38;
                    /* try { // try from 025e1fa0 to 026e1feb has its CatchHandler @ 025e228c */
  if (*(long *)(param_2 + 0x30) != 0) {
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
              (*(long *)(param_2 + 0x30),&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
    uVar2 = System_String__op_Inequality_2f7b800(uStack_28,*(undefined8 *)puVar1,0);
    if ((uVar2 & 1) == 0) {
      WinSystem__CheckCarrierBlockColors_24e1ff4(param_2);
    }
                    /* try { // try from 025e1fec to 026e2007 has its CatchHandler @ 025e1dcc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

