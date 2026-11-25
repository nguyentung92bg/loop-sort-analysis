/* IL2CPP: ElevatorHole$$ScaleAroundShaft
UnityEngine_Vector3_o ElevatorHole__ScaleAroundShaft (ElevatorHole_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$ScaleAroundShaft
   UnityEngine_Vector3_o ElevatorHole__ScaleAroundShaft (ElevatorHole_o* __this,
   UnityEngine_Vector3_o position, UnityEngine_Vector3_o scale, const MethodInfo* method); */

float ElevatorHole__ScaleAroundShaft_24118e4
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
                float param_6,long param_7)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_4;
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_7,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar1,0);
    if (*(long *)(param_7 + 0xa0) != 0) {
      lVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_7 + 0xa0),0);
      if (lVar1 != 0) {
        fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
        fVar6 = param_2;
        fVar7 = param_3;
        UnityEngine_Quaternion__Inverse_3c09acc(uVar2,param_2,param_3,fVar5,0);
        fVar4 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
        fVar5 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8
                                 (uVar2,param_2,param_3,fVar5,param_4 * fVar4,param_5 * fVar6,
                                  param_6 * fVar7,0);
        return fVar3 + fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

