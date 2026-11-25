/* IL2CPP: DailyRewardsSubMonitor$$FindItemViews
void DailyRewardsSubMonitor__FindItemViews (DailyRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02574518) */
/* IL2CPP: DailyRewardsSubMonitor$$FindItemViews
   void DailyRewardsSubMonitor__FindItemViews (DailyRewardsSubMonitor_o* __this, const MethodInfo*
   method); */

void DailyRewardsSubMonitor__FindItemViews_24741f4(long param_1)

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
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_049c5698;
  if ((bRam0000000004f4b9bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c56a0);
    FUN_021f03f8(PTR_DAT_049c5698);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c56a8);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c56b0);
    FUN_021f03f8(PTR_DAT_049c56b8);
    FUN_021f03f8(PTR_DAT_049c56c0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b9bc = 1;
  }
  puVar4 = PTR_DAT_049c56a0;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                     (param_1,0xc80a90e6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  auStack_78 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_80,*(undefined8 *)puVar4);
  puStack_a8 = auStack_78;
  lStack_b0 = 0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType__261b044
            (lVar10,lStack_80,*(undefined8 *)PTR_DAT_049c56a8);
  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_80,&uStack_c8,*(undefined8 *)PTR_DAT_049c3e88);
  puVar9 = PTR_DAT_049c56c0;
  puVar8 = PTR_DAT_049c56b8;
  puVar7 = PTR_DAT_049c3e80;
  puVar6 = PTR_DAT_049c3e78;
  puVar5 = PTR_DAT_049c3e70;
  puVar4 = PTR_DAT_049c3e40;
  puVar3 = PTR_DAT_049b8d80;
  uStack_98 = puStack_c0;
  uStack_a0 = uStack_c8;
  uStack_90 = uStack_b8;
  puStack_c0 = &uStack_a0;
  uStack_c8 = 0;
  while( true ) {
    uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_a0,*(undefined8 *)puVar6);
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_a0,*(undefined8 *)puVar5);
      lVar10 = lStack_b0;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_a8,*(undefined8 *)PTR_DAT_049c56b0);
      if (lVar10 == 0) {
                    /* try { // try from 025744e8 to 0267450f has its CatchHandler @ 025749bc */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar10);
    }
    lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar9);
    System_Object___ctor_3142338(lVar10,0);
    if (lVar10 == 0) break;
    *(long *)(lVar10 + 0x18) = param_1;
    thunk_FUN_021f190c((long *)(lVar10 + 0x18),param_1);
    lVar15 = *(long *)puVar7;
    lVar12 = *(long *)(lVar15 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
      lVar12 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_a0,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_68,uVar14,uVar1);
    puVar16 = (undefined8 *)(lVar10 + 0x10);
    *puVar16 = uStack_68;
    thunk_FUN_021f190c(puVar16);
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_02333498(*(long *)(param_1 + 0x60),*puVar16,*(undefined8 *)puVar4);
    uVar17 = *puVar16;
    uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar14,lVar10,*(undefined8 *)puVar8,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uVar17,0x854128ce,uVar14,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

