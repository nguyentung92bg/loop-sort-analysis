/* IL2CPP: SwipeablePageLayout$$ApplyTransitionMotion
void SwipeablePageLayout__ApplyTransitionMotion (SwipeablePageLayout_o* __this, int32_t ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwipeablePageLayout$$ApplyTransitionMotion
   void SwipeablePageLayout__ApplyTransitionMotion (SwipeablePageLayout_o* __this, int32_t ease,
   const MethodInfo* method); */

void SwipeablePageLayout__ApplyTransitionMotion_244c26c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [16];
  long lStack_68;
  
  if ((bRam0000000004f4b89e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c0);
    FUN_021f03f8(PTR_DAT_049c45c8);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b89e = 1;
  }
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  auVar8 = ZEXT816(0);
  if (*(long *)(param_1 + 0x20) != 0) {
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x20),0);
    puVar4 = PTR_DAT_049c45c8;
    puVar3 = PTR_DAT_049c2f70;
    puVar2 = PTR_DAT_049c2d70;
    puVar1 = PTR_DAT_049bc0c8;
    lVar5 = *(long *)(param_1 + 0x18);
    auVar8 = auStack_78;
    if (lVar5 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar7) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar5,iVar7,&lStack_68,*(undefined8 *)puVar4);
        auVar8 = auStack_78;
        if ((lStack_68 == 0) ||
           (lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                              (lStack_68,0x8ac5d2f7,0), auVar8 = auStack_78, lVar5 == 0)) break;
        plVar6 = (long *)UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
        if ((plVar6 == (long *)0x0) || (*plVar6 != *(long *)puVar1)) {
          SwipeablePageLayout__GetPageTargetPosition_244c490(param_1,iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        SwipeablePageLayout__GetPageTargetPosition_244c490(param_1,iVar7);
        UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar6,0);
        auVar8 = LitMotion_LMotion__Create_2eaa148(0);
        auStack_78 = auVar8;
        auVar8 = FUN_024f4e50(auStack_78,param_2,*(undefined8 *)puVar2);
        auVar8 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                           (auVar8._0_8_,auVar8._8_8_,plVar6,*(undefined8 *)puVar3);
        LitMotion_MotionHandleExtensions__AddTo_2eacb44
                  (auVar8._0_8_,auVar8._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x20),0);
        lVar5 = *(long *)(param_1 + 0x18);
        iVar7 = iVar7 + 1;
        auVar8 = auStack_78;
      } while (lVar5 != 0);
    }
  }
  auStack_78 = auVar8;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

