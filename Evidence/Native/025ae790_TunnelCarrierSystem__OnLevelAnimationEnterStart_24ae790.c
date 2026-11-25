/* IL2CPP: TunnelCarrierSystem$$OnLevelAnimationEnterStart
void TunnelCarrierSystem__OnLevelAnimationEnterStart (TunnelCarrierSystem_o* __this, LevelAnimationEnterStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnLevelAnimationEnterStart
   void TunnelCarrierSystem__OnLevelAnimationEnterStart (TunnelCarrierSystem_o* __this,
   LevelAnimationEnterStartMessage_o m, const MethodInfo* method); */

void TunnelCarrierSystem__OnLevelAnimationEnterStart_24ae790(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *aplStack_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 025ae7a4 to 026ae7bb has its CatchHandler @ 025ae698 */
  if ((bRam0000000004f4bb4d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69d8);
                    /* try { // try from 025ae7bc to 026ae7bf has its CatchHandler @ 025ae7fc */
                    /* try { // try from 025ae7c0 to 026ae7c3 has its CatchHandler @ 025ae698 */
    FUN_021f03f8(PTR_DAT_049c69f8);
                    /* try { // try from 025ae7c4 to 026ae7c7 has its CatchHandler @ 025ae7f4 */
                    /* try { // try from 025ae7c8 to 026ae7cb has its CatchHandler @ 025ae7ec */
                    /* try { // try from 025ae7cc to 026ae7cf has its CatchHandler @ 025ae7e4 */
    FUN_021f03f8(PTR_DAT_049c6a00);
                    /* try { // try from 025ae7d0 to 026ae7d3 has its CatchHandler @ 025ae800 */
                    /* try { // try from 025ae7d4 to 026ae7d7 has its CatchHandler @ 025ae7dc */
                    /* try { // try from 025ae7d8 to 026ae7db has its CatchHandler @ 025ae7f0 */
    FUN_021f03f8(PTR_DAT_049c6a08);
                    /* catch() { ... } // from try @ 025ae7d4 with catch @ 025ae7dc
                       try { // try from 025ae7dc to 026ae817 has its CatchHandler @ 025ae698 */
                    /* catch() { ... } // from try @ 025ae738 with catch @ 025ae7e0 */
    bRam0000000004f4bb4d = 1;
  }
                    /* catch() { ... } // from try @ 025ae7cc with catch @ 025ae7e4 */
  lVar3 = *(long *)(param_1 + 0x68);
                    /* catch() { ... } // from try @ 025ae724 with catch @ 025ae7e8 */
  uStack_70 = 0;
  uStack_68 = 0;
                    /* catch() { ... } // from try @ 025ae7c8 with catch @ 025ae7ec */
  plStack_60 = (long *)0x0;
                    /* catch() { ... } // from try @ 025ae784 with catch @ 025ae7f0
                       catch() { ... } // from try @ 025ae7d8 with catch @ 025ae7f0 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 025ae714 with catch @ 025ae7f4
                       catch() { ... } // from try @ 025ae7c4 with catch @ 025ae7f4 */
                    /* catch() { ... } // from try @ 025ae6f4 with catch @ 025ae7f8 */
                    /* catch() { ... } // from try @ 025ae7bc with catch @ 025ae7fc */
                    /* catch() { ... } // from try @ 025ae74c with catch @ 025ae800
                       catch() { ... } // from try @ 025ae7d0 with catch @ 025ae800 */
    uStack_50 = 0;
    uStack_48 = 0;
    aplStack_40[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c6a08;
                    /* try { // try from 025ae818 to 026ae82f has its CatchHandler @ 025ae8a0 */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_30 = *puVar1;
                    /* try { // try from 025ae830 to 026ae88f has its CatchHandler @ 025ae698 */
    uStack_28 = 0;
    thunk_FUN_021f190c(&uStack_30);
    uStack_28 = 0;
    uStack_48 = 0;
    uStack_50 = uStack_30;
    thunk_FUN_021f190c(&uStack_50,0);
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_40[0] = (long *)*puVar1;
    thunk_FUN_021f190c(aplStack_40);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    plStack_60 = aplStack_40[0];
    while( true ) {
                    /* try { // try from 025ae890 to 026ae89f has its CatchHandler @ 025ae8a0 */
      uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_70,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
                    /* catch() { ... } // from try @ 025ae818 with catch @ 025ae8a0
                       catch() { ... } // from try @ 025ae890 with catch @ 025ae8a0 */
                    /* try { // try from 025ae8a4 to 026ae8a7 has its CatchHandler @ 025ae8b0 */
                    /* try { // try from 025ae8a8 to 026ae8b3 has its CatchHandler @ 025ae698 */
                    /* catch() { ... } // from try @ 025ae8a4 with catch @ 025ae8b0 */
                    /* try { // try from 025ae8b4 to 026ae93f has its CatchHandler @ 025ae8b4
                       catch() { ... } // from try @ 025ae8b4 with catch @ 025ae8b4
                       catch() { ... } // from try @ 025ae9e4 with catch @ 025ae8b4
                       catch() { ... } // from try @ 025aea50 with catch @ 025ae8b4
                       catch() { ... } // from try @ 025aea9c with catch @ 025ae8b4 */
      if (*(long *)((long)plStack_60 +
                   (ulong)*(uint *)(*plStack_60 + 0x104) * (long)uStack_68._4_4_ + 0x20) == 0)
      break;
      TunnelCarrier__OnLevelAnimationStart_24ad93c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

