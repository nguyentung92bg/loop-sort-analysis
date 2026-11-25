/* IL2CPP: VoodooSauceProvider$$UseBooster
void VoodooSauceProvider__UseBooster (VoodooSauceProvider_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$UseBooster
   void VoodooSauceProvider__UseBooster (VoodooSauceProvider_o* __this, int32_t boosterType, const
   MethodInfo* method); */

void VoodooSauceProvider__UseBooster_225780c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f49bc5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6450);
                    /* catch() { ... } // from try @ 0235787c with catch @ 02357838 */
    FUN_021f03f8(PTR_DAT_049b62d0);
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49bc5 = 1;
  }
  puVar2 = PTR_DAT_049b62d0;
  puVar1 = PTR_DAT_049b5f70;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
                    /* try { // try from 02357870 to 0245787b has its CatchHandler @ 02357920 */
                    /* try { // try from 0235787c to 0245793f has its CatchHandler @ 02357838 */
    uStack_24 = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (lVar3,&uStack_24,&iStack_28,*(undefined8 *)PTR_DAT_049b6450);
    iStack_28 = iStack_28 + 1;
    uStack_24 = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,&uStack_24,&iStack_28,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__UseBooster_2251e3c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

