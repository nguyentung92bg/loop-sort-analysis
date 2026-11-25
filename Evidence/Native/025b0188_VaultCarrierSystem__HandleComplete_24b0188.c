/* IL2CPP: VaultCarrierSystem$$HandleComplete
void VaultCarrierSystem__HandleComplete (VaultCarrierSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VaultCarrierSystem$$HandleComplete
   void VaultCarrierSystem__HandleComplete (VaultCarrierSystem_o* __this, const MethodInfo* method);
    */

void VaultCarrierSystem__HandleComplete_24b0188(long param_1)

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
  
  if ((bRam0000000004f4bb5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a48);
    FUN_021f03f8(PTR_DAT_049c6a50);
    FUN_021f03f8(PTR_DAT_049c6a58);
    FUN_021f03f8(PTR_DAT_049c6a60);
    bRam0000000004f4bb5a = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (lVar3 != 0) {
    uStack_50 = 0;
    uStack_48 = 0;
                    /* try { // try from 025b0200 to 026b028b has its CatchHandler @ 025b0200
                       catch() { ... } // from try @ 025b0200 with catch @ 025b0200
                       catch() { ... } // from try @ 025b033c with catch @ 025b0200
                       catch() { ... } // from try @ 025b03bc with catch @ 025b0200 */
    aplStack_40[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c6a60;
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_30 = *puVar1;
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
                    /* try { // try from 025b028c to 026b0297 has its CatchHandler @ 025b0380 */
      uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_70,0);
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 025b02d0 to 026b02df has its CatchHandler @ 025b0378 */
        return;
      }
                    /* try { // try from 025b02a0 to 026b02ab has its CatchHandler @ 025b0388 */
      lVar3 = *(long *)((long)plStack_60 +
                       (ulong)*(uint *)(*plStack_60 + 0x104) * (long)uStack_68._4_4_ + 0x20);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0xc0)) {
        VaultCarrier__OnComplete_24afb6c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

