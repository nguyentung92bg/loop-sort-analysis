/* IL2CPP: ConnectivityModule$$Tick
void ConnectivityModule__Tick (ConnectivityModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectivityModule$$Tick
   void ConnectivityModule__Tick (ConnectivityModule_o* __this, const MethodInfo* method); */

void ConnectivityModule__Tick_2531620(long param_1)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4bf24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c9f50);
    bRam0000000004f4bf24 = 1;
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') &&
     (fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_3c267b0(0),
     *(float *)(param_1 + 0x20) <= fVar3)) {
    uVar2 = ConnectivityModule__IsOnlineRequired_253152c(param_1);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar1 = UnityEngine_Application__get_internetReachability_3bc8180(0);
      if (iVar1 != 0) {
        auStack_30 = ConnectivityModule__ProbeAsync_25316f8(param_1);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget___Il2CppFullySharedGenericType__2719ad0
                  (auStack_30,*(undefined8 *)PTR_DAT_049c9f50);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_3c267b0(0);
    *(float *)(param_1 + 0x20) = fVar3 + 5.0;
  }
  return;
}

