/* IL2CPP: VoodooSauceProvider$$WinGame
void VoodooSauceProvider__WinGame (VoodooSauceProvider_o* __this, int32_t levelNumber, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$WinGame
   void VoodooSauceProvider__WinGame (VoodooSauceProvider_o* __this, int32_t levelNumber,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void VoodooSauceProvider__WinGame_2255c48(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_68;
  
                    /* try { // try from 02355c4c to 02455c53 has its CatchHandler @ 02355cd4 */
  if ((bRam0000000004f49bb9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b6318);
                    /* try { // try from 02355c94 to 02455c9b has its CatchHandler @ 02355cd0 */
    bRam0000000004f49bb9 = 1;
  }
  lVar14 = VoodooSauceProvider__CreateGameFinishedParameters_2255d18(param_1,param_2,1,param_3);
  puVar2 = PTR_DAT_049b5f70;
  puVar1 = PTR_DAT_049b5670;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355c94 with catch @ 02355cd0
                        */
  *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_049b6318;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355c4c with catch @ 02355cd4
                        */
  thunk_FUN_021f190c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355c24 with catch @ 02355cd8
                        */
                    /* try { // try from 02355cdc to 02455ce3 has its CatchHandler @ 02355cec */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02355ce4 to 02455cef has its CatchHandler @ 02355bf8 */
    FUN_021f0574();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355cdc with catch @ 02355cec
                        */
  VoodooSauce__OnGameFinished_4377b0c(lVar14,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49b9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b5fb8);
    FUN_021f03f8(PTR_DAT_049b5fc0);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b9c = 1;
  }
  uStack_68 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_f8 = 0;
  auStack_110._0_8_ = 0;
  auStack_110._8_8_ = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  auStack_d0._8_8_ = 0;
  auStack_d0._0_8_ = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auStack_f0._8_8_ = 0;
  auStack_f0._0_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar14 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  if (lVar14 != 0) {
    uVar10 = AdjustEventSheet__TryGetLevelCompletedToken_2556e30(lVar14,&uStack_68,0);
    uVar12 = uStack_68;
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEvent_22514a4(uVar12);
    }
    puVar2 = PTR_DAT_049b5fb8;
    plVar17 = *(long **)(lVar14 + 0x58);
    if (plVar17 != (long *)0x0) {
      lVar15 = *plVar17;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b5fb8) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02352080;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b5fb8,0);
LAB_02352080:
      iVar6 = (*(code *)*puVar11)(plVar17,puVar11[1]);
      if (iVar6 == 0) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar5 = PTR_DAT_049b5fc0;
      puVar4 = PTR_DAT_049b5fa0;
      puVar3 = PTR_DAT_049b5f98;
      auStack_80 = TimeProvider__get_Now_24f4584(0);
      iVar6 = 0;
      do {
        lVar15 = *plVar17;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0235211c;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar2,0);
LAB_0235211c:
        iVar7 = (*(code *)*puVar11)(plVar17,puVar11[1]);
        if (iVar7 <= iVar6) {
          return;
        }
        lVar15 = *plVar17;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0235217c;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar5,0);
LAB_0235217c:
        iVar7 = (*(code *)*puVar11)(plVar17,iVar6,puVar11[1]);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        VoodooAdjustProvider__GetWinDailyCount_225237c(&uStack_130,iVar7);
        uStack_98 = uStack_128;
        uStack_a0 = uStack_130;
        uStack_88 = uStack_118;
        uStack_90 = uStack_120;
        VoodooAdjustProvider__GetWinCapTimestamp_2252438(auStack_160,iVar7);
        uStack_b8 = uStack_148;
        uStack_c0 = uStack_150;
        uStack_a8 = uStack_138;
        uStack_b0 = uStack_140;
        auStack_d0 = auStack_160;
        uVar10 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                           (auStack_d0,*(undefined8 *)puVar3);
        if ((uVar10 & 1) == 0) {
LAB_0235226c:
          CloudPrefsInt__set_Value_24e9a2c(&uStack_a0,0,0);
          auStack_160 = auStack_80;
          CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                    (auStack_d0,auStack_160,*(undefined8 *)puVar4);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar12 = System_DateTimeOffset__get_Date_30e0fe4(auStack_80,0);
          CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                    (auStack_d0,auStack_160,*(undefined8 *)PTR_DAT_049b5fa8);
          auStack_110 = auStack_160;
          uVar13 = System_DateTimeOffset__get_Date_30e0fe4(auStack_110,0);
          if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
            FUN_021f0574(*(long *)PTR_DAT_049b5fb0);
          }
          uVar10 = System_DateTime__op_GreaterThan_30df8ac(uVar12,uVar13,0);
          if ((uVar10 & 1) != 0) goto LAB_0235226c;
        }
        iVar8 = CloudPrefsInt__get_Value_24e99c0(&uStack_a0,0);
        if (iVar8 < iVar7) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          VoodooAdjustProvider__GetWinCount_2252548(auStack_160,iVar7);
          uStack_d8 = uStack_148;
          uStack_e0 = uStack_150;
          auStack_f0 = auStack_160;
          iVar8 = CloudPrefsInt__get_Value_24e99c0(&uStack_a0,0);
          CloudPrefsInt__set_Value_24e9a2c(&uStack_a0,iVar8 + 1,0);
          iVar8 = CloudPrefsInt__get_Value_24e99c0(auStack_f0,0);
          CloudPrefsInt__set_Value_24e9a2c(auStack_f0,iVar8 + 1,0);
          uVar9 = CloudPrefsInt__get_Value_24e99c0(auStack_f0,0);
          uVar10 = AdjustEventSheet__TryGetCappedLevelsWonToken_2557224
                             (lVar14,iVar7,uVar9,&uStack_f8,0);
          uVar12 = uStack_f8;
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574();
            }
            VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar12);
          }
        }
        iVar6 = iVar6 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

