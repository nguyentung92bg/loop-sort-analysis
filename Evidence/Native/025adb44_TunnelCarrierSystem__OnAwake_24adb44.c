/* IL2CPP: TunnelCarrierSystem$$OnAwake
void TunnelCarrierSystem__OnAwake (TunnelCarrierSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnAwake
   void TunnelCarrierSystem__OnAwake (TunnelCarrierSystem_o* __this, const MethodInfo* method); */

void TunnelCarrierSystem__OnAwake_24adb44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  
  puVar2 = PTR_DAT_049c69a0;
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4bb49 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69a8);
    FUN_021f03f8(PTR_DAT_049c1418);
    FUN_021f03f8(PTR_DAT_049c69a0);
    bRam0000000004f4bb49 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_021f190c();
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  thunk_FUN_021f190c();
  puVar1 = PTR_DAT_049c69a8;
  if (*(long *)(param_1 + 0x18) != 0) {
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_88,*(long *)(param_1 + 0x18),0);
    uStack_40 = uStack_68;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_b0,&uStack_60,*(undefined8 *)puVar1);
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_40 = uStack_90;
    uVar3 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_60,0);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x70),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

