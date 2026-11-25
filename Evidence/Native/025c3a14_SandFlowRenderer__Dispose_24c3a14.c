/* IL2CPP: SandFlowRenderer$$Dispose
void SandFlowRenderer__Dispose (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$Dispose
   void SandFlowRenderer__Dispose (SandFlowRenderer_o* __this, const MethodInfo* method); */

void SandFlowRenderer__Dispose_24c3a14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  if ((bRam0000000004f4bbd9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c6ed8);
    FUN_021f03f8(PTR_DAT_049c6f60);
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6f68);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6f58);
    FUN_021f03f8(PTR_DAT_049c6eb8);
    FUN_021f03f8(PTR_DAT_049c6ef8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbd9 = 1;
  }
  SandFlowRenderer__DisableLiquid_24bd9c0(param_1);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    UnityEngine_ComputeBuffer__Release_3c26e90(*(long *)(param_1 + 0x2b0),0);
    if (*(long *)(param_1 + 0x2b8) != 0) {
      UnityEngine_ComputeBuffer__Release_3c26e90(*(long *)(param_1 + 0x2b8),0);
      if (*(long *)(param_1 + 0x2c0) != 0) {
        UnityEngine_GraphicsBuffer__Release_3beeed4(*(long *)(param_1 + 0x2c0),0);
        lVar3 = *(long *)(param_1 + 200);
        if (lVar3 != 0) {
          UnityEngine_ComputeBuffer__Release_3c26e90(lVar3,0);
        }
        *(undefined8 *)(param_1 + 200) = 0;
        thunk_FUN_021f190c((long *)(param_1 + 200),0);
        if (-1 < *(int *)(param_1 + 0x230)) {
          Unity_Jobs_JobHandle__Complete_3bbf1cc(param_1 + 0x220,0);
          *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
        }
        puVar2 = PTR_DAT_049c6ed8;
        if (*(long *)(param_1 + 0xa0) != 0) {
          SandPileField__Dispose_24d4648(*(long *)(param_1 + 0xa0),0);
          if (*(long *)(param_1 + 0x238) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x238,*(undefined8 *)puVar2);
          }
          puVar1 = PTR_DAT_049c6f10;
          if (*(long *)(param_1 + 0x248) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x248,*(undefined8 *)PTR_DAT_049c6f10);
          }
          if (*(long *)(param_1 + 600) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 600,*(undefined8 *)puVar1);
          }
          if (*(long *)(param_1 + 0x268) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x268,*(undefined8 *)puVar1);
          }
          if (*(long *)(param_1 + 0x290) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x290,*(undefined8 *)puVar1);
          }
          if (*(long *)(param_1 + 0x2a0) != 0) {
            UnityEngine_ComputeBuffer__Release_3c26e90(*(long *)(param_1 + 0x2a0),0);
          }
          *(undefined8 *)(param_1 + 0x2a0) = 0;
          thunk_FUN_021f190c(param_1 + 0x2a0,0);
          if (*(long *)(param_1 + 0x1b0) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x1b0,*(undefined8 *)puVar2);
          }
          if (*(long *)(param_1 + 0x1d0) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x1d0,*(undefined8 *)PTR_DAT_049c6f68);
          }
          if (*(long *)(param_1 + 0x1e0) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x1e0,*(undefined8 *)puVar1);
          }
          puVar2 = PTR_DAT_049b3bf8;
          if (*(long *)(param_1 + 0x180) != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (param_1 + 0x180,*(undefined8 *)PTR_DAT_049c6f60);
          }
          puVar1 = PTR_DAT_049b3b98;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar4 = UnityEngine_Application__get_isPlaying_3bc708c(0);
          lVar3 = *(long *)(param_1 + 0x2d0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574();
            }
            puVar2 = PTR_DAT_049b3b98;
            uVar5 = 0;
            if ((bRam0000000004f584c3 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_049b3b98,0);
              bRam0000000004f584c3 = 1;
              uVar5 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
              uVar5 = extraout_x1_00;
            }
            puVar2 = PTR_DAT_04a258d0;
            if ((bRam0000000004f584c2 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a258d0,uVar5);
              FUN_021f03f8(PTR_DAT_049b3b98);
              bRam0000000004f584c2 = 1;
            }
            if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
              FUN_02229774();
            }
            uVar5 = 0;
            if (lVar3 != 0) {
              uVar5 = *(undefined8 *)(lVar3 + 0x10);
            }
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (pcRam0000000004f58540 == (code *)0x0) {
              pcRam0000000004f58540 = (code *)FUN_021f03bc(&UNK_013bf2e5);
            }
                    /* WARNING: Could not recover jumptable at 0x03d24330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f58540)(0,uVar5);
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar2 = PTR_DAT_049b3b98;
          if ((bRam0000000004f584c5 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049b3b98,0);
            bRam0000000004f584c5 = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar2 = PTR_DAT_04a258d0;
          if ((bRam0000000004f584c4 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a258d0);
            FUN_021f03f8(PTR_DAT_049b3b98);
            bRam0000000004f584c4 = 1;
          }
          if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
            FUN_02229774();
          }
          uVar5 = 0;
          if (lVar3 != 0) {
            uVar5 = *(undefined8 *)(lVar3 + 0x10);
          }
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (pcRam0000000004f58548 == (code *)0x0) {
            pcRam0000000004f58548 = (code *)FUN_021f03bc(&UNK_013b7993);
          }
                    /* WARNING: Could not recover jumptable at 0x03d24484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f58548)(uVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

