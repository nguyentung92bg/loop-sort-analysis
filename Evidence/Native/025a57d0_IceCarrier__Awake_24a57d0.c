/* IL2CPP: IceCarrier$$Awake
void IceCarrier__Awake (IceCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrier$$Awake
   void IceCarrier__Awake (IceCarrier_o* __this, const MethodInfo* method); */

void IceCarrier__Awake_24a57d0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6680;
  if ((bRam0000000004f4bb0d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    bRam0000000004f4bb0d = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_4,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_4,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_4 + 0xb8) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_4 + 0xb8));
  if ((*(long *)(param_4 + 0xa0) != 0) &&
     (lVar2 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_4 + 0xa0),0), lVar2 != 0
     )) {
    uVar3 = UnityEngine_Transform__get_localPosition_3c2c388(lVar2,0);
    *(undefined4 *)(param_4 + 0xc4) = uVar3;
    *(undefined4 *)(param_4 + 200) = param_2;
    *(undefined4 *)(param_4 + 0xcc) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

