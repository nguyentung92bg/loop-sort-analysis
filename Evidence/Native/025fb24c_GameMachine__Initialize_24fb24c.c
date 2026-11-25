/* IL2CPP: GameMachine$$Initialize
void GameMachine__Initialize (GameMachine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025fb5d8) */
/* IL2CPP: GameMachine$$Initialize
   void GameMachine__Initialize (GameMachine_o* __this, const MethodInfo* method); */

void GameMachine__Initialize_24fb24c(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  
  puVar5 = PTR_DAT_049c89e8;
                    /* try { // try from 025fb264 to 026fb267 has its CatchHandler @ 025fb280 */
                    /* try { // try from 025fb268 to 026fb283 has its CatchHandler @ 025fb004 */
  if ((bRam0000000004f4bd4c & 1) == 0) {
                    /* catch() { ... } // from try @ 025fb264 with catch @ 025fb280 */
                    /* try { // try from 025fb284 to 026fb28b has its CatchHandler @ 025fb294 */
    FUN_021f03f8(PTR_DAT_049c8170);
                    /* try { // try from 025fb28c to 026fb297 has its CatchHandler @ 025fb004 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025fb284 with catch @ 025fb294
                        */
    FUN_021f03f8(PTR_DAT_049c8178);
    FUN_021f03f8(PTR_DAT_049c8180);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c89e8);
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049c81a0);
    FUN_021f03f8(PTR_DAT_049c81a8);
    FUN_021f03f8(PTR_DAT_049c89f0);
    FUN_021f03f8(PTR_DAT_049c89f8);
    FUN_021f03f8(PTR_DAT_049c8a00);
    FUN_021f03f8(PTR_DAT_049c8a08);
    bRam0000000004f4bd4c = 1;
  }
  puVar4 = PTR_DAT_049b5480;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  uVar18 = *(undefined8 *)puVar5;
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar18 = System_Type__GetTypeFromHandle_310ebfc(uVar18,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar4);
  }
  auStack_78 = Extensions__GetDerivedClassTypes_3f0c910(uVar18,&lStack_80,0);
  puStack_a8 = auStack_78;
  lStack_b0 = 0;
  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_80,&uStack_c8,*(undefined8 *)PTR_DAT_049c81a0);
  puVar11 = PTR_DAT_049c8a08;
  puVar10 = PTR_DAT_049c8a00;
  puVar9 = PTR_DAT_049c89f8;
  puVar8 = PTR_DAT_049c89f0;
  puVar7 = PTR_DAT_049c8180;
  puVar6 = PTR_DAT_049c8178;
  puVar4 = PTR_DAT_049c8170;
  puVar5 = PTR_DAT_049b6750;
  uStack_98 = puStack_c0;
  uStack_a0 = uStack_c8;
  uStack_90 = uStack_b8;
  puStack_c0 = &uStack_a0;
  uStack_c8 = 0;
  do {
    uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_a0,*(undefined8 *)puVar6);
    if ((uVar13 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_a0,*(undefined8 *)puVar4);
      UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___SetStartState_29aa510
                (param_1,*(undefined8 *)puVar11,*(undefined8 *)puVar9);
      (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      lVar15 = lStack_b0;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_a8,*(undefined8 *)PTR_DAT_049c81a8);
      if (lVar15 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar15);
    }
    lVar19 = *(long *)puVar7;
    lVar14 = *(long *)(lVar19 + 0x20);
    uVar3 = *(ushort *)(lVar14 + 0x135);
    lVar15 = lVar14;
    if ((uVar3 & 1) == 0) {
      lVar15 = FUN_02229718();
      lVar14 = *(long *)(lVar19 + 0x20);
      uVar3 = *(ushort *)(lVar14 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar14 = FUN_02229718();
    }
    uVar18 = thunk_FUN_0224e54c(&uStack_a0,
                                *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_68,uVar18,uVar1);
    plVar12 = plStack_68;
    plVar20 = (long *)param_1[0x12];
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *plVar20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar16 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_025fb4dc;
        }
        uVar13 = uVar13 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_02229a4c(plVar20,*(long *)puVar5,3);
LAB_025fb4dc:
    plVar20 = (long *)(*(code *)*puVar16)(plVar20,plVar12,puVar16[1]);
    if (plVar20 == (long *)0x0) {
LAB_025fb508:
      plVar20 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)puVar10 + 0x130);
      if (*(byte *)(*plVar20 + 0x130) < bVar2) goto LAB_025fb508;
      if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar10) {
        plVar20 = (long *)0x0;
      }
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar18 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___AddState_29aa804
              (param_1,uVar18,plVar20,*(undefined8 *)puVar8);
  } while( true );
}

