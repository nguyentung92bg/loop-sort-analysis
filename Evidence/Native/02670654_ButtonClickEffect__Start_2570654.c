/* IL2CPP: ButtonClickEffect$$Start
void ButtonClickEffect__Start (ButtonClickEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ButtonClickEffect$$Start
   void ButtonClickEffect__Start (ButtonClickEffect_o* __this, const MethodInfo* method); */

void ButtonClickEffect__Start_2570654(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cc158;
  if ((bRam0000000004f4c1d5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc158);
    FUN_021f03f8(PTR_DAT_049cc160);
    FUN_021f03f8(PTR_DAT_049cc168);
    FUN_021f03f8(PTR_DAT_049bcdb0);
    FUN_021f03f8(PTR_DAT_049cc170);
    FUN_021f03f8(PTR_DAT_049bcdd0);
    bRam0000000004f4c1d5 = 1;
  }
  puVar3 = PTR_DAT_049cc168;
  puVar2 = PTR_DAT_049cc160;
  if (*(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049bcdb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bcdd0);
    UnityEngine_EventSystems_PointerEventData___ctor_3ef2ef8(uVar5,uVar4,0);
    puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *puVar6 = uVar5;
    thunk_FUN_021f190c(puVar6,uVar5);
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_38,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uStack_38;
  thunk_FUN_021f190c();
  UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
            (param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
              (*(long *)(param_1 + 0x50),0,*(undefined8 *)PTR_DAT_049cc170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

