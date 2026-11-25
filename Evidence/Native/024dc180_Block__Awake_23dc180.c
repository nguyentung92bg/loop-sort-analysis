/* IL2CPP: Block$$Awake
void Block__Awake (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$Awake
   void Block__Awake (Block_o* __this, const MethodInfo* method); */

void Block__Awake_23dc180(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_049c1380;
  puVar3 = PTR_DAT_049be418;
  puVar2 = PTR_DAT_049bdd50;
  puVar1 = PTR_DAT_049bdd48;
  if ((bRam0000000004f4b5b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bdd48);
    FUN_021f03f8(PTR_DAT_049bdd50);
    FUN_021f03f8(PTR_DAT_049be418);
    FUN_021f03f8(PTR_DAT_049c1380);
    bRam0000000004f4b5b6 = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_38,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x108) = uStack_38;
  thunk_FUN_021f190c(param_1 + 0x108);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_38,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x138) = uStack_38;
  thunk_FUN_021f190c(param_1 + 0x138);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_38,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x140) = uStack_38;
  thunk_FUN_021f190c(param_1 + 0x140);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_38,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x148) = uStack_38;
  thunk_FUN_021f190c(param_1 + 0x148);
  return;
}

