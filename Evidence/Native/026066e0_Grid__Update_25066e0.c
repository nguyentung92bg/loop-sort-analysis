/* IL2CPP: Grid$$Update
void Grid__Update (Grid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$Update
   void Grid__Update (Grid_o* __this, const MethodInfo* method); */

void Grid__Update_25066e0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_4,0);
  if (lVar1 != 0) {
    fVar2 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
    fVar4 = param_2;
    fVar5 = param_3;
    lVar1 = UnityEngine_Component__get_transform_3c18724(param_4,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__get_rotation_3c2d7a8(lVar1,0);
      fVar3 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
      fVar6 = (float)*(undefined8 *)(param_4 + 0xd4);
      fVar7 = (float)((ulong)*(undefined8 *)(param_4 + 0xd4) >> 0x20);
      *(float *)(param_4 + 200) = fVar2 + fVar3;
      *(float *)(param_4 + 0xcc) = param_2 + fVar4;
      *(float *)(param_4 + 0xd0) = param_3 + fVar5;
      *(ulong *)(param_4 + 0xd4) = CONCAT44((fVar7 + fVar7) * 0.5,(fVar6 + fVar6) * 0.5);
      *(float *)(param_4 + 0xdc) = (*(float *)(param_4 + 0xdc) + *(float *)(param_4 + 0xdc)) * 0.5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

