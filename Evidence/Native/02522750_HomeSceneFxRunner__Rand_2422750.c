/* IL2CPP: HomeSceneFxRunner$$Rand
float HomeSceneFxRunner__Rand (System_Random_o* random, float lo, float hi, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner$$Rand
   float HomeSceneFxRunner__Rand (System_Random_o* random, float lo, float hi, const MethodInfo*
   method); */

float HomeSceneFxRunner__Rand_2422750(float param_1,float param_2,long *param_3)

{
  double dVar1;
  
  if (param_3 != (long *)0x0) {
    dVar1 = (double)(**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    return (param_2 - param_1) * (float)dVar1 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

