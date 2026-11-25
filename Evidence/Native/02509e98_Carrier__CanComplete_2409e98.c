/* IL2CPP: Carrier$$CanComplete
bool Carrier__CanComplete (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$CanComplete
   bool Carrier__CanComplete (Carrier_o* __this, const MethodInfo* method); */

uint Carrier__CanComplete_2409e98(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uVar11 = Carrier__HasReachedCompleteCount_2409564();
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if ((bRam0000000004f4b6e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    bRam0000000004f4b6e0 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar7 = Carrier__GetNextColorType_24095f4(param_1);
  puVar5 = PTR_DAT_049c14e8;
  puVar4 = PTR_DAT_049c14e0;
  puVar3 = PTR_DAT_049c14d8;
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x1e0),&uStack_58,*(undefined8 *)PTR_DAT_049c14f0);
  do {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_58,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) break;
    lVar12 = *(long *)puVar5;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_58,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar10,uVar1);
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = ColorType__op_Inequality_24f9dbc(*(undefined8 *)(lStack_38 + 0xe4),uVar7,0);
  } while ((uVar11 & 1) == 0);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_58,*(undefined8 *)puVar3);
  return (uVar6 ^ 1) & 1;
}

