/* IL2CPP: SandFlowPacket$$SetFrame
void SandFlowPacket__SetFrame (SandFlowPacket_o __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o surface, UnityEngine_Vector3_o forward, UnityEngine_Vector3_o up, float halfWidth, float spread, float radius, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowPacket$$SetFrame
   void SandFlowPacket__SetFrame (SandFlowPacket_o __this, UnityEngine_Vector3_o center,
   UnityEngine_Vector3_o surface, UnityEngine_Vector3_o forward, UnityEngine_Vector3_o up, float
   halfWidth, float spread, float radius, const MethodInfo* method); */

void SandFlowPacket__SetFrame_24bbd98
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  *(undefined4 *)(param_7 + 0x20) = param_1;
  *(undefined4 *)(param_7 + 0x24) = param_2;
  cVar1 = cRam0000000004f4a55c;
  *(undefined4 *)(param_7 + 0x28) = param_3;
  *(float *)(param_7 + 0x30) = fStack0000000000000000;
  *(float *)(param_7 + 0x34) = fStack0000000000000004;
  *(float *)(param_7 + 0x38) = in_stack_00000008;
  *(undefined4 *)(param_7 + 0x3c) = in_stack_00000028;
  if (cVar1 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55c = '\x01';
  }
  fVar4 = fStack0000000000000004 * in_stack_00000018 - in_stack_00000008 * fStack0000000000000014;
  fVar5 = in_stack_00000008 * fStack0000000000000010 - fStack0000000000000000 * in_stack_00000018;
  fVar6 = fStack0000000000000000 * fStack0000000000000014 -
          fStack0000000000000004 * fStack0000000000000010;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar3 <= _UNK_013aa920) {
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar4 = fVar4 / fVar3;
    fVar5 = fVar5 / fVar3;
    fVar6 = fVar6 / fVar3;
  }
  *(float *)(param_7 + 0x40) = fVar4;
  *(float *)(param_7 + 0x44) = fVar5;
  *(float *)(param_7 + 0x48) = fVar6;
  *(undefined4 *)(param_7 + 0x4c) = in_stack_00000020;
  *(float *)(param_7 + 0x50) = fStack0000000000000010;
  *(float *)(param_7 + 0x54) = fStack0000000000000014;
  *(float *)(param_7 + 0x58) = in_stack_00000018;
  *(undefined4 *)(param_7 + 0x5c) = 0x3d4ccccd;
  *(undefined4 *)(param_7 + 0x70) = param_4;
  *(undefined4 *)(param_7 + 0x74) = param_5;
  *(undefined4 *)(param_7 + 0x78) = param_6;
  *(undefined4 *)(param_7 + 0x7c) = in_stack_00000030;
  return;
}

