/* IL2CPP: LockCarrierGroupSystem$$FindCarrier
Carrier_o* LockCarrierGroupSystem__FindCarrier (LockCarrierGroupSystem_o* __this, int32_t carrierType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroupSystem$$FindCarrier
   Carrier_o* LockCarrierGroupSystem__FindCarrier (LockCarrierGroupSystem_o* __this, int32_t
   carrierType, const MethodInfo* method); */

long LockCarrierGroupSystem__FindCarrier_24aa4b0(long param_1,int param_2)

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
  
  if ((bRam0000000004f4bb28 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4bb28 = 1;
  }
  lVar3 = *(long *)(param_1 + 0xb0);
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (lVar3 != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    aplStack_50[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c1590;
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
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while( true ) {
      uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = *(long *)((long)plStack_70 +
                       (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x130) == param_2) {
                    /* try { // try from 025aa5f8 to 026aa71f has its CatchHandler @ 025aa5f8
                       catch() { ... } // from try @ 025aa5f8 with catch @ 025aa5f8
                       catch() { ... } // from try @ 025aa7b8 with catch @ 025aa5f8
                       catch() { ... } // from try @ 025aa844 with catch @ 025aa5f8
                       catch() { ... } // from try @ 025aa8d8 with catch @ 025aa5f8 */
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

