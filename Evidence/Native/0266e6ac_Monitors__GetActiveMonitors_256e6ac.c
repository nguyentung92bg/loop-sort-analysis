/* IL2CPP: Monitors$$GetActiveMonitors
UnityEngine_Pool_PooledObject_List_MonitorBase___o Monitors__GetActiveMonitors (Monitors_o* __this, System_Collections_Generic_List_MonitorBase__o** activeMonitors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$GetActiveMonitors
   UnityEngine_Pool_PooledObject_List_MonitorBase___o Monitors__GetActiveMonitors (Monitors_o*
   __this, System_Collections_Generic_List_MonitorBase__o** activeMonitors, const MethodInfo*
   method); */

undefined1  [16] Monitors__GetActiveMonitors_256e6ac(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049cbfe8;
  if ((bRam0000000004f4c1af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbff0);
    FUN_021f03f8(PTR_DAT_049cbfe8);
    FUN_021f03f8(PTR_DAT_049cbff8);
    bRam0000000004f4c1af = 1;
  }
  puVar2 = PTR_DAT_049cbff0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar3 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                     (param_2,*(undefined8 *)puVar2);
  if (*param_2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (*param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049cbff8);
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

