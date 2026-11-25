/* IL2CPP: HomeMonitor$$UnloadAssets
void HomeMonitor__UnloadAssets (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$UnloadAssets
   void HomeMonitor__UnloadAssets (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__UnloadAssets_24451b0(long param_1)

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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4b871 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4238);
    FUN_021f03f8(PTR_DAT_049c4240);
    FUN_021f03f8(PTR_DAT_049c4248);
    FUN_021f03f8(PTR_DAT_049c4250);
    FUN_021f03f8(PTR_DAT_049c4258);
    bRam0000000004f4b871 = 1;
  }
  puVar6 = PTR_DAT_049c4250;
  puVar5 = PTR_DAT_049c4248;
  puVar4 = PTR_DAT_049c4240;
  puVar3 = PTR_DAT_049c4238;
  uStack_50 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x1b8) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
              (*(long *)(param_1 + 0x1b8),&uStack_70,*(undefined8 *)PTR_DAT_049c4258);
    uStack_a0 = 0;
    puStack_98 = &uStack_70;
    while (uVar7 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                             (&uStack_70,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
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
      func_0x04608620(&uStack_b8,uVar10,uVar1);
      uStack_88 = uStack_b0;
      uStack_90 = uStack_b8;
      uStack_80 = uStack_a8;
      uVar7 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_3aaaf2c
                        (&uStack_90,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Release_3a93fb0
                  (&uStack_90,0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
              (&uStack_70,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x1b8) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                (*(long *)(param_1 + 0x1b8),*(undefined8 *)puVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

