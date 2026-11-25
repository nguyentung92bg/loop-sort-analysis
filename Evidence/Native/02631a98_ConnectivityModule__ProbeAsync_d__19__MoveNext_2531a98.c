/* IL2CPP: ConnectivityModule.<ProbeAsync>d__19$$MoveNext
void ConnectivityModule__ProbeAsync_d__19__MoveNext (ConnectivityModule__ProbeAsync_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026321fc) */
/* IL2CPP: ConnectivityModule.<ProbeAsync>d__19$$MoveNext
   void ConnectivityModule__ProbeAsync_d__19__MoveNext (ConnectivityModule__ProbeAsync_d__19_o
   __this, const MethodInfo* method); */

void ConnectivityModule__ProbeAsync_d__19__MoveNext_2531a98(int *param_1)

{
  undefined8 **ppuVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [15];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_128 [16];
  long *plStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  long *plStack_e0;
  long lStack_d8;
  float afStack_d0 [2];
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  undefined8 auStack_b8 [2];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bf2a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c9f90);
    FUN_021f03f8(PTR_DAT_049c9f98);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c9f68);
    FUN_021f03f8(PTR_DAT_049c9fa0);
    FUN_021f03f8(PTR_DAT_049c9fa8);
    FUN_021f03f8(PTR_DAT_049c9f88);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049c9fb0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bf2a = 1;
  }
  uStack_48._4_4_ = *param_1;
  lStack_68 = *(long *)(param_1 + 8);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_a8 = 0;
  auStack_b8[0] = 0;
  uStack_bc = 0;
  afStack_d0[0] = 0.0;
  afStack_d0[1] = 0.0;
  uStack_c8 = 0;
  lStack_d8 = 0;
  uStack_48._0_4_ = 0;
  if (uStack_48._4_4_ == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uStack_48._0_4_ = 0;
    uStack_48._4_4_ = -1;
    *param_1 = -1;
LAB_02631c3c:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar16 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar17 = *(long *)auStack_80._0_8_;
      uVar23 = auStack_80._8_8_ & 0xffff;
      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar18 = (undefined8 *)(lVar17 + (long)(*piVar22 + 2) * 0x10 + 0x138);
            goto LAB_02631e7c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar18 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02631e7c:
      (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
    }
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar13 = ConnectivityModule__get_IsOffline_2531494();
  }
  else {
    if (uStack_48._4_4_ != 1) {
      if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar14 = UnityEngine_Application__get_internetReachability_3bc8180(0);
      lVar17 = lStack_68;
      puVar7 = PTR_DAT_049c9f88;
      auVar26._8_8_ = auStack_128._8_8_;
      auVar26._0_8_ = auStack_128._0_8_;
      auVar6 = auVar26._1_15_;
      if (iVar14 == 0) {
        bVar13 = 0;
        goto LAB_02631f4c;
      }
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lStack_68 + 0x1c) != '\0') {
        lVar19 = *(long *)PTR_DAT_049c9f88;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          FUN_021f0574();
          lVar19 = *(long *)puVar7;
        }
        puVar18 = *(undefined8 **)(lVar19 + 0xb8);
        lVar24 = puVar18[1];
        if (lVar24 == 0) {
          if (*(int *)(lVar19 + 0xe4) == 0) {
            FUN_021f0574();
            puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar16 = *puVar18;
          lVar24 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c9fa0);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                    (lVar24,uVar16,*(undefined8 *)PTR_DAT_049c9fa8,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          *plVar15 = lVar24;
          thunk_FUN_021f190c(plVar15,lVar24);
        }
        puVar7 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_128 = Cysharp_Threading_Tasks_UniTask__WaitWhile___Il2CppFullySharedGenericType__26ea924
                                (lVar17,lVar24,8,0,0,*(undefined8 *)PTR_DAT_049c9fb0);
        thunk_FUN_021f190c(auStack_128,0);
        uVar11 = auStack_128._8_8_;
        uVar16 = auStack_128._0_8_;
        auStack_80 = auStack_128;
        if (cRam0000000004f49bf4 == '\0') {
          FUN_021f03f8(PTR_DAT_049b5138);
          cRam0000000004f49bf4 = '\x01';
        }
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf5 = '\x01';
        }
        if ((long *)uVar16 != (long *)0x0) {
          lVar17 = *(long *)uVar16;
          uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar18 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_02631eb8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_02229a4c(uVar16,*(long *)PTR_DAT_049b54e0,0);
LAB_02631eb8:
          iVar14 = (*(code *)*puVar18)(uVar16,uVar11 & 0xffffffff,puVar18[1]);
          if (iVar14 == 0) {
            uStack_48 = (ulong)(uint)uStack_48;
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
            thunk_FUN_021f190c(param_1 + 10,0);
            FUN_0235bb44(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c9f98);
            return;
          }
        }
        goto LAB_02631c3c;
      }
      *(undefined1 *)(lStack_68 + 0x1c) = 1;
    }
    puVar10 = PTR_DAT_049c9f68;
    puVar9 = PTR_DAT_049c4778;
    puVar8 = PTR_DAT_049c4770;
    puVar7 = PTR_DAT_049c4768;
    auStack_128._8_8_ = (long)&uStack_48 + 4;
    auStack_128._0_8_ = 0;
    plStack_118 = &lStack_68;
    puStack_110 = &uStack_48;
    puStack_108 = auStack_b8;
    puStack_100 = (undefined8 *)&uStack_bc;
    puStack_f8 = &uStack_c8;
    pfStack_f0 = afStack_d0 + 1;
    pfStack_e8 = afStack_d0;
    plStack_e0 = &lStack_d8;
    if (uStack_48._4_4_ != 1) {
      iVar14 = 0;
      bVar12 = false;
      param_1[0xe] = 0;
      goto LAB_026320a0;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0x12);
    uStack_90 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uStack_48._4_4_ = -1;
    *param_1 = -1;
    do {
      FUN_0235b3fc(&uStack_90,&cStack_60,*(undefined8 *)puVar7);
                    /* try { // try from 02632078 to 0273207f has its CatchHandler @ 026321b0 */
      bVar12 = cStack_60 != '\0';
      if (cStack_60 != '\0') {
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(int *)(lStack_68 + 0x24) = param_1[0xf];
      }
                    /* try { // try from 02632098 to 027320e3 has its CatchHandler @ 026321b4 */
      iVar14 = param_1[0xe] + 1;
      param_1[0xe] = iVar14;
LAB_026320a0:
      lVar17 = *(long *)puVar10;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        FUN_021f0574();
        lVar17 = *(long *)puVar10;
      }
      lVar19 = **(long **)(lVar17 + 0xb8);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 02631f9c to 02732077 has its CatchHandler @ 02631f9c
                       catch() { ... } // from try @ 02631f9c with catch @ 02631f9c
                       catch() { ... } // from try @ 026320e4 with catch @ 02631f9c
                       catch() { ... } // from try @ 02632164 with catch @ 02631f9c
                       catch() { ... } // from try @ 026321a0 with catch @ 02631f9c
                       catch() { ... } // from try @ 026321cc with catch @ 02631f9c
                       catch() { ... } // from try @ 026321f0 with catch @ 02631f9c */
      bVar2 = bVar12;
      if (*(int *)(lVar19 + 0x18) <= iVar14) {
        bVar2 = true;
      }
      if (bVar2) {
        if (bVar12) {
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          iVar14 = 0;
        }
        else {
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          iVar14 = *(int *)(lStack_68 + 0x18) + 1;
        }
        *(int *)(lStack_68 + 0x18) = iVar14;
        iVar14 = 0x12;
        goto LAB_02632134;
      }
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026321f0 to 027321fb has its CatchHandler @ 02631f9c */
        FUN_021f06a0();
      }
      iVar3 = *(int *)(lStack_68 + 0x24);
      iVar14 = param_1[0xe];
      if (*(int *)(lVar17 + 0xe4) == 0) {
        FUN_021f0574();
        lVar19 = **(long **)(*(long *)puVar10 + 0xb8);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026321e8 with catch @ 026321f8
                        */
          FUN_021f06a0();
        }
      }
      uVar4 = *(uint *)(lVar19 + 0x18);
      iVar14 = iVar14 + iVar3;
      iVar3 = 0;
      if (uVar4 != 0) {
        iVar3 = iVar14 / (int)uVar4;
      }
      uVar5 = iVar14 - iVar3 * uVar4;
      param_1[0xf] = uVar5;
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      auVar26 = ConnectivityModule__ReachesAsync_25317f8
                          (*(undefined8 *)(lVar19 + (long)(int)uVar5 * 8 + 0x20));
      auStack_a0 = auVar26;
      FUN_0235b0c0(auStack_a0,&cStack_60,*(undefined8 *)puVar9);
      lVar19 = *(long *)puVar8;
      uStack_90 = CONCAT71(uStack_5f,cStack_60);
      lVar17 = *(long *)(lVar19 + 0x20);
      uStack_88 = uStack_58;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      uVar16 = thunk_FUN_0224e54c(&uStack_90,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0x80)
                                 );
      lVar17 = *(long *)(lVar19 + 0x20);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      iVar14 = FUN_0235b2a0(uVar16,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
    } while (iVar14 != 0);
    uStack_48._4_4_ = 1;
    *param_1 = 1;
                    /* try { // try from 026320e4 to 0273210f has its CatchHandler @ 02631f9c */
    *(undefined8 *)(param_1 + 0x12) = uStack_88;
    *(undefined8 *)(param_1 + 0x10) = uStack_90;
    thunk_FUN_021f190c(param_1 + 0x10,0);
    FUN_0235bb44(param_1 + 2,&uStack_90,param_1,*(undefined8 *)PTR_DAT_049c9f90);
                    /* try { // try from 02632110 to 02732113 has its CatchHandler @ 026321a4 */
    iVar14 = 9;
