/* IL2CPP: ElevatorHoleSystem$$FindCarrier
Carrier_o* ElevatorHoleSystem__FindCarrier (ElevatorHoleSystem_o* __this, int32_t carrierType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$FindCarrier
   Carrier_o* ElevatorHoleSystem__FindCarrier (ElevatorHoleSystem_o* __this, int32_t carrierType,
   const MethodInfo* method); */

long ElevatorHoleSystem__FindCarrier_24a41e0(long param_1,int param_2)

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
  
  if ((bRam0000000004f4bafa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4bafa = 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (lVar3 != 0) {
                    /* try { // try from 025a425c to 026a4267 has its CatchHandler @ 025a4334 */
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
                    /* try { // try from 025a4294 to 026a42a3 has its CatchHandler @ 025a4330 */
    uStack_58 = 0;
    uStack_60 = uStack_40;
    thunk_FUN_021f190c(&uStack_60,0);
                    /* try { // try from 025a42a8 to 026a42cf has its CatchHandler @ 025a4338 */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_50[0] = (long *)*puVar1;
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while( true ) {
                    /* try { // try from 025a42e4 to 026a42f3 has its CatchHandler @ 025a433c */
      uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
                    /* try { // try from 025a42f4 to 026a4357 has its CatchHandler @ 025a41d0 */
      lVar3 = *(long *)((long)plStack_70 +
                       (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x130) == param_2) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a4294 with catch @ 025a4330
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a425c with catch @ 025a4334
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a42a8 with catch @ 025a4338
                        */
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a42e4 with catch @ 025a433c
                        */
  FUN_021f06a0();
}

