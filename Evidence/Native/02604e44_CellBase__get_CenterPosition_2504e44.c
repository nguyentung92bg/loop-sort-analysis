/* IL2CPP: CellBase$$get_CenterPosition
UnityEngine_Vector3_o CellBase__get_CenterPosition (CellBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$get_CenterPosition
   UnityEngine_Vector3_o CellBase__get_CenterPosition (CellBase_o* __this, const MethodInfo*
   method); */

float CellBase__get_CenterPosition_2504e44(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 02604e48 to 02704e4f has its CatchHandler @ 02604ee8 */
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (lVar1 != 0) {
                    /* try { // try from 02604e64 to 02704e6f has its CatchHandler @ 02604ee0 */
    fVar2 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
                    /* try { // try from 02604e7c to 02704e83 has its CatchHandler @ 02604ee4 */
    lVar1 = UnityEngine_Component__get_transform_3c18724(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__get_rotation_3c2d7a8(lVar1,0);
                    /* try { // try from 02604e98 to 02704e9b has its CatchHandler @ 02604fec */
      fVar3 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
      return fVar2 + fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

