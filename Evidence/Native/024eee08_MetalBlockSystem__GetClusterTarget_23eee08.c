/* IL2CPP: MetalBlockSystem$$GetClusterTarget
UnityEngine_Vector3_o MetalBlockSystem__GetClusterTarget (bool isLeft, float fill, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$GetClusterTarget
   UnityEngine_Vector3_o MetalBlockSystem__GetClusterTarget (bool isLeft, float fill, const
   MethodInfo* method); */

float MetalBlockSystem__GetClusterTarget_23eee08(float param_1,ulong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 024eee14 to 025eee1b has its CatchHandler @ 024ef0c0 */
  fVar3 = (SQRT(param_1) * _UNK_013aa7ac + _UNK_013aa4b8) * _UNK_013aa838;
  fVar1 = (float)UnityEngine_Random__get_insideUnitCircle_3c11e08(0);
  fVar2 = _UNK_013aa598;
                    /* try { // try from 024eee70 to 025eee97 has its CatchHandler @ 024ef168 */
  if ((param_2 & 1) == 0) {
    fVar2 = _UNK_013aa974;
  }
  return fVar2 + fVar3 * fVar1;
}

