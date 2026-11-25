/* IL2CPP: GameLoseState$$OnEnter
void GameLoseState__OnEnter (GameLoseState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: GameLoseState$$OnEnter
   void GameLoseState__OnEnter (GameLoseState_o* __this, const MethodInfo* method); */

void GameLoseState__OnEnter_24fde08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 unaff_x23;
  undefined1 auVar12 [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4bd5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c8af0);
    FUN_021f03f8(PTR_DAT_049c8a38);
    FUN_021f03f8(PTR_DAT_049c8af8);
    FUN_021f03f8(PTR_DAT_049c8b00);
    FUN_021f03f8(PTR_DAT_049c8b08);
    FUN_021f03f8(PTR_DAT_049c5130);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025fdeb0 to 026fdebb has its CatchHandler @ 025fdfdc */
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b63a8);
                    /* try { // try from 025fdecc to 026fded7 has its CatchHandler @ 025fdfd8 */
    FUN_021f03f8(PTR_DAT_049b63d0);
    bRam0000000004f4bd5b = 1;
  }
  GameStateBase__OnEnter_24fc200(param_1);
                    /* try { // try from 025fdef0 to 026fdefb has its CatchHandler @ 025fe034 */
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (plVar4 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0xb0),0),
     plVar4 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    puVar1 = PTR_DAT_049b5310;
    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 025fdc3c with catch @ 025fdfec */
                    /* catch() { ... } // from try @ 025fdfcc with catch @ 025fdff0 */
                    /* catch() { ... } // from try @ 025fdc28 with catch @ 025fdff4 */
                    /* catch() { ... } // from try @ 025fd4cc with catch @ 025fdff8 */
                    /* catch() { ... } // from try @ 025fd424 with catch @ 025fdffc */
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
                    /* catch() { ... } // from try @ 025fd7e8 with catch @ 025fe000 */
                    /* catch() { ... } // from try @ 025fd7bc with catch @ 025fe004 */
      if (*(long *)(param_1 + 0xa0) != 0) {
                    /* catch() { ... } // from try @ 025fdfc8 with catch @ 025fe008 */
                    /* catch() { ... } // from try @ 025fd7a0 with catch @ 025fe00c */
                    /* catch() { ... } // from try @ 025fd720 with catch @ 025fe010 */
                    /* catch() { ... } // from try @ 025fd708 with catch @ 025fe014 */
                    /* catch() { ... } // from try @ 025fdfc0 with catch @ 025fe018 */
                    /* catch() { ... } // from try @ 025fda50 with catch @ 025fe01c */
                    /* catch() { ... } // from try @ 025fdfb4 with catch @ 025fe020 */
        TimeModule__AdjustTimeScale_253a454(0,_UNK_013aa4b8,0,*(long *)(param_1 + 0xa0),0,0);
                    /* catch() { ... } // from try @ 025fd598 with catch @ 025fe024 */
                    /* catch() { ... } // from try @ 025fdfa8 with catch @ 025fe028 */
        if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 025fdfa0 with catch @ 025fe02c */
                    /* catch() { ... } // from try @ 025fdbf8 with catch @ 025fe030
                       catch() { ... } // from try @ 025fdfb8 with catch @ 025fe030 */
                    /* catch() { ... } // from try @ 025fdc68 with catch @ 025fe034
                       catch() { ... } // from try @ 025fdef0 with catch @ 025fe034 */
          InteractionModule__EnableRestriction_2535cc8(*(long *)(param_1 + 0x80),0,0);
                    /* catch() { ... } // from try @ 025fd6e0 with catch @ 025fe038
                       catch() { ... } // from try @ 025fdfac with catch @ 025fe038 */
          lVar9 = *(long *)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 025fd808 with catch @ 025fe03c */
          if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 025fd4ec with catch @ 025fe040 */
                    /* catch() { ... } // from try @ 025fd4dc with catch @ 025fe044 */
                    /* catch() { ... } // from try @ 025fdf9c with catch @ 025fe048 */
                    /* catch() { ... } // from try @ 025fd444 with catch @ 025fe04c */
                    /* catch() { ... } // from try @ 025fd3f8 with catch @ 025fe050 */
                    /* catch() { ... } // from try @ 025fdf94 with catch @ 025fe054 */
                    /* catch() { ... } // from try @ 025fd3e8 with catch @ 025fe058 */
            lVar8 = *(long *)PTR_DAT_049c8af8;
            puVar6 = *(undefined8 **)(lVar8 + 0x38);
                    /* catch() { ... } // from try @ 025fdf90 with catch @ 025fe05c */
                    /* catch() { ... } // from try @ 025fdf8c with catch @ 025fe060 */
            if (puVar6 == (undefined8 *)0x0) {
              FUN_02229774(lVar8);
              puVar6 = *(undefined8 **)(lVar8 + 0x38);
            }
            uVar7 = *puVar6;
            if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar7 = System_Type__GetTypeFromHandle_310ebfc(uVar7,0);
            if ((bRam0000000004f4c1aa & 1) == 0) {
              FUN_021f03f8(PTR_DAT_049cbfe0,uVar7,0,0);
              FUN_021f03f8(PTR_DAT_049cbfc8);
              bRam0000000004f4c1aa = 1;
            }
            Monitors__DeactivateAll_256e4a0(lVar9);
            Monitors__SetActive_256e2d8(lVar9,uVar7,0);
            if (*(long *)(lVar9 + 0x20) != 0) {
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                        (*(long *)(lVar9 + 0x20),uVar7,&uStack_38,*(undefined8 *)PTR_DAT_049cbfc8);
              lVar8 = CONCAT44(uStack_34,uStack_38);
              if ((lVar8 != 0) && (*(long *)(lVar9 + 0x30) != 0)) {
                lVar11 = *(long *)(lVar8 + 0x48);
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                          (*(long *)(lVar9 + 0x30),lVar8,&stack0xffffffffffffffdc,
                           *(undefined8 *)PTR_DAT_049cbfe0);
                if (lVar11 != 0) {
                  UnityEngine_Canvas__set_sortingOrder_3ec788c
                            (lVar11,(int)((ulong)unaff_x23 >> 0x20),0);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
    else {
                    /* try { // try from 025fdf18 to 026fdf23 has its CatchHandler @ 025fdfd4 */
      if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
                    /* try { // try from 025fdf34 to 026fdf3f has its CatchHandler @ 025fdfd0 */
        FUN_021f0574();
      }
                    /* try { // try from 025fdf48 to 026fdf4b has its CatchHandler @ 025fe11c */
                    /* try { // try from 025fdf4c to 026fdf4f has its CatchHandler @ 025fe118 */
                    /* try { // try from 025fdf50 to 026fdf53 has its CatchHandler @ 025fe104 */
      PlayerPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_29115c4
                (*(long *)(*(long *)puVar1 + 0xb8) + 0x958,*(undefined8 *)PTR_DAT_049c5130);
                    /* try { // try from 025fdf54 to 026fdf57 has its CatchHandler @ 025fe100 */
                    /* try { // try from 025fdf58 to 026fdf5b has its CatchHandler @ 025fe0ec */
      if (*(long *)(param_1 + 0xa0) != 0) {
                    /* try { // try from 025fdf5c to 026fdf5f has its CatchHandler @ 025fe0e8 */
                    /* try { // try from 025fdf60 to 026fdf63 has its CatchHandler @ 025fe0e0 */
                    /* try { // try from 025fdf64 to 026fdf67 has its CatchHandler @ 025fe0d4 */
                    /* try { // try from 025fdf68 to 026fdf6b has its CatchHandler @ 025fe0d0 */
                    /* try { // try from 025fdf6c to 026fdf6f has its CatchHandler @ 025fe0c8 */
                    /* try { // try from 025fdf70 to 026fdf73 has its CatchHandler @ 025fe0a8 */
                    /* try { // try from 025fdf74 to 026fdf77 has its CatchHandler @ 025fe09c */
        TimeModule__AdjustTimeScale_253a454(0,_UNK_013aa4b8,0,*(long *)(param_1 + 0xa0),0,0);
                    /* try { // try from 025fdf78 to 026fdf7b has its CatchHandler @ 025fe0ac */
                    /* try { // try from 025fdf7c to 026fdf7f has its CatchHandler @ 025fe088 */
                    /* try { // try from 025fdf80 to 026fdf83 has its CatchHandler @ 025fe074 */
        plVar4 = *(long **)(param_1 + 0xb8);
                    /* try { // try from 025fdf84 to 026fdf87 has its CatchHandler @ 025fe070 */
                    /* try { // try from 025fdf88 to 026fdf8b has its CatchHandler @ 025fe068 */
                    /* try { // try from 025fdf8c to 026fdf8f has its CatchHandler @ 025fe060 */
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 025fdf90 to 026fdf93 has its CatchHandler @ 025fe05c */
          FUN_021f0574();
        }
                    /* try { // try from 025fdf94 to 026fdf97 has its CatchHandler @ 025fe054 */
        auVar12 = TimeProvider__get_UtcNow_24f95ec();
                    /* try { // try from 025fdf98 to 026fdf9b has its CatchHandler @ 025fe094 */
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 025fdf9c to 026fdf9f has its CatchHandler @ 025fe048 */
                    /* try { // try from 025fdfa0 to 026fdfa3 has its CatchHandler @ 025fe02c */
          lVar9 = *plVar4;
                    /* try { // try from 025fdfa4 to 026fdfa7 has its CatchHandler @ 025fe084 */
                    /* try { // try from 025fdfa8 to 026fdfab has its CatchHandler @ 025fe028 */
                    /* try { // try from 025fdfac to 026fdfb3 has its CatchHandler @ 025fe038 */
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 025fdfb4 to 026fdfb7 has its CatchHandler @ 025fe020 */
                    /* try { // try from 025fdfb8 to 026fdfbf has its CatchHandler @ 025fe030 */
          if (uVar5 != 0) {
                    /* try { // try from 025fdfc0 to 026fdfc3 has its CatchHandler @ 025fe018 */
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
                    /* try { // try from 025fdfc4 to 026fdfc7 has its CatchHandler @ 025fe080 */
                    /* try { // try from 025fdfc8 to 026fdfcb has its CatchHandler @ 025fe008 */
                    /* try { // try from 025fdfcc to 026fdfcf has its CatchHandler @ 025fdff0 */
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049c8a38) {
                    /* catch() { ... } // from try @ 025fd3d0 with catch @ 025fe064 */
                    /* catch() { ... } // from try @ 025fdf88 with catch @ 025fe068 */
                    /* catch() { ... } // from try @ 025fd3a8 with catch @ 025fe06c */
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_025fe070;
              }
                    /* catch() { ... } // from try @ 025fdf34 with catch @ 025fdfd0
                       try { // try from 025fdfd0 to 026fe143 has its CatchHandler @ 025fd23c */
              uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 025fdf18 with catch @ 025fdfd4 */
              piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 025fdecc with catch @ 025fdfd8 */
            } while (uVar5 != 0);
          }
                    /* catch() { ... } // from try @ 025fdeb0 with catch @ 025fdfdc */
                    /* catch() { ... } // from try @ 025fdc24 with catch @ 025fdfe0 */
                    /* catch() { ... } // from try @ 025fd7e0 with catch @ 025fdfe4 */
          puVar6 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049c8a38,0);
                    /* catch() { ... } // from try @ 025fdc48 with catch @ 025fdfe8 */
LAB_025fe070:
                    /* catch() { ... } // from try @ 025fdf84 with catch @ 025fe070 */
                    /* catch() { ... } // from try @ 025fdf80 with catch @ 025fe074 */
                    /* catch() { ... } // from try @ 025fd984 with catch @ 025fe078 */
                    /* catch() { ... } // from try @ 025fd974 with catch @ 025fe07c */
                    /* catch() { ... } // from try @ 025fd768 with catch @ 025fe080
                       catch() { ... } // from try @ 025fdfc4 with catch @ 025fe080 */
          (*(code *)*puVar6)(plVar4,auVar12._0_8_,auVar12._8_8_,puVar6[1]);
                    /* catch() { ... } // from try @ 025fd57c with catch @ 025fe084
                       catch() { ... } // from try @ 025fdfa4 with catch @ 025fe084 */
                    /* catch() { ... } // from try @ 025fdf7c with catch @ 025fe088 */
          if (*(long *)(param_1 + 0x90) != 0) {
                    /* catch() { ... } // from try @ 025fd8c8 with catch @ 025fe08c */
                    /* catch() { ... } // from try @ 025fd49c with catch @ 025fe090 */
                    /* catch() { ... } // from try @ 025fd45c with catch @ 025fe094
                       catch() { ... } // from try @ 025fdf98 with catch @ 025fe094 */
                    /* catch() { ... } // from try @ 025fd9d0 with catch @ 025fe098
                       catch() { ... } // from try @ 025fdd14 with catch @ 025fe098 */
                    /* catch() { ... } // from try @ 025fdd88 with catch @ 025fe09c
                       catch() { ... } // from try @ 025fdf74 with catch @ 025fe09c */
            FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18),&uStack_38,
                         *(undefined8 *)PTR_DAT_049c8af0);
                    /* catch() { ... } // from try @ 025fddc0 with catch @ 025fe0a8
                       catch() { ... } // from try @ 025fdf70 with catch @ 025fe0a8 */
            if (CONCAT44(uStack_34,uStack_38) != 0) {
                    /* catch() { ... } // from try @ 025fdd2c with catch @ 025fe0ac
                       catch() { ... } // from try @ 025fdf78 with catch @ 025fe0ac */
                    /* catch() { ... } // from try @ 025fd46c with catch @ 025fe0b0 */
              uVar3 = WinSystem__RemainingCarrierCount_24e22b0(CONCAT44(uStack_34,uStack_38),0);
                    /* catch() { ... } // from try @ 025fdd3c with catch @ 025fe0bc */
                    /* catch() { ... } // from try @ 025fdf6c with catch @ 025fe0c8 */
              lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
                    /* catch() { ... } // from try @ 025fd6ac with catch @ 025fe0cc */
                    /* catch() { ... } // from try @ 025fdf68 with catch @ 025fe0d0 */
                    /* catch() { ... } // from try @ 025fdf64 with catch @ 025fe0d4 */
                    /* catch() { ... } // from try @ 025fdb90 with catch @ 025fe0d8 */
                    /* catch() { ... } // from try @ 025fdb64 with catch @ 025fe0dc */
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                        (lVar9,*(undefined8 *)PTR_DAT_049b4338);
                    /* catch() { ... } // from try @ 025fdf60 with catch @ 025fe0e0 */
                    /* catch() { ... } // from try @ 025fdbc8 with catch @ 025fe0e4 */
              if (*(long *)(param_1 + 0x88) != 0) {
                    /* catch() { ... } // from try @ 025fdf5c with catch @ 025fe0e8 */
                    /* catch() { ... } // from try @ 025fdf58 with catch @ 025fe0ec */
                    /* catch() { ... } // from try @ 025fdb80 with catch @ 025fe0f0 */
                uStack_38 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0x88),1,0);
                puVar1 = PTR_DAT_049b3bd0;
                    /* catch() { ... } // from try @ 025fdb38 with catch @ 025fe0f4 */
                    /* catch() { ... } // from try @ 025fdb4c with catch @ 025fe0f8 */
                    /* catch() { ... } // from try @ 025fd690 with catch @ 025fe0fc */
                    /* catch() { ... } // from try @ 025fdf54 with catch @ 025fe100 */
                    /* catch() { ... } // from try @ 025fdf50 with catch @ 025fe104 */
                    /* catch() { ... } // from try @ 025fdb28 with catch @ 025fe108 */
                    /* catch() { ... } // from try @ 025fda9c with catch @ 025fe10c */
                uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_38);
                puVar2 = PTR_DAT_049b4358;
                    /* catch() { ... } // from try @ 025fd660 with catch @ 025fe110 */
                if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 025fd67c with catch @ 025fe114 */
                    /* catch() { ... } // from try @ 025fdf4c with catch @ 025fe118 */
                    /* catch() { ... } // from try @ 025fdf48 with catch @ 025fe11c */
                    /* catch() { ... } // from try @ 025fd5dc with catch @ 025fe120 */
                    /* catch() { ... } // from try @ 025fdabc with catch @ 025fe124 */
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                            (lVar9,*(undefined8 *)PTR_DAT_049b63d0,uVar7,
                             *(undefined8 *)PTR_DAT_049b4358);
                  uStack_3c = uVar3;
                    /* try { // try from 025fe144 to 026fe147 has its CatchHandler @ 025fe154 */
                  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_3c);
                    /* catch() { ... } // from try @ 025fe144 with catch @ 025fe154 */
                    /* try { // try from 025fe15c to 026fe163 has its CatchHandler @ 025fe28c */
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                            (lVar9,*(undefined8 *)PTR_DAT_049b63a8,uVar7,*(undefined8 *)puVar2);
                    /* try { // try from 025fe164 to 026fe17b has its CatchHandler @ 025fd23c */
                  if (*(long *)(param_1 + 0x70) != 0) {
                    uVar5 = Monitors__IsActive_object__2688ab4
                                      (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c8b08);
                    /* try { // try from 025fe17c to 026fe17f has its CatchHandler @ 025fe188 */
                    lVar8 = *(long *)(param_1 + 0x78);
                    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 025fd5fc with catch @ 025fe19c */
                      if (lVar8 == 0) goto LAB_025fe1fc;
                      AnalyticsModule__LoseGame_253ee08(lVar8,lVar9,0);
                    }
                    else {
                    /* catch() { ... } // from try @ 025fe17c with catch @ 025fe188 */
                      if (lVar8 == 0) goto LAB_025fe1fc;
                    /* try { // try from 025fe190 to 026fe197 has its CatchHandler @ 025fe28c */
                      AnalyticsModule__ExitGame_253eec4(lVar8,lVar9,0);
                    /* try { // try from 025fe198 to 026fe1bb has its CatchHandler @ 025fd23c */
                    }
                    if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 025fe1bc to 026fe1bf has its CatchHandler @ 025fe1cc */
                      InteractionModule__EnableRestriction_2535cc8(*(long *)(param_1 + 0x80),0,0);
                      if (*(long *)(param_1 + 0xa8) != 0) {
                        CloudSaveModule__MarkDirty_24ed184();
                    /* catch() { ... } // from try @ 025fe1bc with catch @ 025fe1cc */
                        if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 025fe1d4 to 026fe1db has its CatchHandler @ 025fe28c */
                    /* try { // try from 025fe1dc to 026fe1f3 has its CatchHandler @ 025fd23c */
                          Monitors__Activate_object__268887c
                                    (*(long *)(param_1 + 0x70),0,*(undefined8 *)PTR_DAT_049c8b00);
                    /* try { // try from 025fe1f4 to 026fe1f7 has its CatchHandler @ 025fe1fc */
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
LAB_025fe1fc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025fe1f4 with catch @ 025fe1fc */
  FUN_021f06a0();
}

