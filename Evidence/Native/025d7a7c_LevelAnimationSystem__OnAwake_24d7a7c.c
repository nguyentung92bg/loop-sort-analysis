/* IL2CPP: LevelAnimationSystem$$OnAwake
void LevelAnimationSystem__OnAwake (LevelAnimationSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem$$OnAwake
   void LevelAnimationSystem__OnAwake (LevelAnimationSystem_o* __this, const MethodInfo* method); */

void LevelAnimationSystem__OnAwake_24d7a7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  if ((bRam0000000004f4bc41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2228);
    FUN_021f03f8(PTR_DAT_049c77b0);
    FUN_021f03f8(PTR_DAT_049c77b8);
    FUN_021f03f8(PTR_DAT_049c6598);
    FUN_021f03f8(PTR_DAT_049c1418);
    FUN_021f03f8(PTR_DAT_049c77c0);
    bRam0000000004f4bc41 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  puVar5 = PTR_DAT_049c77c0;
  puVar4 = PTR_DAT_049c77b8;
  puVar3 = PTR_DAT_049c77b0;
  puVar2 = PTR_DAT_049c2228;
  puVar1 = PTR_DAT_049c1418;
  if (*(long *)(param_1 + 0x18) != 0) {
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_98,*(long *)(param_1 + 0x18),0);
    uStack_50 = uStack_78;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_c0,&uStack_70,*(undefined8 *)puVar2);
    uStack_50 = uStack_a0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    Scellecs_Morpeh_FilterBuilder__Without___Il2CppFullySharedGenericStructType__25f8b30
              (&uStack_e8,&uStack_70,*(undefined8 *)puVar3);
    uStack_50 = uStack_c8;
    uStack_68 = uStack_e0;
    uStack_70 = uStack_e8;
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    Scellecs_Morpeh_FilterBuilder__Without___Il2CppFullySharedGenericStructType__25f8b30
              (&uStack_110,&uStack_70,*(undefined8 *)puVar4);
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    uVar6 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_70,0);
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0xb0) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar5);
    *(undefined8 *)(param_1 + 0xb8) = uVar6;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb8),uVar6);
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar6 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_049c6598);
      *(undefined8 *)(param_1 + 0xd0) = uVar6;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd0),uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

