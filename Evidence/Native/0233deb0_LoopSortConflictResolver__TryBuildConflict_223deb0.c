/* IL2CPP: LoopSortConflictResolver$$TryBuildConflict
bool LoopSortConflictResolver__TryBuildConflict (System_Collections_Generic_List_ConflictInfo__o* conflicts, CloudSaveConflict_o** cloudSaveConflict, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$TryBuildConflict
   bool LoopSortConflictResolver__TryBuildConflict (System_Collections_Generic_List_ConflictInfo__o*
   conflicts, CloudSaveConflict_o** cloudSaveConflict, const MethodInfo* method); */

undefined8 LoopSortConflictResolver__TryBuildConflict_223deb0(long param_1,long *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f49af1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5048);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5058);
                    /* try { // try from 0233df08 to 0243df13 has its CatchHandler @ 0233df4c */
    FUN_021f03f8(PTR_DAT_049b5060);
                    /* try { // try from 0233df14 to 0243df5f has its CatchHandler @ 0233dea4 */
    FUN_021f03f8(PTR_DAT_049b5068);
    FUN_021f03f8(PTR_DAT_049b5070);
    FUN_021f03f8(PTR_DAT_049b5078);
    FUN_021f03f8(PTR_DAT_049b5080);
    FUN_021f03f8(PTR_DAT_049b5088);
                    /* catch() { ... } // from try @ 0233df08 with catch @ 0233df4c */
    bRam0000000004f49af1 = 1;
  }
  puVar6 = PTR_DAT_049b5088;
  puVar5 = PTR_DAT_049b5068;
  puVar4 = PTR_DAT_049b5060;
  puVar3 = PTR_DAT_049b5058;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_1,&uStack_88,*(undefined8 *)PTR_DAT_049b5070);
  uStack_60 = uStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar3);
      *param_2 = 0;
      thunk_FUN_021f190c(param_2,0);
      return 0;
    }
    lVar11 = *(long *)puVar5;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_58,uVar10,uVar1);
    lVar9 = lStack_58;
    if (lStack_58 == 0) break;
    uVar7 = System_String__Equals_2f7b554
                      (*(undefined8 *)puVar6,*(undefined8 *)(lStack_58 + 0x10),3,0);
    if ((uVar7 & 1) != 0) {
      uVar10 = *(undefined8 *)(lVar9 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar13 = System_DateTimeOffset__FromUnixTimeSeconds_30e1ed0(uVar10,0);
      lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5048);
      CloudSaveConflict___ctor_24ebc50(lVar8,0);
      puVar4 = PTR_DAT_049b5078;
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x10) = 0;
        plVar12 = *(long **)(lVar9 + 0x18);
        lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
        if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)PTR_DAT_049b5080)) {
          plVar12 = (long *)0x0;
        }
        System_Object___ctor_3142338(lVar11,0);
        *(undefined8 *)(lVar11 + 0x10) = plVar12;
        thunk_FUN_021f190c((undefined8 *)(lVar11 + 0x10),plVar12);
        *(long *)(lVar8 + 0x18) = lVar11;
        thunk_FUN_021f190c((long *)(lVar8 + 0x18),lVar11);
        plVar12 = *(long **)(lVar9 + 0x20);
        lVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
        if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)PTR_DAT_049b5080)) {
          plVar12 = (long *)0x0;
        }
        System_Object___ctor_3142338(lVar9,0);
        *(undefined8 *)(lVar9 + 0x10) = plVar12;
        thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x10),plVar12);
        *(long *)(lVar8 + 0x20) = lVar9;
        thunk_FUN_021f190c((long *)(lVar8 + 0x20),lVar9);
        *(undefined1 (*) [16])(lVar8 + 0x28) = auVar13;
        *param_2 = lVar8;
        thunk_FUN_021f190c(param_2,lVar8);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_70,*(undefined8 *)puVar3);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

