/* IL2CPP: RocketSystem$$FindTargetHiddenBlocks
void RocketSystem__FindTargetHiddenBlocks (RocketSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$FindTargetHiddenBlocks
   void RocketSystem__FindTargetHiddenBlocks (RocketSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void RocketSystem__FindTargetHiddenBlocks_24b8a70(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_28;
  
  puVar2 = PTR_DAT_049c2598;
  if ((bRam0000000004f4bba8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2588);
    FUN_021f03f8(PTR_DAT_049c2598);
    FUN_021f03f8(PTR_DAT_049c6db0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c2350);
    FUN_021f03f8(PTR_DAT_049c25e8);
    bRam0000000004f4bba8 = 1;
  }
  puVar1 = PTR_DAT_049c2588;
  auStack_40._8_8_ = 0;
  uStack_48 = 0;
  auStack_40._0_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c25e8;
  auStack_40 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&uStack_48,*(undefined8 *)puVar1);
  RocketSystem__CollectHiddenBlockGroups_24b8c18(param_1,uStack_48);
  uVar3 = uStack_48;
  if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
            (uVar3,&lStack_28,*(undefined8 *)PTR_DAT_049c6db0);
  if (lStack_28 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (param_2,lStack_28,*(undefined8 *)PTR_DAT_049c2350);
  }
  RocketSystem__ReleaseGroups_24b8d60(uStack_48);
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (auStack_40,*(undefined8 *)puVar2);
  return;
}

