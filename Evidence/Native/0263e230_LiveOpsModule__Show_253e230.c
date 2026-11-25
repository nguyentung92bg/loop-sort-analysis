/* IL2CPP: LiveOpsModule$$Show
Cysharp_Threading_Tasks_UniTask_StatefulComponent__o LiveOpsModule__Show (LiveOpsModule_o* __this, int32_t liveOps, int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$Show
   Cysharp_Threading_Tasks_UniTask_StatefulComponent__o LiveOpsModule__Show (LiveOpsModule_o*
   __this, int32_t liveOps, int32_t trigger, const MethodInfo* method); */

void LiveOpsModule__Show_253e230(undefined8 *param_1,long param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c010 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9160);
    bRam0000000004f4c010 = 1;
  }
  uVar1 = LiveOpsDevFilter__IsAllowed_2522614(param_3,0);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((param_4 == 1) ||
       (uVar1 = LiveOpsModule__IsJoined_2546cc0(param_2,param_3), (uVar1 & 1) != 0)) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_0263e308;
      AnalyticsModule__LiveOpsImpressions_254055c(*(long *)(param_2 + 0x10),param_3,param_4);
    }
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar2 = Monitors__Get_object__26889d0
                          (*(long *)(param_2 + 0x20),*(undefined8 *)PTR_DAT_049c9160), lVar2 == 0))
    {
LAB_0263e308:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0263e2cc to 0273e38f has its CatchHandler @ 0263e2cc
                       catch() { ... } // from try @ 0263e2cc with catch @ 0263e2cc
                       catch() { ... } // from try @ 0263e594 with catch @ 0263e2cc
                       catch() { ... } // from try @ 0263e5ec with catch @ 0263e2cc
                       catch() { ... } // from try @ 0263e65c with catch @ 0263e2cc
                       catch() { ... } // from try @ 0263e6e0 with catch @ 0263e2cc */
    LiveOpsMonitor__Show_244d848(&uStack_48,lVar2,param_3,0);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}

