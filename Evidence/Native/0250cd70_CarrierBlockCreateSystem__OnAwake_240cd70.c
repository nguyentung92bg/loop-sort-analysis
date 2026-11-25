/* IL2CPP: CarrierBlockCreateSystem$$OnAwake
void CarrierBlockCreateSystem__OnAwake (CarrierBlockCreateSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierBlockCreateSystem$$OnAwake
   void CarrierBlockCreateSystem__OnAwake (CarrierBlockCreateSystem_o* __this, const MethodInfo*
   method); */

void CarrierBlockCreateSystem__OnAwake_240cd70(long param_1)

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
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250cd14 with catch @ 0250cd70
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250cd68 with catch @ 0250cd74
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250cd38 with catch @ 0250cd78
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250cd18 with catch @ 0250cd7c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250cc8c with catch @ 0250cd80
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0250ccac with catch @ 0250cd84
                        */
  if ((bRam0000000004f4b6fc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2228);
                    /* try { // try from 0250cda0 to 0260cda3 has its CatchHandler @ 0250cdbc */
                    /* try { // try from 0250cda4 to 0260cdbf has its CatchHandler @ 0250cbc0 */
    FUN_021f03f8(PTR_DAT_049c1860);
    FUN_021f03f8(PTR_DAT_049c1940);
                    /* catch() { ... } // from try @ 0250cda0 with catch @ 0250cdbc */
                    /* try { // try from 0250cdc0 to 0260cdc7 has its CatchHandler @ 0250cdd0 */
    FUN_021f03f8(PTR_DAT_049c1418);
                    /* try { // try from 0250cdc8 to 0260cdd3 has its CatchHandler @ 0250cbc0 */
    bRam0000000004f4b6fc = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0250cdc0 with catch @ 0250cdd0
                        */
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
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    thunk_FUN_021f190c();
    uVar4 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 200) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 200),uVar4);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c1940);
      *(undefined8 *)(param_1 + 0xd0) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd0),uVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

