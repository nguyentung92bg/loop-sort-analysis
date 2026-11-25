/* IL2CPP: SandFlowRenderer$$SolveGrains
void SandFlowRenderer__SolveGrains (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SolveGrains
   void SandFlowRenderer__SolveGrains (SandFlowRenderer_o* __this, const MethodInfo* method); */

void SandFlowRenderer__SolveGrains_24c3134(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x30;
  
  if ((bRam0000000004f4bbd5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e18);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd5 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 0x21) {
    iVar1 = 0x20;
  }
  iVar1 = iVar1 * *(int *)(param_1 + 0x2f8);
  if (iVar1 < 1) {
    return;
  }
  iVar4 = UnityEngine_Time__get_frameCount_3c17810(0);
  if (iVar4 == *(int *)(param_1 + 0xd0)) {
    return;
  }
  uVar5 = UnityEngine_Time__get_frameCount_3c17810(0);
  plVar7 = (long *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  if (*plVar7 == 0) {
LAB_025c31f0:
    uVar2 = iVar1 - 1U | iVar1 - 1U >> 0x10;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6e18);
    UnityEngine_ComputeBuffer___ctor_3c26e60(uVar6,(uVar2 | uVar2 >> 1) + 1,0x20,0x10,0);
    *(undefined8 *)(param_1 + 200) = uVar6;
    thunk_FUN_021f190c(plVar7,uVar6);
    puVar3 = PTR_DAT_049c6e10;
    lVar8 = *(long *)(param_1 + 0x2d8);
    if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar8 == 0) goto LAB_025c3638;
    UnityEngine_MaterialPropertyBlock__SetBuffer_3bdbd9c
              (lVar8,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x4c),*plVar7,0);
  }
  else {
    iVar4 = UnityEngine_ComputeBuffer__get_count_3c26e94(*plVar7,0);
    if (iVar4 < iVar1) {
      if (*plVar7 != 0) {
        UnityEngine_ComputeBuffer__Release_3c26e90(*plVar7,0);
      }
      goto LAB_025c31f0;
    }
  }
  puVar3 = PTR_DAT_049c6e10;
  lVar8 = *(long *)(param_1 + 0xb8);
  uVar5 = *(undefined4 *)(param_1 + 0xc0);
  if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar8 != 0) {
    UnityEngine_ComputeShader__SetBuffer_3c27b40
              (lVar8,uVar5,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),
               *(undefined8 *)(param_1 + 0x2b0),0);
    if (*(long *)(param_1 + 0xb8) != 0) {
      UnityEngine_ComputeShader__SetBuffer_3c27b40
                (*(long *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),
                 *(undefined8 *)(param_1 + 0x2b8),0);
      if (*(long *)(param_1 + 0xb8) != 0) {
        UnityEngine_ComputeShader__SetBuffer_3c27b40
                  (*(long *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                   *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),
                   *(undefined8 *)(param_1 + 200),0);
        SandFlowRenderer__EnsureSplit_24c1140(param_1);
        if (*(long *)(param_1 + 0xb8) != 0) {
          UnityEngine_ComputeShader__SetBuffer_3c27b40
                    (*(long *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x8c),
                     *(undefined8 *)(param_1 + 0x2a0),0);
          if (*(long *)(param_1 + 0xb8) != 0) {
            UnityEngine_ComputeShader__SetInt_3c27824
                      (*(long *)(param_1 + 0xb8),
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90),0x100,0);
            if (*(long *)(param_1 + 0xb8) != 0) {
              UnityEngine_ComputeShader__SetInt_3c27824
                        (*(long *)(param_1 + 0xb8),
                         *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54),iVar1,0);
              if (*(long *)(param_1 + 0xb8) != 0) {
                iVar4 = *(int *)(param_1 + 0x324);
                if (iVar4 < 0x21) {
                  iVar4 = 0x20;
                }
                UnityEngine_ComputeShader__SetInt_3c27824
                          (*(long *)(param_1 + 0xb8),
                           *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),iVar4,0);
                if (*(long *)(param_1 + 0xb8) != 0) {
                  UnityEngine_ComputeShader__SetInt_3c27824
                            (*(long *)(param_1 + 0xb8),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                             *(undefined4 *)(param_1 + 0x2fc),0);
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    UnityEngine_ComputeShader__SetInt_3c27824
                              (*(long *)(param_1 + 0xb8),
                               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                               *(undefined1 *)(param_1 + 0x31c),0);
                    lVar8 = *(long *)(param_1 + 0xb8);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    if (lVar8 != 0) {
                      UnityEngine_ComputeShader__SetFloat_3c27740
                                (*(undefined4 *)(param_1 + 0x318),lVar8,
                                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0);
                      if (*(long *)(param_1 + 0xb8) != 0) {
                        UnityEngine_ComputeShader__SetFloat_3c27740
                                  (*(undefined4 *)(param_1 + 0x140),*(long *)(param_1 + 0xb8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),0);
                        if (*(long *)(param_1 + 0xb8) != 0) {
                          UnityEngine_ComputeShader__SetFloat_3c27740
                                    (*(undefined4 *)(param_1 + 800),*(long *)(param_1 + 0xb8),
                                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),0);
                          if (*(long *)(param_1 + 0xb8) != 0) {
                            UnityEngine_ComputeShader__SetVector_3c27908
                                      (*(undefined4 *)(param_1 + 0x128),
                                       *(undefined4 *)(param_1 + 300),
                                       *(undefined4 *)(param_1 + 0x130),
                                       *(undefined4 *)(param_1 + 0x134),*(long *)(param_1 + 0xb8),
                                       **(undefined4 **)(*(long *)puVar3 + 0xb8),0);
                            if (*(long *)(param_1 + 0xb8) != 0) {
                              UnityEngine_ComputeShader__SetFloat_3c27740
                                        (*(undefined4 *)(param_1 + 0xd4),*(long *)(param_1 + 0xb8),
                                         *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24),0
                                        );
                              if (*(long *)(param_1 + 0xb8) != 0) {
                                UnityEngine_ComputeShader__SetVector_3c27908
                                          (*(undefined4 *)(param_1 + 0xd8),
                                           *(undefined4 *)(param_1 + 0xdc),
                                           *(undefined4 *)(param_1 + 0xe0),
                                           *(undefined4 *)(param_1 + 0xe4),*(long *)(param_1 + 0xb8)
                                           ,*(undefined4 *)
                                             (*(long *)(*(long *)puVar3 + 0xb8) + 0x28),0);
                                if (*(long *)(param_1 + 0xb8) != 0) {
                                  UnityEngine_ComputeShader__SetVector_3c27908
                                            (*(undefined4 *)(param_1 + 0xe8),
                                             *(undefined4 *)(param_1 + 0xec),
                                             *(undefined4 *)(param_1 + 0xf0),
                                             *(undefined4 *)(param_1 + 0xf4),
                                             *(long *)(param_1 + 0xb8),
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar3 + 0xb8) + 0x2c),0);
                                  if (*(long *)(param_1 + 0xb8) != 0) {
                                    UnityEngine_ComputeShader__SetVector_3c27908
                                              (*(undefined4 *)(param_1 + 0xf8),
                                               *(undefined4 *)(param_1 + 0xfc),
                                               *(undefined4 *)(param_1 + 0x100),
                                               *(undefined4 *)(param_1 + 0x104),
                                               *(long *)(param_1 + 0xb8),
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x30),0);
                                    if (*(long *)(param_1 + 0xb8) != 0) {
                                      UnityEngine_ComputeShader__SetFloat_3c27740
                                                (*(undefined4 *)(param_1 + 0x13c),
                                                 *(long *)(param_1 + 0xb8),
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)puVar3 + 0xb8) + 0x34),0);
                                      if (*(long *)(param_1 + 0xb8) != 0) {
                                        UnityEngine_ComputeShader__SetVector_3c27908
                                                  (*(undefined4 *)(param_1 + 0x108),
                                                   *(undefined4 *)(param_1 + 0x10c),
                                                   *(undefined4 *)(param_1 + 0x110),
                                                   *(undefined4 *)(param_1 + 0x114),
                                                   *(long *)(param_1 + 0xb8),
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x38),0);
                                        if (*(long *)(param_1 + 0xb8) != 0) {
                                          UnityEngine_ComputeShader__SetFloat_3c27740
                                                    (*(undefined4 *)(param_1 + 0x138),
                                                     *(long *)(param_1 + 0xb8),
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)puVar3 + 0xb8) + 0x80),0);
                                          if (*(long *)(param_1 + 0xb8) != 0) {
                                            UnityEngine_ComputeShader__SetVector_3c27908
                                                      (*(undefined4 *)(param_1 + 0x118),
                                                       *(undefined4 *)(param_1 + 0x11c),
                                                       *(undefined4 *)(param_1 + 0x120),
                                                       *(undefined4 *)(param_1 + 0x124),
                                                       *(long *)(param_1 + 0xb8),
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)puVar3 + 0xb8) + 0x40),0
                                                      );
                                            if (*(long *)(param_1 + 0xb8) != 0) {
                                              UnityEngine_ComputeShader__SetVector_3c27908
                                                        (*(undefined4 *)(param_1 + 0x328),
                                                         *(undefined4 *)(param_1 + 0x330),
                                                         *(undefined4 *)(param_1 + 0x32c),0,
                                                         *(long *)(param_1 + 0xb8),
                                                         *(undefined4 *)
                                                          (*(long *)(*(long *)puVar3 + 0xb8) + 0x44)
                                                         ,0);
                                              if (*(long *)(param_1 + 0xb8) != 0) {
                                                UnityEngine_ComputeShader__SetVector_3c27908
                                                          (*(undefined4 *)(param_1 + 400),
                                                           *(undefined4 *)(param_1 + 0x194),
                                                           *(undefined4 *)(param_1 + 0x198),
                                                           *(undefined4 *)(param_1 + 0x19c),
                                                           *(long *)(param_1 + 0xb8),
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x48),0);
                                                lVar8 = *(long *)(param_1 + 0xb8);
                                                if (lVar8 != 0) {
                                                  uVar5 = *(undefined4 *)(param_1 + 0xc0);
                                                  iVar4 = iVar1 + 0x7e;
                                                  if (-1 < iVar1 + 0x3f) {
                                                    iVar4 = iVar1 + 0x3f;
                                                  }
                                                  if ((bRam0000000004f58626 & 1) == 0) {
                                                    FUN_021f03f8(PTR_DAT_04a26b88,uVar5,iVar4 >> 6,1
                                                                 ,1,0,in_x6,in_x7,unaff_x30);
                                                    bRam0000000004f58626 = 1;
                                                  }
                                                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_021f06a0();
                                                  }
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  if (lVar9 != 0) {
                                                    if (pcRam0000000004f58660 == (code *)0x0) {
                                                      pcRam0000000004f58660 =
                                                           (code *)FUN_021f03bc(&UNK_013d8e56);
                                                    }
                    /* WARNING: Could not recover jumptable at 0x03d27be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                    (*pcRam0000000004f58660)
                                                              (lVar9,uVar5,iVar4 >> 6,1,1);
                                                    return;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c
                                                            (lVar8,0);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025c3638:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

