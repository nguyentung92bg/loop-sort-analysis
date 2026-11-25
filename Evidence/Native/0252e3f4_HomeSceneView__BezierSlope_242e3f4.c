/* IL2CPP: HomeSceneView$$BezierSlope
float HomeSceneView__BezierSlope (float p1, float p2, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$BezierSlope
   float HomeSceneView__BezierSlope (float p1, float p2, float t, const MethodInfo* method); */

float HomeSceneView__BezierSlope_242e3f4(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = 1.0 - param_3;
  return (1.0 - param_2) * param_3 * 3.0 * param_3 +
         fVar1 * fVar1 * 3.0 * param_1 + (param_2 - param_1) * fVar1 * 6.0 * param_3;
}

