/* IL2CPP: VideoRewardsSubMonitor$$ApplyProgress
void VideoRewardsSubMonitor__ApplyProgress (VideoRewardsSubMonitor_o* __this, int32_t watchedCount, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsSubMonitor$$ApplyProgress
   void VideoRewardsSubMonitor__ApplyProgress (VideoRewardsSubMonitor_o* __this, int32_t
   watchedCount, bool animate, const MethodInfo* method); */

void VideoRewardsSubMonitor__ApplyProgress_248b190(long param_1,int param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  if ((bRam0000000004f4ba45 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049c4660);
    FUN_021f03f8(PTR_DAT_049c2d60);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4ba45 = 1;
  }
  puVar2 = PTR_DAT_049c4660;
  lVar5 = *(long *)(param_1 + 0x68);
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  auVar10 = ZEXT816(0);
  if (lVar5 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar3) {
        lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (param_1,0x85f8a9cf,0);
        auVar10._8_8_ = auStack_68._8_8_;
        auVar10._0_8_ = auStack_68._0_8_;
        if (lVar5 == 0) break;
        UnityEngine_Behaviour__set_enabled_3c17eec(lVar5,0 < param_2,0);
        auVar10._8_8_ = auStack_68._8_8_;
        auVar10._0_8_ = auStack_68._0_8_;
        if (*(long *)(param_1 + 0x50) == 0) break;
        iVar3 = VideoRewards__get_Count_2529ad8(*(long *)(param_1 + 0x50),0);
        fVar8 = 1.0;
        if (param_2 < iVar3) {
          fVar8 = (float)VideoRewardsSubMonitor__GetMilestoneProgress_248afc0(param_1,param_2);
          fVar8 = fVar8 + _UNK_013aa87c;
        }
        lVar6 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar5,0);
        auVar10._8_8_ = auStack_68._8_8_;
        auVar10._0_8_ = auStack_68._0_8_;
        auVar1._8_8_ = auStack_68._8_8_;
        auVar1._0_8_ = auStack_68._0_8_;
        if ((param_3 & 1) == 0) {
          if (lVar6 == 0) break;
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar8,0x3f800000,lVar6,0);
        }
        else {
          if (*(int *)(param_1 + 0x70) < 1) {
            uVar9 = 0;
          }
          else {
            auVar10 = auVar1;
            if (lVar6 == 0) break;
            uVar9 = UnityEngine_RectTransform__get_anchorMax_3c2bd04(lVar6,0);
          }
          auStack_68 = LitMotion_LMotion__Create_2eaa148(uVar9,0);
          auVar10 = FUN_024f4e50(auStack_68,8,*(undefined8 *)PTR_DAT_049c2d70);
          puVar2 = PTR_DAT_049c2288;
          lVar7 = *(long *)PTR_DAT_049c2288;
          auStack_68 = auVar10;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_021f0574();
            lVar7 = *(long *)puVar2;
          }
          auVar10 = FUN_02526574(auStack_68,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60),
                                 *(undefined8 *)PTR_DAT_049c2f78);
          auVar10 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                              (auVar10._0_8_,auVar10._8_8_,lVar6,*(undefined8 *)PTR_DAT_049c2d60);
          LitMotion_MotionHandleExtensions__AddTo_2eace68
                    (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar5,0);
        }
        auVar10 = auStack_68;
        if (*(long *)(param_1 + 0x50) != 0) {
          iVar3 = VideoRewards__get_Count_2529ad8(*(long *)(param_1 + 0x50),0);
          uVar4 = 0x240695d9;
          if (param_2 < iVar3) {
            uVar4 = 0x177f7641;
          }
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar4,0);
          auVar10 = auStack_68;
          if (*(long *)(param_1 + 0x48) != 0) {
            VideoRewardsScene__SetSleeping_24697a0(*(long *)(param_1 + 0x48),iVar3 <= param_2,0);
            if (iVar3 <= param_2) {
              return;
            }
            auVar10 = auStack_68;
            if (*(long *)(param_1 + 0x50) != 0) {
              lVar5 = *(long *)(param_1 + 0x48);
              uVar4 = VideoRewards__GetReward_2529fd8(*(long *)(param_1 + 0x50),param_2,0);
              auVar10 = auStack_68;
              if (lVar5 != 0) {
                VideoRewardsScene__SetNextReward_2469718(lVar5,uVar4,0);
                return;
              }
            }
          }
        }
        break;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar5,iVar3,&uStack_58,*(undefined8 *)puVar2);
      uVar9 = uStack_58;
      uVar4 = 0x240695d9;
      if (param_2 <= iVar3) {
        uVar4 = 0x5f10e269;
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (uStack_58,uVar4,0);
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (uVar9,0x1f01e0a3,0);
      auVar10._8_8_ = auStack_68._8_8_;
      auVar10._0_8_ = auStack_68._0_8_;
      if (lVar5 == 0) break;
      lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0);
      auVar10._8_8_ = auStack_68._8_8_;
      auVar10._0_8_ = auStack_68._0_8_;
      if (lVar5 == 0) break;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar5,param_2 == iVar3,0);
      auVar10._8_8_ = auStack_68._8_8_;
      auVar10._0_8_ = auStack_68._0_8_;
      lVar5 = *(long *)(param_1 + 0x68);
      iVar3 = iVar3 + 1;
    } while (lVar5 != 0);
  }
  auStack_68 = auVar10;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

