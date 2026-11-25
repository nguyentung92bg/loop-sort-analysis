/* IL2CPP: MetalBlock$$Awake
void MetalBlock__Awake (MetalBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlock$$Awake
   void MetalBlock__Awake (MetalBlock_o* __this, const MethodInfo* method); */

void MetalBlock__Awake_23ec4d4(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c1c88;
  if ((bRam0000000004f4b62a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c88);
    bRam0000000004f4b62a = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 200) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 200));
  return;
}

