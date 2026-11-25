/* IL2CPP: Monitors$$GetActiveMonitorCount
int32_t Monitors__GetActiveMonitorCount (Monitors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$GetActiveMonitorCount
   int32_t Monitors__GetActiveMonitorCount (Monitors_o* __this, const MethodInfo* method); */

int Monitors__GetActiveMonitorCount_256e764(long param_1)

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
  int iVar10;
  long lVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4c1b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc000);
    FUN_021f03f8(PTR_DAT_049cc008);
    FUN_021f03f8(PTR_DAT_049cc010);
    FUN_021f03f8(PTR_DAT_049cc018);
    bRam0000000004f4c1b0 = 1;
  }
  puVar5 = PTR_DAT_049cc010;
  puVar4 = PTR_DAT_049cc008;
  puVar3 = PTR_DAT_049cc000;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x38),&uStack_50,*(undefined8 *)PTR_DAT_049cc018);
  iVar10 = 0;
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_50,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar3);
      return iVar10;
    }
    lVar11 = *(long *)puVar5;
    lVar7 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar7 = *(long *)(lVar11 + 0x20);
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
    iVar10 = iVar10 + (*(byte *)(lStack_38 + 0x28) ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

