/* IL2CPP: SandPileField$$SetDynamics
void SandPileField__SetDynamics (SandPileField_o* __this, SandPileDynamics_o* dynamics, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$SetDynamics
   void SandPileField__SetDynamics (SandPileField_o* __this, SandPileDynamics_o* dynamics, const
   MethodInfo* method); */

void SandPileField__SetDynamics_24d3e00(long param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((*(float *)(param_1 + 0x10) != *param_2) || (*(float *)(param_1 + 0x14) != param_2[1])) ||
     (*(float *)(param_1 + 0x18) != param_2[2])) {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)param_2;
  *(float *)(param_1 + 0x28) = param_2[6];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

