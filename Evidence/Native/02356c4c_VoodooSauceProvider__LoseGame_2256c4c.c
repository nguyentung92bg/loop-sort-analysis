/* IL2CPP: VoodooSauceProvider$$LoseGame
void VoodooSauceProvider__LoseGame (VoodooSauceProvider_o* __this, int32_t levelNumber, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LoseGame
   void VoodooSauceProvider__LoseGame (VoodooSauceProvider_o* __this, int32_t levelNumber,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void VoodooSauceProvider__LoseGame_2256c4c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam0000000004f49bba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b63e0);
    bRam0000000004f49bba = 1;
  }
  lVar3 = VoodooSauceProvider__CreateGameFinishedParameters_2255d18(param_1,param_2,0,param_3);
  puVar1 = PTR_DAT_049b5670;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02356ccc with catch @ 02356cf0 */
    FUN_021f06a0();
  }
                    /* try { // try from 02356cac to 02456ccb has its CatchHandler @ 02356cac
                       catch() { ... } // from try @ 02356cac with catch @ 02356cac
                       catch() { ... } // from try @ 02356ce0 with catch @ 02356cac */
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_049b63e0;
  thunk_FUN_021f190c();
                    /* try { // try from 02356ccc to 02456cdf has its CatchHandler @ 02356cf0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b5670;
                    /* try { // try from 02356ce0 to 02456d03 has its CatchHandler @ 02356cac */
  if ((bRam0000000004f5f475 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0);
    FUN_021f03f8(PTR_DAT_049b62a0);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f5f475 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar4 = (long *)VoodooSauce__get_CrashReport_43773e0();
  puVar2 = PTR_DAT_04a61e80;
  puVar1 = PTR_DAT_049b62a0;
  if ((lVar3 != 0) && (plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x1c8))
              (plVar4,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(*plVar4 + 0x1d0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Voodoo_Sauce_Internal_Analytics_AnalyticsManager__TrackGameFinished_449579c(lVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_04a61e80;
    if ((bRam0000000004f60420 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a61e80);
      bRam0000000004f60420 = 1;
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

