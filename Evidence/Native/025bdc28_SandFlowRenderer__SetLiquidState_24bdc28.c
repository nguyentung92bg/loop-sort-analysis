/* IL2CPP: SandFlowRenderer$$SetLiquidState
void SandFlowRenderer__SetLiquidState (SandFlowRenderer_o* __this, bool liquid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SetLiquidState
   void SandFlowRenderer__SetLiquidState (SandFlowRenderer_o* __this, bool liquid, const MethodInfo*
   method); */

void SandFlowRenderer__SetLiquidState_24bdc28(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbbe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbbe = 1;
  }
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar3 != 0) {
    uVar4 = 0;
    if ((param_2 & 1) == 0) {
      uVar4 = 0x41700000;
    }
    UnityEngine_Material__SetFloat_3bed9e8
              (uVar4,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x84),0);
    lVar3 = *(long *)(param_1 + 0x2d0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
      uVar5 = 0x41800000;
      if ((param_2 & 1) == 0) {
        uVar5 = 0;
      }
      if ((bRam0000000004f57350 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a25ca8,uVar4,0);
        FUN_021f03f8(PTR_DAT_049b89f8);
        bRam0000000004f57350 = 1;
      }
      if (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
        }
        if (*(int *)(*(long *)PTR_DAT_049b89f8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (pcRam0000000004f57530 == (code *)0x0) {
          pcRam0000000004f57530 = (code *)FUN_021f03bc(&UNK_013c5487);
        }
                    /* WARNING: Could not recover jumptable at 0x03cea3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f57530)(uVar5,lVar2,uVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

