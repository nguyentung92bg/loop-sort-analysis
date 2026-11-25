/* IL2CPP: RockCarrier$$Awake
void RockCarrier__Awake (RockCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrier$$Awake
   void RockCarrier__Awake (RockCarrier_o* __this, const MethodInfo* method); */

void RockCarrier__Awake_24abd9c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6680;
  if ((bRam0000000004f4bb31 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    bRam0000000004f4bb31 = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_3,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_3,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_3 + 0xb0) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_3 + 0xb0));
  if (*(long *)(param_3 + 0xa0) != 0) {
    UnityEngine_Transform__get_localPosition_3c2c388(*(long *)(param_3 + 0xa0),0);
    *(undefined4 *)(param_3 + 0xb8) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

