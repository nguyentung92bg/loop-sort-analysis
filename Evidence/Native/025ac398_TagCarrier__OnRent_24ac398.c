/* IL2CPP: TagCarrier$$OnRent
void TagCarrier__OnRent (TagCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$OnRent
   void TagCarrier__OnRent (TagCarrier_o* __this, const MethodInfo* method); */

void TagCarrier__OnRent_24ac398(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bb39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c6920);
    bRam0000000004f4bb39 = 1;
  }
  puVar1 = PTR_DAT_049c6920;
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  if (*(long *)(param_1 + 0xf0) == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6680);
    *(undefined8 *)(param_1 + 0xf0) = uStack_28;
    thunk_FUN_021f190c((long *)(param_1 + 0xf0));
  }
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar1);
  return;
}

