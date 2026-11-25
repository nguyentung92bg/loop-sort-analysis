/* IL2CPP: CellElementBase$$GetSelfLocalPosition
UnityEngine_Vector3_o CellElementBase__GetSelfLocalPosition (CellElementBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElementBase$$GetSelfLocalPosition
   UnityEngine_Vector3_o CellElementBase__GetSelfLocalPosition (CellElementBase_o* __this, const
   MethodInfo* method); */

float CellElementBase__GetSelfLocalPosition_25062fc
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(long *)(param_5 + 200);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0xbc);
    fVar4 = *(float *)(lVar1 + 200);
    fVar7 = *(float *)(lVar1 + 0xd4);
    fVar6 = *(float *)(lVar1 + 0xcc);
    fVar5 = *(float *)(lVar1 + 0xd0);
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

