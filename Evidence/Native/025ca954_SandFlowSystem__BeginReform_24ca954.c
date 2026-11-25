/* IL2CPP: SandFlowSystem$$BeginReform
void SandFlowSystem__BeginReform (SandFlowSystem_o* __this, int32_t index, SandFlowPacket_o* packet, Block_o* block, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$BeginReform
   void SandFlowSystem__BeginReform (SandFlowSystem_o* __this, int32_t index, SandFlowPacket_o*
   packet, Block_o* block, Carrier_o* carrier, const MethodInfo* method); */

void SandFlowSystem__BeginReform_24ca954
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               undefined4 param_5,long param_6,undefined1 *param_7,long param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if ((bRam0000000004f4bbec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c2950);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbec = 1;
  }
  puVar7 = PTR_DAT_049c2950;
  if (*(long *)(param_4 + 0x108) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_4 + 0x108),param_7,*(undefined8 *)PTR_DAT_049c2950);
    if (*(long *)(param_4 + 0x1f8) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                (*(long *)(param_4 + 0x1f8),param_7,*(undefined8 *)puVar7);
      lVar11 = *(long *)(param_4 + 0x168);
      if (0.5 <= *(float *)(param_6 + 0x2c)) {
        if (lVar11 == 0) goto LAB_025caca4;
      }
      else {
        if (lVar11 == 0) goto LAB_025caca4;
        fVar17 = *(float *)(lVar11 + 800);
        *(undefined4 *)(param_6 + 4) = 0;
        *(float *)(param_6 + 0x14) = fVar17 - *(float *)(param_6 + 0x8c);
      }
      puVar7 = PTR_DAT_049c7130;
      fVar17 = *(float *)(lVar11 + 0x318);
      fVar23 = _UNK_013aa688;
      if (_UNK_013aa688 <= *(float *)(param_4 + 0x1a0)) {
        fVar23 = *(float *)(param_4 + 0x1a0);
      }
      if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (((param_7 != (undefined1 *)0x0) && (param_8 != 0)) && (*(long *)(param_8 + 0x108) != 0)) {
        fVar22 = *(float *)(param_7 + 0xf8);
        lVar11 = *(long *)(param_4 + 0x168);
        UnityEngine_Transform__get_position_3c2d540(*(long *)(param_8 + 0x108),0);
        if (lVar11 != 0) {
          fVar18 = (float)SandFlowRenderer__FindNearestDistance_24bfb4c(lVar11);
          if (*(long *)(param_4 + 0x160) != 0) {
            fVar24 = *(float *)(*(long *)(param_4 + 0x160) + 0xd0);
            fVar19 = (float)SandFlowSystem__GetCenter_24cd06c(param_4,param_6);
            fVar6 = _UNK_013aa8f4;
            fVar5 = _UNK_013aa3e4;
            if (*(long *)(param_4 + 0x128) != 0) {
              fVar18 = fVar18 - fVar24;
              fVar23 = fVar23 * fVar22 * _UNK_013aa8f4 * _UNK_013aa3e4;
              uVar8 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                (*(long *)(param_4 + 0x128),param_7,*(undefined8 *)PTR_DAT_049c1710)
              ;
              if ((uVar8 & 1) == 0) {
                fVar22 = ABS(*(float *)(param_6 + 0x84));
              }
              else {
                param_3 = fVar17 * 0.5;
                fVar24 = param_3 + (fVar18 - fVar19);
                fVar24 = fVar24 - fVar17 * (float)(int)(fVar24 / fVar17);
                fVar22 = fVar17;
                if (fVar24 <= fVar17) {
                  fVar22 = fVar24;
                }
                fVar21 = 0.0;
                if (0.0 <= fVar24) {
                  fVar21 = fVar22;
                }
                if (fVar23 < fVar21 - param_3) {
                  fVar19 = fVar19 - fVar17 * (float)(int)(fVar19 / fVar17);
                  param_3 = fVar17;
                  if (fVar19 <= fVar17) {
                    param_3 = fVar19;
                  }
                  fVar18 = 0.0;
                  if (0.0 <= fVar19) {
                    fVar18 = param_3;
                  }
                }
                fVar22 = -ABS(*(float *)(param_6 + 0x84));
              }
              lVar11 = *(long *)(param_4 + 0x168);
              *(float *)(param_6 + 0x84) = fVar22;
              if (lVar11 != 0) {
                cVar2 = *(char *)(lVar11 + 0x31c);
                *(float *)(param_6 + 0x18) = fVar23;
                if (fVar18 <= fVar17) {
                  fVar17 = fVar18;
                }
                fVar23 = 0.0;
                if (0.0 <= fVar18) {
                  fVar23 = fVar17;
                }
                if (cVar2 != '\0') {
                  fVar23 = fVar18;
                }
                *(float *)(param_6 + 0x10) = fVar23;
                uVar20 = SandFlowSystem__HomeOf_24ca368(param_4,param_7);
                *(undefined4 *)(param_6 + 0x20) = uVar20;
                *(float *)(param_6 + 0x24) = fVar17;
                *(float *)(param_6 + 0x28) = param_3;
                *(undefined4 *)(param_6 + 0x2c) = 0x40400000;
                uVar20 = UnityEngine_Time__get_time_3c295c8(0);
                lVar11 = *(long *)puVar7;
                *(undefined4 *)(param_6 + 0xc) = uVar20;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                lVar11 = *(long *)(param_4 + 0x160);
                *(float *)(param_6 + 0x1c) = *(float *)(param_7 + 0xf8) * fVar6 * fVar5;
                if ((lVar11 != 0) && (*(long *)(param_4 + 0x168) != 0)) {
                  fVar22 = *(float *)(lVar11 + 0xbc);
                  fVar23 = *(float *)(param_6 + 0x18);
                  fVar17 = 1.0;
                  if (fVar22 <= 1.0) {
                    fVar17 = fVar22;
                  }
                  fVar18 = 0.0;
                  if (0.0 <= fVar22) {
                    fVar18 = fVar17;
                  }
                  fVar17 = (float)SandFlowRenderer__FarthestReformGap_24c0a60
                                            (*(long *)(param_4 + 0x168),param_5,param_6);
                  fVar23 = fVar23 * fVar18;
                  if (fVar23 <= fVar17) {
                    fVar23 = fVar17;
                  }
                  *(float *)(param_6 + 0x6c) = fVar23;
                  SandFlowSystem__ShowCube_24c7d1c(0,param_4,param_7);
                  if ((uVar8 & 1) == 0) {
                    return;
                  }
                  lVar11 = *(long *)(param_4 + 0x120);
                  if (lVar11 != 0) {
                    lVar9 = *(long *)PTR_DAT_049c1c80;
                    lVar4 = tpidr_el0;
                    lVar10 = *(long *)(lVar4 + 0x28);
                    lVar15 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
                    uVar13 = (ulong)*(uint *)(*(long *)(lVar15 + 0x48) + 0xfc);
                    uVar8 = uVar13 + 0xf & 0x1fffffff0;
                    plVar12 = (long *)(&stack0xffffffffffffff90 + -uVar8);
                    lVar14 = (long)plVar12 - uVar8;
                    plVar16 = *(long **)(lVar11 + 0x10);
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (plVar16 == (long *)0x0) {
                      if (*(long *)(lVar4 + 0x28) == lVar10) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                    }
                    else {
                      uVar3 = *(uint *)(lVar11 + 0x18);
                      if (uVar3 < *(uint *)(plVar16 + 3)) {
                        *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                        if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
                          param_7 = &stack0xffffffffffffff90;
                        }
                        func_0x04608620(plVar12,param_7,uVar13);
                        func_0x04608650((long)plVar16 +
                                        (ulong)*(uint *)(*plVar16 + 0x104) * (long)(int)uVar3 + 0x20
                                        ,param_7,uVar13);
                        lVar11 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x48);
                        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_02229718();
                        }
                        if (*(uint *)(plVar16 + 3) <= uVar3) {
                          if (*(long *)(lVar4 + 0x28) == lVar10) {
                    /* WARNING: Subroutine does not return */
                            FUN_021f06a8();
                          }
                          goto LAB_0233365c;
                        }
                        FUN_021f03a8(lVar11,(long)plVar16 +
                                            (ulong)*(uint *)(*plVar16 + 0x104) * (long)(int)uVar3 +
                                            0x20,plVar12);
                      }
                      else {
                        iVar1 = *(int *)(*(long *)(lVar15 + 0x48) + 0x28);
                        if (-1 < iVar1) {
                          param_7 = &stack0xffffffffffffff90;
                        }
                        func_0x04608620(plVar12,param_7,uVar13);
                        if (iVar1 < 0) {
                          func_0x04608620(lVar14,param_7,uVar13);
                        }
                        else {
                          lVar14 = *plVar12;
                        }
                        System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                                  (lVar11,lVar14,*(undefined8 *)(lVar15 + 0x70));
                      }
                      if (*(long *)(lVar4 + 0x28) == lVar10) {
                        return;
                      }
                    }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025caca4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

