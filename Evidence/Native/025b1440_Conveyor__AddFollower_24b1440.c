/* IL2CPP: Conveyor$$AddFollower
void Conveyor__AddFollower (Conveyor_o* __this, Dreamteck_Splines_SplineFollower_o* splineFollower, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$AddFollower
   void Conveyor__AddFollower (Conveyor_o* __this, Dreamteck_Splines_SplineFollower_o*
   splineFollower, const MethodInfo* method); */

void Conveyor__AddFollower_24b1440(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 025b1454 to 026b1463 has its CatchHandler @ 025b1464 */
  if ((bRam0000000004f4bb63 & 1) == 0) {
                    /* catch() { ... } // from try @ 025b13c4 with catch @ 025b1464
                       catch() { ... } // from try @ 025b1454 with catch @ 025b1464 */
    FUN_021f03f8(PTR_DAT_049c6b08);
                    /* try { // try from 025b1468 to 026b146b has its CatchHandler @ 025b1474 */
                    /* try { // try from 025b146c to 026b1477 has its CatchHandler @ 025b122c */
    bRam0000000004f4bb63 = 1;
  }
                    /* catch() { ... } // from try @ 025b1468 with catch @ 025b1474 */
  if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
            (*(long *)(param_1 + 0x120),param_2,*(undefined8 *)PTR_DAT_049c6b08);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Dreamteck_Splines_SplineFollower__set_followSpeed_234c8c4
            (*(undefined4 *)(param_1 + 0x140),param_2,0);
  puVar1 = PTR_DAT_049b3b98;
  lVar3 = *(long *)(param_1 + 0xb8);
  if ((bRam0000000004f4a614 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,lVar3,0);
    bRam0000000004f4a614 = 1;
  }
  plVar4 = param_2 + 5;
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar3,lVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar4 == 0) goto LAB_0245ac3c;
    Dreamteck_Splines_SplineComputer__Unsubscribe_2347750(*plVar4,param_2,0);
  }
  *plVar4 = lVar3;
  thunk_FUN_021f190c(plVar4,lVar3);
  lVar3 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar4 == 0) {
LAB_0245ac3c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Dreamteck_Splines_SplineComputer__Subscribe_2347624(*plVar4,param_2,0);
    (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  }
                    /* WARNING: Could not recover jumptable at 0x0245ac28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
  return;
}

