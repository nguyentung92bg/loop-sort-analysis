/* IL2CPP: DailyRewardsSubMonitor$$Select
void DailyRewardsSubMonitor__Select (DailyRewardsSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* selectedView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$Select
   void DailyRewardsSubMonitor__Select (DailyRewardsSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* selectedView, const MethodInfo* method); */

void DailyRewardsSubMonitor__Select_24748e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b9bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9bf = 1;
  }
  puVar3 = PTR_DAT_049b5fc8;
                    /* try { // try from 02574940 to 02674943 has its CatchHandler @ 025749ac */
                    /* try { // try from 02574944 to 02674947 has its CatchHandler @ 025749a4 */
                    /* try { // try from 02574948 to 026749d7 has its CatchHandler @ 02574184 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fa0;
                    /* catch() { ... } // from try @ 02574808 with catch @ 02574958 */
                    /* catch() { ... } // from try @ 025747f0 with catch @ 0257495c */
                    /* catch() { ... } // from try @ 02574680 with catch @ 02574960 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02574820 with catch @ 02574964 */
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 02574780 with catch @ 02574968 */
                    /* catch() { ... } // from try @ 02574750 with catch @ 0257496c */
  auStack_40 = TimeProvider__get_Now_24f4584(0);
                    /* catch() { ... } // from try @ 025747dc with catch @ 02574970 */
                    /* catch() { ... } // from try @ 025747c0 with catch @ 02574974 */
                    /* catch() { ... } // from try @ 02574644 with catch @ 02574978 */
                    /* catch() { ... } // from try @ 025747a8 with catch @ 0257497c */
                    /* catch() { ... } // from try @ 02574700 with catch @ 02574980 */
                    /* catch() { ... } // from try @ 02574794 with catch @ 02574984 */
                    /* catch() { ... } // from try @ 025746b0 with catch @ 02574988 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x408,auStack_40,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02574728 with catch @ 0257498c */
                    /* catch() { ... } // from try @ 025745c0 with catch @ 02574990 */
                    /* catch() { ... } // from try @ 025746dc with catch @ 02574994 */
                    /* catch() { ... } // from try @ 025746c8 with catch @ 02574998 */
                    /* catch() { ... } // from try @ 025745f0 with catch @ 0257499c */
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c(param_1,0xb4ce0c4e,0)
  ;
                    /* catch() { ... } // from try @ 02574610 with catch @ 025749a0 */
                    /* catch() { ... } // from try @ 02574944 with catch @ 025749a4 */
                    /* catch() { ... } // from try @ 0257457c with catch @ 025749a8 */
                    /* catch() { ... } // from try @ 02574940 with catch @ 025749ac */
  if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0), lVar4 != 0))
  {
                    /* catch() { ... } // from try @ 02574594 with catch @ 025749b0 */
                    /* catch() { ... } // from try @ 02574844 with catch @ 025749b4 */
                    /* catch() { ... } // from try @ 0257454c with catch @ 025749b8 */
    UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
                    /* catch() { ... } // from try @ 025744e8 with catch @ 025749bc */
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (param_2,0x39740faf,0);
                    /* try { // try from 025749d8 to 026749db has its CatchHandler @ 025749e4 */
    DailyRewardsSubMonitor__RevealView_2474a00(param_1,param_2);
                    /* catch() { ... } // from try @ 025749d8 with catch @ 025749e4 */
    DailyRewardsSubMonitor__HandleMotions_2474aac(param_1,param_2);
                    /* try { // try from 025749e8 to 026749ef has its CatchHandler @ 025749f8 */
                    /* try { // try from 025749f0 to 026749fb has its CatchHandler @ 02574184 */
                    /* catch() { ... } // from try @ 025749e8 with catch @ 025749f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

