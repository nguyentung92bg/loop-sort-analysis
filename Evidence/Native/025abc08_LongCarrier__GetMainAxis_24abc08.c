/* IL2CPP: LongCarrier$$GetMainAxis
int32_t LongCarrier__GetMainAxis (UnityEngine_Vector3_o direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$GetMainAxis
   int32_t LongCarrier__GetMainAxis (UnityEngine_Vector3_o direction, const MethodInfo* method); */

undefined4 LongCarrier__GetMainAxis_24abc08(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  
  param_2 = ABS(param_2);
  param_1 = ABS(param_1);
  uVar3 = 2;
  if (ABS(param_3) <= param_2) {
    uVar3 = 1;
  }
  bVar1 = true;
  bVar2 = false;
  if (ABS(param_3) <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1) && !NAN(param_2)) {
      bVar1 = param_1 < param_2;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    uVar3 = 0;
  }
  return uVar3;
}

