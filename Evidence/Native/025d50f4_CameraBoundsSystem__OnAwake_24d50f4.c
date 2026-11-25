/* IL2CPP: CameraBoundsSystem$$OnAwake
void CameraBoundsSystem__OnAwake (CameraBoundsSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CameraBoundsSystem$$OnAwake
   void CameraBoundsSystem__OnAwake (CameraBoundsSystem_o* __this, const MethodInfo* method); */

void CameraBoundsSystem__OnAwake_24d50f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  if ((bRam0000000004f4bc34 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2228);
    FUN_021f03f8(PTR_DAT_049c1860);
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4bc34 = 1;
  }
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  puVar3 = PTR_DAT_049c2228;
  puVar2 = PTR_DAT_049c1860;
  puVar1 = PTR_DAT_049c1418;
  if (*(long *)(param_1 + 0x18) != 0) {
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_88,*(long *)(param_1 + 0x18),0);
    uStack_40 = uStack_68;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_b0,&uStack_60,*(undefined8 *)puVar3);
    uStack_40 = uStack_90;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_d8,&uStack_60,*(undefined8 *)puVar2);
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    uStack_48 = uStack_c0;
    uStack_50 = uStack_c8;
    uStack_40 = uStack_b8;
    uVar4 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_60,0);
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
    thunk_FUN_021f190c();
    uVar4 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    thunk_FUN_021f190c();
    CameraBoundsSystem__CreateTargetGroup_24d5248(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

