/* IL2CPP: CameraBoundsSystem$$CreateTarget
UnityEngine_Transform_o* CameraBoundsSystem__CreateTarget (CameraBoundsSystem_o* __this, System_String_o* targetName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CameraBoundsSystem$$CreateTarget
   UnityEngine_Transform_o* CameraBoundsSystem__CreateTarget (CameraBoundsSystem_o* __this,
   System_String_o* targetName, const MethodInfo* method); */

long CameraBoundsSystem__CreateTarget_24d6484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b3b90;
                    /* try { // try from 025d64a0 to 026d64a7 has its CatchHandler @ 025d6554 */
  if ((bRam0000000004f4bc3a & 1) == 0) {
                    /* try { // try from 025d64ac to 026d64b3 has its CatchHandler @ 025d654c */
    FUN_021f03f8(PTR_DAT_049b3b90);
    bRam0000000004f4bc3a = 1;
  }
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 025d64cc to 026d64d7 has its CatchHandler @ 025d6550 */
  UnityEngine_GameObject___ctor_3c1db70(lVar2,param_2,0);
                    /* try { // try from 025d64d8 to 026d6537 has its CatchHandler @ 025d636c */
  if ((lVar2 != 0) && (lVar2 = UnityEngine_GameObject__get_transform_3c1ca74(lVar2,0), lVar2 != 0))
  {
    UnityEngine_Transform__set_parent_3c2ded4(lVar2,*(undefined8 *)(param_1 + 0x70),0);
    if (*(long *)(param_1 + 0x38) != 0) {
      Unity_Cinemachine_CinemachineTargetGroup__AddMember_389fa2c
                (0x3f800000,0x3f800000,*(long *)(param_1 + 0x38),lVar2,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

