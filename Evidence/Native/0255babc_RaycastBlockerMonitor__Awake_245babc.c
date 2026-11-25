/* IL2CPP: RaycastBlockerMonitor$$Awake
void RaycastBlockerMonitor__Awake (RaycastBlockerMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerMonitor$$Awake
   void RaycastBlockerMonitor__Awake (RaycastBlockerMonitor_o* __this, const MethodInfo* method); */

void RaycastBlockerMonitor__Awake_245babc(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c4ce8;
  if ((bRam0000000004f4b912 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ce8);
    bRam0000000004f4b912 = 1;
  }
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x98) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x98));
  return;
}

