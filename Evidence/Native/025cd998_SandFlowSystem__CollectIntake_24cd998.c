/* IL2CPP: SandFlowSystem$$CollectIntake
void SandFlowSystem__CollectIntake (SandFlowSystem_o* __this, float length, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$CollectIntake
   void SandFlowSystem__CollectIntake (SandFlowSystem_o* __this, float length, const MethodInfo*
   method); */

void SandFlowSystem__CollectIntake_24cd998(float param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  long *plStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000004f4bbe6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049c7308);
    FUN_021f03f8(PTR_DAT_049c73a8);
    FUN_021f03f8(PTR_DAT_049c7358);
    FUN_021f03f8(PTR_DAT_049c7360);
    FUN_021f03f8(PTR_DAT_049c73b0);
    FUN_021f03f8(PTR_DAT_049c73b8);
    FUN_021f03f8(PTR_DAT_049c7368);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c73c0);
    FUN_021f03f8(PTR_DAT_049c7370);
    FUN_021f03f8(PTR_DAT_049c73c8);
    FUN_021f03f8(PTR_DAT_049c73d0);
    FUN_021f03f8(PTR_DAT_049c7378);
    FUN_021f03f8(PTR_DAT_049c73d8);
    FUN_021f03f8(PTR_DAT_049c73e0);
    FUN_021f03f8(PTR_DAT_049c73e8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c1b08);
    FUN_021f03f8(PTR_DAT_049c1b18);
    FUN_021f03f8(PTR_DAT_049c7390);
    bRam0000000004f4bbe6 = 1;
  }
  fStack_c4 = 0.0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (*(long *)(param_2 + 0x160) != 0) {
    fVar21 = *(float *)(*(long *)(param_2 + 0x160) + 0xdc);
    fVar24 = 0.0;
    if (0.0 <= fVar21) {
      fVar24 = fVar21;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      fVar21 = *(float *)(*(long *)(param_2 + 0x48) + 100);
      iVar12 = SandFlowSystem__IntakeSignature_24ce244(param_2);
      if ((iVar12 != *(int *)(param_2 + 0x290)) ||
         (fVar22 = (float)UnityEngine_Time__get_time_3c295c8(0),
         *(float *)(param_2 + 0x294) <= fVar22)) {
        fVar22 = (float)UnityEngine_Time__get_time_3c295c8(0);
        bVar4 = false;
        *(float *)(param_2 + 0x294) = fVar22 + 0.25;
      }
      else {
        bVar4 = true;
      }
      lVar19 = *(long *)(param_2 + 0x278);
      *(int *)(param_2 + 0x290) = iVar12;
      if (lVar19 != 0) {
        lVar17 = *(long *)PTR_DAT_049c73d0;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        uVar13 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)(lVar19 + 0x18) = 0;
        }
        else {
          iVar12 = *(int *)(lVar19 + 0x18);
          *(undefined4 *)(lVar19 + 0x18) = 0;
          if (0 < iVar12) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar12,0);
          }
        }
        puVar11 = PTR_DAT_049c73c0;
        puVar8 = PTR_DAT_049c7390;
        puVar7 = PTR_DAT_049c7370;
        puVar6 = PTR_DAT_049c7368;
        puVar5 = PTR_DAT_049c7360;
        if (0 < *(int *)(param_2 + 0x188)) {
          uVar13 = 0;
          fVar21 = fVar21 * 0.5 + 0.25;
          fVar22 = fVar24 + fVar21 + fVar21;
          puVar16 = (undefined8 *)PTR_DAT_049c7308;
          do {
            lVar19 = *(long *)(param_2 + 0xb8);
            if (lVar19 == 0) goto LAB_025ce18c;
                    /* try { // try from 025cdc3c to 026cdcc7 has its CatchHandler @ 025cdc3c
                       catch() { ... } // from try @ 025cdc3c with catch @ 025cdc3c
                       catch() { ... } // from try @ 025cdcf8 with catch @ 025cdc3c
                       catch() { ... } // from try @ 025cdd6c with catch @ 025cdc3c */
            if (*(uint *)(lVar19 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar18 = *(undefined8 *)(lVar19 + uVar13 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(uVar18,0,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(param_2 + 0x250) == 0) goto LAB_025ce18c;
              uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                 (*(long *)(param_2 + 0x250),uVar18,&fStack_c4,*puVar16);
              if ((uVar14 & 1) != 0) {
                if (*(long *)(param_2 + 0x260) == 0) goto LAB_025ce18c;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                          (*(long *)(param_2 + 0x260),&lStack_1a0,*(undefined8 *)PTR_DAT_049c7378);
                plStack_148 = &lStack_f0;
                uStack_150 = 0;
                uStack_e8 = uStack_198;
                lStack_f0 = lStack_1a0;
                uStack_d8 = uStack_188;
                uStack_e0 = uStack_190;
LAB_025cdcbc:
                uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&lStack_f0,*(undefined8 *)puVar5);
                    /* try { // try from 025cdcc8 to 026cdcd3 has its CatchHandler @ 025cdd34 */
                if ((uVar14 & 1) != 0) {
                  lVar20 = *(long *)puVar6;
                  lVar17 = *(long *)(lVar20 + 0x20);
                  uVar2 = *(ushort *)(lVar17 + 0x135);
                  lVar19 = lVar17;
                  if ((uVar2 & 1) == 0) {
                    lVar19 = FUN_02229718();
                    /* try { // try from 025cdce8 to 026cdcf7 has its CatchHandler @ 025cdd38 */
                    lVar17 = *(long *)(lVar20 + 0x20);
                    uVar2 = *(ushort *)(lVar17 + 0x135);
                  }
                  uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
                  if ((uVar2 & 1) == 0) {
                    lVar17 = FUN_02229718();
                  }
                  uVar15 = thunk_FUN_0224e54c(&lStack_f0,
                                              *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) +
                                                       0x80) + 0x60);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cdcc8 with catch @ 025cdd34
                        */
                  func_0x04608620(&lStack_1a0,uVar15,uVar1);
                  lVar19 = lStack_1a0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cdce8 with catch @ 025cdd38
                        */
                  fVar23 = fStack_c4 - (((float)uStack_198 - fVar21) - fVar24);
                    /* try { // try from 025cdd54 to 026cdd57 has its CatchHandler @ 025cdd60 */
                  fVar23 = fVar23 - (float)(int)(fVar23 / param_1) * param_1;
                    /* catch() { ... } // from try @ 025cdd54 with catch @ 025cdd60 */
                  fVar3 = param_1;
                  if (fVar23 <= param_1) {
                    fVar3 = fVar23;
                  }
                    /* try { // try from 025cdd64 to 026cdd6b has its CatchHandler @ 025cdd74 */
                  fVar25 = 0.0;
                  if (0.0 <= fVar23) {
                    fVar25 = fVar3;
                  }
                    /* try { // try from 025cdd6c to 026cdd77 has its CatchHandler @ 025cdc3c */
                  if (fVar25 <= fVar22) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cdd64 with catch @ 025cdd74
                        */
                    System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                              (&uStack_100,uVar18,lStack_1a0,*(undefined8 *)puVar8);
                    if (*(long *)(param_2 + 0x288) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    uStack_b8 = uStack_f8;
                    uStack_c0 = uStack_100;
                    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                              (*(long *)(param_2 + 0x288),&uStack_c0,*(undefined8 *)puVar11);
                    if (*(long *)(param_2 + 0x298) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025cde88 to 026cdee3 has its CatchHandler @ 025cddcc */
                      FUN_021f06a0();
                    }
                    uStack_a8 = uStack_f8;
                    uStack_b0 = uStack_100;
                    uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                       (*(long *)(param_2 + 0x298),&uStack_b0,*(undefined8 *)puVar7)
                    ;
                    if ((uVar14 & 1) == 0) {
                      if (bVar4) {
                    /* try { // try from 025cddcc to 026cde57 has its CatchHandler @ 025cddcc
                       catch() { ... } // from try @ 025cddcc with catch @ 025cddcc
                       catch() { ... } // from try @ 025cde88 with catch @ 025cddcc
                       catch() { ... } // from try @ 025cdefc with catch @ 025cddcc */
                        if (*(long *)(param_2 + 0x280) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        uStack_98 = uStack_f8;
                        uStack_a0 = uStack_100;
                        uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                           (*(long *)(param_2 + 0x280),&uStack_a0,
                                            *(undefined8 *)puVar7);
                        if ((uVar14 & 1) != 0) goto LAB_025cdcbc;
                      }
                      lVar17 = *(long *)(param_2 + 0x278);
                      lStack_110 = 0;
                      uStack_108 = 0;
                      uStack_118 = uVar18;
                      thunk_FUN_021f190c(&uStack_118,uVar18);
                      lStack_110 = lVar19;
                      thunk_FUN_021f190c(&lStack_110,lVar19);
                      uStack_108 = CONCAT44(uStack_108._4_4_,fVar22 - fVar25);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      lStack_168 = lStack_110;
                      uStack_170 = uStack_118;
                      uStack_160 = uStack_108;
                      FUN_02333498(lVar17,&uStack_170,*(undefined8 *)PTR_DAT_049c73c8);
                    }
                  }
                  goto LAB_025cdcbc;
                }
                    /* try { // try from 025cde58 to 026cde63 has its CatchHandler @ 025cdec4 */
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&lStack_f0,*(undefined8 *)PTR_DAT_049c7358);
                puVar16 = (undefined8 *)PTR_DAT_049c7308;
              }
            }
            uVar13 = uVar13 + 1;
                    /* try { // try from 025cde78 to 026cde87 has its CatchHandler @ 025cdec8 */
          } while ((long)uVar13 < (long)*(int *)(param_2 + 0x188));
        }
        puVar5 = PTR_DAT_049c7130;
        lVar19 = *(long *)(param_2 + 0x278);
        if (lVar19 != 0) {
          if (1 < *(int *)(lVar19 + 0x18)) {
            lVar17 = *(long *)PTR_DAT_049c7130;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              FUN_021f0574();
              lVar17 = *(long *)puVar5;
            }
                    /* try { // try from 025cdf5c to 026cdfe7 has its CatchHandler @ 025cdf5c
                       catch() { ... } // from try @ 025cdf5c with catch @ 025cdf5c
                       catch() { ... } // from try @ 025ce018 with catch @ 025cdf5c
                       catch() { ... } // from try @ 025ce08c with catch @ 025cdf5c */
            System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                      (lVar19,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x28),
                       *(undefined8 *)PTR_DAT_049c73e0);
            lVar19 = *(long *)(param_2 + 0x278);
            if (lVar19 == 0) goto LAB_025ce18c;
          }
          puVar10 = PTR_DAT_049c73b8;
          puVar9 = PTR_DAT_049c73b0;
          puVar7 = PTR_DAT_049c1c78;
          puVar6 = PTR_DAT_049c1b18;
          puVar5 = PTR_DAT_049c1410;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (lVar19,&lStack_1a0,*(undefined8 *)PTR_DAT_049c73d8);
          uStack_120 = uStack_180;
          plStack_148 = &lStack_140;
          uStack_138 = uStack_198;
          lStack_140 = lStack_1a0;
          uStack_128 = uStack_188;
          uStack_130 = uStack_190;
          uStack_150 = 0;
          do {
            while( true ) {
              do {
                uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&lStack_140,*(undefined8 *)puVar9);
                if ((uVar13 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                            (&lStack_140,*(undefined8 *)PTR_DAT_049c73a8);
                    /* try { // try from 025ce178 to 026ce183 has its CatchHandler @ 025ce1e4 */
                  return;
                }
                lVar20 = *(long *)puVar10;
                lVar17 = *(long *)(lVar20 + 0x20);
                    /* try { // try from 025cdfe8 to 026cdff3 has its CatchHandler @ 025ce054 */
                uVar2 = *(ushort *)(lVar17 + 0x135);
                lVar19 = lVar17;
                if ((uVar2 & 1) == 0) {
                  lVar19 = FUN_02229718();
                  lVar17 = *(long *)(lVar20 + 0x20);
                  uVar2 = *(ushort *)(lVar17 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 025ce018 to 026ce073 has its CatchHandler @ 025cdf5c */
                if ((uVar2 & 1) == 0) {
                  lVar17 = FUN_02229718();
                }
                uVar18 = thunk_FUN_0224e54c(&lStack_140,
                                            *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&lStack_1a0,uVar18,uVar1);
                uVar18 = uStack_198;
                lVar19 = lStack_1a0;
                if (lStack_1a0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cdfe8 with catch @ 025ce054
                        */
              } while ((*(long **)(lStack_1a0 + 0x100) == (long *)0x0) ||
                      (**(long **)(lStack_1a0 + 0x100) != *(long *)puVar7
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ce008 with catch @ 025ce058
                        */));
              lVar17 = *(long *)(param_2 + 0x2a8);
                    /* try { // try from 025ce074 to 026ce077 has its CatchHandler @ 025ce080 */
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                FUN_021f0574();
              }
                    /* catch() { ... } // from try @ 025ce074 with catch @ 025ce080 */
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025ce198 to 026ce1a7 has its CatchHandler @ 025ce1e8 */
                FUN_021f06a0();
              }
                    /* try { // try from 025ce084 to 026ce08b has its CatchHandler @ 025ce094 */
                    /* try { // try from 025ce08c to 026ce097 has its CatchHandler @ 025cdf5c */
              uVar13 = FUN_024f5708(lVar17,*(undefined8 *)(lVar19 + 0x60),*(undefined8 *)puVar6);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ce084 with catch @ 025ce094
                        */
              if ((uVar13 & 1) != 0) break;
LAB_025ce138:
              SandFlowSystem__Offer_24ce488(param_2,lVar19,uVar18);
            }
            lVar17 = *(long *)(param_2 + 0x2a8);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            puVar16 = (undefined8 *)
                      FUN_024f6008(lVar17,*(undefined8 *)(lVar19 + 0x60),
                                   *(undefined8 *)PTR_DAT_049c1b08);
            uVar15 = *puVar16;
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
                    /* try { // try from 025ce0ec to 026ce177 has its CatchHandler @ 025ce0ec
                       catch() { ... } // from try @ 025ce0ec with catch @ 025ce0ec
                       catch() { ... } // from try @ 025ce1a8 with catch @ 025ce0ec
                       catch() { ... } // from try @ 025ce21c with catch @ 025ce0ec */
            uVar13 = UnityEngine_Object__op_Equality_3c1eeb4(uVar15,uVar18,0);
            if ((uVar13 & 1) == 0) goto LAB_025ce138;
            lVar17 = *(long *)(param_2 + 0x298);
            lStack_1b0 = 0;
            uStack_1a8 = 0;
            System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                      (&lStack_1b0,lVar19,uVar18,*(undefined8 *)puVar8);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_198 = uStack_1a8;
            lStack_1a0 = lStack_1b0;
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                      (lVar17,&lStack_1a0,*(undefined8 *)puVar11);
          } while( true );
        }
      }
    }
  }
LAB_025ce18c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

