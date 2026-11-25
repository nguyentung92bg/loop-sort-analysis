/* IL2CPP: StreakTournament$$StartGame
void StreakTournament__StartGame (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02626044) */
/* WARNING: Removing unreachable block (ram,0x02626184) */
/* IL2CPP: StreakTournament$$StartGame
   void StreakTournament__StartGame (StreakTournament_o* __this, const MethodInfo* method); */

void StreakTournament__StartGame_2525b58(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4be97 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9980);
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049b5468);
    FUN_021f03f8(PTR_DAT_049b5458);
    FUN_021f03f8(PTR_DAT_049c99b0);
    FUN_021f03f8(PTR_DAT_049c99b8);
    FUN_021f03f8(PTR_DAT_049c99c0);
    FUN_021f03f8(PTR_DAT_049b5470);
    FUN_021f03f8(PTR_DAT_049b5478);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b5488);
    FUN_021f03f8(PTR_DAT_049b5490);
    FUN_021f03f8(PTR_DAT_049b5498);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c99c8);
    FUN_021f03f8(PTR_DAT_049c99d0);
    FUN_021f03f8(PTR_DAT_049c99d8);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4be97 = 1;
  }
  puVar10 = PTR_DAT_049c99d0;
  puVar21 = (undefined8 *)PTR_DAT_049c99b8;
  puVar9 = PTR_DAT_049b5490;
  puVar8 = PTR_DAT_049b5488;
  puVar7 = PTR_DAT_049b5478;
  puVar6 = PTR_DAT_049b5468;
  puVar5 = PTR_DAT_049b5460;
  puVar4 = PTR_DAT_049b5458;
  puVar3 = PTR_DAT_049b4540;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  auStack_90._8_8_ = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  auStack_90._0_8_ = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x108), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_90 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar12,*(undefined8 *)PTR_DAT_049c99d0);
  puStack_110 = auStack_90;
  iVar18 = 0;
  uStack_118 = 0;
  while (uVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                            (auStack_90,*puVar21), (uVar13 & 1) != 0) {
    lVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                       (auStack_90,*(undefined8 *)PTR_DAT_049c99c0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar18 = *(int *)(lVar12 + 0x18) + iVar18;
  }
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_90,*(undefined8 *)PTR_DAT_049c99b0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_78 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_80,*(undefined8 *)puVar6);
  lVar12 = lStack_80;
  plVar17 = (long *)PTR_DAT_049b5310;
  puStack_f8 = auStack_78;
  lStack_100 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar15 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_28958e8
                     (lVar14,*(undefined8 *)puVar8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar15,uVar15);
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
            (lVar12,uVar15,*(undefined8 *)puVar9);
  lVar12 = lStack_80;
  if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8(lVar12,*(undefined8 *)puVar7);
  lVar12 = FUN_021f04e4(*(undefined8 *)puVar3,1);
  lVar14 = *plVar17;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    FUN_021f0574();
    lVar14 = *plVar17;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar14 + 0xb8) + 0x1b0,&uStack_118,*(undefined8 *)puVar5);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined1 **)(lVar12 + 0x20) = puStack_110;
  thunk_FUN_021f190c();
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = NicknameGenerator__Generate_25501b8(*(long *)(param_1 + 0x60),iVar18,lVar12,0);
  lVar14 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c99d8,iVar18);
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x38) + 0x108);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar23 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                      (lVar16,*(undefined8 *)puVar10);
  puStack_110 = auStack_90;
  iVar18 = 0;
  puVar20 = (undefined8 *)((ulong)&uStack_f0 | 8);
  uStack_118 = 0;
  auStack_90 = auVar23;
  do {
    do {
      uVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                         (auStack_90,*puVar21);
      if ((uVar13 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_90,*(undefined8 *)PTR_DAT_049c99b0);
        lVar12 = *plVar17;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_021f0574();
          lVar12 = *plVar17;
        }
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (*(long *)(lVar12 + 0xb8) + 0x6d0,*(undefined8 *)PTR_DAT_049c9980);
        lVar12 = *(long *)(*plVar17 + 0xb8);
        uStack_e8 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_148 = *(undefined8 *)(lVar12 + 0x1b8);
        uStack_150 = *(undefined8 *)(lVar12 + 0x1b0);
        uStack_138 = *(undefined8 *)(lVar12 + 0x1c8);
        uStack_140 = *(undefined8 *)(lVar12 + 0x1c0);
        uStack_f0 = 1;
        uStack_128 = *(undefined8 *)(lVar12 + 0x1d8);
        uStack_130 = *(undefined8 *)(lVar12 + 0x1d0);
        uStack_120 = *(undefined8 *)(lVar12 + 0x1e0);
        CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                  (&uStack_150,&uStack_118,*(undefined8 *)PTR_DAT_049b54a8);
        puVar20[1] = puStack_110;
        *puVar20 = uStack_118;
        puVar20[2] = uStack_108;
        thunk_FUN_021f190c(&uStack_e0,0);
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        StreakTournament__UpdateSave_25252a4(&uStack_190,lVar14);
        StreakTournament__UpdateStatus_25253e8(1);
        lVar12 = lStack_100;
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (puStack_f8,*(undefined8 *)PTR_DAT_049b5498);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0698(lVar12);
        }
        return;
      }
      lVar16 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_90,*(undefined8 *)PTR_DAT_049c99c0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    } while (*(int *)(lVar16 + 0x18) < 1);
    iVar19 = 0;
    do {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = iVar18 + iVar19;
      if (*(uint *)(lVar12 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar22 = (long)(int)uVar1;
      uStack_a0 = *(undefined8 *)(lVar12 + lVar22 * 8 + 0x20);
      thunk_FUN_021f190c(&uStack_a0);
      lVar2 = lStack_80;
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
                (lVar2,uVar1,&uStack_68,*(undefined8 *)PTR_DAT_049b5470);
      uStack_98 = CONCAT44(uStack_64,uStack_68);
      thunk_FUN_021f190c(&uStack_98);
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puVar20[1] = uStack_a0;
      *puVar20 = uStack_a8;
      puVar20[2] = uStack_98;
      thunk_FUN_021f190c(&uStack_e0,0);
      plVar17 = *(long **)(*(long *)(*(long *)PTR_DAT_049c99c8 + 0x20) + 0xc0);
      uVar11 = *(undefined4 *)(plVar17[1] + 0xfc);
      uVar15 = thunk_FUN_0224e54c(lVar16,*(undefined8 *)(*plVar17 + 0x80));
      func_0x04608620(&uStack_68,uVar15,uVar11);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uStack_68);
      uVar11 = UnityEngine_Random__Range_3c11c94
                         (*(undefined4 *)(lVar16 + 0x20),*(undefined4 *)(lVar16 + 0x24),0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar11);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar2 = lVar14 + lVar22 * 0x40;
      *(undefined8 *)(lVar2 + 0x48) = uStack_c8;
      *(undefined8 *)(lVar2 + 0x40) = uStack_d0;
      *(undefined8 *)(lVar2 + 0x58) = uStack_b8;
      *(undefined8 *)(lVar2 + 0x50) = uStack_c0;
      *(undefined8 *)(lVar2 + 0x28) = uStack_e8;
      *(undefined8 *)(lVar2 + 0x20) = uStack_f0;
      *(undefined8 *)(lVar2 + 0x38) = uStack_d8;
      *(undefined8 *)(lVar2 + 0x30) = uStack_e0;
      thunk_FUN_021f190c(lVar14 + lVar22 * 0x40 + 0x30,0);
      iVar19 = iVar19 + 1;
                    /* try { // try from 02626000 to 02726337 has its CatchHandler @ 02626000
                       catch() { ... } // from try @ 02626000 with catch @ 02626000
                       catch() { ... } // from try @ 026263a4 with catch @ 02626000
                       catch() { ... } // from try @ 026263c8 with catch @ 02626000
                       catch() { ... } // from try @ 026263f8 with catch @ 02626000
                       catch() { ... } // from try @ 0262642c with catch @ 02626000
                       catch() { ... } // from try @ 02626450 with catch @ 02626000 */
    } while (iVar19 < *(int *)(lVar16 + 0x18));
    iVar18 = iVar18 + iVar19;
    plVar17 = (long *)PTR_DAT_049b5310;
    puVar21 = (undefined8 *)PTR_DAT_049c99b8;
  } while( true );
}

