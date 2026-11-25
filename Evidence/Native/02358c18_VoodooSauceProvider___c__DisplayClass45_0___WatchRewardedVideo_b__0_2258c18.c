/* IL2CPP: VoodooSauceProvider.<>c__DisplayClass45_0$$<WatchRewardedVideo>b__0
void VoodooSauceProvider___c__DisplayClass45_0___WatchRewardedVideo_b__0 (VoodooSauceProvider___c__DisplayClass45_0_o* __this, bool result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider.<>c__DisplayClass45_0$$<WatchRewardedVideo>b__0
   void VoodooSauceProvider___c__DisplayClass45_0___WatchRewardedVideo_b__0
   (VoodooSauceProvider___c__DisplayClass45_0_o* __this, bool result, const MethodInfo* method); */

void VoodooSauceProvider___c__DisplayClass45_0___WatchRewardedVideo_b__0_2258c18
               (long param_1,byte param_2)

{
  long lVar1;
  byte abStack_24 [4];
  
  if ((bRam0000000004f49bdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49bdc = 1;
  }
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5f70 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__WatchRewardedVideo_2251a54();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 02358c7c to 02458c8f has its CatchHandler @ 02358ca4 */
    abStack_24[0] = param_2 & 1;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),abStack_24,*(undefined8 *)(lVar1 + 0x28));
  }
                    /* try { // try from 02358c90 to 02458cbb has its CatchHandler @ 02358c08 */
  return;
}

