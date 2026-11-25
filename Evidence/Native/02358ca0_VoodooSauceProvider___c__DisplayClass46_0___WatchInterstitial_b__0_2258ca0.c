/* IL2CPP: VoodooSauceProvider.<>c__DisplayClass46_0$$<WatchInterstitial>b__0
void VoodooSauceProvider___c__DisplayClass46_0___WatchInterstitial_b__0 (VoodooSauceProvider___c__DisplayClass46_0_o* __this, bool result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider.<>c__DisplayClass46_0$$<WatchInterstitial>b__0
   void VoodooSauceProvider___c__DisplayClass46_0___WatchInterstitial_b__0
   (VoodooSauceProvider___c__DisplayClass46_0_o* __this, bool result, const MethodInfo* method); */

void VoodooSauceProvider___c__DisplayClass46_0___WatchInterstitial_b__0_2258ca0
               (long param_1,byte param_2)

{
  long lVar1;
  byte abStack_4 [4];
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 02358c7c with catch @ 02358ca4 */
  if (lVar1 != 0) {
    abStack_4[0] = param_2 & 1;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),abStack_4,*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}

