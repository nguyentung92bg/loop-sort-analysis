/* IL2CPP: SandFlowSystem$$Step
void SandFlowSystem__Step (SandFlowSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025c94dc) */
/* WARNING: Removing unreachable block (ram,0x025c94f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$Step
   void SandFlowSystem__Step (SandFlowSystem_o* __this, float deltaTime, const MethodInfo* method);
    */

void SandFlowSystem__Step_24c81d4(undefined4 param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  long lVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [4];
  byte abStack_128 [4];
  undefined4 uStack_124;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  puVar7 = PTR_DAT_049c7130;
  lVar3 = tpidr_el0;
  lStack_a8 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f4bbe2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c18f8);
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049c7180);
    FUN_021f03f8(PTR_DAT_049c7248);
    FUN_021f03f8(PTR_DAT_049c7250);
    FUN_021f03f8(PTR_DAT_049c7208);
    FUN_021f03f8(PTR_DAT_049c7258);
    FUN_021f03f8(PTR_DAT_049c7260);
    FUN_021f03f8(PTR_DAT_049c7268);
    FUN_021f03f8(PTR_DAT_049c7270);
    FUN_021f03f8(PTR_DAT_049c7278);
    FUN_021f03f8(PTR_DAT_049c7280);
    FUN_021f03f8(PTR_DAT_049c7288);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c2760);
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c2950);
    FUN_021f03f8(PTR_DAT_049c71f0);
    FUN_021f03f8(PTR_DAT_049c7290);
    FUN_021f03f8(PTR_DAT_049c7298);
    FUN_021f03f8(PTR_DAT_049c72a0);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c1900);
    FUN_021f03f8(PTR_DAT_049c1b08);
    FUN_021f03f8(PTR_DAT_049c1b18);
    bRam0000000004f4bbe2 = 1;
  }
  lVar18 = *(long *)puVar7;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_f8 = 0;
  lStack_100 = 0;
  uStack_124 = 0;
  abStack_128[0] = 0;
  auStack_12c[0] = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_184 = 0;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_021f0574();
    lVar18 = *(long *)puVar7;
  }
  lVar18 = **(long **)(lVar18 + 0xb8);
  if (lVar18 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample_3bc0d70(lVar18,0);
  }
  plStack_190 = &lStack_c8;
  lStack_198 = 0;
  lStack_c8 = lVar18;
  SandFlowSystem__AdvanceTravel_24c9b18(param_2);
  if (*(long *)(param_2 + 0x168) == 0) {
    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    SandFlowRenderer__SetRewind_24be584
              (*(undefined4 *)(param_2 + 0x1a0),_UNK_013aa568,_UNK_013aa62c,_UNK_013aa510);
    puVar7 = PTR_DAT_049c7248;
    if (*(long *)(param_2 + 0x1e0) == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                (*(long *)(param_2 + 0x1e0),*(undefined8 *)PTR_DAT_049c7248);
      if (*(long *)(param_2 + 0x1e8) == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                  (*(long *)(param_2 + 0x1e8),*(undefined8 *)puVar7);
        if (*(long *)(param_2 + 0x218) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
        else {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_2 + 0x218),*(undefined8 *)PTR_DAT_049c7180);
          if (*(long *)(param_2 + 0x110) == 0) {
                    /* catch() { ... } // from try @ 025c94f0 with catch @ 025c94cc
                       catch() { ... } // from try @ 025c9528 with catch @ 025c94cc
                       catch() { ... } // from try @ 025c9550 with catch @ 025c94cc */
            if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
          else {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(param_2 + 0x110),&lStack_1c8,*(undefined8 *)PTR_DAT_049c7290);
            puVar13 = PTR_DAT_049c7288;
            puVar12 = PTR_DAT_049c7280;
            puVar9 = PTR_DAT_049c7278;
            puVar11 = PTR_DAT_049c7250;
            puVar10 = PTR_DAT_049c1c78;
            puVar8 = PTR_DAT_049c1900;
            puVar7 = PTR_DAT_049b3b98;
            plStack_1d0 = &lStack_100;
            uStack_1d8 = 0;
            lStack_f8 = lStack_1c0;
            lStack_100 = lStack_1c8;
            uStack_e8 = uStack_1b0;
            lStack_f0 = lStack_1b8;
            uStack_d8 = uStack_1a0;
            uStack_e0 = uStack_1a8;
            uVar25 = uStack_1a8;
            while (uVar19 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&lStack_100,*(undefined8 *)puVar12), (uVar19 & 1) != 0) {
              lVar27 = *(long *)puVar13;
              lVar20 = *(long *)(lVar27 + 0x20);
              uVar2 = *(ushort *)(lVar20 + 0x135);
              lVar18 = lVar20;
              if ((uVar2 & 1) == 0) {
                lVar18 = FUN_02229718();
                lVar20 = *(long *)(lVar27 + 0x20);
                uVar2 = *(ushort *)(lVar20 + 0x135);
              }
              uVar31 = *(undefined4 *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar20 = FUN_02229718();
              }
              uVar21 = thunk_FUN_0224e54c(&lStack_100,
                                          *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&lStack_1c8,uVar21,uVar31);
              lVar18 = lStack_1c8;
              lStack_b8 = lStack_1b8;
              lStack_c0 = lStack_1c0;
              uStack_b0 = uStack_1b0;
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar19 = UnityEngine_Object__op_Inequality_3c1b96c(lVar18,0,0);
              if ((uVar19 & 1) != 0) {
                if (lVar18 == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  goto LAB_025c9b10;
                }
                uVar19 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(lVar18,0);
                if ((((uVar19 & 1) != 0) && (*(long **)(lVar18 + 0x100) != (long *)0x0)) &&
                   (**(long **)(lVar18 + 0x100) == *(long *)puVar10)) {
                  lStack_1f8 = lVar18;
                  lStack_1e8 = lStack_b8;
                  lStack_1f0 = lStack_c0;
                  uStack_1e0 = uStack_b0;
                  SandFlowSystem__BeginPour_24c728c(param_2,&lStack_1f8);
                }
              }
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&lStack_100,*(undefined8 *)puVar9);
            puVar9 = PTR_DAT_049c1710;
            lVar18 = *(long *)(param_2 + 0x110);
            if (lVar18 == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c94e8 with catch @ 025c9508
                        */
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
            else {
              lVar20 = *(long *)PTR_DAT_049c71f0;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              uVar19 = FUN_021f1190(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
              if ((uVar19 & 1) == 0) {
                *(undefined4 *)(lVar18 + 0x18) = 0;
              }
              else {
                iVar17 = *(int *)(lVar18 + 0x18);
                *(undefined4 *)(lVar18 + 0x18) = 0;
                if (0 < iVar17) {
                  System_Array__Clear_31229cc(*(undefined8 *)(lVar18 + 0x10),0,iVar17,0);
                }
              }
              lVar18 = *(long *)(param_2 + 0x170);
              if (lVar18 == 0) {
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025c9524 to 026c9527 has its CatchHandler @ 025c9544 */
                  FUN_021f06a0();
                }
              }
              else {
                lStack_1c0 = 0;
                lStack_1b8 = 0;
                lStack_1c8 = (ulong)*(uint *)(lVar18 + 0x30) << 0x20;
                thunk_FUN_021f190c(&lStack_1c0,0);
                lStack_1b8 = *(long *)(lVar18 + 0x28);
                thunk_FUN_021f190c(&lStack_1b8);
                lStack_118 = lStack_1c0;
                uStack_120 = lStack_1c8;
                lStack_110 = lStack_1b8;
                while( true ) {
                  fVar6 = _UNK_013aa94c;
                  fVar5 = _UNK_013aa8fc;
                  fVar4 = _UNK_013aa8a8;
                  fVar34 = _UNK_013aa688;
                  iVar17 = (int)uStack_120 + -1;
                  uStack_120 = CONCAT44(uStack_120._4_4_,iVar17);
                  if (iVar17 < 0) {
                    uVar15 = uStack_120._4_4_ - 1;
                    uStack_120 = CONCAT44(uVar15,iVar17);
                    if ((int)uVar15 < 0) {
                      uVar15 = *(int *)(param_2 + 0x188) - 1;
                      if ((int)uVar15 < 0) goto LAB_025c9004;
                      lVar18 = (ulong)uVar15 * 0x90 + 0xac;
                      uVar19 = (ulong)uVar15;
                      goto LAB_025c8814;
                    }
                    lVar18 = *(long *)(lStack_110 + (ulong)uVar15 * 8 + 0x20);
                    lStack_118 = *(long *)(lVar18 + 0x18);
                    thunk_FUN_021f190c((ulong)&uStack_120 | 8);
                    iVar17 = *(int *)(lVar18 + 0x30) + -1;
                    uStack_120 = CONCAT44(uStack_120._4_4_,iVar17);
                  }
                  if (*(long *)(param_2 + 0x178) == 0) {
                    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_025c9b10;
                  }
                  plVar22 = (long *)FUN_024f6008(*(long *)(param_2 + 0x178),
                                                 *(undefined8 *)
                                                  (lStack_118 + (long)iVar17 * 8 + 0x20),
                                                 *(undefined8 *)puVar8);
                  lVar18 = *plVar22;
                  if (lVar18 == 0) break;
                  if (((*(long **)(lVar18 + 0x100) != (long *)0x0) &&
                      (**(long **)(lVar18 + 0x100) == *(long *)puVar10)) &&
                     (*(char *)(lVar18 + 0x158) == '\0')) {
                    if (*(long *)(param_2 + 0xf0) == 0) {
                      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      goto LAB_025c9b10;
                    }
                    uVar19 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                                       (*(long *)(param_2 + 0xf0),lVar18,*(undefined8 *)puVar11);
                    if ((uVar19 & 1) == 0) {
                      if (*(long *)(param_2 + 0xe0) == 0) {
                        if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        goto LAB_025c9b10;
                      }
                      uVar19 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                         (*(long *)(param_2 + 0xe0),lVar18,*(undefined8 *)puVar9);
                      if ((uVar19 & 1) == 0) {
                        if (*(int *)(lVar18 + 0xe4) == -1) {
                          SandFlowSystem__AddSolid_24c9b8c(param_2,lVar18);
                        }
                        else {
                          lVar20 = UnityEngine_Component__get_transform_3c18724(lVar18,0);
                          if (lVar20 == 0) {
                            if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                              FUN_021f06a0();
                            }
                            goto LAB_025c9b10;
                          }
                          UnityEngine_Transform__get_position_3c2d540(lVar20,0);
                          SandFlowSystem__TryAdd_24c7750(param_2,lVar18,&uStack_124);
                        }
                      }
                    }
                  }
                }
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_025c9b10;
LAB_025c8814:
  do {
    lVar20 = *(long *)(param_2 + 0xb0);
    if (lVar20 == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    if (*(uint *)(lVar20 + 0x18) <= uVar19) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_025c9b10;
    }
    lVar27 = *(long *)(param_2 + 0xb8);
    if (lVar27 == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    if (*(uint *)(lVar27 + 0x18) <= uVar19) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_025c9b10;
    }
    lVar27 = *(long *)(lVar27 + uVar19 * 8 + 0x20);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar23 = UnityEngine_Object__op_Equality_3c1eeb4(lVar27,0,0);
    if ((uVar23 & 1) == 0) {
      if (lVar27 == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_025c9b10;
      }
      uVar23 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(lVar27,0);
      if ((uVar23 & 1) == 0) goto LAB_025c8978;
      lVar1 = lVar20 + lVar18;
      pfVar28 = (float *)(lVar20 + lVar18 + -0x8c);
      if (*(float *)(lVar1 + -0x60) <= 2.5) {
        if (*(long **)(lVar27 + 0x100) == (long *)0x0) {
LAB_025c89d0:
          SandFlowSystem__Restore_24c7bc4(param_2,lVar27);
          SandFlowSystem__RemoveAt_24c73ac(param_2,uVar19 & 0xffffffff);
        }
        else {
          lVar29 = **(long **)(lVar27 + 0x100);
          if (lVar29 == *(long *)puVar10) {
            fVar33 = 0.5;
            if (*(float *)(lVar1 + -0x60) < 0.5) {
              if (*(char *)(param_2 + 0x1c2) != '\0') {
                lVar29 = *(long *)(param_2 + 0x2a8);
                fVar33 = 0.5;
                if (*(int *)(*(long *)PTR_DAT_049c1410 + 0xe4) == 0) {
                  fVar33 = 0.5;
                  FUN_021f0574();
                }
                if (lVar29 == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  goto LAB_025c9b10;
                }
                uVar23 = FUN_024f5708(lVar29,*(undefined8 *)(lVar27 + 0x60),
                                      *(undefined8 *)PTR_DAT_049c1b18);
                if (((uVar23 & 1) != 0) &&
                   (uVar23 = SandFlowSystem__IsJelly_24c9cc8(param_2,lVar27), (uVar23 & 1) != 0)) {
                  lVar29 = *(long *)(param_2 + 0x2a8);
                  if (*(int *)(*(long *)PTR_DAT_049c1410 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar29 == 0) {
                    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_025c9b10;
                  }
                  puVar24 = (undefined8 *)
                            FUN_024f6008(lVar29,*(undefined8 *)(lVar27 + 0x60),
                                         *(undefined8 *)PTR_DAT_049c1b08);
                  uVar21 = *puVar24;
                  fVar30 = (float)UnityEngine_Time__get_time_3c295c8(0);
                  fVar36 = *(float *)(lVar20 + lVar18 + -0x70);
                  fVar30 = fVar30 - *(float *)(lVar20 + lVar18 + -0x80);
                  fVar33 = fVar34;
                  if (fVar34 <= fVar36) {
                    fVar33 = fVar36;
                  }
                  fVar36 = (fVar30 / fVar33) / fVar5;
                  fVar33 = 1.0;
                  if (fVar36 <= 1.0) {
                    fVar33 = fVar36;
                  }
                  fVar32 = 0.0;
                  if (0.0 <= fVar36) {
                    fVar32 = fVar33;
                  }
                  uVar25 = (ulong)(uint)(fVar32 * 3.0);
                  fVar36 = fVar32 * fVar32 * 3.0 - fVar32 * fVar32 * (fVar32 + fVar32);
                  fVar33 = (1.0 - fVar36) * 0.0;
                  SandFlowSystem__AddJelly_24c9e5c(1.0 - (fVar36 + fVar33),param_2,uVar21);
                  if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  SandFlowSystem__LeaveNeck_24caca8(fVar30);
                  SandFlowSystem__AddNeck_24c9fd0(param_2,uVar21);
                }
              }
              lVar29 = UnityEngine_Component__get_transform_3c18724(lVar27,0);
              if (lVar29 == 0) {
                    /* try { // try from 025c96e4 to 026c96e7 has its CatchHandler @ 025c96f0 */
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_025c9b10;
              }
              uVar31 = UnityEngine_Transform__get_position_3c2d540(lVar29,0);
              lVar29 = lVar20 + lVar18;
              *(undefined4 *)(lVar1 + -0x6c) = uVar31;
              *(float *)(lVar29 + -0x68) = fVar33;
              *(int *)(lVar29 + -100) = (int)uVar25;
              *(undefined4 *)(lVar29 + -0x60) = 0;
              if ((*(char *)(lVar27 + 0x158) == '\0') &&
                 (fVar33 = (float)UnityEngine_Time__get_time_3c295c8(0),
                 *(float *)(lVar20 + lVar18 + -0x70) <= fVar33 - *(float *)(lVar20 + lVar18 + -0x80)
                 )) {
                if (*(long *)(param_2 + 0x168) == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  goto LAB_025c9b10;
                }
                pfVar28 = (float *)(lVar20 + lVar18);
                fVar33 = *(float *)(*(long *)(param_2 + 0x168) + 800);
                fVar30 = *pfVar28;
                pfVar28[-0x22] = 0.0;
                *(undefined4 *)(lVar1 + -0x60) = 0x3f800000;
                pfVar28[-0x1e] = fVar33 - fVar30;
              }
            }
          }
          else {
            if (lVar29 != *(long *)PTR_DAT_049c1818) goto LAB_025c89d0;
            SandFlowSystem__BeginReform_24ca954(param_2,uVar19 & 0xffffffff,pfVar28,lVar27);
          }
        }
      }
      else {
        fVar30 = (float)UnityEngine_Time__get_time_3c295c8(0);
        lVar29 = lVar20 + lVar18;
        fVar36 = *(float *)(lVar29 + -0x70);
        uVar25 = (ulong)(uint)*(float *)(lVar29 + -0x80);
        fVar33 = fVar34;
        if (fVar34 <= fVar36) {
          fVar33 = fVar36;
        }
        fVar30 = (fVar30 - *(float *)(lVar29 + -0x80)) / fVar33;
        if (*(float *)(lVar1 + -0x60) <= 3.0) {
          if (*(long **)(lVar27 + 0x100) == (long *)0x0) {
LAB_025c8a18:
            bVar14 = false;
          }
          else {
            lVar26 = **(long **)(lVar27 + 0x100);
            if (lVar26 == *(long *)puVar10) {
              fVar36 = 1.0;
              if (fVar30 <= 1.0) {
                fVar36 = fVar30;
              }
              fVar32 = fVar6;
              if (fVar6 <= fVar30) {
                fVar32 = fVar36;
              }
              if (*(long *)(param_2 + 0x160) == 0) {
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              }
              else {
                lVar26 = *(long *)(param_2 + 0x168);
                if (lVar26 == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                }
                else {
                  fVar30 = *(float *)(lVar26 + 0x318);
                  fVar36 = *(float *)(lVar29 + -0x7c) +
                           *(float *)(*(long *)(param_2 + 0x160) + 0xd0);
                  if (*(char *)(lVar26 + 0x31c) != '\0') {
                    fVar36 = fVar36 - fVar30 * (float)(int)(fVar36 / fVar30);
                  }
                  uVar21 = UnityEngine_Time__get_time_3c295c8(0);
                  if (fVar36 <= fVar30) {
                    fVar30 = fVar36;
                  }
                  fVar37 = 0.0;
                  if (0.0 <= fVar36) {
                    fVar37 = fVar30;
                  }
                  uVar31 = SandFlowRenderer__MarkSplit_24c0b48
                                     (uVar21,fVar37,lVar26,uVar19 & 0xffffffff,pfVar28,&uStack_184);
                  uVar25 = (ulong)(uint)(fVar32 + 3.0);
                  *(undefined4 *)(lVar20 + lVar18 + -0x88) = uVar31;
                  *(undefined4 *)(lVar20 + lVar18 + -0x84) = uStack_184;
                  *(float *)(lVar1 + -0x60) = fVar32 + 3.0;
                  *pfVar28 = fVar4 / fVar33 + fVar32;
                  fVar30 = (float)UnityEngine_Time__get_time_3c295c8(0);
                  *(float *)(lVar29 + -0x80) = fVar30 - fVar33 * fVar32;
                  if (*(long *)(param_2 + 0x108) != 0) {
                    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                              (*(long *)(param_2 + 0x108),lVar27,*(undefined8 *)PTR_DAT_049c2948);
                    SandFlowSystem__ShowCube_24c7d1c(0,param_2,lVar27);
                    goto LAB_025c8990;
                  }
                    /* catch() { ... } // from try @ 025c96e4 with catch @ 025c96f0 */
                    /* try { // try from 025c96f4 to 026c96fb has its CatchHandler @ 025c9704 */
                    /* try { // try from 025c96fc to 026c9707 has its CatchHandler @ 025c955c */
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c96f4 with catch @ 025c9704
                        */
                    FUN_021f06a0();
                  }
                }
              }
              goto LAB_025c9b10;
            }
            if (lVar26 != *(long *)PTR_DAT_049c1818) goto LAB_025c8a18;
            bVar14 = *(char *)(lVar27 + 0x158) != '\0';
          }
          if ((fVar30 < 1.0) || (bVar14)) {
            uVar31 = SandFlowSystem__HomeOf_24ca368(param_2,lVar27);
            lVar20 = lVar20 + lVar18;
            *(undefined4 *)(lVar1 + -0x6c) = uVar31;
            *(float *)(lVar20 + -0x68) = fVar36;
            *(int *)(lVar20 + -100) = (int)uVar25;
            *(undefined4 *)(lVar20 + -0x60) = 0x40400000;
            lVar20 = *(long *)(param_2 + 0x168);
            UnityEngine_Time__get_time_3c295c8(0);
            if (lVar20 == 0) {
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            fVar33 = (float)SandFlowRenderer__ArrivedShare_24c05c4
                                      (lVar20,uVar19 & 0xffffffff,pfVar28,abStack_128);
            *(byte *)(param_2 + 0x1c0) = abStack_128[0] | *(byte *)(param_2 + 0x1c0);
            if (abStack_128[0] != 0) {
              if (*(long *)(param_2 + 0x1f8) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c95e8 with catch @ 025c96c0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c9634 with catch @ 025c96c4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c9670 with catch @ 025c96c8
                        */
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_025c9b10;
              }
              uVar23 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                                 (*(long *)(param_2 + 0x1f8),lVar27,*(undefined8 *)PTR_DAT_049c2948)
              ;
              if ((uVar23 & 1) != 0) {
                if (*(long *)(param_2 + 0x88) == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  goto LAB_025c9b10;
                }
                HapticModule__PlaySoft_2535438(*(long *)(param_2 + 0x88),0);
              }
            }
            if (*(char *)(param_2 + 0x1c2) == '\0') {
              uVar15 = 0;
            }
            else {
              uVar15 = SandFlowSystem__IsJelly_24c9cc8(param_2,lVar27);
            }
            fVar30 = 0.0;
            if (!bVar14 && (uVar15 & 1) == 0) {
              fVar30 = fVar33;
            }
            SandFlowSystem__ShowCube_24c7d1c(fVar30,param_2,lVar27);
            if (((bVar14) && (plVar22 = *(long **)(lVar27 + 0x100), plVar22 != (long *)0x0)) &&
               (*plVar22 == *(long *)PTR_DAT_049c1818)) {
              if (*(long *)(param_2 + 0x128) == 0) {
                if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_025c9b10;
              }
              uVar16 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                 (*(long *)(param_2 + 0x128),lVar27,*(undefined8 *)PTR_DAT_049c1710)
              ;
              if (1.0 <= fVar33) {
                if ((uVar16 & 1) != 0) {
                  if (*(long *)(param_2 + 0x130) == 0) {
                    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_025c9b10;
                  }
                  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                            (*(long *)(param_2 + 0x130),plVar22,*(undefined8 *)PTR_DAT_049c2760);
                }
              }
              else {
                if (*(long *)(param_2 + 0x138) == 0) {
                  if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  goto LAB_025c9b10;
                }
                System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                          (*(long *)(param_2 + 0x138),plVar22,*(undefined8 *)PTR_DAT_049c2760);
              }
              if ((uVar15 & 1) == 0) {
                SandFlowSystem__DrawLanding_24ca4c8(fVar33,param_2,lVar27,uVar16 & 1);
              }
              else {
LAB_025c8eec:
                plVar22 = *(long **)(lVar27 + 0x100);
                if ((plVar22 != (long *)0x0) && (*plVar22 == *(long *)PTR_DAT_049c1818)) {
                  if (*(long *)(param_2 + 0x218) == 0) {
                    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_025c9b10;
                  }
                  lStack_1c8 = CONCAT44(lStack_1c8._4_4_,fVar33);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                            (*(long *)(param_2 + 0x218),lVar27,&lStack_1c8,
                             *(undefined8 *)PTR_DAT_049c7268);
                  if (*(long *)(param_2 + 0x220) == 0) {
                    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_025c9b10;
                  }
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                            (*(long *)(param_2 + 0x220),lVar27,plVar22,
                             *(undefined8 *)PTR_DAT_049c7270);
                  if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  SandFlowSystem__EnterNeck_24c9f60(fVar33);
                  SandFlowSystem__AddNeck_24c9fd0(param_2,plVar22);
                }
              }
            }
            else if ((uVar15 & 1) != 0) goto LAB_025c8eec;
          }
          else {
            SandFlowSystem__RemoveAt_24c73ac(param_2,uVar19 & 0xffffffff);
            SandFlowSystem__Restore_24c7bc4(param_2,lVar27);
            Block__SetMotionDurationMultiplier_23dc644(*(undefined4 *)(param_2 + 0x1ac),lVar27,0);
          }
        }
        else {
          lVar29 = *(long *)(param_2 + 0x168);
          UnityEngine_Time__get_time_3c295c8(0);
          if (lVar29 == 0) {
            if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_025c9b10;
          }
          uVar31 = SandFlowRenderer__ArrivedShare_24c05c4
                             (lVar29,uVar19 & 0xffffffff,pfVar28,auStack_12c);
          if (*pfVar28 <= fVar30) {
            if (*(long *)(param_2 + 0x168) == 0) {
                    /* try { // try from 025c9670 to 026c967f has its CatchHandler @ 025c96c8 */
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            SandFlowRenderer__RebaseSplit_24c0fc8(*(long *)(param_2 + 0x168),pfVar28);
            lVar20 = lVar20 + lVar18;
            *(undefined4 *)(lVar20 + -0x84) = 0;
            *(float *)(lVar20 + -8) = ABS(*(float *)(lVar20 + -8));
            *(undefined4 *)(lVar1 + -0x60) = 0x3f800000;
            lVar20 = *(long *)(param_2 + 0x1f0);
            uVar31 = UnityEngine_Time__get_time_3c295c8(0);
            if (lVar20 == 0) {
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            lStack_1c8 = CONCAT44(lStack_1c8._4_4_,uVar31);
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (lVar20,lVar27,&lStack_1c8,*(undefined8 *)PTR_DAT_049c7268);
            if (*(long *)(param_2 + 0x108) == 0) {
                    /* try { // try from 025c9634 to 026c965b has its CatchHandler @ 025c96c4 */
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                      (*(long *)(param_2 + 0x108),lVar27,*(undefined8 *)PTR_DAT_049c2948);
            if (*(long *)(param_2 + 600) == 0) {
                    /* try { // try from 025c9620 to 026c962f has its CatchHandler @ 025c96bc */
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                      (*(long *)(param_2 + 600),lVar27,*(undefined8 *)PTR_DAT_049c7208);
          }
          else if ((*(char *)(param_2 + 0x1c2) == '\0') ||
                  (uVar23 = SandFlowSystem__IsJelly_24c9cc8(param_2,lVar27), (uVar23 & 1) == 0)) {
            if (*(long *)(param_2 + 600) == 0) {
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c9620 with catch @ 025c96bc
                        */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            uVar23 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                               (*(long *)(param_2 + 600),lVar27,&uStack_180,
                                *(undefined8 *)PTR_DAT_049c7260);
            if ((uVar23 & 1) != 0) {
              uStack_238 = uStack_178;
              uStack_240 = uStack_180;
              uStack_228 = uStack_168;
              uStack_230 = uStack_170;
              uStack_218 = uStack_158;
              uStack_220 = uStack_160;
              uStack_208 = uStack_148;
              uStack_210 = uStack_150;
              uVar25 = uStack_150;
              SandFlowSystem__DrawCube_24ca0d8(uVar31,param_2,lVar27,uStack_140,&uStack_240);
            }
          }
          else {
            if (*(long *)(param_2 + 0x220) == 0) {
              if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_025c9b10;
            }
            uVar23 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                               (*(long *)(param_2 + 0x220),lVar27,&uStack_138,
                                *(undefined8 *)PTR_DAT_049c7258);
            if ((uVar23 & 1) != 0) {
              SandFlowSystem__AddJelly_24c9e5c(uVar31,param_2,uStack_138);
              uVar21 = uStack_138;
              if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
                FUN_021f0574();
              }
              SandFlowSystem__EnterNeck_24c9f60(uVar31);
              SandFlowSystem__AddNeck_24c9fd0(param_2,uVar21);
            }
          }
        }
      }
    }
    else {
LAB_025c8978:
      SandFlowSystem__Restore_24c7bc4(param_2,lVar27);
      SandFlowSystem__RemoveAt_24c73ac(param_2,uVar19 & 0xffffffff);
    }
LAB_025c8990:
    lVar18 = lVar18 + -0x90;
    bVar14 = 0 < (long)uVar19;
    uVar19 = uVar19 - 1;
  } while (bVar14);
LAB_025c9004:
  SandFlowSystem__StaggerBatch_24cad1c(param_2);
  SandFlowSystem__RefreshFilledCarriers_24cb068(param_2);
  puVar12 = PTR_DAT_049c72a0;
  puVar9 = PTR_DAT_049c7298;
  puVar11 = PTR_DAT_049c2950;
  puVar8 = PTR_DAT_049c1558;
  if (*(long *)(param_2 + 0xd8) == 0) {
                    /* try { // try from 025c9528 to 026c9547 has its CatchHandler @ 025c94cc */
    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    goto LAB_025c9b10;
  }
  iVar17 = *(int *)(*(long *)(param_2 + 0xd8) + 0x18);
  if (-1 < iVar17 + -1) {
    do {
      if (*(long *)(param_2 + 0xd8) == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_025c9b10;
      }
      iVar17 = iVar17 + -1;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_2 + 0xd8),iVar17,&lStack_1c8,*(undefined8 *)puVar8);
      lVar18 = lStack_1c8;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar25 = UnityEngine_Object__op_Inequality_3c1b96c(lVar18,0,0);
      if ((uVar25 & 1) == 0) {
LAB_025c90c0:
        if (*(long *)(param_2 + 0xd8) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_025c9b10;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (*(long *)(param_2 + 0xd8),iVar17,*(undefined8 *)puVar12);
        if (*(long *)(param_2 + 0xe0) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_025c9b10;
        }
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                  (*(long *)(param_2 + 0xe0),lVar18,*(undefined8 *)puVar11);
        if (*(long *)(param_2 + 0xe8) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_025c9b10;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (*(long *)(param_2 + 0xe8),iVar17,*(undefined8 *)puVar9);
      }
      else {
        if (lVar18 == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_025c9b10;
        }
        uVar25 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(lVar18,0);
        if (((((uVar25 & 1) == 0) || (*(long **)(lVar18 + 0x100) == (long *)0x0)) ||
            (**(long **)(lVar18 + 0x100) != *(long *)puVar10)) ||
           (*(char *)(lVar18 + 0x158) != '\0')) goto LAB_025c90c0;
      }
    } while (0 < iVar17);
  }
  SandFlowSystem__ArrangePackets_24cb668(param_1,param_2);
  SandFlowSystem__UpdateTravelSpeed_24cbc08(param_1,param_2);
  SandFlowSystem__DriveBlocks_24cbc80(param_2);
  if (*(long *)(param_2 + 0x68) == 0) {
                    /* catch() { ... } // from try @ 025c9524 with catch @ 025c9544 */
                    /* try { // try from 025c9548 to 026c954f has its CatchHandler @ 025c9558 */
                    /* try { // try from 025c9550 to 026c955b has its CatchHandler @ 025c94cc */
    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    goto LAB_025c9b10;
  }
  iVar17 = UnityEngine_Camera__get_pixelWidth_3bcdcb0(*(long *)(param_2 + 0x68),0);
  if (iVar17 == *(int *)(param_2 + 0x2b4)) {
    if (*(long *)(param_2 + 0x68) == 0) {
                    /* try { // try from 025c9680 to 026c96e3 has its CatchHandler @ 025c955c */
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    iVar17 = UnityEngine_Camera__get_pixelHeight_3bcdd64(*(long *)(param_2 + 0x68),0);
    if (iVar17 != *(int *)(param_2 + 0x2b8)) goto LAB_025c9184;
    if (*(long *)(param_2 + 0x68) == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    fVar34 = (float)UnityEngine_Camera__get_orthographicSize_3bcb8e8(*(long *)(param_2 + 0x68),0);
    if (fVar34 != *(float *)(param_2 + 700)) goto LAB_025c9184;
    if (*(char *)(param_2 + 0x2b0) != '\0') goto LAB_025c91d0;
  }
  else {
LAB_025c9184:
    if (*(long *)(param_2 + 0x68) == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    uVar31 = UnityEngine_Camera__get_pixelWidth_3bcdcb0(*(long *)(param_2 + 0x68),0);
    *(undefined4 *)(param_2 + 0x2b4) = uVar31;
    if (*(long *)(param_2 + 0x68) == 0) {
                    /* try { // try from 025c95e8 to 026c95f3 has its CatchHandler @ 025c96c0 */
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    uVar31 = UnityEngine_Camera__get_pixelHeight_3bcdd64(*(long *)(param_2 + 0x68),0);
    *(undefined4 *)(param_2 + 0x2b8) = uVar31;
    if (*(long *)(param_2 + 0x68) == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c9b10;
    }
    uVar31 = UnityEngine_Camera__get_orthographicSize_3bcb8e8(*(long *)(param_2 + 0x68),0);
    *(undefined4 *)(param_2 + 700) = uVar31;
    *(undefined1 *)(param_2 + 0x2b0) = 1;
LAB_025c91d0:
    SandFlowSystem__ApplyConfig_24cbefc(param_2);
  }
  lVar20 = *(long *)(param_2 + 0x168);
  uVar21 = *(undefined8 *)(param_2 + 0xb0);
  uVar31 = *(undefined4 *)(param_2 + 0x188);
  uVar35 = UnityEngine_Time__get_time_3c295c8(0);
  lVar18 = *(long *)(param_2 + 0x160);
  if (lVar18 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c9548 with catch @ 025c9558
                        */
                    /* try { // try from 025c955c to 026c95e7 has its CatchHandler @ 025c955c
                       catch() { ... } // from try @ 025c955c with catch @ 025c955c
                       catch() { ... } // from try @ 025c9680 with catch @ 025c955c
                       catch() { ... } // from try @ 025c96fc with catch @ 025c955c */
    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else if (lVar20 == 0) {
    if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    SandFlowRenderer__UpdatePile_24c1b50
              (uVar35,param_1,*(float *)(param_2 + 0x19c) * *(float *)(lVar18 + 0x48),
               *(undefined4 *)(lVar18 + 0x4c),lVar20,uVar21,uVar31);
    if (*(char *)(param_2 + 0x1c1) != '\0') {
      SandFlowSystem__UpdateJelly_24cc384(param_2);
    }
    lVar18 = *(long *)(param_2 + 0x168);
    uVar21 = *(undefined8 *)(param_2 + 0xb0);
    uVar31 = *(undefined4 *)(param_2 + 0x188);
    UnityEngine_Time__get_time_3c295c8(0);
    if (lVar18 == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      SandFlowRenderer__Upload_24c2970(lVar18,uVar21,uVar31);
      if (*(long *)(param_2 + 0x168) == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        SandFlowRenderer__Draw_24c363c
                  (*(long *)(param_2 + 0x168),*(undefined8 *)(param_2 + 0x68),
                   *(undefined4 *)(param_2 + 0x18c));
        SandFlowSystem__UpdateSounds_24ccf54(param_2);
        if (*plStack_190 != 0) {
          Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample_3bc0df8(*plStack_190,0);
        }
        if (lStack_198 == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_a8) {
            return;
          }
        }
        else if (*(long *)(lVar3 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0698();
        }
      }
    }
  }
LAB_025c9b10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

