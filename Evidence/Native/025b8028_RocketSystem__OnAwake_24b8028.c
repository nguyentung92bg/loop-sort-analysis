/* IL2CPP: RocketSystem$$OnAwake
void RocketSystem__OnAwake (RocketSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$OnAwake
   void RocketSystem__OnAwake (RocketSystem_o* __this, const MethodInfo* method); */

void RocketSystem__OnAwake_24b8028(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4bba3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2228);
    FUN_021f03f8(PTR_DAT_049c1860);
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4bba3 = 1;
  }
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = CoreStreak__IsActive_2512d54(*(long *)(param_1 + 0x68),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_025b817c;
      Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_78,*(long *)(param_1 + 0x18),0);
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
      uStack_38 = uStack_60;
      uStack_40 = uStack_68;
      uStack_30 = uStack_58;
      Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
                (&uStack_a0,&uStack_50,*(undefined8 *)PTR_DAT_049c1860);
      uStack_48 = uStack_98;
      uStack_50 = uStack_a0;
      uStack_38 = uStack_88;
      uStack_40 = uStack_90;
      uStack_30 = uStack_80;
      Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
                (&uStack_c8,&uStack_50,*(undefined8 *)PTR_DAT_049c2228);
      uStack_48 = uStack_c0;
      uStack_50 = uStack_c8;
      uStack_38 = uStack_b0;
      uStack_40 = uStack_b8;
      uStack_30 = uStack_a8;
      uVar2 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_50,0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      thunk_FUN_021f190c();
      uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c1418);
      *(undefined8 *)(param_1 + 0x98) = uVar2;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x98),uVar2);
    }
    return;
  }
LAB_025b817c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

