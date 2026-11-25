/* IL2CPP: CellElementBase$$GetSelfWorldPosition
UnityEngine_Vector3_o CellElementBase__GetSelfWorldPosition (CellElementBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElementBase$$GetSelfWorldPosition
   UnityEngine_Vector3_o CellElementBase__GetSelfWorldPosition (CellElementBase_o* __this, const
   MethodInfo* method); */

float CellElementBase__GetSelfWorldPosition_2506304
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(param_5 + 200);
  if ((lVar2 != 0) && (lVar1 = UnityEngine_Component__get_transform_3c18724(lVar2,0), lVar1 != 0)) {
    fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
    fVar9 = *(float *)(lVar2 + 0xbc);
    fVar5 = *(float *)(lVar2 + 200);
    fVar7 = *(float *)(lVar2 + 0xcc);
    fVar6 = *(float *)(lVar2 + 0xd0);
    fVar8 = *(float *)(lVar2 + 0xd4);
    lVar2 = UnityEngine_Component__get_transform_3c18724(param_5,0);
    if (lVar2 != 0) {
      fVar4 = (float)UnityEngine_Transform__get_rotation_3c2d7a8(lVar2,0);
      fVar5 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8
                               ((fVar7 * param_3 + fVar8 * fVar4 + fVar5 * param_4) -
                                fVar6 * param_2,
                                (fVar6 * fVar4 + fVar8 * param_2 + fVar7 * param_4) -
                                fVar5 * param_3,
                                (fVar5 * param_2 + fVar8 * param_3 + fVar6 * param_4) -
                                fVar7 * fVar4,
                                ((fVar8 * param_4 - fVar5 * fVar4) - fVar7 * param_2) -
                                fVar6 * param_3,*(undefined4 *)(param_5 + 0xa8),
                                *(undefined4 *)(param_5 + 0xac),*(undefined4 *)(param_5 + 0xb0),0);
      return fVar3 + fVar9 + fVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

