/* IL2CPP: SandFlowSystem$$OnAwake
void SandFlowSystem__OnAwake (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$OnAwake
   void SandFlowSystem__OnAwake (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__OnAwake_24c5a70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  if ((bRam0000000004f4bbdb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1850);
    FUN_021f03f8(PTR_DAT_049c1858);
    FUN_021f03f8(PTR_DAT_049c1860);
    FUN_021f03f8(PTR_DAT_049c70d0);
    FUN_021f03f8(PTR_DAT_049c70d8);
    FUN_021f03f8(PTR_DAT_049c1868);
    bRam0000000004f4bbdb = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  puVar6 = PTR_DAT_049c70d8;
  puVar5 = PTR_DAT_049c70d0;
  puVar4 = PTR_DAT_049c1868;
  puVar3 = PTR_DAT_049c1860;
  puVar2 = PTR_DAT_049c1858;
  puVar1 = PTR_DAT_049c1850;
  if (*(long *)(param_1 + 0x18) != 0) {
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_a8,*(long *)(param_1 + 0x18),0);
    uStack_60 = uStack_88;
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_d0,&uStack_80,*(undefined8 *)puVar1);
    uStack_60 = uStack_b0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_f8,&uStack_80,*(undefined8 *)puVar3);
    uStack_60 = uStack_d8;
    uStack_78 = uStack_f0;
    uStack_80 = uStack_f8;
    uStack_68 = uStack_e0;
    uStack_70 = uStack_e8;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_120,&uStack_80,*(undefined8 *)puVar2);
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_60 = uStack_100;
    uVar7 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_80,0);
    *(undefined8 *)(param_1 + 0x170) = uVar7;
    thunk_FUN_021f190c(param_1 + 0x170,uVar7);
    uVar7 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x178) = uVar7;
    thunk_FUN_021f190c(param_1 + 0x178,uVar7);
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
    System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
              (uVar7,param_1,*(undefined8 *)puVar6,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar7;
    thunk_FUN_021f190c(param_1 + 0x2a0,uVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

