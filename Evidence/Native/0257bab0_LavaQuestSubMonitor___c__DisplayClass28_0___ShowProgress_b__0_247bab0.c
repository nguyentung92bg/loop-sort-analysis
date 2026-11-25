/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass28_0$$<ShowProgress>b__0
void LavaQuestSubMonitor___c__DisplayClass28_0___ShowProgress_b__0 (LavaQuestSubMonitor___c__DisplayClass28_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass28_0$$<ShowProgress>b__0
   void LavaQuestSubMonitor___c__DisplayClass28_0___ShowProgress_b__0
   (LavaQuestSubMonitor___c__DisplayClass28_0_o* __this, const MethodInfo* method); */

void LavaQuestSubMonitor___c__DisplayClass28_0___ShowProgress_b__0_247bab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float in_s3;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if ((bRam0000000004f4b9e6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d50);
    FUN_021f03f8(PTR_DAT_049c45a0);
    FUN_021f03f8(PTR_DAT_049c1358);
    bRam0000000004f4b9e6 = 1;
  }
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (uVar5,0xbd13b84d,0);
  if ((lVar3 != 0) &&
     (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0), puVar2 = PTR_DAT_049c45a0,
     puVar1 = PTR_DAT_049c1358, lVar3 != 0)) {
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar3,0);
    auStack_48 = LitMotion_LMotion__Create_2ea9f9c(0,-33.0 - in_s3,0x3fc00000,0);
    auVar7 = FUN_024f4e50(auStack_48,4,*(undefined8 *)puVar1);
    auVar7 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26671dc
                       (auVar7._0_8_,auVar7._8_8_,lVar3,*(undefined8 *)puVar2);
    lVar6 = *(long *)(lVar6 + 0x98);
    if (lVar6 != 0) {
      uVar4 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar6,0);
      LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                (auVar7._0_8_,auVar7._8_8_ & 0xffffffff,uVar4,0);
      lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (uVar5,0x360741d5,0);
      puVar1 = PTR_DAT_049c2d50;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (*(long *)(lVar6 + 0x20),&lStack_38,*(undefined8 *)PTR_DAT_049c2d50);
        if (lStack_38 != 0) {
          AssetKits_ParticleImage_ParticleImage__Play_32a75e0(lStack_38,0);
          lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (uVar5,0x13647c3b,0);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (*(long *)(lVar6 + 0x20),&lStack_38,*(undefined8 *)puVar1);
            if (lStack_38 != 0) {
              AssetKits_ParticleImage_ParticleImage__Play_32a75e0(lStack_38,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

