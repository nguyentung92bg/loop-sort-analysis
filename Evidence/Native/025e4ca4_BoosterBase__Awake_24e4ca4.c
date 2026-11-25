/* IL2CPP: BoosterBase$$Awake
void BoosterBase__Awake (BoosterBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBase$$Awake
   void BoosterBase__Awake (BoosterBase_o* __this, const MethodInfo* method); */

void BoosterBase__Awake_24e4ca4(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c7aa0;
  if ((bRam0000000004f4bc7a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7aa0);
    bRam0000000004f4bc7a = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xb0) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb0));
  return;
}

