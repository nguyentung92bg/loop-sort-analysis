/* IL2CPP: SandFlowRenderer.ReformJob$$Repeat
float SandFlowRenderer_ReformJob__Repeat (float value, float length, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer.ReformJob$$Repeat
   float SandFlowRenderer_ReformJob__Repeat (float value, float length, const MethodInfo* method);
    */

float SandFlowRenderer_ReformJob__Repeat_24c5158(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  if (cRam0000000004f4bc11 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4bc11 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  param_1 = param_1 - (float)(int)(param_1 / param_2) * param_2;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((uint)ABS(param_1) < 0x7f800001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(param_2)) {
      bVar1 = param_1 < param_2;
      bVar2 = param_1 == param_2;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    param_2 = param_1;
  }
  bVar1 = true;
  if (((uint)ABS(param_2) < 0x7f800001) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 < 0.0;
  }
  fVar4 = 0.0;
  if (!bVar1) {
    fVar4 = param_2;
  }
  return fVar4;
}

