/* IL2CPP: DailyChallengeSubMonitor$$CreateRewardElement
void DailyChallengeSubMonitor__CreateRewardElement (DailyChallengeSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, DailyChallengeRewardSheet_Day_o* data, float progress01, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$CreateRewardElement
   void DailyChallengeSubMonitor__CreateRewardElement (DailyChallengeSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, DailyChallengeRewardSheet_Day_o* data, float
   progress01, const MethodInfo* method); */

void DailyChallengeSubMonitor__CreateRewardElement_2472e24
               (undefined4 param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  
  if ((bRam0000000004f4b9b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c4b70);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4b9b6 = 1;
  }
  uStack_38 = 0;
  if ((param_3 != 0) &&
     (lVar2 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(param_3,0),
     lVar2 != 0)) {
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(param_1,0x3f000000,lVar2,0);
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(param_1,0x3f000000,lVar2,0);
    if (cRam0000000004f49d57 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f49d57 = '\x01';
    }
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar2,0);
    if (param_4 != 0) {
      plVar4 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar4[1] + 0xfc);
      uVar3 = thunk_FUN_0224e54c(param_4,*(undefined8 *)(*plVar4 + 0x80));
      func_0x04608620(&uStack_58,uVar3,uVar1);
                    /* try { // try from 02572f44 to 02672f4b has its CatchHandler @ 0257342c */
      uStack_38 = uStack_58;
      uVar3 = System_Int32__ToString_30fbaa0(&uStack_38,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_3,0x297c94cc,uVar3,0);
                    /* try { // try from 02572f6c to 02672fb7 has its CatchHandler @ 02573430 */
      lVar2 = DailyChallengeRewardSheet_Day__GetRewards_255e110(param_4,0);
      if (lVar2 == 0) {
                    /* try { // try from 02573018 to 02673023 has its CatchHandler @ 02573414 */
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar2,0,&uStack_58,*(undefined8 *)PTR_DAT_049c4b70);
      if ((*(long *)(param_2 + 0x50) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_2 + 0x50) + 0x28), lVar2 != 0)) {
                    /* try { // try from 02572fb8 to 02673017 has its CatchHandler @ 02572d60 */
        GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                  (lVar2,auStack_34,&uStack_58,*(undefined8 *)PTR_DAT_049c2d00);
        uStack_68 = uStack_50;
        uStack_60 = uStack_48;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                  (param_3,0xbcdc2f95,auStack_70,0);
        if (*(long *)(param_2 + 0x50) != 0) {
          uVar3 = Shop__FormatItemQuantity_2570348
                            (*(long *)(param_2 + 0x50),CONCAT44(uStack_54,uStack_58),0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                    (param_3,0x9927ed9b,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

