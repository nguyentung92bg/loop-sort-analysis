/* IL2CPP: TransitionMonitor$$Awake
void TransitionMonitor__Awake (TransitionMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor$$Awake
   void TransitionMonitor__Awake (TransitionMonitor_o* __this, const MethodInfo* method); */

void TransitionMonitor__Awake_2466938(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c5320;
  puVar1 = PTR_DAT_049c2d48;
  if ((bRam0000000004f4b968 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5320);
    FUN_021f03f8(PTR_DAT_049c2d48);
    bRam0000000004f4b968 = 1;
  }
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
            (param_1,&uStack_28,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xd0) = uStack_28;
  thunk_FUN_021f190c();
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xd8) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd8));
  return;
}

