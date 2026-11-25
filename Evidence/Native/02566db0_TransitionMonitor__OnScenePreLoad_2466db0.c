/* IL2CPP: TransitionMonitor$$OnScenePreLoad
Cysharp_Threading_Tasks_UniTask_o TransitionMonitor__OnScenePreLoad (TransitionMonitor_o* __this, ScenePreLoadMessage_o m, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor$$OnScenePreLoad
   Cysharp_Threading_Tasks_UniTask_o TransitionMonitor__OnScenePreLoad (TransitionMonitor_o* __this,
   ScenePreLoadMessage_o m, System_Threading_CancellationToken_o token, const MethodInfo* method);
    */

undefined8 TransitionMonitor__OnScenePreLoad_2466db0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort auStack_24 [2];
  
  if ((bRam0000000004f4b96c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5378);
    bRam0000000004f4b96c = 1;
  }
  if (param_2 == 6) {
    if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
    if ((lVar1 != 0) &&
       (FUN_0235c744(lVar1,auStack_24,*(undefined8 *)PTR_DAT_049c5378),
       (auStack_24[0] >> 8 & 1) != 0)) {
      return 0;
    }
  }
  uVar2 = TransitionMonitor__Close_2466cf8(param_1,param_3);
  return uVar2;
}

