/* IL2CPP: BattlePassSubMonitor$$ToPayouts
System_Collections_Generic_List_FulfillPayout__o* BattlePassSubMonitor__ToPayouts (System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$ToPayouts
   System_Collections_Generic_List_FulfillPayout__o* BattlePassSubMonitor__ToPayouts
   (System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, const MethodInfo*
   method); */

long BattlePassSubMonitor__ToPayouts_246ee78(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  double dStack_58;
  
  if ((bRam0000000004f4b997 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5528);
    FUN_021f03f8(PTR_DAT_049c5530);
    FUN_021f03f8(PTR_DAT_049c5538);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049c5540);
    FUN_021f03f8(PTR_DAT_049c4008);
    FUN_021f03f8(PTR_DAT_049c5508);
    FUN_021f03f8(PTR_DAT_049b5380);
    bRam0000000004f4b997 = 1;
  }
  puVar8 = PTR_DAT_049c5540;
  puVar7 = PTR_DAT_049c5538;
  puVar6 = PTR_DAT_049c5530;
  puVar5 = PTR_DAT_049c5528;
  puVar4 = PTR_DAT_049c4008;
  puVar3 = PTR_DAT_049b5390;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5380);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
            (lVar9,uVar1,*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_1,&uStack_78,*(undefined8 *)puVar8);
  while( true ) {
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_78,*(undefined8 *)puVar6);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_78,*(undefined8 *)puVar5);
      return lVar9;
    }
    lVar14 = *(long *)puVar7;
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
    uVar13 = thunk_FUN_0224e54c(&uStack_78,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_60,uVar13,uVar1);
    if (lVar9 == 0) break;
    dStack_58 = (double)(int)(uStack_60 >> 0x20);
    uStack_60 = uStack_60 & 0xffffffff;
    FUN_02333498(lVar9,&uStack_60,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

