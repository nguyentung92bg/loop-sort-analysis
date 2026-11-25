/* IL2CPP: VoodooSauceBootstrapper$$OnVoodooSauceInitFinished
void VoodooSauceBootstrapper__OnVoodooSauceInitFinished (Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceBootstrapper$$OnVoodooSauceInitFinished
   void VoodooSauceBootstrapper__OnVoodooSauceInitFinished
   (Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o* result, const MethodInfo* method); */

void VoodooSauceBootstrapper__OnVoodooSauceInitFinished_2254d14(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((bRam0000000004f49bb3 & 1) == 0) {
                    /* try { // try from 02354d30 to 02454d37 has its CatchHandler @ 02354d5c */
    FUN_021f03f8(PTR_DAT_049b6208);
                    /* try { // try from 02354d38 to 02454d77 has its CatchHandler @ 02354d0c */
    FUN_021f03f8(PTR_DAT_049b3bd8);
    FUN_021f03f8(PTR_DAT_049b6218);
    FUN_021f03f8(PTR_DAT_049b6220);
                    /* catch() { ... } // from try @ 02354d30 with catch @ 02354d5c */
    FUN_021f03f8(PTR_DAT_049b6210);
    FUN_021f03f8(PTR_DAT_049b6228);
                    /* try { // try from 02354d78 to 02454d9b has its CatchHandler @ 02354d78
                       catch() { ... } // from try @ 02354d78 with catch @ 02354d78
                       catch() { ... } // from try @ 02354da4 with catch @ 02354d78 */
    FUN_021f03f8(PTR_DAT_049b6230);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bb3 = 1;
  }
                    /* try { // try from 02354d9c to 02454da3 has its CatchHandler @ 02354dc8 */
  if (cRam0000000004f49bff == '\0') {
                    /* try { // try from 02354da4 to 02454de3 has its CatchHandler @ 02354d78 */
    FUN_021f03f8(PTR_DAT_049b5ea8);
    cRam0000000004f49bff = '\x01';
  }
  puVar1 = PTR_DAT_049b5ea8;
  plVar5 = *(long **)(*(long *)PTR_DAT_049b5ea8 + 0xb8);
                    /* catch() { ... } // from try @ 02354d9c with catch @ 02354dc8 */
  if (*plVar5 != 0) {
    return;
  }
  if (cRam0000000004f49c00 == '\0') {
                    /* try { // try from 02354de4 to 02454e07 has its CatchHandler @ 02354de4
                       catch() { ... } // from try @ 02354de4 with catch @ 02354de4
                       catch() { ... } // from try @ 02354e10 with catch @ 02354de4 */
    FUN_021f03f8(PTR_DAT_049b5ea8);
    cRam0000000004f49c00 = '\x01';
    plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  *plVar5 = param_1;
                    /* try { // try from 02354e08 to 02454e0f has its CatchHandler @ 02354e34 */
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),param_1);
                    /* try { // try from 02354e10 to 02454e4f has its CatchHandler @ 02354de4 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6208);
                    /* catch() { ... } // from try @ 02354e08 with catch @ 02354e34 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,0,*(undefined8 *)PTR_DAT_049b6210,0);
  if (*(int *)(*(long *)PTR_DAT_049b5670 + 0xe4) == 0) {
                    /* try { // try from 02354e50 to 02454e73 has its CatchHandler @ 02354e50
                       catch() { ... } // from try @ 02354e50 with catch @ 02354e50
                       catch() { ... } // from try @ 02354e7c with catch @ 02354e50 */
    FUN_021f0574();
  }
  VoodooSauce__UnSubscribeOnInitFinishedEvent_4377574(uVar3,0);
  VoodooSauceBootstrapper__PopulateVoodooTuneItems_2254f94();
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6220);
                    /* try { // try from 02354e74 to 02454e7b has its CatchHandler @ 02354ea0 */
                    /* try { // try from 02354e7c to 02454ebb has its CatchHandler @ 02354e50 */
  Voodoo_Nakama_Analytics_NakamaVanEventSender___ctor_3f62764
            (uVar3,0,*(undefined8 *)PTR_DAT_049b6228,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b3bd8);
                    /* catch() { ... } // from try @ 02354e74 with catch @ 02354ea0 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,0,*(undefined8 *)PTR_DAT_049b6230,0);
  if (*(int *)(*(long *)PTR_DAT_049b6218 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Voodoo_Nakama_Analytics_NakamaAnalyticsTracker__SetSender_3f60df4(uVar3,uVar4,0);
  puVar1 = PTR_DAT_049bb338;
  if ((bRam0000000004f5c3d7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb338);
    bRam0000000004f5c3d7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_SceneManagement_SceneManager__GetActiveScene_3c33e7c(0);
  iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex_3c335d0(&stack0xffffffffffffffec,0);
  UnityEngine_SceneManagement_SceneManager__LoadScene_3c347ec(iVar2 + 1,0);
  return;
}

