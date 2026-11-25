/* IL2CPP: SandFlowSystem$$OnLevelBuildComplete
void SandFlowSystem__OnLevelBuildComplete (SandFlowSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$OnLevelBuildComplete
   void SandFlowSystem__OnLevelBuildComplete (SandFlowSystem_o* __this, LevelBuildCompleteMessage_o
   m, const MethodInfo* method); */

void SandFlowSystem__OnLevelBuildComplete_24c6418(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long **pplVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  undefined4 uVar16;
  char cVar17;
  bool bVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined8 uStack_110;
  long **pplStack_108;
  long *plStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4bbdd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c7180);
    FUN_021f03f8(PTR_DAT_049c7188);
    FUN_021f03f8(PTR_DAT_049c7190);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c7198);
    FUN_021f03f8(PTR_DAT_049c71a0);
    FUN_021f03f8(PTR_DAT_049c1590);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f4bbdd = 1;
  }
  puVar6 = PTR_DAT_049b3b98;
  plStack_c0 = (long *)0x0;
  uStack_b8 = (long **)0x0;
  plStack_b0 = (long *)0x0;
  uStack_d0 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  pplStack_78 = (long **)0x0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x168) == 0) {
    return;
  }
  lVar24 = *(long *)(param_1 + 0x40);
  if (lVar24 == 0) {
LAB_025c68f8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = *(int *)(lVar24 + 0x160) * *(int *)(lVar24 + 0x158);
  if (iVar3 - 1U < 0x400) {
    if (*(long *)(param_1 + 0x60) != 0) {
      fVar28 = (float)Dreamteck_Splines_SplineComputer__CalculateLength_2349594
                                (0,0x3ff0000000000000,*(long *)(param_1 + 0x60),0);
      fVar30 = _UNK_013aa94c;
      if (*(long *)(param_1 + 0x160) != 0) {
                    /* catch() { ... } // from try @ 025c6560 with catch @ 025c653c
                       catch() { ... } // from try @ 025c6598 with catch @ 025c653c
                       catch() { ... } // from try @ 025c65c0 with catch @ 025c653c */
        fVar28 = fVar28 / (float)iVar3;
        fVar29 = *(float *)(*(long *)(param_1 + 0x160) + 0x28);
        bVar18 = _UNK_013aa94c <= fVar29;
        *(undefined1 *)(param_1 + 0x2b0) = 1;
        if (bVar18) {
          fVar30 = fVar29;
        }
                    /* try { // try from 025c6558 to 026c655f has its CatchHandler @ 025c6578 */
        *(float *)(param_1 + 0x19c) = fVar28 / fVar30;
                    /* try { // try from 025c6560 to 026c6593 has its CatchHandler @ 025c653c */
        if (*(long *)(param_1 + 0x1d0) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_1 + 0x1d0),*(undefined8 *)PTR_DAT_049c7188);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6558 with catch @ 025c6578
                        */
          if (*(long *)(param_1 + 0x1d8) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                      (*(long *)(param_1 + 0x1d8),*(undefined8 *)PTR_DAT_049c7190);
            puVar6 = PTR_DAT_049b8a28;
                    /* try { // try from 025c6594 to 026c6597 has its CatchHandler @ 025c65b4 */
                    /* try { // try from 025c6598 to 026c65b7 has its CatchHandler @ 025c653c */
            uVar20 = *(undefined8 *)PTR_DAT_049b8a28;
            *(float *)(param_1 + 0x198) = fVar28 * 0.5;
            lVar21 = FUN_021f04e4(uVar20,0x100);
                    /* catch() { ... } // from try @ 025c6594 with catch @ 025c65b4 */
                    /* try { // try from 025c65b8 to 026c65bf has its CatchHandler @ 025c65c8 */
            lVar22 = FUN_021f04e4(*(undefined8 *)puVar6,0x100);
            dVar5 = _UNK_013a8680;
                    /* try { // try from 025c65c0 to 026c65cb has its CatchHandler @ 025c653c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c65b8 with catch @ 025c65c8
                        */
                    /* try { // try from 025c65cc to 026c6657 has its CatchHandler @ 025c65cc
                       catch() { ... } // from try @ 025c65cc with catch @ 025c65cc
                       catch() { ... } // from try @ 025c66f0 with catch @ 025c65cc
                       catch() { ... } // from try @ 025c676c with catch @ 025c65cc */
            uVar27 = 0;
            lVar24 = -0xc00;
            uStack_98 = 0;
            uStack_94 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            pplStack_78 = (long **)0x0;
            plStack_80 = (long *)0x0;
            uStack_68 = 0;
            uStack_70 = 0;
            do {
              if ((*(long *)(param_1 + 0x60) == 0) ||
                 (Dreamteck_Splines_SplineComputer__Evaluate_234929c
                            ((double)(int)uVar27 / dVar5,*(long *)(param_1 + 0x60),&uStack_a0,0),
                 lVar21 == 0)) goto LAB_025c68f8;
              if (*(uint *)(lVar21 + 0x18) <= uVar27) {
LAB_025c68fc:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              *(undefined8 *)(lVar21 + lVar24 + 0xc20) = uStack_a0;
              *(undefined4 *)(lVar21 + lVar24 + 0xc28) = uStack_98;
              if (lVar22 == 0) goto LAB_025c68f8;
              if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_025c68fc;
              lVar1 = lVar22 + lVar24;
              lVar24 = lVar24 + 0xc;
              uVar27 = uVar27 + 1;
              *(ulong *)(lVar1 + 0xc20) = CONCAT44(uStack_90,uStack_94);
              *(undefined4 *)(lVar1 + 0xc28) = uStack_8c;
            } while (lVar24 != 0);
            if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 025c6658 to 026c6663 has its CatchHandler @ 025c6730 */
              lVar24 = *(long *)(param_1 + 0x168);
              uVar19 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0
                                 (*(long *)(param_1 + 0x60),0);
              if (lVar24 != 0) {
                SandFlowRenderer__SetPath_24be7c4(lVar24,lVar21,lVar22,uVar19 & 1);
                if (*(long *)(param_1 + 0x250) != 0) {
                    /* try { // try from 025c6690 to 026c669f has its CatchHandler @ 025c672c */
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                            (*(long *)(param_1 + 0x250),*(undefined8 *)PTR_DAT_049c7180);
                  lVar24 = *(long *)(param_1 + 0x260);
                  if (lVar24 != 0) {
                    /* try { // try from 025c66a4 to 026c66cb has its CatchHandler @ 025c6734 */
                    lVar21 = *(long *)PTR_DAT_049c71a0;
                    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                    uVar27 = FUN_021f1190(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200));
                    if ((uVar27 & 1) == 0) {
                      *(undefined4 *)(lVar24 + 0x18) = 0;
                    }
                    else {
                      iVar3 = *(int *)(lVar24 + 0x18);
                      *(undefined4 *)(lVar24 + 0x18) = 0;
                      if (0 < iVar3) {
                    /* try { // try from 025c66e0 to 026c66ef has its CatchHandler @ 025c6738 */
                        System_Array__Clear_31229cc(*(undefined8 *)(lVar24 + 0x10),0,iVar3,0);
                      }
                    }
                    lVar24 = *(long *)(param_1 + 0x180);
                    if (lVar24 != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6690 with catch @ 025c672c
                        */
                      uStack_110 = (long *)0x0;
                      pplStack_108 = (long **)0x0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6658 with catch @ 025c6730
                        */
                      plStack_100 = (long *)0x0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c66a4 with catch @ 025c6734
                        */
                      lVar21 = *(long *)PTR_DAT_049c1590;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c66e0 with catch @ 025c6738
                        */
                      puVar23 = (ulong *)thunk_FUN_0224e54c(lVar24,*(long *)(**(long **)(*(long *)(
                                                  lVar21 + 0x20) + 0xc0) + 0x80) + 0x60);
                      plStack_60 = (long *)*puVar23;
                    /* try { // try from 025c6754 to 026c6757 has its CatchHandler @ 025c6760 */
                      uStack_58 = 0;
                      thunk_FUN_021f190c(&plStack_60);
                    /* catch() { ... } // from try @ 025c6754 with catch @ 025c6760 */
                      uStack_58 = 0;
                    /* try { // try from 025c6764 to 026c676b has its CatchHandler @ 025c6774 */
                    /* try { // try from 025c676c to 026c6777 has its CatchHandler @ 025c65cc */
                      pplStack_108 = (long **)0x0;
                      uStack_110 = plStack_60;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c6764 with catch @ 025c6774
                        */
                      thunk_FUN_021f190c(&uStack_110,0);
                      plStack_100 = (long *)thunk_FUN_0224e54c(lVar24,*(long *)(**(long **)(*(long *
                                                  )(lVar21 + 0x20) + 0xc0) + 0x80) + 0x80);
                      plStack_100 = (long *)*plStack_100;
                      thunk_FUN_021f190c(&plStack_100);
                      uStack_b8 = pplStack_108;
                      plStack_c0 = uStack_110;
                      plStack_b0 = plStack_100;
                      uVar27 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8
                                         (&plStack_c0,0);
                      puVar7 = PTR_DAT_049c7198;
                      puVar6 = PTR_DAT_049b6110;
                      pplVar4 = uStack_b8;
                      while( true ) {
                        if ((uVar27 & 1) == 0) {
                          return;
                        }
                        uStack_b8._4_4_ = (int)((ulong)pplVar4 >> 0x20);
                        plVar25 = *(long **)((long)plStack_b0 +
                                            (ulong)*(uint *)(*plStack_b0 + 0x104) *
                                            (long)uStack_b8._4_4_ + 0x20);
                        uStack_b8 = pplVar4;
                    /* try { // try from 025c67f4 to 026c6923 has its CatchHandler @ 025c67f4
                       catch() { ... } // from try @ 025c67f4 with catch @ 025c67f4
                       catch() { ... } // from try @ 025c69f4 with catch @ 025c67f4
                       catch() { ... } // from try @ 025c6a9c with catch @ 025c67f4
                       catch() { ... } // from try @ 025c6b34 with catch @ 025c67f4 */
                        if ((plVar25 == (long *)0x0) || (plVar25[0x21] == 0)) break;
                        lVar24 = *(long *)(param_1 + 0x60);
                        UnityEngine_Transform__get_position_3c2d540(plVar25[0x21],0);
                        if (lVar24 == 0) break;
                        Dreamteck_Splines_SplineComputer__Project_2349550(&uStack_110,lVar24,0);
                        uVar20 = uStack_d8;
                        if (*(long *)(param_1 + 0x48) == 0) break;
                        uVar26 = *(undefined8 *)(param_1 + 0x60);
                        uVar31 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x60);
                        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        Extensions__TravelUnclamped_24e666c(uVar20,uVar31,uVar26,0xffffffff,0);
                        if (*(long *)(param_1 + 0x60) == 0) break;
                        Dreamteck_Splines_SplineComputer__Evaluate_2349114
                                  (&uStack_110,*(long *)(param_1 + 0x60),0);
                        plVar15 = uStack_110;
                        uVar31 = uStack_110._4_4_;
                        uVar16 = pplStack_108._0_4_;
                        lVar24 = *(long *)(param_1 + 0x260);
                        pplStack_c8 = (long **)0x0;
                        uStack_d0 = plVar25;
                        thunk_FUN_021f190c(&uStack_d0,plVar25);
                        if (*(long *)(param_1 + 0x168) == 0) break;
                        uVar31 = SandFlowRenderer__FindNearestDistance_24bfb4c
                                           ((ulong)plVar15 & 0xffffffff,uVar31,uVar16);
                        pplStack_c8 = (long **)CONCAT44(pplStack_c8._4_4_,uVar31);
                        if (lVar24 == 0) break;
                        pplStack_108 = pplStack_c8;
                        uStack_110 = uStack_d0;
                        FUN_02333498(lVar24,&uStack_110,*(undefined8 *)puVar7);
                        uVar27 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8
                                           (&plStack_c0,0);
                        pplVar4 = uStack_b8;
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
    goto LAB_025c68f8;
  }
  if ((bRam0000000004f4bc08 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c71a8);
    FUN_021f03f8(PTR_DAT_049c7180);
    FUN_021f03f8(PTR_DAT_049c2860);
    FUN_021f03f8(PTR_DAT_049c71b0);
    FUN_021f03f8(PTR_DAT_049c71b8);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c71c0);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c71c8);
    FUN_021f03f8(PTR_DAT_049c71d0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c2870);
    FUN_021f03f8(PTR_DAT_049c71d8);
    FUN_021f03f8(PTR_DAT_049c71e0);
    FUN_021f03f8(PTR_DAT_049c71e8);
    FUN_021f03f8(PTR_DAT_049c1df0);
    FUN_021f03f8(PTR_DAT_049c71f0);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc08 = 1;
  }
  lVar24 = *(long *)puVar6;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  uVar20 = *(undefined8 *)(param_1 + 0x1b0);
  plStack_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  pplStack_a8 = (long **)0x0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = (long **)0x0;
  pplStack_c8 = (long **)0x0;
  uStack_d0._0_5_ = (uint5)(uint)uStack_d0;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar27 = UnityEngine_Object__op_Inequality_3c1b96c(uVar20,0,0);
  if ((uVar27 & 1) != 0) {
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_025c7014;
    UnityEngine_AudioSource__Stop_3bbd214(*(long *)(param_1 + 0x1b0),0);
  }
  uVar20 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar27 = UnityEngine_Object__op_Inequality_3c1b96c(uVar20,0,0);
  if ((uVar27 & 1) != 0) {
    if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_025c7014;
    UnityEngine_AudioSource__Stop_3bbd214(*(long *)(param_1 + 0x1b8),0);
  }
  if (0 < *(int *)(param_1 + 0x188)) {
    uVar27 = 0;
    do {
      lVar24 = *(long *)(param_1 + 0xb8);
      if (lVar24 == 0) goto LAB_025c7014;
      if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_025c7018;
      SandFlowSystem__Release_24d0d74(param_1,*(undefined8 *)(lVar24 + uVar27 * 8 + 0x20));
      uVar27 = uVar27 + 1;
    } while ((long)uVar27 < (long)*(int *)(param_1 + 0x188));
  }
  puVar14 = PTR_DAT_049c71e0;
  puVar13 = PTR_DAT_049c71d0;
  puVar12 = PTR_DAT_049c71c8;
  puVar11 = PTR_DAT_049c71b8;
  puVar10 = PTR_DAT_049c2870;
  puVar9 = PTR_DAT_049c14e8;
  puVar8 = PTR_DAT_049c14e0;
  puVar7 = PTR_DAT_049c14d8;
  if (*(long *)(param_1 + 0xd8) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xd8),&plStack_100,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_70 = uStack_f0;
    pplStack_78 = pplStack_f8;
    plStack_80 = plStack_100;
    plStack_100 = (long *)0x0;
    pplStack_f8 = &plStack_80;
    while (uVar27 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&plStack_80,*(undefined8 *)puVar8), (uVar27 & 1) != 0) {
      lVar22 = *(long *)puVar9;
      lVar21 = *(long *)(lVar22 + 0x20);
      uVar2 = *(ushort *)(lVar21 + 0x135);
      lVar24 = lVar21;
      if ((uVar2 & 1) == 0) {
        lVar24 = FUN_02229718();
        lVar21 = *(long *)(lVar22 + 0x20);
        uVar2 = *(ushort *)(lVar21 + 0x135);
      }
      uVar31 = *(undefined4 *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar21 = FUN_02229718();
      }
      uVar20 = thunk_FUN_0224e54c(&plStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_110,uVar20,uVar31);
      SandFlowSystem__Release_24d0d74(param_1,uStack_110);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&plStack_80,*(undefined8 *)puVar7);
    if (*(long *)(param_1 + 0xf8) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                (*(long *)(param_1 + 0xf8),&plStack_100,*(undefined8 *)puVar11);
      uStack_90 = (undefined4)uStack_e0;
      uStack_8c = (undefined4)((ulong)uStack_e0 >> 0x20);
      pplStack_108 = &plStack_b0;
      pplStack_a8 = pplStack_f8;
      plStack_b0 = plStack_100;
      uStack_98 = (undefined4)uStack_e8;
      uStack_94 = (undefined4)((ulong)uStack_e8 >> 0x20);
      uStack_a0 = uStack_f0;
      uStack_110 = (long *)0x0;
      while (uVar27 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                (&plStack_b0,*(undefined8 *)puVar12), (uVar27 & 1) != 0) {
        lVar22 = *(long *)puVar13;
        lVar21 = *(long *)(lVar22 + 0x20);
        uVar2 = *(ushort *)(lVar21 + 0x135);
        lVar24 = lVar21;
        if ((uVar2 & 1) == 0) {
          lVar24 = FUN_02229718();
          lVar21 = *(long *)(lVar22 + 0x20);
          uVar2 = *(ushort *)(lVar21 + 0x135);
        }
        uVar31 = *(undefined4 *)(*(long *)(*(long *)(lVar24 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar21 = FUN_02229718();
        }
        uVar20 = thunk_FUN_0224e54c(&plStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&plStack_100,uVar20,uVar31);
        uStack_b8 = pplStack_f8;
        plStack_c0 = plStack_100;
        System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                  (&plStack_c0,&pplStack_c8,(long)&uStack_d0 + 4,*(undefined8 *)puVar14);
        pplVar4 = pplStack_c8;
        cVar17 = uStack_d0._4_1_;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar27 = UnityEngine_Object__op_Inequality_3c1b96c(pplVar4,0,0);
        if ((uVar27 & 1) != 0) {
          if (pplVar4 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(pplVar4,cVar17 != '\0',0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&plStack_b0,*(undefined8 *)PTR_DAT_049c71c0);
      puVar7 = PTR_DAT_049c7180;
      puVar6 = PTR_DAT_049c1df0;
      if (*(long *)(param_1 + 0xf8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                  (*(long *)(param_1 + 0xf8),*(undefined8 *)PTR_DAT_049c71b0);
        SandFlowSystem__RestoreJelly_24d06c8(param_1);
        if (*(long *)(param_1 + 0xf0) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_049c2860);
          if (*(long *)(param_1 + 0x108) != 0) {
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                      (*(long *)(param_1 + 0x108),*(undefined8 *)puVar10);
            lVar24 = *(long *)(param_1 + 0x120);
            if (lVar24 != 0) {
              lVar21 = *(long *)puVar6;
              *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
              uVar27 = FUN_021f1190(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200));
              if ((uVar27 & 1) == 0) {
                *(undefined4 *)(lVar24 + 0x18) = 0;
              }
              else {
                iVar3 = *(int *)(lVar24 + 0x18);
                *(undefined4 *)(lVar24 + 0x18) = 0;
                if (0 < iVar3) {
                  System_Array__Clear_31229cc(*(undefined8 *)(lVar24 + 0x10),0,iVar3,0);
                }
              }
              if (*(long *)(param_1 + 0x140) != 0) {
                System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                          (*(long *)(param_1 + 0x140),*(undefined8 *)PTR_DAT_049c71d8);
                if (*(long *)(param_1 + 0x128) != 0) {
                  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                            (*(long *)(param_1 + 0x128),*(undefined8 *)puVar10);
                  lVar24 = *(long *)(param_1 + 0x110);
                  if (lVar24 != 0) {
                    lVar21 = *(long *)PTR_DAT_049c71f0;
                    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                    uVar27 = FUN_021f1190(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200));
                    if ((uVar27 & 1) == 0) {
                      *(undefined4 *)(lVar24 + 0x18) = 0;
                    }
                    else {
                      iVar3 = *(int *)(lVar24 + 0x18);
                      *(undefined4 *)(lVar24 + 0x18) = 0;
                      if (0 < iVar3) {
                        System_Array__Clear_31229cc(*(undefined8 *)(lVar24 + 0x10),0,iVar3,0);
                      }
                    }
                    lVar24 = *(long *)(param_1 + 0xd8);
                    if (lVar24 != 0) {
                      lVar21 = *(long *)puVar6;
                      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                      uVar27 = FUN_021f1190(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200));
                      if ((uVar27 & 1) == 0) {
                        *(undefined4 *)(lVar24 + 0x18) = 0;
                      }
                      else {
                        iVar3 = *(int *)(lVar24 + 0x18);
                        *(undefined4 *)(lVar24 + 0x18) = 0;
                        if (0 < iVar3) {
                          System_Array__Clear_31229cc(*(undefined8 *)(lVar24 + 0x10),0,iVar3,0);
                        }
                      }
                      if (*(long *)(param_1 + 0xe0) != 0) {
                        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                                  (*(long *)(param_1 + 0xe0),*(undefined8 *)puVar10);
                        lVar24 = *(long *)(param_1 + 0xe8);
                        if (lVar24 != 0) {
                          lVar21 = *(long *)PTR_DAT_049c71e8;
                          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                          uVar27 = FUN_021f1190(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200))
                          ;
                          if ((uVar27 & 1) == 0) {
                            *(undefined4 *)(lVar24 + 0x18) = 0;
                          }
                          else {
                            iVar3 = *(int *)(lVar24 + 0x18);
                            *(undefined4 *)(lVar24 + 0x18) = 0;
                            if (0 < iVar3) {
                              System_Array__Clear_31229cc(*(undefined8 *)(lVar24 + 0x10),0,iVar3,0);
                            }
                          }
                          if (*(long *)(param_1 + 0x250) != 0) {
                            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                      (*(long *)(param_1 + 0x250),*(undefined8 *)puVar7);
                            if (*(long *)(param_1 + 600) != 0) {
                              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                        (*(long *)(param_1 + 600),*(undefined8 *)PTR_DAT_049c71a8);
                              if (*(long *)(param_1 + 0x1f0) != 0) {
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                          (*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar7);
                                if (*(long *)(param_1 + 0x1f8) != 0) {
                                  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                                            (*(long *)(param_1 + 0x1f8),*(undefined8 *)puVar10);
                                  if (0 < *(int *)(param_1 + 0x188)) {
                                    uVar27 = 0;
                                    lVar24 = 0x20;
                                    do {
                                      lVar21 = *(long *)(param_1 + 0xb8);
                                      if (lVar21 == 0) goto LAB_025c7014;
                                      if (*(uint *)(lVar21 + 0x18) <= uVar27) {
LAB_025c7018:
                    /* WARNING: Subroutine does not return */
                                        FUN_021f06a8();
                                      }
                                      *(undefined8 *)(lVar21 + lVar24) = 0;
                                      thunk_FUN_021f190c(lVar21 + lVar24,0);
                                      uVar27 = uVar27 + 1;
                                      lVar24 = lVar24 + 8;
                                    } while ((long)uVar27 < (long)*(int *)(param_1 + 0x188));
                                  }
                                  lVar24 = *(long *)(param_1 + 0x168);
                                  *(undefined4 *)(param_1 + 0x188) = 0;
                                  *(undefined8 *)(param_1 + 0x168) = 0;
                                  thunk_FUN_021f190c(param_1 + 0x168,0);
                                  lVar21 = *(long *)(param_1 + 0x1c8);
                                  *(undefined1 *)(param_1 + 0x1c2) = 0;
                                  *(undefined8 *)(param_1 + 0x1c8) = 0;
                                  thunk_FUN_021f190c(param_1 + 0x1c8,0);
                                  if (lVar24 != 0) {
                                    SandFlowRenderer__Dispose_24c3a14(lVar24);
                                  }
                                  if (lVar21 != 0) {
                                    SandJellyRenderer__Dispose_24d3678(lVar21,0);
                                  }
                                  return;
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
LAB_025c7014:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

