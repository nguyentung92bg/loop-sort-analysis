/* IL2CPP: Block$$OnRent
void Block__OnRent (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$OnRent
   void Block__OnRent (Block_o* __this, const MethodInfo* method); */

void Block__OnRent_23dc298(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c1390;
  puVar1 = PTR_DAT_049c1388;
  if ((bRam0000000004f4b5b7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1388);
    FUN_021f03f8(PTR_DAT_049c1390);
    bRam0000000004f4b5b7 = 1;
  }
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x150) = uStack_28;
  thunk_FUN_021f190c(param_1 + 0x150);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar2);
  return;
}

