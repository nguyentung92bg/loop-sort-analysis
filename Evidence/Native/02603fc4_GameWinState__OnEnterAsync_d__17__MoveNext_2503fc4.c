/* IL2CPP: GameWinState.<OnEnterAsync>d__17$$MoveNext
void GameWinState__OnEnterAsync_d__17__MoveNext (GameWinState__OnEnterAsync_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameWinState.<OnEnterAsync>d__17$$MoveNext
   void GameWinState__OnEnterAsync_d__17__MoveNext (GameWinState__OnEnterAsync_d__17_o __this, const
   MethodInfo* method); */

void GameWinState__OnEnterAsync_d__17__MoveNext_2503fc4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined4 uStack_58;
  ushort auStack_54 [2];
  
  if ((bRam0000000004f4bd7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d20);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c5378);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049c8af0);
    FUN_021f03f8(PTR_DAT_049c8d28);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
    FUN_021f03f8(PTR_DAT_049c8d30);
    FUN_021f03f8(PTR_DAT_049c8d38);
    FUN_021f03f8(PTR_DAT_049c8ca0);
    FUN_021f03f8(PTR_DAT_049c5130);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049b63a8);
    FUN_021f03f8(PTR_DAT_049b63c0);
    FUN_021f03f8(PTR_DAT_049b63d0);
    bRam0000000004f4bd7f = 1;
  }
  lVar15 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStack_90._8_8_ = 0;
  auStack_90._0_8_ = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_026041d4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar16 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar12 = *(long *)auStack_70._0_8_;
      uVar17 = auStack_70._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_026045ac;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_026045ac:
      (*(code *)*puVar8)(uVar16,uVar17,puVar8[1]);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlaySuccess_25354f4(*(long *)(lVar15 + 0x88),0);
    if (*(long *)(lVar15 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioModule__GetPlayer_2530858(auStack_e0,*(long *)(lVar15 + 0x90),0);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    auStack_90 = auStack_e0;
    if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
      FUN_021f0574();
    }
    AudioPlayer__WithVolumeScale_25310e8(auStack_e0,0x3f400000,auStack_90,0);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    auStack_90 = auStack_e0;
    if (*(long *)(lVar15 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *(long *)(*(long *)(lVar15 + 0x90) + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioPlayer__Play_2530c98(auStack_90,*(undefined8 *)(lVar12 + 0x28),0);
    if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar15 + 0x70),lVar15,0);
    if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Activate_object__268887c(*(long *)(lVar15 + 0x70),0,*(undefined8 *)PTR_DAT_049c8d30);
  }
  else {
    if (*param_1 == 1) {
      auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
    }
    else {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar15 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar9 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(lVar15 + 200),0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      puVar3 = PTR_DAT_049b5310;
      if ((uVar13 & 1) == 0) {
        (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
        if (*(long *)(lVar15 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        CloudSaveModule__MarkDirty_24ed184();
        if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        InteractionModule__EnableRestriction_2535cc8(*(long *)(lVar15 + 0x98),lVar15,0);
        if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        Monitors__DisableRaycaster_256ea20(*(long *)(lVar15 + 0x70),lVar15,0);
        if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar16 = System_TimeSpan__FromSeconds_311711c(0x3ff8000000000000,0);
        puVar3 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_e0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar16,0,8,0,0,0);
        thunk_FUN_021f190c(auStack_e0,0);
        auStack_70 = auStack_e0;
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
        uVar16 = auStack_70._0_8_;
        if ((long *)auStack_70._0_8_ != (long *)0x0) {
          lVar12 = *(long *)auStack_70._0_8_;
          uVar17 = auStack_70._8_8_ & 0xffff;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02604a68 to 02704bdb has its CatchHandler @ 02604a68
                       catch() { ... } // from try @ 02604a68 with catch @ 02604a68
                       catch() { ... } // from try @ 02604e38 with catch @ 02604a68
                       catch() { ... } // from try @ 02604ed4 with catch @ 02604a68
                       catch() { ... } // from try @ 02604f14 with catch @ 02604a68
                       catch() { ... } // from try @ 02604f8c with catch @ 02604a68
                       catch() { ... } // from try @ 02604fa8 with catch @ 02604a68
                       catch() { ... } // from try @ 02605040 with catch @ 02604a68 */
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02604a6c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02604a6c:
          iVar4 = (*(code *)*puVar8)(uVar16,uVar17,puVar8[1]);
          if (iVar4 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
            thunk_FUN_021f190c(param_1 + 8,0);
            FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c8d20);
            return;
          }
        }
        goto LAB_026041d4;
      }
      if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
        FUN_021f0574();
      }
      PlayerPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_29115c4
                (*(long *)(*(long *)puVar3 + 0xb8) + 0x958,*(undefined8 *)PTR_DAT_049c5130);
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(lVar12 + 0x368);
      CloudPrefsInt__set_Value_24e9a2c(lVar12 + 0x368,iVar4 + 1);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar3 + 0xb8) + 0x388);
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar3 + 0xb8) + 0x368);
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar3 + 0xb8) + 0x388,iVar4);
      lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                (lVar12,*(undefined8 *)PTR_DAT_049c5b78);
      plVar9 = (long *)(param_1 + 6);
      *plVar9 = lVar12;
      thunk_FUN_021f190c(plVar9,lVar12);
      if (*(long *)(lVar15 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x78) + 0x18);
      FUN_0235c744(uVar16,auStack_e0,*(undefined8 *)PTR_DAT_049c4230);
      uVar6 = auStack_e0._0_4_;
      lVar12 = GameWinState__GetGoldRewardQuantity_2503f30(lVar15,auStack_e0._0_4_);
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_e0._0_8_ = lVar12 << 0x20 | 1;
      FUN_02333498(*plVar9,auStack_e0,*(undefined8 *)PTR_DAT_049c2c78);
      plVar18 = *(long **)(lVar15 + 0xd0);
      lStack_98 = 0;
      uStack_a0 = (ulong)(uint)uVar6;
      uVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar3 + 0xb8) + 0x368);
      lStack_98 = *plVar9;
      uStack_a0 = CONCAT44(uVar6,(undefined4)uStack_a0);
      thunk_FUN_021f190c(&lStack_98);
      lVar12 = lStack_98;
      uVar11 = uStack_a0;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = *plVar18;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049c8d28) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_026047a0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049c8d28,0);
