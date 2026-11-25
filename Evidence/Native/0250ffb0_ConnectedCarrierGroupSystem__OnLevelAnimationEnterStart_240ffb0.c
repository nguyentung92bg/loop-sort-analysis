/* IL2CPP: ConnectedCarrierGroupSystem$$OnLevelAnimationEnterStart
void ConnectedCarrierGroupSystem__OnLevelAnimationEnterStart (ConnectedCarrierGroupSystem_o* __this, LevelAnimationEnterStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectedCarrierGroupSystem$$OnLevelAnimationEnterStart
   void ConnectedCarrierGroupSystem__OnLevelAnimationEnterStart (ConnectedCarrierGroupSystem_o*
   __this, LevelAnimationEnterStartMessage_o m, const MethodInfo* method); */

void ConnectedCarrierGroupSystem__OnLevelAnimationEnterStart_240ffb0(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f4b716 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b00);
    FUN_021f03f8(PTR_DAT_049c2b08);
    FUN_021f03f8(PTR_DAT_049c2b10);
    FUN_021f03f8(PTR_DAT_049c2b18);
    FUN_021f03f8(PTR_DAT_049c2b20);
    bRam0000000004f4b716 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                        (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c2b00),
     puVar5 = PTR_DAT_049c2b18, puVar4 = PTR_DAT_049c2b10, puVar3 = PTR_DAT_049c2b08, lVar6 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
              (lVar6,&uStack_48,*(undefined8 *)PTR_DAT_049c2b20);
    while( true ) {
      uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                        (&uStack_48,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                  (&uStack_48,*(undefined8 *)puVar3);
        return;
      }
      lVar10 = *(long *)puVar5;
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar6 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718();
        lVar8 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_48,
                                 *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_28,uVar9,uVar1);
      if (lStack_28 == 0) break;
      ConnectedCarrierGroup__OnLevelAnimationStart_240f108();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

