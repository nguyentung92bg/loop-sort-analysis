/* IL2CPP: RankingMonitor$$SelectLeaderboard
void RankingMonitor__SelectLeaderboard (RankingMonitor_o* __this, System_String_o* leaderboardId, int32_t stateRole, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$SelectLeaderboard
   void RankingMonitor__SelectLeaderboard (RankingMonitor_o* __this, System_String_o* leaderboardId,
   int32_t stateRole, const MethodInfo* method); */

void RankingMonitor__SelectLeaderboard_245734c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if ((bRam0000000004f4b8f7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049c4b40);
    bRam0000000004f4b8f7 = 1;
  }
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar2,&lStack_28,*(undefined8 *)PTR_DAT_049c4b40);
    puVar1 = PTR_DAT_049b5680;
    if (lStack_28 != 0) {
      UnityEngine_MonoBehaviour__StopAllCoroutines_3c20090(lStack_28,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,param_3,0);
      *(undefined8 *)(param_1 + 0x158) = param_2;
      thunk_FUN_021f190c(param_1 + 0x158,param_2);
      *(undefined4 *)(param_1 + 0x150) = param_3;
      if (*(long *)(param_1 + 0x160) != 0) {
        System_Threading_CancellationTokenSource__Cancel_31658dc(*(long *)(param_1 + 0x160),0);
      }
      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      System_Threading_CancellationTokenSource___ctor_3165668(uVar3,0);
      *(undefined8 *)(param_1 + 0x160) = uVar3;
      thunk_FUN_021f190c(param_1 + 0x160,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

