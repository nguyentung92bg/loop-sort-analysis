/* IL2CPP: TunnelCarrierSystem$$OnLevelAnimationCarrierComplete
void TunnelCarrierSystem__OnLevelAnimationCarrierComplete (TunnelCarrierSystem_o* __this, LevelAnimationCarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnLevelAnimationCarrierComplete
   void TunnelCarrierSystem__OnLevelAnimationCarrierComplete (TunnelCarrierSystem_o* __this,
   LevelAnimationCarrierCompleteMessage_o m, const MethodInfo* method); */

void TunnelCarrierSystem__OnLevelAnimationCarrierComplete_24ae8d8(long param_1)

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
  
  if ((bRam0000000004f4bb4e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69d8);
    FUN_021f03f8(PTR_DAT_049c69f8);
    FUN_021f03f8(PTR_DAT_049c6a00);
    FUN_021f03f8(PTR_DAT_049c6a08);
    bRam0000000004f4bb4e = 1;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (lVar3 != 0) {
                    /* try { // try from 025ae940 to 026ae95b has its CatchHandler @ 025aea64 */
    uStack_50 = 0;
    uStack_48 = 0;
    aplStack_40[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c6a08;
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_30 = *puVar1;
                    /* try { // try from 025ae974 to 026ae977 has its CatchHandler @ 025aea5c */
    uStack_28 = 0;
    thunk_FUN_021f190c(&uStack_30);
    uStack_28 = 0;
    uStack_48 = 0;
    uStack_50 = uStack_30;
    thunk_FUN_021f190c(&uStack_50,0);
                    /* try { // try from 025ae998 to 026ae9a7 has its CatchHandler @ 025aea60 */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_40[0] = (long *)*puVar1;
                    /* try { // try from 025ae9b8 to 026ae9bb has its CatchHandler @ 025aea5c */
    thunk_FUN_021f190c(aplStack_40);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    plStack_60 = aplStack_40[0];
    while( true ) {
                    /* try { // try from 025ae9dc to 026ae9e3 has its CatchHandler @ 025aea54 */
      uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_70,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
                    /* try { // try from 025ae9e4 to 026aea47 has its CatchHandler @ 025ae8b4 */
      if (*(long *)((long)plStack_60 +
                   (ulong)*(uint *)(*plStack_60 + 0x104) * (long)uStack_68._4_4_ + 0x20) == 0)
      break;
      TunnelCarrier__OnLevelAnimationEnd_24ad9a4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

