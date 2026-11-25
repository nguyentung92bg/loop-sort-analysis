/* IL2CPP: SandFlowSystem$$Drive
void SandFlowSystem__Drive (SandFlowSystem_o* __this, Block_o* block, float distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Drive
   void SandFlowSystem__Drive (SandFlowSystem_o* __this, Block_o* block, float distance, const
   MethodInfo* method); */

void SandFlowSystem__Drive_24cd748(undefined4 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_3 != 0) && (lVar3 = *(long *)(param_3 + 0x140), lVar3 != 0)) {
    uVar1 = UnityEngine_Rigidbody__get_isKinematic_3c8a708(lVar3,0);
    if ((uVar1 & 1) == 0) {
      UnityEngine_Rigidbody__set_isKinematic_3c8a7bc(lVar3,1,0);
      UnityEngine_Rigidbody__set_interpolation_3c8ad64(lVar3,0,0);
    }
    if (*(long *)(param_2 + 0x168) != 0) {
      SandFlowRenderer__SampleFrame_24bfc7c
                (param_1,*(long *)(param_2 + 0x168),&uStack_70,&uStack_80,&uStack_90);
      lVar3 = UnityEngine_Component__get_transform_3c18724(param_3,0);
      if (*(long *)(param_2 + 0x48) != 0) {
        UnityEngine_Quaternion__LookRotation_3c0a160((undefined4)uStack_80,0);
        if (lVar3 != 0) {
          if ((bRam0000000004f58a17 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a17 = 1;
          }
          if (lVar3 != 0) {
            lVar2 = *(long *)(lVar3 + 0x10);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
            }
            if (pcRam0000000004f58aa0 == (code *)0x0) {
              pcRam0000000004f58aa0 = (code *)FUN_021f03bc(&UNK_013ab7d6);
            }
            (*pcRam0000000004f58aa0)(lVar2,&stack0xffffffffffffffd4,&stack0xffffffffffffffc4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

