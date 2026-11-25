/* IL2CPP: WeeklyMissions$$CanComplete
bool WeeklyMissions__CanComplete (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$CanComplete
   bool WeeklyMissions__CanComplete (WeeklyMissions_o* __this, const MethodInfo* method); */

undefined4 WeeklyMissions__CanComplete_252c3cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  int iStack_54;
  
                    /* catch() { ... } // from try @ 0262bea0 with catch @ 0262c3cc */
                    /* catch() { ... } // from try @ 0262bdd4 with catch @ 0262c3d0 */
                    /* catch() { ... } // from try @ 0262c0fc with catch @ 0262c3d4 */
                    /* catch() { ... } // from try @ 0262bf98 with catch @ 0262c3d8 */
                    /* catch() { ... } // from try @ 0262bd4c with catch @ 0262c3dc */
                    /* catch() { ... } // from try @ 0262c11c with catch @ 0262c3e0 */
                    /* try { // try from 0262c3f4 to 0272c3f7 has its CatchHandler @ 0262c47c */
  if ((bRam0000000004f4bed4 & 1) == 0) {
                    /* try { // try from 0262c3f8 to 0272c427 has its CatchHandler @ 0262bb48 */
    FUN_021f03f8(PTR_DAT_049c9bc8);
                    /* catch() { ... } // from try @ 0262bfb8 with catch @ 0262c40c */
    FUN_021f03f8(PTR_DAT_049c9bd8);
    FUN_021f03f8(PTR_DAT_049c9be8);
    FUN_021f03f8(PTR_DAT_049c5d90);
                    /* try { // try from 0262c428 to 0272c42b has its CatchHandler @ 0262c46c */
                    /* try { // try from 0262c42c to 0272c453 has its CatchHandler @ 0262bb48 */
    FUN_021f03f8(PTR_DAT_049c5d98);
    FUN_021f03f8(PTR_DAT_049c2cf0);
                    /* catch() { ... } // from try @ 0262bd6c with catch @ 0262c440 */
    FUN_021f03f8(PTR_DAT_049c9c00);
    bRam0000000004f4bed4 = 1;
  }
                    /* try { // try from 0262c454 to 0272c457 has its CatchHandler @ 0262c490 */
                    /* try { // try from 0262c458 to 0272c46f has its CatchHandler @ 0262bb48 */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  iVar7 = WeeklyMissions__GetCurrentDay_252c638(param_1);
  puVar6 = PTR_DAT_049c9be8;
  puVar5 = PTR_DAT_049c9bd8;
  puVar4 = PTR_DAT_049c9bc8;
  puVar3 = PTR_DAT_049c5d98;
  puVar2 = PTR_DAT_049c5d90;
  puVar1 = PTR_DAT_049c2cf0;
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 0262c428 with catch @ 0262c46c */
    lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0);
                    /* try { // try from 0262c470 to 0272c49b has its CatchHandler @ 0262c4a4 */
    if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 0262c3f4 with catch @ 0262c47c */
                    /* catch() { ... } // from try @ 0262c358 with catch @ 0262c48c */
                    /* catch() { ... } // from try @ 0262c454 with catch @ 0262c490 */
                    /* try { // try from 0262c49c to 0272c4a7 has its CatchHandler @ 0262bb48 */
                    /* catch() { ... } // from try @ 0262c470 with catch @ 0262c4a4 */
                    /* try { // try from 0262c4a8 to 0272c58b has its CatchHandler @ 0262c4a8
                       catch() { ... } // from try @ 0262c4a8 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c5f8 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c6d8 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c760 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c790 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c7b4 with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c7dc with catch @ 0262c4a8
                       catch() { ... } // from try @ 0262c800 with catch @ 0262c4a8 */
      auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar9,*(undefined8 *)PTR_DAT_049c9c00);
      puStack_78 = auStack_70;
      uStack_80 = 0;
      while (uVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                (auStack_70,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
        lVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_70,*(undefined8 *)puVar6);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar13 = *(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
        uVar14 = *(undefined4 *)(plVar13[1] + 0xfc);
        uVar11 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar13 + 0x80));
        func_0x04608620(&iStack_54,uVar11,uVar14);
        if (iVar7 < iStack_54) break;
        for (iVar15 = 0;
            iVar8 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                              (lVar9,*(undefined8 *)puVar2), iVar15 < iVar8; iVar15 = iVar15 + 1) {
          lVar12 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Item_298568c
                             (lVar9,iVar15,*(undefined8 *)puVar3);
          if ((lVar12 != 0) &&
             (uVar10 = WeeklyMissions__IsCompleted_252ad88(lVar12,*(undefined8 *)(lVar12 + 0x28)),
             (uVar10 & 1) != 0)) {
            uStack_98 = *(undefined8 *)(lVar12 + 0x40);
            uStack_a0 = *(undefined8 *)(lVar12 + 0x38);
            uStack_88 = *(undefined8 *)(lVar12 + 0x50);
            uStack_90 = *(undefined8 *)(lVar12 + 0x48);
            uVar10 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_a0,0);
            if ((uVar10 & 1) == 0) {
              uVar14 = 0;
              goto LAB_0262c58c;
            }
          }
        }
      }
      uVar14 = 1;
LAB_0262c58c:
                    /* try { // try from 0262c58c to 0272c593 has its CatchHandler @ 0262c7b8 */
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_70,*(undefined8 *)puVar4);
                    /* try { // try from 0262c5ac to 0272c5f7 has its CatchHandler @ 0262c7bc */
      return uVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

