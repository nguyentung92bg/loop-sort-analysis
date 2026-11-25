/* IL2CPP: ConnectivityModule$$ShouldBlockLevelStart
bool ConnectivityModule__ShouldBlockLevelStart (ConnectivityModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectivityModule$$ShouldBlockLevelStart
   bool ConnectivityModule__ShouldBlockLevelStart (ConnectivityModule_o* __this, const MethodInfo*
   method); */

bool ConnectivityModule__ShouldBlockLevelStart_2531504(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = ConnectivityModule__IsOnlineRequired_253152c();
  puVar1 = PTR_DAT_049b3bf8;
  if ((uVar4 & 1) != 0) {
    if ((bRam0000000004f4bf23 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3bf8);
      bRam0000000004f4bf23 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar3 = UnityEngine_Application__get_internetReachability_3bc8180(0);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = 1 < *(int *)(param_1 + 0x18);
    }
    return bVar2;
  }
  return false;
}