LAB_02632134:
    plVar15 = plStack_118;
    if (uStack_48._4_4_ < 0) {
      lVar17 = *plStack_118;
      if (lVar17 == 0) {
LAB_02632204:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined1 *)(lVar17 + 0x1c) = 0;
                    /* try { // try from 02632150 to 02732163 has its CatchHandler @ 026321ac */
      fVar25 = (float)UnityEngine_Time__get_realtimeSinceStartup_3c267b0(0);
      if (*plVar15 == 0) goto LAB_02632204;
      iVar3 = *(int *)(*plVar15 + 0x18);
                    /* try { // try from 02632164 to 0273219b has its CatchHandler @ 02631f9c */
      ppuVar1 = &puStack_110;
      if (iVar3 < 1) {
        ppuVar1 = &puStack_100;
      }
      pfVar20 = (float *)*ppuVar1;
      ppuVar1 = &puStack_108;
      if (iVar3 < 1) {
        ppuVar1 = &puStack_f8;
      }
      *pfVar20 = fVar25;
                    /* try { // try from 0263219c to 0273219f has its CatchHandler @ 026321a8 */
      fVar25 = 3.0;
      if (iVar3 < 1) {
        fVar25 = 60.0;
      }
                    /* try { // try from 026321a0 to 027321c7 has its CatchHandler @ 02631f9c */
      **ppuVar1 = lVar17;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02632110 with catch @ 026321a4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263219c with catch @ 026321a8
                        */
      *pfStack_f0 = fVar25;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02632150 with catch @ 026321ac
                        */
      fVar25 = *pfVar20;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02632078 with catch @ 026321b0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02632098 with catch @ 026321b4
                        */
      *pfStack_e8 = fVar25;
      *plStack_e0 = lVar17;
                    /* try { // try from 026321c8 to 027321cb has its CatchHandler @ 026321e4 */
      *(float *)(lVar17 + 0x20) = fVar25 + *pfStack_f0;
    }
                    /* try { // try from 026321cc to 027321e7 has its CatchHandler @ 02631f9c */
    if ((iVar14 != 0x12) && (iVar14 != 0)) {
      return;
    }
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 026321c8 with catch @ 026321e4 */
    bVar13 = ConnectivityModule__get_IsOffline_2531494();
                    /* try { // try from 026321e8 to 027321ef has its CatchHandler @ 026321f8 */
  }
  auVar6 = auStack_128._1_15_;
  bVar13 = bVar13 ^ 1;
LAB_02631f4c:
  puVar7 = PTR_DAT_049b5570;
  auStack_128._8_8_ = auVar6._7_8_;
  *param_1 = -2;
  auStack_128._1_7_ = auVar6._0_7_;
  auStack_128._0_8_ = CONCAT71(auStack_128._1_7_,bVar13) & 0xffffffffffffff01;
  FUN_0235bed4(param_1 + 2,auStack_128,*(undefined8 *)puVar7);
  return;
}

