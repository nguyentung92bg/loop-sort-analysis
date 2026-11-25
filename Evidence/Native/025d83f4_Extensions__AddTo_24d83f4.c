/* IL2CPP: Extensions$$AddTo
LitMotion_MotionHandle_o Extensions__AddTo (LitMotion_MotionHandle_o handle, GameBehaviourBase_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$AddTo
   LitMotion_MotionHandle_o Extensions__AddTo (LitMotion_MotionHandle_o handle, GameBehaviourBase_o*
   target, const MethodInfo* method); */

undefined1  [16] Extensions__AddTo_24d83f4(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if (param_3 != 0) {
    GameBehaviourBase__Register_24f4ce4(param_3,param_1,param_2,0);
    auVar1._8_4_ = param_2;
    auVar1._0_8_ = param_1;
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

