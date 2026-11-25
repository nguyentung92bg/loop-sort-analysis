/* IL2CPP: SandFlowSystem$$HasBlockInFlight
bool SandFlowSystem__HasBlockInFlight (SandFlowSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$HasBlockInFlight
   bool SandFlowSystem__HasBlockInFlight (SandFlowSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

uint SandFlowSystem__HasBlockInFlight_24ce6b8(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4bbee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7250);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    bRam0000000004f4bbee = 1;
  }
  puVar6 = PTR_DAT_049c7250;
  puVar5 = PTR_DAT_049c14e8;
  puVar4 = PTR_DAT_049c14e0;
  puVar3 = PTR_DAT_049c14d8;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x1e0) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x1e0),&uStack_78,*(undefined8 *)PTR_DAT_049c14f0);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    do {
      uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_60,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) goto LAB_025ce828;
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
      uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_48,uVar10,uVar1);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    } while (*(char *)(lStack_48 + 0x158) == '\0');
    if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                       (*(long *)(param_1 + 0xf0),lStack_48,*(undefined8 *)puVar6);
  } while ((uVar11 & 1) != 0);
LAB_025ce828:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_60,*(undefined8 *)puVar3);
  return uVar7 & 1;
}

