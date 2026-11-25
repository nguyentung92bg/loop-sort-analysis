/* IL2CPP: LoseLifeVariant$$Setup
void LoseLifeVariant__Setup (LoseLifeVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseLifeVariant$$Setup
   void LoseLifeVariant__Setup (LoseLifeVariant_o* __this, const MethodInfo* method); */

void LoseLifeVariant__Setup_2491174(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c5ef0;
  puVar2 = PTR_DAT_049c5ee8;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba6b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5ef0);
    FUN_021f03f8(PTR_DAT_049c5ee8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba6b = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x99f4e89d,uVar4,0);
  UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
            (param_1,&uStack_38,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58));
  return;
}

