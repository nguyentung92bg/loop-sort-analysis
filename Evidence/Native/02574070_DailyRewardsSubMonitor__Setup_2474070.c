/* IL2CPP: DailyRewardsSubMonitor$$Setup
void DailyRewardsSubMonitor__Setup (DailyRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$Setup
   void DailyRewardsSubMonitor__Setup (DailyRewardsSubMonitor_o* __this, const MethodInfo* method);
    */

void DailyRewardsSubMonitor__Setup_2474070(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  
                    /* try { // try from 02574088 to 0267408b has its CatchHandler @ 02574094 */
  if ((bRam0000000004f4b9bb & 1) == 0) {
                    /* catch() { ... } // from try @ 02574088 with catch @ 02574094 */
    FUN_021f03f8(PTR_DAT_049c5680);
                    /* try { // try from 02574098 to 0267409f has its CatchHandler @ 025740a8 */
                    /* try { // try from 025740a0 to 026740ab has its CatchHandler @ 02573ab4 */
    FUN_021f03f8(PTR_DAT_049c5688);
                    /* catch() { ... } // from try @ 02574098 with catch @ 025740a8 */
    FUN_021f03f8(PTR_DAT_049c5690);
    FUN_021f03f8(PTR_DAT_049c47e8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b9bb = 1;
  }
  SubMonitorBase__Setup_2481334(param_1,0);
  puVar6 = PTR_DAT_049c5690;
  puVar5 = PTR_DAT_049c5688;
  puVar4 = PTR_DAT_049c5680;
  puVar3 = PTR_DAT_049b8d80;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049c47e8);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  thunk_FUN_021f190c();
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar5,0);
                    /* try { // try from 02574184 to 026744e7 has its CatchHandler @ 02574184
                       catch() { ... } // from try @ 02574184 with catch @ 02574184
                       catch() { ... } // from try @ 02574848 with catch @ 02574184
                       catch() { ... } // from try @ 02574948 with catch @ 02574184
                       catch() { ... } // from try @ 025749f0 with catch @ 02574184 */
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xd7ad136f,uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x889690bc,uVar7,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  DailyRewardsSubMonitor__FindItemViews_24741f4(param_1);
  if ((bRam0000000004f4b9bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c56c8);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
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
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x60),&uStack_78,*(undefined8 *)PTR_DAT_049c3e88);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
      return;
    }
    lVar12 = *(long *)puVar5;
    lVar9 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(auStack_48,uVar7,uVar1);
    uVar7 = auStack_48[0];
    if (*(long *)(param_1 + 0x40) == 0) break;
    uVar11 = DailyRewards__GetRandomReward_2517a2c(*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_48[0] = uVar11;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0x68),uVar7,auStack_48,*(undefined8 *)puVar6);
    DailyRewardsSubMonitor__CreateItemView_24747f0(param_1,uVar7,uVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

