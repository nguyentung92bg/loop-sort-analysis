/* IL2CPP: DailyRewardsSubMonitor$$CreateItemView
void DailyRewardsSubMonitor__CreateItemView (DailyRewardsSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$CreateItemView
   void DailyRewardsSubMonitor__CreateItemView (DailyRewardsSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o reward, const MethodInfo*
   method); */

void DailyRewardsSubMonitor__CreateItemView_24747f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
                    /* try { // try from 025747f0 to 02674803 has its CatchHandler @ 0257495c */
                    /* try { // try from 02574808 to 0267481b has its CatchHandler @ 02574958 */
  if ((bRam0000000004f4b9be & 1) == 0) {
                    /* try { // try from 02574820 to 0267482f has its CatchHandler @ 02574964 */
    FUN_021f03f8(PTR_DAT_049c2d00);
    bRam0000000004f4b9be = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar1 != 0)) {
                    /* try { // try from 02574844 to 02674847 has its CatchHandler @ 025749b4 */
                    /* try { // try from 02574848 to 0267493f has its CatchHandler @ 02574184 */
    uStack_24 = (undefined4)param_3;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (lVar1,&uStack_24,&uStack_48,*(undefined8 *)PTR_DAT_049c2d00);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (param_2,0xbcdc2f95,&uStack_60,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = Shop__FormatItemQuantity_257016c
                        (*(long *)(param_1 + 0x48),param_3 & 0xffffffff,param_3 >> 0x20,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x9927ed9b,uVar2,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,0xf70177a2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

