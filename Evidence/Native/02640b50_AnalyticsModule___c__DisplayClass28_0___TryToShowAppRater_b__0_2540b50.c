/* IL2CPP: AnalyticsModule.<>c__DisplayClass28_0$$<TryToShowAppRater>b__0
void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__0 (AnalyticsModule___c__DisplayClass28_0_o* __this, bool result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule.<>c__DisplayClass28_0$$<TryToShowAppRater>b__0
   void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__0
   (AnalyticsModule___c__DisplayClass28_0_o* __this, bool result, const MethodInfo* method); */

void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__0_2540b50
               (long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  byte abStack_24 [4];
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02640988 with catch @ 02640b58
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02640974 with catch @ 02640b64
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026408f8 with catch @ 02640b68
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02640918 with catch @ 02640b6c
                        */
  if ((bRam0000000004f4bfbf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bfbf = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
                    /* try { // try from 02640b88 to 02740b8b has its CatchHandler @ 02640ba4 */
  if (lVar2 != 0) {
                    /* try { // try from 02640b8c to 02740ba7 has its CatchHandler @ 02640490 */
    abStack_24[0] = param_2 & 1;
                    /* catch() { ... } // from try @ 02640b88 with catch @ 02640ba4 */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),abStack_24,*(undefined8 *)(lVar2 + 0x28));
  }
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02640ba8 to 02740baf has its CatchHandler @ 02640bb8 */
  if ((param_2 & 1) != 0) {
                    /* try { // try from 02640bb0 to 02740bbb has its CatchHandler @ 02640490 */
    lVar2 = *(long *)PTR_DAT_049b5310;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02640ba8 with catch @ 02640bb8
                        */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
                    /* try { // try from 02640bc4 to 02740d37 has its CatchHandler @ 02640bc4
                       catch() { ... } // from try @ 02640bc4 with catch @ 02640bc4
                       catch() { ... } // from try @ 02640da4 with catch @ 02640bc4
                       catch() { ... } // from try @ 02640ea0 with catch @ 02640bc4
                       catch() { ... } // from try @ 02640f84 with catch @ 02640bc4
                       catch() { ... } // from try @ 02640fe4 with catch @ 02640bc4
                       catch() { ... } // from try @ 02641010 with catch @ 02640bc4 */
      lVar2 = *(long *)puVar1;
    }
    CloudPrefsBool__Set_24eb1bc(*(long *)(lVar2 + 0xb8) + 0x598,1,0);
  }
  return;
}

