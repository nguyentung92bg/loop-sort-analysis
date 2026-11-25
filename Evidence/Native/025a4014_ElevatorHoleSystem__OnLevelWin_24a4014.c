/* IL2CPP: ElevatorHoleSystem$$OnLevelWin
void ElevatorHoleSystem__OnLevelWin (ElevatorHoleSystem_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$OnLevelWin
   void ElevatorHoleSystem__OnLevelWin (ElevatorHoleSystem_o* __this, LevelWinMessage_o m, const
   MethodInfo* method); */

void ElevatorHoleSystem__OnLevelWin_24a4014(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f4baf7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6630);
    FUN_021f03f8(PTR_DAT_049c6638);
    FUN_021f03f8(PTR_DAT_049c6640);
    FUN_021f03f8(PTR_DAT_049c6648);
    bRam0000000004f4baf7 = 1;
  }
  puVar5 = PTR_DAT_049c6640;
  puVar4 = PTR_DAT_049c6638;
  puVar3 = PTR_DAT_049c6630;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_025a417c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a415c with catch @ 025a417c
                        */
    FUN_021f06a0();
  }
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x11) != '\0') {
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_025a417c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x98),&uStack_48,*(undefined8 *)PTR_DAT_049c6648);
    while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_48,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_48,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_28,uVar9,uVar1);
                    /* catch() { ... } // from try @ 025a4164 with catch @ 025a413c
                       catch() { ... } // from try @ 025a419c with catch @ 025a413c
                       catch() { ... } // from try @ 025a41c4 with catch @ 025a413c */
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar11 = ElevatorHole__Lower_2411270(lStack_28,0);
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268(auVar11._0_8_,auVar11._8_8_,0);
    }
                    /* try { // try from 025a415c to 026a4163 has its CatchHandler @ 025a417c */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_48,*(undefined8 *)puVar3);
  }
                    /* try { // try from 025a4164 to 026a4197 has its CatchHandler @ 025a413c */
  return;
}

