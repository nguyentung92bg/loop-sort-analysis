/* IL2CPP: SandFlowRenderer$$SetPileDynamics
void SandFlowRenderer__SetPileDynamics (SandFlowRenderer_o* __this, SandPileDynamics_o* dynamics, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SetPileDynamics
   void SandFlowRenderer__SetPileDynamics (SandFlowRenderer_o* __this, SandPileDynamics_o* dynamics,
   const MethodInfo* method); */

void SandFlowRenderer__SetPileDynamics_24be56c(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    if (((*(float *)(lVar1 + 0x10) != *param_2) || (*(float *)(lVar1 + 0x14) != param_2[1])) ||
       (*(float *)(lVar1 + 0x18) != param_2[2])) {
      *(undefined1 *)(lVar1 + 200) = 1;
    }
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_2;
    *(float *)(lVar1 + 0x28) = param_2[6];
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

