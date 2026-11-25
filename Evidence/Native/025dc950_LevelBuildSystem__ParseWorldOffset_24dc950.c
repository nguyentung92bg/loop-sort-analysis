/* IL2CPP: LevelBuildSystem$$ParseWorldOffset
UnityEngine_Vector3_o LevelBuildSystem__ParseWorldOffset (LevelBuildSystem_o* __this, System_String_array* s1, int32_t x, int32_t y, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$ParseWorldOffset
   UnityEngine_Vector3_o LevelBuildSystem__ParseWorldOffset (LevelBuildSystem_o* __this,
   System_String_array* s1, int32_t x, int32_t y, UnityEngine_Quaternion_o rotation, const
   MethodInfo* method); */

float LevelBuildSystem__ParseWorldOffset_24dc950
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,long param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(long *)(param_5 + 0x90) != 0) && (param_6 != 0)) {
    fVar5 = *(float *)(*(long *)(param_5 + 0x90) + 0x28) * (float)param_7;
    if (*(int *)(param_6 + 0x18) < 3) {
      return fVar5;
    }
    if ((*(long *)(param_6 + 0x30) != 0) &&
       (lVar1 = System_String__Split_2f802dc((float)param_7,0,*(long *)(param_6 + 0x30),0x2c,0,0),
       lVar1 != 0)) {
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = 0;
      if (*(long *)(lVar1 + 0x18) != 0) {
        if ((int)*(long *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025dca78 to 026dca83 has its CatchHandler @ 025dcab8 */
          FUN_021f06a8();
        }
        uVar2 = LevelBuildSystem__ParseFloat_24dc300(lVar1,*(undefined8 *)(lVar1 + 0x20));
                    /* try { // try from 025dc9e8 to 026dc9ef has its CatchHandler @ 025dcabc */
        uVar6 = extraout_s0;
        if (*(int *)(lVar1 + 0x18) < 2) {
          uVar7 = 0;
        }
        else {
          uVar2 = LevelBuildSystem__ParseFloat_24dc300(uVar2,*(undefined8 *)(lVar1 + 0x28));
          uVar7 = extraout_s0_00;
          if (2 < *(int *)(lVar1 + 0x18)) {
                    /* try { // try from 025dca0c to 026dca57 has its CatchHandler @ 025dcac0 */
            uVar3 = LevelBuildSystem__ParseFloat_24dc300(uVar2,*(undefined8 *)(lVar1 + 0x30));
            goto LAB_025dca24;
          }
        }
        uVar3 = 0;
      }
LAB_025dca24:
      fVar4 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8
                               (param_1,param_2,param_3,param_4,uVar6,uVar7,uVar3,0);
                    /* try { // try from 025dca58 to 026dca77 has its CatchHandler @ 025dc908 */
      return fVar5 + fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

