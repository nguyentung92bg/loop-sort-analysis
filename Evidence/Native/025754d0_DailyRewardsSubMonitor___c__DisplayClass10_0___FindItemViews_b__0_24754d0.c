/* IL2CPP: DailyRewardsSubMonitor.<>c__DisplayClass10_0$$<FindItemViews>b__0
void DailyRewardsSubMonitor___c__DisplayClass10_0___FindItemViews_b__0 (DailyRewardsSubMonitor___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor.<>c__DisplayClass10_0$$<FindItemViews>b__0
   void DailyRewardsSubMonitor___c__DisplayClass10_0___FindItemViews_b__0
   (DailyRewardsSubMonitor___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

void DailyRewardsSubMonitor___c__DisplayClass10_0___FindItemViews_b__0_24754d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5310;
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if ((bRam0000000004f4b9bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9bf = 1;
  }
  puVar3 = PTR_DAT_049b5fc8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fa0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_40 = TimeProvider__get_Now_24f4584(0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x408,auStack_40,*(undefined8 *)puVar2);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c(lVar6,0xb4ce0c4e,0);
  if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0), lVar4 != 0))
  {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar5,0x39740faf,0);
    DailyRewardsSubMonitor__RevealView_2474a00(lVar6,uVar5);
    DailyRewardsSubMonitor__HandleMotions_2474aac(lVar6,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

