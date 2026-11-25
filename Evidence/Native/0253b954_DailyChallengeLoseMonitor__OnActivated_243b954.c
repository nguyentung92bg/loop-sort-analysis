/* IL2CPP: DailyChallengeLoseMonitor$$OnActivated
void DailyChallengeLoseMonitor__OnActivated (DailyChallengeLoseMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeLoseMonitor$$OnActivated
   void DailyChallengeLoseMonitor__OnActivated (DailyChallengeLoseMonitor_o* __this, const
   MethodInfo* method); */

void DailyChallengeLoseMonitor__OnActivated_243b954(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_2c;
  long lStack_28;
  
  if ((bRam0000000004f4b81c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3d40);
    bRam0000000004f4b81c = 1;
  }
  uStack_2c = 0;
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0xa0),0),
     plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x8ac5d07a,uVar3,0);
    lVar4 = *(long *)(param_1 + 0xa8);
    uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (lVar4 != 0) {
      uStack_2c = DailyChallenge__GetReward_2515c98(lVar4,uVar1,0);
      uVar3 = System_Int32__ToString_30fbaa0(&uStack_2c,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x78d4e5eb,uVar3,0)
      ;
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x18),&lStack_28,
                     *(undefined8 *)PTR_DAT_049c3d40);
        if (lStack_28 != 0) {
          uVar1 = 0xbb3f3126;
          if (*(int *)(lStack_28 + 0x118) != 2) {
            uVar1 = 0x95ed1493;
          }
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

