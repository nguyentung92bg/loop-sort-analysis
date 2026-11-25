/* IL2CPP: VoodooAdjustProvider$$WatchRewardedVideo
void VoodooAdjustProvider__WatchRewardedVideo (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$WatchRewardedVideo
   void VoodooAdjustProvider__WatchRewardedVideo (const MethodInfo* method); */

void VoodooAdjustProvider__WatchRewardedVideo_2251a54(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049b5f70;
                    /* try { // try from 02351a5c to 02451a83 has its CatchHandler @ 02351a5c
                       catch() { ... } // from try @ 02351a5c with catch @ 02351a5c
                       catch() { ... } // from try @ 02351a90 with catch @ 02351a5c */
  if ((bRam0000000004f49b99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b99 = 1;
  }
                    /* try { // try from 02351a84 to 02451a8f has its CatchHandler @ 02351aa4 */
  uStack_18 = 0;
                    /* try { // try from 02351a90 to 02451ab7 has its CatchHandler @ 02351a5c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 02351a84 with catch @ 02351aa4 */
    uVar4 = AdjustEventSheet__TryGetRewardedVideoWatchedToken_2556dd8(lVar3,&uStack_18,0);
    uVar2 = uStack_18;
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 02351ab8 to 02451adb has its CatchHandler @ 02351ab8
                       catch() { ... } // from try @ 02351ab8 with catch @ 02351ab8
                       catch() { ... } // from try @ 02351ae4 with catch @ 02351ab8 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEvent_22514a4(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

