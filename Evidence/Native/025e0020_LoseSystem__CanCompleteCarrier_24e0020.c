/* IL2CPP: LoseSystem$$CanCompleteCarrier
bool LoseSystem__CanCompleteCarrier (LoseSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025e0740) */
/* WARNING: Removing unreachable block (ram,0x025e0738) */
/* WARNING: Removing unreachable block (ram,0x025e0724) */
/* IL2CPP: LoseSystem$$CanCompleteCarrier
   bool LoseSystem__CanCompleteCarrier (LoseSystem_o* __this, const MethodInfo* method); */

bool LoseSystem__CanCompleteCarrier_24e0020(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long lStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  int iStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *aplStack_90 [2];
  long alStack_80 [3];
  int iStack_64;
  
  puVar4 = PTR_DAT_049c7960;
  if ((bRam0000000004f4bc60 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c7968);
    FUN_021f03f8(PTR_DAT_049c7960);
    FUN_021f03f8(PTR_DAT_049c7970);
    FUN_021f03f8(PTR_DAT_049c7978);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c1a10);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1a18);
    FUN_021f03f8(PTR_DAT_049c14f0);
                    /* catch() { ... } // from try @ 025e0018 with catch @ 025e00e4 */
                    /* try { // try from 025e00e8 to 026e00ef has its CatchHandler @ 025e00f8 */
    FUN_021f03f8(PTR_DAT_049c1550);
                    /* try { // try from 025e00f0 to 026e00fb has its CatchHandler @ 025df8a8 */
                    /* catch() { ... } // from try @ 025e00e8 with catch @ 025e00f8 */
    FUN_021f03f8(PTR_DAT_049c7980);
    FUN_021f03f8(PTR_DAT_049c1a20);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4bc60 = 1;
  }
  puVar5 = PTR_DAT_049c7968;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  plStack_d0 = (long *)0x0;
  lStack_c8 = 0;
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  uStack_118 = (long *)0x0;
                    /* try { // try from 025e013c to 026e01e7 has its CatchHandler @ 025e013c
                       catch() { ... } // from try @ 025e013c with catch @ 025e013c
                       catch() { ... } // from try @ 025e0254 with catch @ 025e013c
                       catch() { ... } // from try @ 025e0270 with catch @ 025e013c
                       catch() { ... } // from try @ 025e02d0 with catch @ 025e013c
                       catch() { ... } // from try @ 025e02f4 with catch @ 025e013c */
  lStack_120 = 0;
  plStack_110 = (long *)0x0;
  iVar9 = LoseSystem__GetMinCompleteBlockCount_24e08ac(param_1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar4);
  }
  auStack_c0 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_c8,*(undefined8 *)puVar5);
  lVar14 = *(long *)(param_1 + 0xb0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plStack_98 = (long *)0x0;
  aplStack_90[0] = (long *)0x0;
  lStack_a0 = (ulong)*(uint *)(lVar14 + 0x30) << 0x20;
  thunk_FUN_021f190c(&plStack_98,0);
  aplStack_90[0] = *(long **)(lVar14 + 0x28);
  thunk_FUN_021f190c(aplStack_90);
  puVar7 = PTR_DAT_049c7978;
  puVar6 = PTR_DAT_049c22d8;
  puVar5 = PTR_DAT_049c14e8;
  puVar4 = PTR_DAT_049c14e0;
  bVar8 = false;
  iVar18 = 0;
  plStack_d8 = plStack_98;
  uStack_e0 = lStack_a0;
                    /* try { // try from 025e01e8 to 026e01ef has its CatchHandler @ 025e02ac */
  plStack_d0 = aplStack_90[0];
  do {
    do {
      do {
        do {
          iVar3 = (int)uStack_e0 + -1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar3);
          if (iVar3 < 0) {
            uVar17 = uStack_e0._4_4_ - 1;
                    /* try { // try from 025e0208 to 026e0253 has its CatchHandler @ 025e02b0 */
            uStack_e0 = CONCAT44(uVar17,iVar3);
            if ((int)uVar17 < 0) {
              lVar14 = *(long *)(param_1 + 0xc0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lStack_a0 = 0;
              plStack_98 = (long *)0x0;
              aplStack_90[0] = (long *)0x0;
              lVar15 = *(long *)PTR_DAT_049c1a20;
              plVar10 = (long *)thunk_FUN_0224e54c(lVar14,*(long *)(**(long **)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x80) + 0x60);
              alStack_80[0] = *plVar10;
              alStack_80[1] = 0;
              thunk_FUN_021f190c(alStack_80);
              alStack_80[1] = 0;
              plStack_98 = (long *)0x0;
              lStack_a0 = alStack_80[0];
              thunk_FUN_021f190c(&lStack_a0,0);
              puVar13 = (undefined8 *)
                        thunk_FUN_0224e54c(lVar14,*(long *)(**(long **)(*(long *)(lVar15 + 0x20) +
                                                                       0xc0) + 0x80) + 0x80);
              aplStack_90[0] = (long *)*puVar13;
              thunk_FUN_021f190c(aplStack_90);
                    /* try { // try from 025e04c8 to 026e04cf has its CatchHandler @ 025e0584 */
              uStack_118 = plStack_98;
              lStack_120 = lStack_a0;
              plStack_110 = aplStack_90[0];
              goto LAB_025e04d8;
            }
            lVar14 = plStack_d0[(ulong)uVar17 + 4];
            plStack_d8 = *(long **)(lVar14 + 0x18);
            thunk_FUN_021f190c((ulong)&uStack_e0 | 8);
            iVar3 = *(int *)(lVar14 + 0x30) + -1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar3);
          }
          if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          plVar10 = (long *)FUN_024f6008(*(long *)(param_1 + 200),plStack_d8[(long)iVar3 + 4],
                                         *(undefined8 *)puVar6);
                    /* try { // try from 025e0254 to 026e0263 has its CatchHandler @ 025e013c */
          lVar14 = *plVar10;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(char *)(lVar14 + 0x1b1) != '\0');
                    /* try { // try from 025e0264 to 026e026f has its CatchHandler @ 025e02a8 */
        lVar15 = *(long *)(lVar14 + 0x1e0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar3 = *(int *)(lVar15 + 0x18);
                    /* try { // try from 025e0270 to 026e02cb has its CatchHandler @ 025e013c */
        uVar11 = Carrier__CanBeginTransferEnter_23fad1c(lVar14,0);
        iVar18 = iVar3 + iVar18;
      } while ((uVar11 & 1) == 0);
      uVar11 = Carrier__IsEmpty_23faccc(lVar14,0);
    } while ((uVar11 & 1) != 0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0264 with catch @ 025e02a8
                        */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar15,&lStack_a0,*(undefined8 *)PTR_DAT_049c14f0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e01e8 with catch @ 025e02ac
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0208 with catch @ 025e02b0
                        */
    plStack_f0 = aplStack_90[0];
    plStack_f8 = plStack_98;
    lStack_100 = lStack_a0;
    lStack_a0 = 0;
    plStack_98 = &lStack_100;
    do {
                    /* try { // try from 025e02cc to 026e02cf has its CatchHandler @ 025e02e8 */
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_100,*(undefined8 *)puVar4);
                    /* try { // try from 025e02d0 to 026e02eb has its CatchHandler @ 025e013c */
      if ((uVar11 & 1) == 0) {
        uVar17 = 2;
        goto LAB_025e03ac;
      }
      lVar16 = *(long *)puVar5;
      lVar15 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar15 + 0x135);
      lVar14 = lVar15;
      if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 025e02cc with catch @ 025e02e8 */
        lVar14 = FUN_02229718();
                    /* try { // try from 025e02ec to 026e02f3 has its CatchHandler @ 025e02fc */
        lVar15 = *(long *)(lVar16 + 0x20);
                    /* try { // try from 025e02f4 to 026e02ff has its CatchHandler @ 025e013c */
        uVar2 = *(ushort *)(lVar15 + 0x135);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e02ec with catch @ 025e02fc
                        */
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&lStack_100,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(alStack_80,uVar12,uVar1);
      lVar14 = alStack_80[0];
      if (alStack_80[0] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = Block__CanBlockToLoseSystem_23dd018(alStack_80[0],0);
      if ((uVar11 & 1) != 0) break;
      LoseSystem__IncrementColorCount_24e0a1c(lStack_c8,lVar14);
      if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_a8 = *(undefined8 *)(lVar14 + 0xe4);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lStack_c8,&uStack_a8,&iStack_ac,*(undefined8 *)puVar7);
    } while (iStack_ac < iVar9);
    uVar17 = 7;
    bVar8 = true;
LAB_025e03ac:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&lStack_100,*(undefined8 *)PTR_DAT_049c14d8);
  } while ((uVar17 | 2) == 2);
  goto LAB_025e06b8;
