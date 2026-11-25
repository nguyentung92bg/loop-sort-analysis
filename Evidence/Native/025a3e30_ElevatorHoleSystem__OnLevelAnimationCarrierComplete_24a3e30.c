/* IL2CPP: ElevatorHoleSystem$$OnLevelAnimationCarrierComplete
void ElevatorHoleSystem__OnLevelAnimationCarrierComplete (ElevatorHoleSystem_o* __this, LevelAnimationCarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$OnLevelAnimationCarrierComplete
   void ElevatorHoleSystem__OnLevelAnimationCarrierComplete (ElevatorHoleSystem_o* __this,
   LevelAnimationCarrierCompleteMessage_o m, const MethodInfo* method); */

void ElevatorHoleSystem__OnLevelAnimationCarrierComplete_24a3e30(long param_1)

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
  undefined1 auStack_54 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4baf6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6630);
    FUN_021f03f8(PTR_DAT_049c6638);
    FUN_021f03f8(PTR_DAT_049c6640);
    FUN_021f03f8(PTR_DAT_049c6648);
    bRam0000000004f4baf6 = 1;
  }
  puVar5 = PTR_DAT_049c6640;
  puVar4 = PTR_DAT_049c6638;
  puVar3 = PTR_DAT_049c6630;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auStack_54[0] = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x98),&uStack_50,*(undefined8 *)PTR_DAT_049c6648);
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_50,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar3);
      return;
    }
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
    uVar9 = thunk_FUN_0224e54c(&uStack_50,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar9,uVar1);
    if (lStack_38 == 0) break;
    auVar11 = ElevatorHole__Rise_24111d4(lStack_38,0);
    auStack_54[0] = ElevatorHoleSystem__Move_24a3bd8(param_1,auVar11._0_8_,auVar11._8_8_);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_54,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

