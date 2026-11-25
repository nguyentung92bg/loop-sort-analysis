/* IL2CPP: SelectBoosterSystem$$ApplyAddBlockMotion
Cysharp_Threading_Tasks_UniTask_o SelectBoosterSystem__ApplyAddBlockMotion (SelectBoosterSystem_o* __this, Block_o* block, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o toPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem$$ApplyAddBlockMotion
   Cysharp_Threading_Tasks_UniTask_o SelectBoosterSystem__ApplyAddBlockMotion
   (SelectBoosterSystem_o* __this, Block_o* block, UnityEngine_Vector3_o fromPosition,
   UnityEngine_Vector3_o toPosition, const MethodInfo* method); */

void SelectBoosterSystem__ApplyAddBlockMotion_23fbd88
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((bRam0000000004f4b67e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23d0);
    FUN_021f03f8(PTR_DAT_049c23e0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c23f8);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b67e = 1;
  }
  uStack_88 = 0;
  auStack_a0._8_8_ = 0;
  uStack_90 = 0;
  auStack_a0._0_8_ = 0;
  auVar6 = ZEXT816(0);
  if (param_8 != 0) {
    uVar4 = UnityEngine_Component__get_transform_3c18724(param_8,0);
    puVar3 = PTR_DAT_049c23f8;
    puVar2 = PTR_DAT_049c1680;
    puVar1 = PTR_DAT_049b6110;
    auVar6._8_8_ = auStack_a0._8_8_;
    auVar6._0_8_ = auStack_a0._0_8_;
    if (*(long *)(param_7 + 0x78) != 0) {
      uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_7 + 0x78),uVar4,&uStack_90,*(undefined8 *)PTR_DAT_049c23d0)
      ;
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_024f7208(uStack_90,uStack_88,0), (uVar5 & 1) != 0)) {
        FUN_024f73c0(uStack_90,uStack_88,1,0);
      }
      auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                             (param_1,param_2,param_3,param_4,param_5,param_6,_UNK_013aa62c,0);
      auVar6 = FUN_024f4e50(auStack_a0,3,*(undefined8 *)puVar2);
      auVar6 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26713e0
                         (auVar6._0_8_,auVar6._8_8_,uVar4,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar7 = Extensions__AddTo_24d83f4(auVar6._0_8_,auVar6._8_8_ & 0xffffffff,param_8,0);
      auVar6 = auStack_a0;
      if (*(long *)(param_7 + 0x78) != 0) {
        uStack_78 = auVar7._8_4_;
        uStack_80 = auVar7._0_8_;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_7 + 0x78),uVar4,&uStack_80,*(undefined8 *)PTR_DAT_049c23e0);
        LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                  (auVar7._0_8_,auVar7._8_8_ & 0xffffffff,*(undefined8 *)(param_7 + 0x20),0);
        return;
      }
    }
  }
  auStack_a0 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