LAB_025e04d8:
  do {
    do {
      uVar11 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&lStack_120,0);
      if ((uVar11 & 1) == 0) {
        if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                          (lStack_c8,*(undefined8 *)PTR_DAT_049c7970);
        bVar8 = iVar9 == 0 && iVar18 == 0;
        goto LAB_025e06b8;
      }
                    /* try { // try from 025e04e8 to 026e0533 has its CatchHandler @ 025e0588 */
      lVar14 = *(long *)((long)plStack_110 +
                        (ulong)*(uint *)(*plStack_110 + 0x104) * (long)uStack_118._4_4_ + 0x20);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = ConveyorSlot__HasElement_24b100c(lVar14,0);
    } while ((uVar11 & 1) == 0);
    if (*(long *)(lVar14 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar14 + 0xf8),&lStack_a0,*(undefined8 *)PTR_DAT_049c14f0);
    lStack_100 = lStack_a0;
                    /* try { // try from 025e0534 to 026e0543 has its CatchHandler @ 025e0300 */
    lStack_a0 = 0;
    plStack_f8 = plStack_98;
                    /* try { // try from 025e0544 to 026e054f has its CatchHandler @ 025e0580 */
    plStack_f0 = aplStack_90[0];
    plStack_98 = &lStack_100;
    do {
                    /* try { // try from 025e0550 to 026e059b has its CatchHandler @ 025e0300 */
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_100,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) {
        uVar17 = 8;
        goto LAB_025e061c;
      }
      lVar16 = *(long *)puVar5;
      lVar15 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar15 + 0x135);
      lVar14 = lVar15;
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar15 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar15 + 0x135);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0544 with catch @ 025e0580
                        */
      }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e04e8 with catch @ 025e0588
                        */
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
                    /* try { // try from 025e059c to 026e059f has its CatchHandler @ 025e05d8 */
                    /* try { // try from 025e05a0 to 026e05db has its CatchHandler @ 025e0300 */
      uVar12 = thunk_FUN_0224e54c(&lStack_100,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(alStack_80 + 2,uVar12,uVar1);
      lVar14 = alStack_80[2];
      LoseSystem__IncrementColorCount_24e0a1c(lStack_c8,alStack_80[2]);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch() { ... } // from try @ 025e059c with catch @ 025e05d8 */
                    /* try { // try from 025e05dc to 026e05e3 has its CatchHandler @ 025e05ec */
      if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      alStack_80[0] = *(long *)(lVar14 + 0xe4);
                    /* try { // try from 025e05e4 to 026e05ef has its CatchHandler @ 025e0300 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e05dc with catch @ 025e05ec
                        */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lStack_c8,alStack_80,&iStack_64,*(undefined8 *)puVar7);
    } while (iStack_64 < iVar9);
    bVar8 = true;
    uVar17 = 7;
LAB_025e061c:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&lStack_100,*(undefined8 *)PTR_DAT_049c14d8);
  } while ((uVar17 | 8) == 8);
LAB_025e06b8:
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (auStack_c0,*(undefined8 *)PTR_DAT_049c7980);
  return bVar8;
}

