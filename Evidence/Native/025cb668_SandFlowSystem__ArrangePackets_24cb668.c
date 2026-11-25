/* IL2CPP: SandFlowSystem$$ArrangePackets
void SandFlowSystem__ArrangePackets (SandFlowSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$ArrangePackets
   void SandFlowSystem__ArrangePackets (SandFlowSystem_o* __this, float deltaTime, const MethodInfo*
   method); */

void SandFlowSystem__ArrangePackets_24cb668(float param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_88;
  float fStack_84;
  
  if ((bRam0000000004f4bbe3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7300);
    FUN_021f03f8(PTR_DAT_049c7200);
    FUN_021f03f8(PTR_DAT_049c7308);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049be8a8);
    FUN_021f03f8(PTR_DAT_049c7310);
    bRam0000000004f4bbe3 = 1;
  }
  fStack_88 = 0.0;
  if (*(long *)(param_2 + 0x168) != 0) {
    if (param_1 <= 0.0) {
      return;
    }
                    /* try { // try from 025cb708 to 026cb723 has its CatchHandler @ 025cb77c */
    fVar23 = *(float *)(*(long *)(param_2 + 0x168) + 0x318);
    if (fVar23 <= _UNK_013aa94c) {
      return;
    }
    if (*(long *)(param_2 + 0x40) != 0) {
                    /* try { // try from 025cb724 to 026cb797 has its CatchHandler @ 025cb62c */
      iVar8 = Conveyor__GetTotalSlotCount_24b0e24(*(long *)(param_2 + 0x40),0);
      if (0 < iVar8) {
        *(float *)(param_2 + 0x198) = fVar23 / ((float)iVar8 + (float)iVar8);
      }
      iVar8 = *(int *)(param_2 + 0x188);
      if (iVar8 < 1) {
        uVar13 = 0;
      }
      else {
        uVar16 = 0;
        uVar13 = 0;
        lVar17 = 0x4c;
        do {
          lVar9 = *(long *)(param_2 + 0xb0);
          if (lVar9 == 0) goto LAB_025cb8d8;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025cbc04;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cb708 with catch @ 025cb77c
                        */
          if (*(float *)(lVar9 + lVar17) <= 1.5) {
            lVar18 = *(long *)(param_2 + 200);
            fVar19 = (float)SandFlowSystem__GetCenter_24cd06c(param_2,lVar9 + lVar17 + -0x2c);
                    /* try { // try from 025cb798 to 026cb79b has its CatchHandler @ 025cb7a4 */
            fVar19 = fVar19 - fVar23 * (float)(int)(fVar19 / fVar23);
                    /* catch() { ... } // from try @ 025cb798 with catch @ 025cb7a4 */
                    /* try { // try from 025cb7a8 to 026cb7af has its CatchHandler @ 025cb7b8 */
            fVar20 = fVar23;
            if (fVar19 <= fVar23) {
              fVar20 = fVar19;
            }
            fVar21 = 0.0;
                    /* try { // try from 025cb7b0 to 026cb7bb has its CatchHandler @ 025cb62c */
            if (0.0 <= fVar19) {
              fVar21 = fVar20;
            }
            if (lVar18 == 0) goto LAB_025cb8d8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cb7a8 with catch @ 025cb7b8
                        */
                    /* try { // try from 025cb7bc to 026cb86b has its CatchHandler @ 025cb7bc
                       catch() { ... } // from try @ 025cb7bc with catch @ 025cb7bc
                       catch() { ... } // from try @ 025cb888 with catch @ 025cb7bc
                       catch() { ... } // from try @ 025cb9bc with catch @ 025cb7bc */
            if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_025cbc04;
            lVar9 = (long)(int)uVar13;
            *(float *)(lVar18 + lVar9 * 4 + 0x20) = fVar21;
            lVar18 = *(long *)(param_2 + 0xd0);
            if (lVar18 == 0) goto LAB_025cb8d8;
            if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_025cbc04;
            uVar13 = uVar13 + 1;
            *(int *)(lVar18 + lVar9 * 4 + 0x20) = (int)uVar16;
            iVar8 = *(int *)(param_2 + 0x188);
          }
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 0x90;
        } while ((long)uVar16 < (long)iVar8);
      }
      puVar5 = PTR_DAT_049be8a8;
      lVar17 = *(long *)(param_2 + 0xd8);
      if (lVar17 != 0) {
        uVar16 = 0;
        iVar8 = -1;
        do {
          uVar15 = uVar13 + uVar16;
          uVar14 = (uint)uVar15;
          if (*(int *)(lVar17 + 0x18) <= (int)uVar16) {
            if (uVar14 == 0) {
              return;
            }
            System_Array__Sort___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25aa6b4
                      (*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0xd0),0,
                       uVar15 & 0xffffffff,*(undefined8 *)PTR_DAT_049c7300);
            if (*(long *)(param_2 + 0x160) != 0) {
              fVar19 = *(float *)(*(long *)(param_2 + 0x160) + 0x94);
              fVar20 = 0.0;
              if (0.0 <= fVar19) {
                fVar20 = fVar19;
              }
              fVar20 = (float)FUN_04608770(-(fVar20 * param_1));
              lVar17 = *(long *)(param_2 + 200);
              if (lVar17 != 0) {
                uVar2 = *(uint *)(lVar17 + 0x18);
                if ((uVar2 == 0) || (uVar1 = (uVar13 - 1) + uVar16, uVar2 <= (uint)uVar1))
                goto LAB_025cbc04;
                if ((int)uVar14 < 2) {
                    /* try { // try from 025cb9b4 to 026cb9bb has its CatchHandler @ 025cb9c4 */
                  iVar8 = 0;
                  goto LAB_025cb9b8;
                }
                uVar12 = (int)uVar16 + (uVar13 - 2);
                fVar19 = *(float *)(lVar17 + 0x20);
                uVar4 = uVar2 - 1;
                lVar9 = 0;
                uVar3 = uVar4;
                if (uVar2 <= uVar4) {
                  uVar3 = uVar2;
                }
                if (uVar3 <= uVar12) {
                  uVar12 = uVar3;
                }
                fVar21 = (fVar23 + fVar19) - ((float *)(lVar17 + 0x20))[uVar1 & 0xffffffff];
                iVar11 = 0;
                goto LAB_025cb984;
              }
            }
            break;
          }
          if (*(long *)(param_2 + 0xe8) == 0) break;
          lVar17 = *(long *)(param_2 + 200);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_2 + 0xe8),uVar16 & 0xffffffff,&fStack_84,*(undefined8 *)puVar5)
          ;
          if (*(long *)(param_2 + 0x168) == 0) break;
                    /* try { // try from 025cb86c to 026cb887 has its CatchHandler @ 025cb988 */
          fVar19 = fStack_84 + *(float *)(*(long *)(param_2 + 0x168) + 800);
          fVar19 = fVar19 - fVar23 * (float)(int)(fVar19 / fVar23);
          fVar20 = fVar23;
          if (fVar19 <= fVar23) {
            fVar20 = fVar19;
          }
                    /* try { // try from 025cb888 to 026cb9a3 has its CatchHandler @ 025cb7bc */
          fVar21 = 0.0;
          if (0.0 <= fVar19) {
            fVar21 = fVar20;
          }
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar14) goto LAB_025cbc04;
          *(float *)(lVar17 + (long)(int)uVar14 * 4 + 0x20) = fVar21;
          lVar17 = *(long *)(param_2 + 0xd0);
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar14) goto LAB_025cbc04;
          uVar16 = uVar16 + 1;
          *(int *)(lVar17 + (long)(int)uVar14 * 4 + 0x20) = iVar8;
          iVar8 = iVar8 + -1;
          lVar17 = *(long *)(param_2 + 0xd8);
        } while (lVar17 != 0);
      }
    }
  }
