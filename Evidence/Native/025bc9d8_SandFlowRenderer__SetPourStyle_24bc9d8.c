/* IL2CPP: SandFlowRenderer$$SetPourStyle
void SandFlowRenderer__SetPourStyle (SandFlowRenderer_o* __this, SandPourStyle_o* style, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SetPourStyle
   void SandFlowRenderer__SetPourStyle (SandFlowRenderer_o* __this, SandPourStyle_o* style, const
   MethodInfo* method); */

void SandFlowRenderer__SetPourStyle_24bc9d8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000004f4bbc2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc2 = 1;
  }
  puVar1 = PTR_DAT_049c6e10;
  if (*(float *)(param_1 + 0x78) != *(float *)(param_2 + 2)) {
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar10 = param_2[1];
  uVar9 = *param_2;
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x98) = param_2[6];
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  uVar6 = *param_2;
  uVar8 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0xdc) = param_2[1];
  *(undefined8 *)(param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar3 != 0) {
    UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
              (*(undefined4 *)(param_1 + 0xd4),lVar3,
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24),0);
    if (*(long *)(param_1 + 0x2d8) != 0) {
      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                (*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4),
                 *(long *)(param_1 + 0x2d8),
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),0);
      uVar8 = *(undefined4 *)((long)param_2 + 0x1c);
      fVar5 = 0.0;
      if (0.0 <= *(float *)((long)param_2 + 0x34)) {
        fVar5 = *(float *)((long)param_2 + 0x34);
      }
      uVar4 = *(undefined4 *)((long)param_2 + 0x14);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0xf4) = uVar8;
      *(undefined4 *)(param_1 + 0xe8) = uVar4;
      *(float *)(param_1 + 0xec) = fVar5;
      if (*(long *)(param_1 + 0x2d8) != 0) {
        UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                  (*(long *)(param_1 + 0x2d8),
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),0);
        uVar8 = *(undefined4 *)((long)param_2 + 0x24);
        uVar4 = *(undefined4 *)(param_2 + 5);
        uVar13 = *(undefined4 *)((long)param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1 + 0xfc) = uVar8;
        *(undefined4 *)(param_1 + 0x100) = uVar4;
        *(undefined4 *)(param_1 + 0x104) = uVar13;
        if (*(long *)(param_1 + 0x2d8) != 0) {
          UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                    (*(long *)(param_1 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0);
          lVar2 = *(long *)(param_1 + 0x2d8);
          fVar5 = 0.0;
          if (0.0 <= *(float *)(param_2 + 6)) {
            fVar5 = *(float *)(param_2 + 6);
          }
          *(float *)(param_1 + 0x13c) = fVar5;
          if (lVar2 != 0) {
            uVar8 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0(0,uVar8,0);
            }
            lVar3 = *(long *)(lVar2 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
            }
            if (pcRam0000000004f56e80 == (code *)0x0) {
              pcRam0000000004f56e80 = (code *)FUN_021f03bc(&UNK_013d09b0);
            }
                    /* WARNING: Could not recover jumptable at 0x03cdaed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f56e80)(fVar5,lVar3,uVar8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

