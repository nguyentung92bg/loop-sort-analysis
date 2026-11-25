/* IL2CPP: VaultCarrier$$OnRent
void VaultCarrier__OnRent (VaultCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VaultCarrier$$OnRent
   void VaultCarrier__OnRent (VaultCarrier_o* __this, const MethodInfo* method); */

void VaultCarrier__OnRent_24af9bc(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6a18;
  if ((bRam0000000004f4bb52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c6a18);
    bRam0000000004f4bb52 = 1;
  }
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar1);
  if (*(long *)(param_1 + 0xb8) == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6680);
    *(undefined8 *)(param_1 + 0xb8) = uStack_28;
    thunk_FUN_021f190c((long *)(param_1 + 0xb8));
  }
  return;
}

