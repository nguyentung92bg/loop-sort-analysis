/* IL2CPP: SandFlowSystem$$AdvanceTravel
void SandFlowSystem__AdvanceTravel (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$AdvanceTravel
   void SandFlowSystem__AdvanceTravel (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__AdvanceTravel_24c9b18(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_1 + 0x194);
  iVar2 = UnityEngine_Time__get_frameCount_3c17810(0);
  if (iVar1 != iVar2) {
    uVar3 = UnityEngine_Time__get_frameCount_3c17810(0);
    lVar4 = *(long *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x194) = uVar3;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar7 = *(float *)(lVar4 + 800);
    fVar8 = *(float *)(param_1 + 0x1a0);
    fVar5 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    *(float *)(lVar4 + 800) = fVar7 + fVar8 * fVar6;
  }
  return;
}

