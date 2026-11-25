/* IL2CPP: RankingMonitor$$HandleClaim
Cysharp_Threading_Tasks_UniTaskVoid_o RankingMonitor__HandleClaim (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$HandleClaim
   Cysharp_Threading_Tasks_UniTaskVoid_o RankingMonitor__HandleClaim (RankingMonitor_o* __this,
   const MethodInfo* method); */

undefined8 RankingMonitor__HandleClaim_2458c68(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  undefined8 auStack_c8 [21];
  
  puVar1 = PTR_DAT_049c4ba0;
  if ((bRam0000000004f4b908 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ba0);
    bRam0000000004f4b908 = 1;
  }
  func_0x04608670(auStack_d8,0,0xb8);
  thunk_FUN_021f190c(auStack_d0,0);
  auStack_c8[0] = param_1;
  thunk_FUN_021f190c(auStack_c8,param_1);
  auStack_d8[0] = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            (auStack_d0,auStack_d8,*(undefined8 *)puVar1);
  return 0;
}

