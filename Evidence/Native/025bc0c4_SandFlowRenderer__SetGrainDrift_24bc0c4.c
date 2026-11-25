/* IL2CPP: SandFlowRenderer$$SetGrainDrift
void SandFlowRenderer__SetGrainDrift (SandFlowRenderer_o* __this, float limit, float shear, float edge, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SetGrainDrift
   void SandFlowRenderer__SetGrainDrift (SandFlowRenderer_o* __this, float limit, float shear, float
   edge, const MethodInfo* method); */

void SandFlowRenderer__SetGrainDrift_24bc0c4(float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f4bbb6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbb6 = 1;
  }
  puVar2 = PTR_DAT_049c6e10;
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = param_1;
  }
  fVar5 = 1.0;
  if (param_2 <= 1.0) {
    fVar5 = param_2;
  }
  fVar7 = 0.0;
  if (0.0 <= param_2) {
    fVar7 = fVar5;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = param_3;
  }
  if (((*(float *)(param_4 + 0x328) == fVar6) && (*(float *)(param_4 + 0x330) == fVar7)) &&
     (*(float *)(param_4 + 0x32c) == fVar5)) {
    return;
  }
  lVar4 = *(long *)(param_4 + 0x2d8);
  *(float *)(param_4 + 0x328) = fVar6;
  *(float *)(param_4 + 0x330) = fVar7;
  lVar3 = *(long *)puVar2;
  *(float *)(param_4 + 0x32c) = fVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,uVar1,0);
  }
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
  }
  if (pcRam0000000004f56e88 == (code *)0x0) {
    pcRam0000000004f56e88 = (code *)FUN_021f03bc(&UNK_013b9000);
  }
  (*pcRam0000000004f56e88)(lVar3,uVar1,&stack0xffffffffffffffd0);
  return;
}

