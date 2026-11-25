/* IL2CPP: MirroredImage$$ClampBorder
UnityEngine_Vector4_o MirroredImage__ClampBorder (UnityEngine_Vector4_o border, float width, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$ClampBorder
   UnityEngine_Vector4_o MirroredImage__ClampBorder (UnityEngine_Vector4_o border, float width,
   float height, const MethodInfo* method); */

float MirroredImage__ClampBorder_241cfd4
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5)

{
                    /* try { // try from 0251cfd4 to 0261cfd7 has its CatchHandler @ 0251cfe0 */
  param_3 = param_1 + param_3;
                    /* try { // try from 0251cfd8 to 0261cfe3 has its CatchHandler @ 0251cb78 */
                    /* catch() { ... } // from try @ 0251cfd4 with catch @ 0251cfe0 */
                    /* try { // try from 0251cfe4 to 0261d157 has its CatchHandler @ 0251cfe4
                       catch() { ... } // from try @ 0251cfe4 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d2b8 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d504 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d534 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d5b0 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d650 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d6a0 with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d6fc with catch @ 0251cfe4
                       catch() { ... } // from try @ 0251d728 with catch @ 0251cfe4 */
  if ((param_5 < param_3) && (0.0 < param_3)) {
    param_1 = param_1 * (param_5 / param_3);
  }
  return param_1;
}

