/* IL2CPP: CameraBoundsSystem$$MoveTarget
void CameraBoundsSystem__MoveTarget (CameraBoundsSystem_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o to, LitMotion_MotionHandle_o* motion, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CameraBoundsSystem$$MoveTarget
   void CameraBoundsSystem__MoveTarget (CameraBoundsSystem_o* __this, UnityEngine_Transform_o*
   target, UnityEngine_Vector3_o to, LitMotion_MotionHandle_o* motion, const MethodInfo* method); */

void CameraBoundsSystem__MoveTarget_24d6358(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
                    /* try { // try from 025d636c to 026d63fb has its CatchHandler @ 025d636c
                       catch() { ... } // from try @ 025d636c with catch @ 025d636c
                       catch() { ... } // from try @ 025d64d8 with catch @ 025d636c
                       catch() { ... } // from try @ 025d6540 with catch @ 025d636c
                       catch() { ... } // from try @ 025d654c with catch @ 025d636c
                       catch() { ... } // from try @ 025d65a0 with catch @ 025d636c */
  if ((bRam0000000004f4bc37 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c7740);
    bRam0000000004f4bc37 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lVar2 != 0) {
    uStack_58 = *(undefined8 *)(lVar2 + 0x58);
    uStack_60 = *(undefined8 *)(lVar2 + 0x50);
    uStack_50 = *(undefined8 *)(lVar2 + 0x60);
    lVar2 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                      (&uStack_60,*(undefined8 *)PTR_DAT_049c7740);
    if (lVar2 != 0) {
      if (0.0 < *(float *)(lVar2 + 0x38)) {
                    /* try { // try from 025d63fc to 026d6417 has its CatchHandler @ 025d6560 */
        FUN_024f75b8(*param_3,*(undefined4 *)(param_3 + 1),1,0);
      }
      puVar1 = PTR_DAT_049c20a0;
      if (param_2 != 0) {
        UnityEngine_Transform__get_position_3c2d540(param_2,0);
                    /* try { // try from 025d6424 to 026d642b has its CatchHandler @ 025d6568 */
                    /* try { // try from 025d6430 to 026d6437 has its CatchHandler @ 025d6564 */
        auVar3 = LitMotion_LMotion__Create_2eaa1b4(0);
        auVar3 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                           (auVar3._0_8_,auVar3._8_8_,param_2,*(undefined8 *)puVar1);
                    /* try { // try from 025d644c to 026d645b has its CatchHandler @ 025d6558 */
        *param_3 = auVar3._0_8_;
        *(int *)(param_3 + 1) = auVar3._8_4_;
        LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                  (auVar3._0_8_,auVar3._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x20),0);
                    /* try { // try from 025d646c to 026d6493 has its CatchHandler @ 025d655c */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

