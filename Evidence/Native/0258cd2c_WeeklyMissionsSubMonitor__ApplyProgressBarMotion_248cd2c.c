/* IL2CPP: WeeklyMissionsSubMonitor$$ApplyProgressBarMotion
void WeeklyMissionsSubMonitor__ApplyProgressBarMotion (WeeklyMissionsSubMonitor_o* __this, bool withMotion, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$ApplyProgressBarMotion
   void WeeklyMissionsSubMonitor__ApplyProgressBarMotion (WeeklyMissionsSubMonitor_o* __this, bool
   withMotion, const MethodInfo* method); */

undefined1  [16]
WeeklyMissionsSubMonitor__ApplyProgressBarMotion_248cd2c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  if ((bRam0000000004f4ba51 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d60);
    bRam0000000004f4ba51 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    WeeklyMissions__GetProgress01_252cc0c(*(long *)(param_1 + 0x58),0);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_1,0x6d8b1339,0);
    if (lVar4 != 0) {
      lVar4 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar4,0);
      if ((param_2 & 1) == 0) {
        if (lVar4 != 0) {
          if ((bRam0000000004f5895e & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26c78,0);
            bRam0000000004f5895e = 1;
          }
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
            }
            if (pcRam0000000004f58998 == (code *)0x0) {
              pcRam0000000004f58998 = (code *)FUN_021f03bc(&UNK_013af913);
            }
            auVar7 = (*pcRam0000000004f58998)(lVar6,&stack0xffffffffffffffe8);
            return auVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else if (lVar4 != 0) {
        UnityEngine_RectTransform__get_anchorMax_3c2bd04(lVar4,0);
        auVar7 = LitMotion_LMotion__Create_2eaa148(0);
        auVar7 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                           (auVar7._0_8_,auVar7._8_8_,lVar4,*(undefined8 *)PTR_DAT_049c2d60);
        puVar1 = PTR_DAT_049e0888;
        if ((bRam0000000004f4e6cb & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b4308,auVar7._8_8_ & 0xffffffff,param_1,0);
          FUN_021f03f8(PTR_DAT_049b5190);
          FUN_021f03f8(PTR_DAT_049e0890);
          FUN_021f03f8(PTR_DAT_049e0888);
          bRam0000000004f4e6cb = 1;
        }
        uStack_38 = 0;
        lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        System_Object___ctor_3142338(lVar4,0);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = auVar7._0_8_;
          *(int *)(lVar4 + 0x18) = auVar7._8_4_;
          puVar3 = PTR_DAT_049e0890;
          puVar2 = PTR_DAT_049b5190;
          puVar1 = PTR_DAT_049b4308;
          if (param_1 != 0) {
            uStack_38 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(param_1,0);
            uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
            System_Action___ctor_306b98c(uVar5,lVar4,*(undefined8 *)puVar3,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Threading_CancellationToken__Register_3162c60(auStack_50,&uStack_38,uVar5,0,0);
            auVar7._12_4_ = 0;
            auVar7._0_12_ = *(undefined1 (*) [12])(lVar4 + 0x10);
            return auVar7;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

