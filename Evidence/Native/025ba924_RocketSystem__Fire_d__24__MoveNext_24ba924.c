/* IL2CPP: RocketSystem.<Fire>d__24$$MoveNext
void RocketSystem__Fire_d__24__MoveNext (RocketSystem__Fire_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025bac48) */
/* WARNING: Removing unreachable block (ram,0x025bb4b4) */
/* WARNING: Removing unreachable block (ram,0x025bb4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RocketSystem.<Fire>d__24$$MoveNext
   void RocketSystem__Fire_d__24__MoveNext (RocketSystem__Fire_d__24_o __this, const MethodInfo*
   method); */

void RocketSystem__Fire_d__24__MoveNext_24ba924
               (undefined1 param_1 [16],undefined8 param_2,float param_3,int *param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 *puVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_130 [16];
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  int *piStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  int *piStack_c8;
  undefined1 *puStack_c0;
  int iStack_ac;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f4bbb3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6df8);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c2590);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1df8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049c2950);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c6de8);
    FUN_021f03f8(PTR_DAT_049c1a30);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1a38);
    FUN_021f03f8(PTR_DAT_049c6e00);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bbb3 = 1;
  }
  puVar7 = PTR_DAT_049c1b50;
  puVar6 = PTR_DAT_049c14f0;
  puVar5 = PTR_DAT_049c14e8;
  puVar4 = PTR_DAT_049c14e0;
  auStack_d0 = (undefined1  [8])0x0;
  piStack_c8 = (int *)0x0;
  puStack_c0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  puStack_e0 = (undefined1 *)0x0;
  piStack_e8 = (int *)0x0;
  auStack_f0 = (undefined1  [8])0x0;
  iStack_ac = *param_4;
  lVar16 = *(long *)(param_4 + 4);
  auStack_100._0_8_ = 0;
  auStack_100._8_8_ = 0;
  uStack_108 = 0;
  if (iStack_ac == 0) {
    auStack_100 = *(undefined1 (*) [16])(param_4 + 0x10);
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    iStack_ac = -1;
    *param_4 = -1;
  }
  else {
    lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1a38);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar8,*(undefined8 *)PTR_DAT_049c1a30);
    plVar14 = (long *)(param_4 + 6);
    *plVar14 = lVar8;
    thunk_FUN_021f190c(plVar14,lVar8);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    RocketSystem__FindTargetHiddenBlocks_24b8a70(lVar16,*plVar14);
    if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(*plVar14 + 0x18) == 0) {
      uVar12 = RocketSystem__FindFakeHiddenBlocks_24b957c(lVar16);
    }
    else {
      uVar12 = 0;
    }
    *(undefined8 *)(param_4 + 8) = uVar12;
    thunk_FUN_021f190c();
    lVar8 = *plVar14;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_025bb3b4;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar8,auStack_130,*(undefined8 *)puVar6);
    puVar3 = PTR_DAT_049c2948;
    puStack_c0 = puStack_120;
    piStack_c8 = (int *)auStack_130._8_8_;
    auStack_d0 = (undefined1  [8])auStack_130._0_8_;
    auStack_130._0_8_ = 0;
    puStack_120 = auStack_d0;
    auStack_130._8_8_ = &iStack_ac;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (auStack_d0,*(undefined8 *)puVar4);
      fVar28 = (float)param_2;
      if ((uVar9 & 1) == 0) break;
      lVar17 = *(long *)puVar5;
      lVar10 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar8 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar10 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(auStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_a8,uVar12,uVar1);
      if (*(long *)(lVar16 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (*(long *)(lVar16 + 0xa0),uStack_a8,*(undefined8 *)puVar3);
    }
    if (iStack_ac < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (puStack_120,*(undefined8 *)PTR_DAT_049c14d8);
    }
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = PrefabModuleExtensions__Rent_object__269ed94
                      (*(undefined8 *)(lVar16 + 0x48),
                       *(undefined8 *)(*(long *)(lVar16 + 0x40) + 0x18),
                       *(undefined8 *)PTR_DAT_049c6e00);
    plVar18 = (long *)(param_4 + 10);
    *plVar18 = lVar8;
    thunk_FUN_021f190c(plVar18);
    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_Component__get_transform_3c18724(*plVar18,0);
    if (*(long *)(lVar16 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar12 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar16 + 0x30),0);
    fVar20 = (float)RocketSystem__GetSpawnPosition_24b9954(lVar16);
    lVar10 = *plVar14;
    fVar23 = param_3;
    fVar26 = fVar28;
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar21 = (float)Extensions__GetCenterPoint_object__25ef5a0
                              (lVar10,*(undefined8 *)PTR_DAT_049c1df8);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    puVar3 = PTR_DAT_049bbf90;
    lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar22 = *(float *)(lVar10 + 0x18);
    fVar24 = *(float *)(lVar10 + 0x1c);
    param_4[0xe] = (int)(fVar23 + *(float *)(lVar10 + 0x20));
    param_4[0xc] = (int)(fVar21 + fVar22);
    param_4[0xd] = (int)(fVar26 + fVar24);
    fVar23 = param_3;
    fVar26 = fVar28;
    fVar21 = (float)RocketSystem__GetApexPoint_24b99ec(fVar20,fVar28,param_3,lVar16);
    RocketSystem__GetStrikePoint_24b9a90(param_4[0xc],lVar16);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_position_3c2d61c(fVar20,fVar28,param_3,lVar8,0);
    UnityEngine_Transform__set_forward_3c2dbf4
              (fVar21 - fVar20,fVar26 - fVar28,fVar23 - param_3,lVar8,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar22 = *(float *)(*(long *)(lVar16 + 0x40) + 0x30);
    lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (*(float *)(lVar10 + 0xc) * fVar22,*(float *)(lVar10 + 0x10) * fVar22,
               *(float *)(lVar10 + 0x14) * fVar22,lVar8,0);
    if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioModule__GetPlayer_2530858(auStack_130,*(long *)(lVar16 + 0x70),0);
    piStack_e8 = (int *)auStack_130._8_8_;
    auStack_f0 = (undefined1  [8])auStack_130._0_8_;
    uStack_d8 = uStack_118;
    puStack_e0 = puStack_120;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      FUN_021f0574();
    }
    AudioPlayer__WithPitchRange_2531238(auStack_130,_UNK_013aa810,auStack_f0,0);
    piStack_e8 = (int *)auStack_130._8_8_;
    auStack_f0 = (undefined1  [8])auStack_130._0_8_;
    uStack_d8 = uStack_118;
    puStack_e0 = puStack_120;
    if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(*(long *)(lVar16 + 0x70) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioPlayer__Play_2530c98(auStack_f0,*(undefined8 *)(lVar10 + 0xc0),0);
    if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlayLight_25352c0(*(long *)(lVar16 + 0x58),0);
    auVar33 = RocketSystem__ApplyFlightMotion_24b9ad8
                        (fVar20,fVar28,param_3,fVar21,fVar26,fVar23,lVar16,lVar8,uVar12);
    auVar33 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,*(undefined8 *)(lVar16 + 0x20),0);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_130 = auVar33;
    thunk_FUN_021f190c(auStack_130,0);
    uVar30 = auStack_130._8_8_;
    uVar12 = auStack_130._0_8_;
    auStack_100 = auStack_130;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar12 != (long *)0x0) {
      lVar8 = *(long *)uVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_025bafc0;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(uVar12,*(long *)PTR_DAT_049b54e0,0);
LAB_025bafc0:
      iVar27 = (*(code *)*puVar11)(uVar12,uVar30 & 0xffffffff,puVar11[1]);
      if (iVar27 == 0) {
        iStack_ac = 0;
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 0x10) = auStack_100;
        thunk_FUN_021f190c(param_4 + 0x10,0);
                    /* try { // try from 025bb444 to 026bb573 has its CatchHandler @ 025bb444
                       catch() { ... } // from try @ 025bb444 with catch @ 025bb444
                       catch() { ... } // from try @ 025bb644 with catch @ 025bb444
                       catch() { ... } // from try @ 025bb6ec with catch @ 025bb444
                       catch() { ... } // from try @ 025bb784 with catch @ 025bb444 */
        FUN_0235c420(param_4 + 2,auStack_100,param_4,*(undefined8 *)PTR_DAT_049c6df8);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_100._0_8_;
  if ((long *)auStack_100._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_100._0_8_;
    uVar19 = auStack_100._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_025bb058;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_100._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025bb058:
    (*(code *)*puVar11)(uVar12,uVar19,puVar11[1]);
  }
  if (*(long *)(param_4 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Rocket__OnExplode_24b7fa4();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  AudioModule__GetPlayer_2530858(auStack_130,*(long *)(lVar16 + 0x70),0);
  uStack_d8 = uStack_118;
  puStack_e0 = puStack_120;
  _auStack_f0 = auStack_130;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  AudioPlayer__WithPitchRange_2531238(auStack_130,_UNK_013aa810,auStack_f0,0);
  uStack_d8 = uStack_118;
  puStack_e0 = puStack_120;
  _auStack_f0 = auStack_130;
  if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(*(long *)(lVar16 + 0x70) + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar25 = puStack_120;
  AudioPlayer__Play_2530c98(auStack_f0,*(undefined8 *)(lVar8 + 200),0);
  fVar28 = SUB84(puVar25,0);
  if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  HapticModule__PlayHeavy_253537c(*(long *)(lVar16 + 0x58),0);
  if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar27 = param_4[0xc];
  iVar29 = param_4[0xd];
  lVar8 = *(long *)(*(long *)(lVar16 + 0x40) + 0x48);
  iVar31 = param_4[0xe];
  fVar23 = (float)UnityEngine_Random__get_onUnitSphere_3c11e4c(0);
  if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar26 = *(float *)(*(long *)(lVar16 + 0x40) + 0x50);
  Unity_Cinemachine_CinemachineImpulseDefinition__CreateEvent_38e5a0c
            (iVar27,iVar29,iVar31,fVar23 * fVar26,fVar28 * fVar26,param_3 * fVar26,lVar8,0);
  if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(lVar16 + 0x48);
  uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x40) + 0x20);
  uVar30 = *(undefined8 *)(param_4 + 0xc);
  fVar28 = (float)param_4[0xe];
  if (cRam0000000004f4a55e == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55e = '\x01';
  }
                    /* catch() { ... } // from try @ 025bb1b0 with catch @ 025bb18c
                       catch() { ... } // from try @ 025bb1e8 with catch @ 025bb18c
                       catch() { ... } // from try @ 025bb210 with catch @ 025bb18c */
  uVar32 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
  fVar23 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x20);
  if (cRam0000000004f4a191 == '\0') {
                    /* try { // try from 025bb1a8 to 026bb1af has its CatchHandler @ 025bb1c8 */
    FUN_021f03f8(PTR_DAT_049bc158);
                    /* try { // try from 025bb1b0 to 026bb1e3 has its CatchHandler @ 025bb18c */
    cRam0000000004f4a191 = '\x01';
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar26 = (float)((ulong)uVar30 >> 0x20) + (float)((ulong)uVar32 >> 0x20);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bb1a8 with catch @ 025bb1c8
                        */
  puVar13 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
                    /* try { // try from 025bb1e4 to 026bb1e7 has its CatchHandler @ 025bb204 */
                    /* try { // try from 025bb1e8 to 026bb207 has its CatchHandler @ 025bb18c */
  PrefabModule__Rent_2537de8
            (CONCAT44(fVar26,(float)uVar30 + (float)uVar32),fVar26,fVar28 + fVar23,*puVar13,
             puVar13[1],puVar13[2],puVar13[3],lVar8,uVar12,0);
  if (*(long *)(param_4 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 025bb1e4 with catch @ 025bb204 */
                    /* try { // try from 025bb208 to 026bb20f has its CatchHandler @ 025bb218 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
            (*(long *)(param_4 + 6),0,auStack_130,*(undefined8 *)PTR_DAT_049c1558);
                    /* try { // try from 025bb210 to 026bb21b has its CatchHandler @ 025bb18c */
  if (auStack_130._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar14 = *(long **)(auStack_130._0_8_ + 0x100);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025bb208 with catch @ 025bb218
                        */
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
                    /* try { // try from 025bb21c to 026bb2a7 has its CatchHandler @ 025bb21c
                       catch() { ... } // from try @ 025bb21c with catch @ 025bb21c
                       catch() { ... } // from try @ 025bb340 with catch @ 025bb21c
                       catch() { ... } // from try @ 025bb3bc with catch @ 025bb21c */
    if (*plVar14 != *(long *)PTR_DAT_049c1818) {
      plVar14 = (long *)0x0;
    }
  }
  if (*(long *)(param_4 + 8) == 0) {
    if (*(long *)(lVar16 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025bb2a8 to 026bb2b3 has its CatchHandler @ 025bb380 */
    HiddenBlockSystem__HandleHiddenBlocks_23ea1d8
              (*(long *)(lVar16 + 0x50),plVar14,*(undefined8 *)(param_4 + 6),0,0);
  }
  else {
    if (*(long *)(lVar16 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
              (*(long *)(lVar16 + 0xa8),*(long *)(param_4 + 8),*(undefined8 *)PTR_DAT_049c6de8);
    uVar12 = *(undefined8 *)(param_4 + 8);
    if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
              (uVar12,*(undefined8 *)PTR_DAT_049c2590);
  }
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__RefreshGroupBlock_2409cac(plVar14,0);
  if (*(long *)(param_4 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_4 + 6),auStack_130,*(undefined8 *)puVar6);
  _auStack_d0 = auStack_130;
  puVar6 = PTR_DAT_049c2950;
                    /* try { // try from 025bb2e0 to 026bb2ef has its CatchHandler @ 025bb37c */
  puStack_c0 = puStack_120;
  auStack_130._8_8_ = &iStack_ac;
  auStack_130._0_8_ = 0;
  puStack_120 = auStack_d0;
                    /* try { // try from 025bb2f4 to 026bb31b has its CatchHandler @ 025bb384 */
  while( true ) {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (auStack_d0,*(undefined8 *)puVar4);
    if ((uVar9 & 1) == 0) break;
    lVar17 = *(long *)puVar5;
    lVar10 = *(long *)(lVar17 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar8 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar10 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
                    /* try { // try from 025bb330 to 026bb33f has its CatchHandler @ 025bb388 */
    }
                    /* try { // try from 025bb340 to 026bb3a3 has its CatchHandler @ 025bb21c */
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(auStack_d0,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_a8,uVar12,uVar1);
    if (*(long *)(lVar16 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bb2e0 with catch @ 025bb37c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bb2a8 with catch @ 025bb380
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bb2f4 with catch @ 025bb384
                        */
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(lVar16 + 0xa0),uStack_a8,*(undefined8 *)puVar6);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bb330 with catch @ 025bb388
                        */
  }
  if (iStack_ac < 0) {
                    /* try { // try from 025bb3a4 to 026bb3a7 has its CatchHandler @ 025bb3b0 */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (puStack_120,*(undefined8 *)PTR_DAT_049c14d8);
  }
LAB_025bb3b4:
                    /* try { // try from 025bb3b4 to 026bb3bb has its CatchHandler @ 025bb3c4 */
                    /* try { // try from 025bb3bc to 026bb3c7 has its CatchHandler @ 025bb21c */
  *param_4 = -2;
  piVar15 = param_4 + 6;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025bb3b4 with catch @ 025bb3c4
                        */
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_021f190c(piVar15,0);
  piVar15 = param_4 + 8;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_021f190c(piVar15,0);
  piVar15 = param_4 + 10;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_021f190c(piVar15,0);
  FUN_0235afc8(param_4 + 2,0);
  return;
}

