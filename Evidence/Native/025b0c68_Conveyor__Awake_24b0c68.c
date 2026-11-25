/* IL2CPP: Conveyor$$Awake
void Conveyor__Awake (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$Awake
   void Conveyor__Awake (Conveyor_o* __this, const MethodInfo* method); */

void Conveyor__Awake_24b0c68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c6ac0;
  if ((bRam0000000004f4bb5e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ac0);
    FUN_021f03f8(PTR_DAT_049c1930);
    FUN_021f03f8(PTR_DAT_049c1948);
    bRam0000000004f4bb5e = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_78,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 200) = uStack_78;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 200));
  puVar2 = PTR_DAT_049c1948;
  puVar1 = PTR_DAT_049c1930;
  if (*(long *)(param_1 + 0x80) != 0) {
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_78,*(long *)(param_1 + 0x80),0);
    uStack_30 = uStack_58;
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_a0,&uStack_50,*(undefined8 *)puVar1);
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_30 = uStack_80;
    uVar3 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_50,0);
    *(undefined8 *)(param_1 + 0x100) = uVar3;
    thunk_FUN_021f190c(param_1 + 0x100,uVar3);
    uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    thunk_FUN_021f190c(param_1 + 0x108,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

