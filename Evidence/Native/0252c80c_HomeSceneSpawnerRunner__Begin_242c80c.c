/* IL2CPP: HomeSceneSpawnerRunner$$Begin
void HomeSceneSpawnerRunner__Begin (HomeSceneSpawnerRunner_o* __this, HomeSceneSpawnerRunner_Actor_o* actor, float t, float rate, float dy, float clock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$Begin
   void HomeSceneSpawnerRunner__Begin (HomeSceneSpawnerRunner_o* __this,
   HomeSceneSpawnerRunner_Actor_o* actor, float t, float rate, float dy, float clock, const
   MethodInfo* method); */

void HomeSceneSpawnerRunner__Begin_242c80c
               (float param_1,float param_2,undefined4 param_3,float param_4,undefined8 param_5,
               long param_6)

{
  float fVar1;
  
  if (param_6 != 0) {
    param_2 = *(float *)(param_6 + 0x24) / param_2;
    fVar1 = param_2 + param_1;
    *(float *)(param_6 + 0x40) = fVar1;
    if (param_4 < fVar1) {
      *(float *)(param_6 + 0x44) = param_1;
      *(float *)(param_6 + 0x48) = param_2;
      *(undefined1 *)(param_6 + 0x4c) = 1;
      if (*(long *)(param_6 + 0x10) == 0) goto LAB_0252c84c;
      *(undefined4 *)(*(long *)(param_6 + 0x10) + 0xa8) = param_3;
    }
    return;
  }
LAB_0252c84c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

