/* IL2CPP: FulfillRewardMonitor.<>c__DisplayClass30_0$$<ApplyElementMoveMotion>b__0
void FulfillRewardMonitor___c__DisplayClass30_0___ApplyElementMoveMotion_b__0 (FulfillRewardMonitor___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillRewardMonitor.<>c__DisplayClass30_0$$<ApplyElementMoveMotion>b__0
   void FulfillRewardMonitor___c__DisplayClass30_0___ApplyElementMoveMotion_b__0
   (FulfillRewardMonitor___c__DisplayClass30_0_o* __this, const MethodInfo* method); */

void FulfillRewardMonitor___c__DisplayClass30_0___ApplyElementMoveMotion_b__0_2441e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b84f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c1f88);
    FUN_021f03f8(PTR_DAT_049c1f90);
    FUN_021f03f8(PTR_DAT_049c3ef8);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b84f = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar7 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0), auVar7 = ZEXT816(0), lVar6 != 0)) {
    EconomyModule__ContinueUpdateFor_25343ac(lVar6,*(undefined4 *)(param_1 + 0x18),0);
    auVar7._8_8_ = auStack_50._8_8_;
    auVar7._0_8_ = auStack_50._0_8_;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0),
       auVar7._8_8_ = auStack_50._8_8_, auVar7._0_8_ = auStack_50._0_8_, lVar6 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
      auVar7._8_8_ = auStack_50._8_8_;
      auVar7._0_8_ = auStack_50._0_8_;
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                             (*(long *)(param_1 + 0x10),0x8204c370,0),
          auVar7._8_8_ = auStack_50._8_8_, auVar7._0_8_ = auStack_50._0_8_, lVar6 != 0)) &&
         (lVar6 = StatefulUI_Runtime_Core_ContainerView__AddInstance_3346aac(lVar6,0),
         auVar7._8_8_ = auStack_50._8_8_, auVar7._0_8_ = auStack_50._0_8_, lVar6 != 0)) {
        lVar6 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0);
        auVar7._8_8_ = auStack_50._8_8_;
        auVar7._0_8_ = auStack_50._0_8_;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (UnityEngine_Transform__get_position_3c2d540(*(long *)(param_1 + 0x30),0),
           puVar4 = PTR_DAT_049c2288, auVar7._8_8_ = auStack_50._8_8_,
           auVar7._0_8_ = auStack_50._0_8_, lVar6 != 0)) {
          UnityEngine_Transform__set_position_3c2d61c(lVar6,0);
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          puVar5 = PTR_DAT_049c3ef8;
          puVar3 = PTR_DAT_049c1f90;
          puVar2 = PTR_DAT_049c1f88;
          puVar1 = PTR_DAT_049c1f78;
          lVar6 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          auStack_50 = LitMotion_LMotion_Punch__Create_2eaa764
                                 (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                                  *(undefined4 *)(lVar6 + 0x14),_UNK_013aa62c,_UNK_013aa834,
                                  _UNK_013aa62c,_UNK_013aa62c,0);
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_021f0574();
            lVar6 = *(long *)puVar4;
          }
          auVar7 = FUN_02526574(auStack_50,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                                *(undefined8 *)puVar5);
          auVar7 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                             (auVar7._0_8_,auVar7._8_8_,1,*(undefined8 *)puVar3);
          auVar7 = LitMotion_MotionBuilderExtensions__WithDampingRatio___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688d9c
                             (0x41200000,auVar7._0_8_,auVar7._8_8_,*(undefined8 *)puVar2);
          auVar8 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                             (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)puVar1);
          auVar7 = auStack_50;
          if (*(long *)(param_1 + 0x10) != 0) {
            LitMotion_MotionHandleExtensions__AddTo_2eacb44
                      (auVar8._0_8_,auVar8._8_8_ & 0xffffffff,
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),0);
            return;
          }
        }
      }
    }
  }
  auStack_50 = auVar7;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

