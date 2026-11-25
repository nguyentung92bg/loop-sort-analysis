/* IL2CPP: BattlePassSubMonitor$$CreateProgressRewardElement
void BattlePassSubMonitor__CreateProgressRewardElement (BattlePassSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, UnityEngine_Sprite_o* chestSprite, bool forcePreview, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$CreateProgressRewardElement
   void BattlePassSubMonitor__CreateProgressRewardElement (BattlePassSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view,
   System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, UnityEngine_Sprite_o*
   chestSprite, bool forcePreview, const MethodInfo* method); */

void BattlePassSubMonitor__CreateProgressRewardElement_246e6f0
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,byte param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_049c5500;
  if ((bRam0000000004f4b994 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c5508);
    FUN_021f03f8(PTR_DAT_049c5510);
    FUN_021f03f8(PTR_DAT_049c5518);
    FUN_021f03f8(PTR_DAT_049c5500);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b994 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
    puVar9 = (undefined8 *)(lVar5 + 0x18);
    *puVar9 = param_2;
    thunk_FUN_021f190c(puVar9,param_2);
    plVar11 = (long *)(lVar5 + 0x20);
    *plVar11 = param_3;
    thunk_FUN_021f190c(plVar11,param_3);
    if (*plVar11 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*plVar11,0,&uStack_68,*(undefined8 *)PTR_DAT_049c5510);
      uVar4 = uStack_64;
      uVar3 = uStack_68;
      if (*plVar11 != 0) {
        iVar1 = *(int *)(*plVar11 + 0x18);
        uVar10 = *puVar9;
        if (iVar1 < 2) {
          if ((*(long *)(param_1 + 0x60) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar6 == 0)) goto LAB_0256e96c;
          uStack_44 = uStack_68;
          GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                    (lVar6,&uStack_44,&uStack_68,*(undefined8 *)PTR_DAT_049c2d00);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                    (uVar10,0xbcdc2f95,CONCAT44(uStack_64,uStack_68),0);
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_0256e96c;
          uVar8 = *puVar9;
          uVar10 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x60),uVar3,uVar4,0);
        }
        else {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                    (uVar10,0xbcdc2f95,param_4,0);
          uVar8 = *puVar9;
          uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
        }
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (uVar8,0x9927ed9b,uVar10,0);
        lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                          (*puVar9,0x78d4e5eb,0);
        if ((lVar6 != 0) &&
           (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar7 != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1 < iVar1 | param_5 & 1,0);
          if (*(long *)(lVar6 + 0x100) != 0) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                      (*(long *)(lVar6 + 0x100),0);
            if (1 < iVar1 || (param_5 & 1) != 0) {
              lVar6 = *(long *)(lVar6 + 0x100);
              uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
              UnityEngine_Events_UnityAction___ctor_3c32934
                        (uVar10,lVar5,*(undefined8 *)PTR_DAT_049c5518,0);
              if (lVar6 == 0) goto LAB_0256e96c;
              UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar6,uVar10,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_0256e96c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

