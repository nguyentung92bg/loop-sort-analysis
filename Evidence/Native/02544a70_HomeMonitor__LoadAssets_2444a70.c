/* IL2CPP: HomeMonitor$$LoadAssets
void HomeMonitor__LoadAssets (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$LoadAssets
   void HomeMonitor__LoadAssets (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__LoadAssets_2444a70(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f4b870 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c41e8);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049c41f0);
    FUN_021f03f8(PTR_DAT_049c41f8);
    FUN_021f03f8(PTR_DAT_049c4200);
    FUN_021f03f8(PTR_DAT_049c4208);
    FUN_021f03f8(PTR_DAT_049c4210);
    FUN_021f03f8(PTR_DAT_049c4218);
    bRam0000000004f4b870 = 1;
  }
  puVar9 = PTR_DAT_049c4210;
  puVar8 = PTR_DAT_049c4208;
  puVar7 = PTR_DAT_049c4200;
  puVar6 = PTR_DAT_049c41f8;
  puVar5 = PTR_DAT_049c41f0;
  puVar4 = PTR_DAT_049c41e8;
  puVar3 = PTR_DAT_049bb9e0;
  plStack_a0 = (long *)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
            (*(long *)(param_1 + 0x1b0),&plStack_80,*(undefined8 *)PTR_DAT_049c4218);
  uStack_90 = uStack_70;
  pplStack_c8 = &plStack_a0;
  uStack_98 = uStack_78;
  plStack_a0 = plStack_80;
  uStack_d0 = 0;
  while( true ) {
    uVar10 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                       (&plStack_a0,*(undefined8 *)puVar7);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                (&plStack_a0,*(undefined8 *)puVar6);
      return;
    }
    lVar14 = *(long *)puVar8;
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar12 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&plStack_a0,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_80,uVar13,uVar1);
    if (plStack_80 == (long *)0x0) break;
    uVar13 = (**(code **)(*plStack_80 + 0x198))(plStack_80,*(undefined8 *)(*plStack_80 + 0x1a0));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_AddressableAssets_Addressables__LoadAssetAsync___Il2CppFullySharedGenericType__2595bbc
              (&plStack_80,uVar13,*(undefined8 *)puVar4);
    lVar12 = *(long *)(param_1 + 0x1b8);
    uStack_b8 = uStack_78;
    plStack_c0 = plStack_80;
    uStack_b0 = uStack_70;
    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___op_Implicit_27c9920
              (&uStack_108,&plStack_80,*(undefined8 *)puVar5);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    uStack_e0 = uStack_f8;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_118 = uStack_100;
    uStack_120 = uStack_108;
    uStack_110 = uStack_f8;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (lVar12,&uStack_120,*(undefined8 *)puVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