LAB_026047a0:
      (*(code *)*puVar8)(plVar18,uVar11,lVar12,puVar8[1]);
      FUN_0235c744(uVar16,auStack_e0,*(undefined8 *)PTR_DAT_049c8af0);
      if (auStack_e0._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = WinSystem__RemainingCarrierCount_24e22b0(auStack_e0._0_8_,0);
      lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                (lVar12,*(undefined8 *)PTR_DAT_049b4338);
      if (*(long *)(lVar15 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar7 = EconomyModule__GetAmount_2523ed0(*(long *)(lVar15 + 0xa8),1,0);
      puVar1 = PTR_DAT_049b3bd0;
      auStack_e0._0_4_ = uVar7;
      uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),auStack_e0);
      puVar2 = PTR_DAT_049b4358;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar12,*(undefined8 *)PTR_DAT_049b63d0,uVar11,*(undefined8 *)PTR_DAT_049b4358);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar12,*(undefined8 *)PTR_DAT_049b63c0,*plVar9,*(undefined8 *)puVar2);
      uStack_58 = uVar6;
      uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar12,*(undefined8 *)PTR_DAT_049b63a8,uVar11,*(undefined8 *)puVar2);
      if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      InteractionModule__EnableRestriction_2535cc8(*(long *)(lVar15 + 0x98),lVar15,0);
      if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(*(long *)(lVar15 + 0x70),lVar15,0);
      if (*(long *)(lVar15 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AnalyticsModule__WinGame_253ed4c(*(long *)(lVar15 + 0x80),lVar12,0);
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(lVar12 + 0x60);
      CloudPrefsInt__set_Value_24e9a2c(lVar12 + 0x60,iVar4 + 1);
      if (*(long *)(lVar15 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      CloudSaveModule__MarkDirty_24ed184();
      FUN_0235c744(uVar16,auStack_54,*(undefined8 *)PTR_DAT_049c5378);
      if ((auStack_54[0] >> 8 & 1) != 0) goto LAB_0260474c;
      if (*(long *)(lVar15 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar16 = 0x3ff8000000000000;
      if (*(char *)(*(long *)(lVar15 + 0xe0) + 0x11) != '\0') {
        uVar16 = 0x4008000000000000;
      }
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar16 = System_TimeSpan__FromSeconds_311711c(uVar16,0);
      puVar3 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_e0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar16,0,8,0,0,0);
      thunk_FUN_021f190c(auStack_e0,0);
      auStack_70 = auStack_e0;
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
      uVar16 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar12 = *(long *)auStack_70._0_8_;
        uVar17 = auStack_70._8_8_ & 0xffff;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02604ac4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02604ac4:
        iVar4 = (*(code *)*puVar8)(uVar16,uVar17,puVar8[1]);
        if (iVar4 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c8d20);
          return;
        }
      }
    }
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar16 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar12 = *(long *)auStack_70._0_8_;
      uVar17 = auStack_70._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_02604684;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02604684:
      (*(code *)*puVar8)(uVar16,uVar17,puVar8[1]);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlaySuccess_25354f4(*(long *)(lVar15 + 0x88),0);
    if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar15 + 0x70),lVar15,0);
    if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = Monitors__Get_object__26889d0(*(long *)(lVar15 + 0x70),*(undefined8 *)PTR_DAT_049c8ca0)
    ;
    puVar3 = PTR_DAT_049b5310;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lVar10 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar3;
    }
    uVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar10 + 0xb8) + 0x60);
    uStack_a8 = *(undefined8 *)(param_1 + 6);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
    thunk_FUN_021f190c(&uStack_a8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    WinMonitor__SetResults_24693b8(lVar12,uStack_b0,uStack_a8,0);
    if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Activate_object__268887c(*(long *)(lVar15 + 0x70),0,*(undefined8 *)PTR_DAT_049c8d38);
  }
LAB_0260474c:
  piVar14 = param_1 + 6;
  piVar14[0] = 0;
  piVar14[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar14,0);
  FUN_0235afc8(param_1 + 2,0);
  return;
}

