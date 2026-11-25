/* IL2CPP: MainMenuCarrier$$ApplyBlockMotion
void MainMenuCarrier__ApplyBlockMotion (MainMenuCarrier_o* __this, UnityEngine_Transform_o* blockT, UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MainMenuCarrier$$ApplyBlockMotion
   void MainMenuCarrier__ApplyBlockMotion (MainMenuCarrier_o* __this, UnityEngine_Transform_o*
   blockT, UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method); */

void MainMenuCarrier__ApplyBlockMotion_24b69c0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b697c with catch @ 025b69c4
                       try { // try from 025b69c4 to 026b69f3 has its CatchHandler @ 025b682c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6914 with catch @ 025b69c8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b68d8 with catch @ 025b69cc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6930 with catch @ 025b69d0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6908 with catch @ 025b69d4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6978 with catch @ 025b69d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b68a0 with catch @ 025b69d8
                        */
                    /* try { // try from 025b69f4 to 026b69f7 has its CatchHandler @ 025b69fc */
                    /* catch() { ... } // from try @ 025b69f4 with catch @ 025b69fc */
                    /* try { // try from 025b6a00 to 026b6a07 has its CatchHandler @ 025b6a10 */
  if ((bRam0000000004f4bb9e & 1) == 0) {
                    /* try { // try from 025b6a08 to 026b6a13 has its CatchHandler @ 025b682c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b6a00 with catch @ 025b6a10
                        */
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c23f8);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4bb9e = 1;
  }
  puVar3 = PTR_DAT_049c23f8;
  puVar2 = PTR_DAT_049c1680;
  puVar1 = PTR_DAT_049b6110;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_7 + 0xa0) != 0) {
    UnityEngine_Transform__get_worldToLocalMatrix_3c2e170(&uStack_f0,*(long *)(param_7 + 0xa0),0);
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uVar4 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c(param_1,param_2,param_3,&uStack_a0,0);
    uVar5 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c(param_4,param_5,param_6,&uStack_a0,0);
    auStack_b0 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar4,param_2,param_3,uVar5,param_5,param_6,_UNK_013aa4b8,0);
    auVar6 = FUN_024f4e50(auStack_b0,3,*(undefined8 *)puVar2);
    auVar6 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26713e0
                       (auVar6._0_8_,auVar6._8_8_,param_8,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__AddTo_24d83f4(auVar6._0_8_,auVar6._8_8_ & 0xffffffff,param_7,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

