/* IL2CPP: DailyRewardsSubMonitor$$<OnReshuffleClicked>b__19_0
void DailyRewardsSubMonitor___OnReshuffleClicked_b__19_0 (DailyRewardsSubMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$<OnReshuffleClicked>b__19_0
   void DailyRewardsSubMonitor___OnReshuffleClicked_b__19_0 (DailyRewardsSubMonitor_o* __this, bool
   watched, const MethodInfo* method); */

void DailyRewardsSubMonitor___OnReshuffleClicked_b__19_0_2475280(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b9c8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c56e0);
    bRam0000000004f4b9c8 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((param_2 & 1) != 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_049c56e0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    pcVar6 = (char *)thunk_FUN_0224e54c(param_1 + 0x78,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    if (*pcVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x84) = 1;
      lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                        (param_1,0xb4ce0c4e,0);
      if ((lVar5 != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0), lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_1 + 0x60),&uStack_48,*(undefined8 *)PTR_DAT_049c3e88);
          puVar4 = PTR_DAT_049c3e80;
          puVar3 = PTR_DAT_049c3e78;
          while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&uStack_48,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
            lVar10 = *(long *)puVar4;
            lVar8 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
            lVar5 = lVar8;
            if ((uVar2 & 1) == 0) {
              lVar5 = FUN_02229718();
              lVar8 = *(long *)(lVar10 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar8 = FUN_02229718();
            }
            uVar9 = thunk_FUN_0224e54c(&uStack_48,
                                       *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                       0x60);
            func_0x04608620(&uStack_28,uVar9,uVar1);
            DailyRewardsSubMonitor__ResetItemView_2474de4(uStack_28);
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_48,*(undefined8 *)PTR_DAT_049c3e70);
          DailyRewardsSubMonitor__SetRewards_24745c8(param_1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

