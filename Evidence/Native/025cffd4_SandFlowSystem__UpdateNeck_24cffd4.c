/* IL2CPP: SandFlowSystem$$UpdateNeck
void SandFlowSystem__UpdateNeck (SandFlowSystem_JellyState_o* state, float target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$UpdateNeck
   void SandFlowSystem__UpdateNeck (SandFlowSystem_JellyState_o* state, float target, const
   MethodInfo* method); */

void SandFlowSystem__UpdateNeck_24cffd4(float param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cffc4 with catch @ 025cffd4
                        */
  uVar2 = UnityEngine_Time__get_deltaTime_3c29670(0);
  fVar8 = (float)NEON_fminnm(uVar2,_UNK_013aa810);
  if (cRam0000000004f4b79c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iVar1 = -0x80000000;
  if ((float)(int)(fVar8 * 120.0) != INFINITY) {
    iVar1 = (int)(fVar8 * 120.0);
  }
  if (0 < iVar1) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar3 = (float)iVar1;
    fVar5 = *(float *)(param_2 + 0x20);
    fVar4 = *(float *)(param_2 + 0x24);
    do {
      fVar4 = fVar4 + (fVar8 / fVar3) * ((param_1 - fVar5) * _UNK_013aa884 + fVar4 * _UNK_013aa780);
      fVar6 = fVar5 + (fVar8 / fVar3) * fVar4;
      fVar7 = _UNK_013aa530;
      if (fVar6 <= _UNK_013aa530) {
        fVar7 = fVar6;
      }
      fVar5 = _UNK_013aa578;
      if (_UNK_013aa578 <= fVar6) {
        fVar5 = fVar7;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(float *)(param_2 + 0x20) = fVar5;
    *(float *)(param_2 + 0x24) = fVar4;
  }
  return;
}

