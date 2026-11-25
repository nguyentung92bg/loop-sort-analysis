/* IL2CPP: ConveyorSpeedSystem$$OnAwake
void ConveyorSpeedSystem__OnAwake (ConveyorSpeedSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$OnAwake
   void ConveyorSpeedSystem__OnAwake (ConveyorSpeedSystem_o* __this, const MethodInfo* method); */

void ConveyorSpeedSystem__OnAwake_24b567c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
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
  
  if ((bRam0000000004f4bb8c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2228);
    FUN_021f03f8(PTR_DAT_049c1860);
                    /* try { // try from 025b56c0 to 026b571b has its CatchHandler @ 025b5da0 */
    FUN_021f03f8(PTR_DAT_049c6ca0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c1940);
    FUN_021f03f8(PTR_DAT_049c47e8);
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4bb8c = 1;
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
                    /* try { // try from 025b5720 to 026b577b has its CatchHandler @ 025b5d9c */
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_88,*(long *)(param_1 + 0x18),0);
    uStack_40 = uStack_68;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_b0,&uStack_60,*(undefined8 *)puVar3);
    uStack_40 = uStack_90;
                    /* try { // try from 025b5780 to 026b57db has its CatchHandler @ 025b5d98 */
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
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    thunk_FUN_021f190c();
    uVar4 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
                    /* try { // try from 025b57e0 to 026b583b has its CatchHandler @ 025b5d94 */
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar4);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c1940);
      *(undefined8 *)(param_1 + 0x60) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x60),uVar4);
      puVar2 = PTR_DAT_049c6ca0;
      puVar1 = PTR_DAT_049b5310;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                          (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c47e8);
                    /* try { // try from 025b5840 to 026b589b has its CatchHandler @ 025b5d90 */
        *(undefined8 *)(param_1 + 0x68) = uVar4;
        thunk_FUN_021f190c();
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar1;
        }
        uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x998);
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x9a0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar2);
        }
        uVar7 = PlayerPrefsFloat__op_Implicit_3f0e0e4(uVar4,uVar6,0);
        *(undefined4 *)(param_1 + 0x70) = uVar7;
                    /* try { // try from 025b58a0 to 026b58fb has its CatchHandler @ 025b5d8c */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

