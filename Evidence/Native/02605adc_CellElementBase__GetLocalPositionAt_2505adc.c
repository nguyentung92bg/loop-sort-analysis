/* IL2CPP: CellElementBase$$GetLocalPositionAt
UnityEngine_Vector3_o CellElementBase__GetLocalPositionAt (CellElementBase_o* __this, CellBase_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElementBase$$GetLocalPositionAt
   UnityEngine_Vector3_o CellElementBase__GetLocalPositionAt (CellElementBase_o* __this, CellBase_o*
   cell, const MethodInfo* method); */

float CellElementBase__GetLocalPositionAt_2505adc
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                long param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_6 != 0) {
    fVar3 = *(float *)(param_6 + 0xbc);
    fVar4 = *(float *)(param_6 + 200);
    fVar7 = *(float *)(param_6 + 0xd4);
    fVar6 = *(float *)(param_6 + 0xcc);
    fVar5 = *(float *)(param_6 + 0xd0);
    lVar1 = UnityEngine_Component__get_transform_3c18724(param_5,0);
    if (lVar1 != 0) {
      fVar2 = (float)UnityEngine_Transform__get_rotation_3c2d7a8(lVar1,0);
      fVar4 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8
                               ((fVar6 * param_3 + fVar7 * fVar2 + fVar4 * param_4) -
                                fVar5 * param_2,
                                (fVar5 * fVar2 + fVar7 * param_2 + fVar6 * param_4) -
                                fVar4 * param_3,
                                (fVar4 * param_2 + fVar7 * param_3 + fVar5 * param_4) -
                                fVar6 * fVar2,
                                ((fVar7 * param_4 - fVar4 * fVar2) - fVar6 * param_2) -
                                fVar5 * param_3,*(undefined4 *)(param_5 + 0xa8),
                                *(undefined4 *)(param_5 + 0xac),*(undefined4 *)(param_5 + 0xb0),0);
      return fVar3 + fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

