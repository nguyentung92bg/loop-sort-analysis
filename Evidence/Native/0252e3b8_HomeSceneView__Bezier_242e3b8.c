/* IL2CPP: HomeSceneView$$Bezier
float HomeSceneView__Bezier (float p1, float p2, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$Bezier
   float HomeSceneView__Bezier (float p1, float p2, float t, const MethodInfo* method); */

float HomeSceneView__Bezier_242e3b8(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (1.0 - param_3) * 3.0;
  return param_3 * param_3 * param_3 +
         (1.0 - param_3) * fVar1 * param_3 * param_1 + fVar1 * param_3 * param_3 * param_2;
}

