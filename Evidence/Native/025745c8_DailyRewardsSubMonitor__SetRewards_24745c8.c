/* IL2CPP: DailyRewardsSubMonitor$$SetRewards
void DailyRewardsSubMonitor__SetRewards (DailyRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$SetRewards
   void DailyRewardsSubMonitor__SetRewards (DailyRewardsSubMonitor_o* __this, const MethodInfo*
   method); */

void DailyRewardsSubMonitor__SetRewards_24745c8(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b9bd & 1) == 0) {
                    /* try { // try from 025745f0 to 02674603 has its CatchHandler @ 0257499c */
    FUN_021f03f8(PTR_DAT_049c56c8);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
                    /* try { // try from 02574610 to 0267461f has its CatchHandler @ 025749a0 */
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c3e88);
    bRam0000000004f4b9bd = 1;
  }
  puVar6 = PTR_DAT_049c56c8;
  puVar5 = PTR_DAT_049c3e80;
  puVar4 = PTR_DAT_049c3e78;
  puVar3 = PTR_DAT_049c3e70;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02574644 to 02674653 has its CatchHandler @ 02574978 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x60),&uStack_78,*(undefined8 *)PTR_DAT_049c3e88);
  uStack_50 = uStack_68;
                    /* try { // try from 02574680 to 02674693 has its CatchHandler @ 02574960 */
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 02574750 to 02674763 has its CatchHandler @ 0257496c */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
      return;
    }
    lVar12 = *(long *)puVar5;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 025746b0 to 026746c3 has its CatchHandler @ 02574988 */
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 025746dc to 026746eb has its CatchHandler @ 02574994 */
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 02574700 to 02674713 has its CatchHandler @ 02574980 */
    func_0x04608620(&uStack_48,uVar10,uVar1);
    uVar10 = uStack_48;
    if (*(long *)(param_1 + 0x40) == 0) break;
    uVar11 = DailyRewards__GetRandomReward_2517a2c(*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02574728 to 0267472f has its CatchHandler @ 0257498c */
    uStack_48 = uVar11;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0x68),uVar10,&uStack_48,*(undefined8 *)puVar6);
    DailyRewardsSubMonitor__CreateItemView_24747f0(param_1,uVar10,uVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

