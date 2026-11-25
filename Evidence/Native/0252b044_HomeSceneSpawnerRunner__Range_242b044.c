/* IL2CPP: HomeSceneSpawnerRunner$$Range
float HomeSceneSpawnerRunner__Range (HomeSceneSpawnerRunner_o* __this, UnityEngine_Vector2_o range, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$Range
   float HomeSceneSpawnerRunner__Range (HomeSceneSpawnerRunner_o* __this, UnityEngine_Vector2_o
   range, const MethodInfo* method); */

float HomeSceneSpawnerRunner__Range_242b044(float param_1,float param_2,long param_3)

{
  double dVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_3 + 0x30);
  if (plVar2 != (long *)0x0) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    return param_1 + (param_2 - param_1) * (float)dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

