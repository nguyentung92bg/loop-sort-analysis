/* IL2CPP: HomeNavigationMonitor$$.ctor
void HomeNavigationMonitor___ctor (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$.ctor
   void HomeNavigationMonitor___ctor (HomeNavigationMonitor_o* __this, const MethodInfo* method); */

void HomeNavigationMonitor___ctor_244b9f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_049c45e0;
  puVar2 = PTR_DAT_049c45d8;
  puVar1 = PTR_DAT_049c45d0;
  if ((bRam0000000004f4b894 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45e8);
    FUN_021f03f8(PTR_DAT_049c45f0);
    FUN_021f03f8(PTR_DAT_049c45d8);
    FUN_021f03f8(PTR_DAT_049c16d0);
    FUN_021f03f8(PTR_DAT_049c45d0);
    FUN_021f03f8(PTR_DAT_049c16c8);
    FUN_021f03f8(PTR_DAT_049bb8b8);
    FUN_021f03f8(PTR_DAT_049bb8c0);
    FUN_021f03f8(PTR_DAT_049c45f8);
    FUN_021f03f8(PTR_DAT_049c3e50);
    FUN_021f03f8(PTR_DAT_049c3e58);
    FUN_021f03f8(PTR_DAT_049c4600);
    FUN_021f03f8(PTR_DAT_049c45e0);
    FUN_021f03f8(PTR_DAT_049c4608);
    bRam0000000004f4b894 = 1;
  }
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar10,*(undefined8 *)puVar2);
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = System_Type__GetTypeFromHandle_310ebfc(uVar11,0);
  puVar9 = PTR_DAT_049c4608;
  puVar8 = PTR_DAT_049c4600;
  puVar7 = PTR_DAT_049c45f8;
  puVar6 = PTR_DAT_049c45f0;
  puVar5 = PTR_DAT_049c45e8;
  puVar4 = PTR_DAT_049c3e58;
  puVar3 = PTR_DAT_049c3e50;
  puVar2 = PTR_DAT_049c16d0;
  puVar1 = PTR_DAT_049c16c8;
  if (lVar10 != 0) {
    uStack_64 = 0x6def0a4a;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar11,&uStack_64,*(undefined8 *)PTR_DAT_049c45f0);
    uVar11 = System_Type__GetTypeFromHandle_310ebfc(*(undefined8 *)puVar8,0);
    uStack_64 = 0xb0a9d71c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar11,&uStack_64,*(undefined8 *)puVar6);
    uVar11 = System_Type__GetTypeFromHandle_310ebfc(*(undefined8 *)puVar7,0);
    uStack_64 = 0x544bafab;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar11,&uStack_64,*(undefined8 *)puVar6);
    uVar11 = System_Type__GetTypeFromHandle_310ebfc(*(undefined8 *)puVar9,0);
    uStack_64 = 0x49d53644;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar11,&uStack_64,*(undefined8 *)puVar6);
    uVar11 = System_Type__GetTypeFromHandle_310ebfc(*(undefined8 *)puVar5,0);
    uStack_64 = 0x46a568c0;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar11,&uStack_64,*(undefined8 *)puVar6);
    *(long *)(param_1 + 0x98) = lVar10;
    thunk_FUN_021f190c((long *)(param_1 + 0x98),lVar10);
    uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (uVar11,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 200) = uVar11;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 200),uVar11);
    uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (uVar11,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0xd0) = uVar11;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd0),uVar11);
    uVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bb8c0);
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
              (uVar11,*(undefined8 *)PTR_DAT_049bb8b8);
    *(undefined8 *)(param_1 + 0xd8) = uVar11;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd8),uVar11);
    MonitorBase___ctor_256d130(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

