/* IL2CPP: HomeSceneSpawnerRunner$$Key
HomeScenePathKey_o HomeSceneSpawnerRunner__Key (float t, float x, float y, float rotate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$Key
   HomeScenePathKey_o HomeSceneSpawnerRunner__Key (float t, float x, float y, float rotate, const
   MethodInfo* method); */

void HomeSceneSpawnerRunner__Key_242b000
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0x3f800000;
  param_1[4] = param_5;
  *(undefined8 *)(param_1 + 5) = uVar1;
  return;
}