LAB_025cb8d8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    fVar22 = *(float *)(lVar17 + 0x24 + lVar9 * 4);
    lVar9 = lVar9 + 1;
    fVar19 = fVar22 - fVar19;
    iVar8 = (int)lVar9;
    if (fVar19 <= fVar21) {
      iVar8 = iVar11;
      fVar19 = fVar21;
    }
                    /* try { // try from 025cb9a4 to 026cb9a7 has its CatchHandler @ 025cb9b0 */
    fVar21 = fVar19;
    fVar19 = fVar22;
    iVar11 = iVar8;
    if (uVar13 + uVar16 + -1 == lVar9) break;
LAB_025cb984:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cb86c with catch @ 025cb988
                        */
    if (uVar4 == uVar12) goto LAB_025cbc04;
  }
LAB_025cb9b8:
                    /* try { // try from 025cb9bc to 026cb9c7 has its CatchHandler @ 025cb7bc */
  if (0 < (int)uVar14) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cb9b4 with catch @ 025cb9c4
                        */
    uVar13 = 0;
    fVar19 = -INFINITY;
    do {
      iVar11 = 0;
      if (uVar14 != 0) {
        iVar11 = (int)(iVar8 + uVar13) / (int)uVar14;
      }
      uVar3 = (iVar8 + uVar13) - iVar11 * uVar14;
      if (uVar2 <= uVar3) goto LAB_025cbc04;
      fVar21 = fVar23;
      if (iVar8 <= (int)uVar3) {
        fVar21 = 0.0;
      }
      lVar9 = *(long *)(param_2 + 0xc0);
      fVar22 = fVar19 + *(float *)(param_2 + 0x198) + *(float *)(param_2 + 0x198);
      fVar21 = fVar21 + *(float *)(lVar17 + (long)(int)uVar3 * 4 + 0x20);
      fVar19 = fVar21;
      if (fVar21 <= fVar22) {
        fVar19 = fVar22;
      }
      if (lVar9 == 0) goto LAB_025cb8d8;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_025cbc04;
      uVar13 = uVar13 + 1;
      *(float *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = (1.0 - fVar20) * (fVar19 - fVar21);
      puVar7 = PTR_DAT_049c7310;
      puVar6 = PTR_DAT_049c7308;
    } while (uVar14 != uVar13);
    if (0 < (int)uVar14) {
      lVar17 = 8;
      do {
        lVar9 = *(long *)(param_2 + 0xd0);
        if (lVar9 == 0) goto LAB_025cb8d8;
        uVar16 = lVar17 - 8;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025cbc04;
        uVar13 = *(uint *)(lVar9 + lVar17 * 4);
        if ((int)uVar13 < 0) {
          lVar9 = *(long *)(param_2 + 0xe8);
          if (lVar9 == 0) goto LAB_025cb8d8;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar9,~uVar13,&fStack_84,*(undefined8 *)puVar5);
          lVar18 = *(long *)(param_2 + 0xc0);
          if (lVar18 == 0) goto LAB_025cb8d8;
          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_025cbc04;
          fStack_84 = fStack_84 + *(float *)(lVar18 + lVar17 * 4);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                    (lVar9,~uVar13,&fStack_84,*(undefined8 *)puVar7);
        }
        else {
          lVar9 = *(long *)(param_2 + 0xb0);
          if (lVar9 == 0) goto LAB_025cb8d8;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_025cbc04:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar18 = *(long *)(param_2 + 0xc0);
          if (lVar18 == 0) goto LAB_025cb8d8;
          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_025cbc04;
          lVar10 = *(long *)(param_2 + 0xb8);
          if (lVar10 == 0) goto LAB_025cb8d8;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_025cbc04;
          fVar23 = *(float *)(lVar18 + lVar17 * 4);
          lVar18 = *(long *)(lVar10 + (ulong)uVar13 * 8 + 0x20);
          if (lVar18 != 0) {
            if (*(long *)(param_2 + 0x1f0) == 0) goto LAB_025cb8d8;
            uVar16 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                               (*(long *)(param_2 + 0x1f0),lVar18,&fStack_88,*(undefined8 *)puVar6);
            if ((uVar16 & 1) != 0) {
              fVar19 = (float)UnityEngine_Time__get_time_3c295c8(0);
              fVar21 = (fVar19 - fStack_88) + (fVar19 - fStack_88);
              fVar19 = 1.0;
              if (fVar21 <= 1.0) {
                fVar19 = fVar21;
              }
              fVar22 = 0.0;
              if (0.0 <= fVar21) {
                fVar22 = fVar19;
              }
              if (1.0 <= fVar22) {
                if (*(long *)(param_2 + 0x1f0) == 0) goto LAB_025cb8d8;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                          (*(long *)(param_2 + 0x1f0),lVar18,*(undefined8 *)PTR_DAT_049c7200);
              }
              fVar23 = fVar23 * fVar22 * fVar22;
            }
          }
          lVar9 = lVar9 + 0x20 + (ulong)uVar13 * 0x90;
          *(float *)(lVar9 + 0x3c) =
               *(float *)(lVar9 + 0x3c) +
               (1.0 - fVar20) * (*(float *)(param_2 + 0x198) - *(float *)(lVar9 + 0x3c));
          *(float *)(lVar9 + 0x88) = fVar23 + *(float *)(lVar9 + 0x88);
        }
        uVar15 = uVar15 - 1;
        lVar17 = lVar17 + 1;
      } while (uVar15 != 0);
    }
  }
  return;
}

