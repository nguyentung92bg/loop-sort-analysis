/* IL2CPP: VoodooSauceProvider$$StartGame
void VoodooSauceProvider__StartGame (VoodooSauceProvider_o* __this, int32_t levelNumber, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$StartGame
   void VoodooSauceProvider__StartGame (VoodooSauceProvider_o* __this, int32_t levelNumber,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void VoodooSauceProvider__StartGame_22556a4(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long *plStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  
  uStack_70 = param_2;
  if ((bRam0000000004f49bb8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62c0);
                    /* try { // try from 023556ec to 02455703 has its CatchHandler @ 02355758 */
    FUN_021f03f8(PTR_DAT_049b62c8);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b62d0);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b60f8);
    FUN_021f03f8(PTR_DAT_049b6100);
    FUN_021f03f8(PTR_DAT_049b6108);
                    /* try { // try from 0235574c to 02455753 has its CatchHandler @ 0235575c */
    FUN_021f03f8(PTR_DAT_049b62d8);
                    /* catch() { ... } // from try @ 023555f4 with catch @ 02355754
                       try { // try from 02355754 to 0245577b has its CatchHandler @ 02355520 */
                    /* catch() { ... } // from try @ 02355550 with catch @ 02355758
                       catch() { ... } // from try @ 02355698 with catch @ 02355758
                       catch() { ... } // from try @ 023556ec with catch @ 02355758 */
    FUN_021f03f8(PTR_DAT_049b62e0);
                    /* catch() { ... } // from try @ 0235574c with catch @ 0235575c */
                    /* catch() { ... } // from try @ 02355588 with catch @ 02355760 */
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b6120);
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b62e8);
    FUN_021f03f8(PTR_DAT_049b62f0);
                    /* try { // try from 023557ac to 024557e3 has its CatchHandler @ 023557ac
                       catch() { ... } // from try @ 023557ac with catch @ 023557ac
                       catch() { ... } // from try @ 023557ec with catch @ 023557ac */
    FUN_021f03f8(PTR_DAT_049b62f8);
    FUN_021f03f8(PTR_DAT_049b6300);
    FUN_021f03f8(PTR_DAT_049b4eb8);
    FUN_021f03f8(PTR_DAT_049b6308);
    FUN_021f03f8(PTR_DAT_049b6310);
                    /* try { // try from 023557e4 to 024557eb has its CatchHandler @ 0235582c */
    bRam0000000004f49bb8 = 1;
  }
  puVar9 = PTR_DAT_049b62e8;
  puVar8 = PTR_DAT_049b62d0;
  puVar7 = PTR_DAT_049b62c0;
  puVar6 = PTR_DAT_049b6118;
  puVar5 = PTR_DAT_049b6108;
  puVar3 = PTR_DAT_049b6100;
  puVar4 = PTR_DAT_049b4358;
                    /* try { // try from 023557ec to 0245585f has its CatchHandler @ 023557ac */
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), auVar2 = ZEXT816(0), lVar11 != 0)) {
                    /* catch() { ... } // from try @ 023557e4 with catch @ 0235582c */
    auStack_80 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar11,*(undefined8 *)PTR_DAT_049b6120);
    puStack_88 = auStack_80;
    plStack_90 = (long *)0x0;
    while (uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                              (auStack_80,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
      lVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_80,*(undefined8 *)puVar5);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar16 = *(long *)(param_1 + 0x58);
      plVar15 = *(long **)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0);
      uVar10 = *(undefined4 *)(plVar15[1] + 0xfc);
      uVar13 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar15 + 0x80));
      func_0x04608620(&fStack_64,uVar13,uVar10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_6c = 0;
      fStack_68 = fStack_64;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar16,&fStack_68,&uStack_6c,*(undefined8 *)puVar8);
    }
                    /* try { // try from 023558d0 to 024558f7 has its CatchHandler @ 023558d0
                       catch(type#1 @ 00000000) { ... } // from try @ 023558d0 with catch @ 023558d0
                       catch(type#1 @ 00000000) { ... } // from try @ 023559b4 with catch @ 023558d0
                        */
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_80,*(undefined8 *)PTR_DAT_049b60f8);
    *(undefined4 *)(param_1 + 0x40) = 0;
    puVar3 = PTR_DAT_049b4340;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                    /* try { // try from 023558f8 to 02455907 has its CatchHandler @ 023559a8 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar11,*(undefined8 *)PTR_DAT_049b4338);
    uVar13 = VoodooSauceProvider__get_LevelFunnelName_22552d4(param_1);
    auVar2 = auStack_80;
    if (lVar11 != 0) {
                    /* try { // try from 02355928 to 0245592f has its CatchHandler @ 023559a4 */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar11,*(undefined8 *)PTR_DAT_049b6300,uVar13,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_049b3bd0;
      uStack_94 = 0;
      uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_94);
      System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
                (param_3,*(undefined8 *)puVar9,uVar13,&plStack_90,*(undefined8 *)puVar7);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar11,*(undefined8 *)puVar9,plStack_90,*(undefined8 *)puVar4);
      uStack_98 = 0;
                    /* try { // try from 0235597c to 02455983 has its CatchHandler @ 023559a0 */
      uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_98);
      puVar5 = PTR_DAT_049b62f0;
      System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
                (param_3,*(undefined8 *)PTR_DAT_049b62f0,uVar13,&plStack_90,*(undefined8 *)puVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0235597c with catch @ 023559a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355928 with catch @ 023559a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023558f8 with catch @ 023559a8
                        */
                    /* try { // try from 023559ac to 024559b3 has its CatchHandler @ 023559bc */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar11,*(undefined8 *)puVar5,plStack_90,*(undefined8 *)puVar4);
      puVar5 = PTR_DAT_049b6310;
                    /* try { // try from 023559b4 to 024559bf has its CatchHandler @ 023558d0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023559ac with catch @ 023559bc
                        */
      System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
                (param_3,*(undefined8 *)PTR_DAT_049b6310,*(undefined8 *)PTR_DAT_049b4eb8,&plStack_90
                 ,*(undefined8 *)puVar7);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar11,*(undefined8 *)puVar5,plStack_90,*(undefined8 *)puVar4);
      uStack_9c = 0;
      uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_9c);
      puVar5 = PTR_DAT_049b6308;
      System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
                (param_3,*(undefined8 *)PTR_DAT_049b6308,uVar13,&plStack_90,*(undefined8 *)puVar7);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar11,*(undefined8 *)puVar5,plStack_90,*(undefined8 *)puVar4);
      uStack_a0 = 0;
      uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_a0);
      System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
                (param_3,*(undefined8 *)PTR_DAT_049b62f8,uVar13,&plStack_90,*(undefined8 *)puVar7);
      auVar2 = auStack_80;
      if (plStack_90 != (long *)0x0) {
        if (*(long *)(*plStack_90 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355bbc with catch @ 02355bdc
                        */
          FUN_021f0a20();
        }
        piVar14 = (int *)thunk_FUN_0222cb7c();
        auVar2 = auStack_80;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x78), lVar16 != 0)) {
          iVar1 = *piVar14;
          uVar10 = ConstantSheetBase_object___GetInt_281c070
                             (lVar16,0,*(undefined8 *)PTR_DAT_049b62c8);
          auVar2 = auStack_80;
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x60);
            if (lVar16 != 0) {
              uVar10 = LevelSheet__GetLoopCount_2562b00(lVar16,uVar10,0);
              lVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b62d8);
              Voodoo_Sauce_Internal_Analytics_GameStartedParameters___ctor_4368dd8(lVar16,0);
              uVar13 = System_Int32__ToString_30fbaa0(&uStack_70,0);
              auVar2 = auStack_80;
              if (lVar16 != 0) {
                *(undefined8 *)(lVar16 + 0x10) = uVar13;
                thunk_FUN_021f190c();
                plStack_90 = (long *)0x0;
                fStack_64 = (float)iVar1;
                System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                          (&plStack_90,&fStack_64,*(undefined8 *)PTR_DAT_049b62e0);
                *(undefined4 *)(lVar16 + 0x30) = 0;
                *(undefined4 *)(lVar16 + 0x1c) = uVar10;
                *(long **)(lVar16 + 0x38) = plStack_90;
                *(long *)(lVar16 + 0x50) = lVar11;
                thunk_FUN_021f190c((long *)(lVar16 + 0x50),lVar11);
                *(long *)(param_1 + 0x50) = lVar16;
                thunk_FUN_021f190c((long *)(param_1 + 0x50),lVar16);
                    /* try { // try from 02355b6c to 02455b9b has its CatchHandler @ 02355b6c
                       catch(type#1 @ 00000000) { ... } // from try @ 02355b6c with catch @ 02355b6c
                       catch(type#1 @ 00000000) { ... } // from try @ 02355bec with catch @ 02355b6c
                        */
                if (*(int *)(*(long *)PTR_DAT_049b5670 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                VoodooSauce__OnGameStarted_43779c8(lVar16,0);
                uVar10 = uStack_70;
                    /* try { // try from 02355b9c to 02455bb7 has its CatchHandler @ 02355be0 */
                if (*(int *)(*(long *)PTR_DAT_049b5f70 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                VoodooAdjustProvider__StartGame_2251628(uVar10);
                    /* try { // try from 02355bbc to 02455bc3 has its CatchHandler @ 02355bdc */
                return;
              }
            }
          }
        }
      }
    }
  }
  auStack_80 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

