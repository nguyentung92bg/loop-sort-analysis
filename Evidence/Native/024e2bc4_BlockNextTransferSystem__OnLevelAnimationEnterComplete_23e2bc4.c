/* IL2CPP: BlockNextTransferSystem$$OnLevelAnimationEnterComplete
void BlockNextTransferSystem__OnLevelAnimationEnterComplete (BlockNextTransferSystem_o* __this, LevelAnimationEnterCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockNextTransferSystem$$OnLevelAnimationEnterComplete
   void BlockNextTransferSystem__OnLevelAnimationEnterComplete (BlockNextTransferSystem_o* __this,
   LevelAnimationEnterCompleteMessage_o m, const MethodInfo* method); */

void BlockNextTransferSystem__OnLevelAnimationEnterComplete_23e2bc4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b5e1 & 1) == 0) {
                    /* try { // try from 024e2bec to 025e2c0b has its CatchHandler @ 024e2f18 */
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b5e1 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (lVar3 != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    aplStack_50[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c1590;
                    /* try { // try from 024e2c48 to 025e2c6f has its CatchHandler @ 024e2f14 */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_40 = *puVar1;
    uStack_38 = 0;
    thunk_FUN_021f190c(&uStack_40);
    uStack_38 = 0;
    uStack_58 = 0;
    uStack_60 = uStack_40;
    thunk_FUN_021f190c(&uStack_60,0);
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_50[0] = (long *)*puVar1;
                    /* try { // try from 024e2cb0 to 025e2cdf has its CatchHandler @ 024e2f10 */
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while (uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0),
          (uVar2 & 1) != 0) {
                    /* try { // try from 024e2cf4 to 025e2cfb has its CatchHandler @ 024e2f08 */
      BlockNextTransferSystem__AddCarrierToUpdateQueue_23e2b30
                (param_1,*(undefined8 *)
                          ((long)plStack_70 +
                          (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20));
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

