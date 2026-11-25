/* IL2CPP: SandFlowSystem$$Release
void SandFlowSystem__Release (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Release
   void SandFlowSystem__Release (SandFlowSystem_o* __this, Block_o* block, const MethodInfo*
   method); */

void SandFlowSystem__Release_24d0d74(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc09 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UnityEngine_Component__get_transform_3c18724(param_2,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if ((*(long *)(param_1 + 0x50) != 0) && (lVar3 != 0)) {
      fVar5 = *(float *)(*(long *)(param_1 + 0x50) + 0x34);
      lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (fVar5 * *(float *)(lVar4 + 0xc),fVar5 * *(float *)(lVar4 + 0x10),
                 *(float *)(lVar4 + 0x14) * fVar5,lVar3,0);
      Block__SetMotionDurationMultiplier_23dc644(*(undefined4 *)(param_1 + 0x1ac),param_2,0);
      if (*(long **)(param_2 + 0x100) == (long *)0x0) {
        return;
      }
      if (**(long **)(param_2 + 0x100) != *(long *)PTR_DAT_049c1c78) {
        return;
      }
      if (*(char *)(param_2 + 0x158) != '\0') {
        return;
      }
      lVar3 = *(long *)(param_2 + 0x140);
      if (lVar3 != 0) {
        UnityEngine_Rigidbody__set_isKinematic_3c8a7bc(lVar3,0,0);
        UnityEngine_Rigidbody__set_detectCollisions_3c8a944(lVar3,1,0);
        UnityEngine_Rigidbody__set_interpolation_3c8ad64(lVar3,1,0);
        lVar3 = *(long *)(param_2 + 0x148);
        if (lVar3 != 0) {
          if ((bRam0000000004f59f8b & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a28780,1,0);
            bRam0000000004f59f8b = 1;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000004f59fa0 == (code *)0x0) {
              pcRam0000000004f59fa0 = (code *)FUN_021f03bc(&UNK_013aded7);
            }
                    /* WARNING: Could not recover jumptable at 0x03d85638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f59fa0)(lVar4,1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

