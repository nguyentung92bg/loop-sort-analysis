/* IL2CPP: LavaQuestSubMonitor$$ApplySinkMotion
void LavaQuestSubMonitor__ApplySinkMotion (LavaQuestSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$ApplySinkMotion
   void LavaQuestSubMonitor__ApplySinkMotion (LavaQuestSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void LavaQuestSubMonitor__ApplySinkMotion_247b250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float in_s3;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if ((bRam0000000004f4b9e6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d50);
    FUN_021f03f8(PTR_DAT_049c45a0);
    FUN_021f03f8(PTR_DAT_049c1358);
    bRam0000000004f4b9e6 = 1;
  }
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (param_2,0xbd13b84d,0);
  if ((lVar3 != 0) &&
     (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0), puVar2 = PTR_DAT_049c45a0,
     puVar1 = PTR_DAT_049c1358, lVar3 != 0)) {
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar3,0);
    auStack_48 = LitMotion_LMotion__Create_2ea9f9c(0,-33.0 - in_s3,0x3fc00000,0);
    auVar5 = FUN_024f4e50(auStack_48,4,*(undefined8 *)puVar1);
    auVar5 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26671dc
                       (auVar5._0_8_,auVar5._8_8_,lVar3,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar4 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(param_1 + 0x98),0);
      LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                (auVar5._0_8_,auVar5._8_8_ & 0xffffffff,uVar4,0);
      lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_2,0x360741d5,0);
      puVar1 = PTR_DAT_049c2d50;
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (*(long *)(lVar3 + 0x20),&lStack_38,*(undefined8 *)PTR_DAT_049c2d50);
        if (lStack_38 != 0) {
          AssetKits_ParticleImage_ParticleImage__Play_32a75e0(lStack_38,0);
          lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (param_2,0x13647c3b,0);
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (*(long *)(lVar3 + 0x20),&lStack_38,*(undefined8 *)puVar1);
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

