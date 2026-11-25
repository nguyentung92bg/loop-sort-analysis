/* IL2CPP: ElevatorHoleSystem$$OnLevelAnimationEnterStart
void ElevatorHoleSystem__OnLevelAnimationEnterStart (ElevatorHoleSystem_o* __this, LevelAnimationEnterStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$OnLevelAnimationEnterStart
   void ElevatorHoleSystem__OnLevelAnimationEnterStart (ElevatorHoleSystem_o* __this,
   LevelAnimationEnterStartMessage_o m, const MethodInfo* method); */

void ElevatorHoleSystem__OnLevelAnimationEnterStart_24a3c8c(long param_1)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f4baf5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6630);
    FUN_021f03f8(PTR_DAT_049c6638);
    FUN_021f03f8(PTR_DAT_049c6640);
    FUN_021f03f8(PTR_DAT_049c6648);
    bRam0000000004f4baf5 = 1;
  }
  puVar5 = PTR_DAT_049c6640;
  puVar4 = PTR_DAT_049c6638;
  puVar3 = PTR_DAT_049c6630;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x98),&uStack_48,*(undefined8 *)PTR_DAT_049c6648);
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_48,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_48,*(undefined8 *)puVar3);
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
    uVar9 = thunk_FUN_0224e54c(&uStack_48,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_28,uVar9,uVar1);
    if (lStack_28 == 0) break;
    ElevatorHole__OnLevelAnimationStart_2410e84(lStack_28,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

