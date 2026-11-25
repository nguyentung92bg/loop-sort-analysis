/* IL2CPP: VideoRewardsSubMonitor$$.ctor
void VideoRewardsSubMonitor___ctor (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsSubMonitor$$.ctor
   void VideoRewardsSubMonitor___ctor (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
    */

long VideoRewardsSubMonitor___ctor_248b660(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_049c3e58;
  puVar1 = PTR_DAT_049c3e50;
  if ((bRam0000000004f4ba49 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e50);
    FUN_021f03f8(PTR_DAT_049c3e58);
    bRam0000000004f4ba49 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x68),uVar3);
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

