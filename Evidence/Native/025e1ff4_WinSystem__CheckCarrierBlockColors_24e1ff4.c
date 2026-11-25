/* IL2CPP: WinSystem$$CheckCarrierBlockColors
void WinSystem__CheckCarrierBlockColors (WinSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinSystem$$CheckCarrierBlockColors
   void WinSystem__CheckCarrierBlockColors (WinSystem_o* __this, const MethodInfo* method); */

void WinSystem__CheckCarrierBlockColors_24e1ff4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 025e2008 to 026e200f has its CatchHandler @ 025e2280 */
  if ((bRam0000000004f4bc70 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
                    /* try { // try from 025e2028 to 026e202b has its CatchHandler @ 025e2244 */
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c1580);
                    /* try { // try from 025e203c to 026e2043 has its CatchHandler @ 025e2258 */
    FUN_021f03f8(PTR_DAT_049c1a10);
    FUN_021f03f8(PTR_DAT_049c1588);
                    /* try { // try from 025e2058 to 026e205b has its CatchHandler @ 025e2238 */
    FUN_021f03f8(PTR_DAT_049c1a18);
    FUN_021f03f8(PTR_DAT_049b5318);
                    /* try { // try from 025e2070 to 026e2077 has its CatchHandler @ 025e2254 */
    FUN_021f03f8(PTR_DAT_049c1a20);
    FUN_021f03f8(PTR_DAT_049c1590);
                    /* try { // try from 025e2080 to 026e2083 has its CatchHandler @ 025e2240 */
    bRam0000000004f4bc70 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
                    /* try { // try from 025e2094 to 026e209b has its CatchHandler @ 025e2268 */
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
                    /* try { // try from 025e20b0 to 026e20b3 has its CatchHandler @ 025e223c */
    uStack_60 = 0;
    uStack_58 = 0;
    aplStack_50[0] = (long *)0x0;
    lVar4 = *(long *)PTR_DAT_049c1a20;
                    /* try { // try from 025e20c8 to 026e20cf has its CatchHandler @ 025e224c */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
                    /* try { // try from 025e20dc to 026e20e7 has its CatchHandler @ 025e2278 */
    uStack_40 = *puVar1;
    uStack_38 = 0;
    thunk_FUN_021f190c(&uStack_40);
                    /* try { // try from 025e20ec to 026e20f7 has its CatchHandler @ 025e2274 */
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
                    /* try { // try from 025e2144 to 026e2183 has its CatchHandler @ 025e2288 */
    while (uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0),
          (uVar2 & 1) != 0) {
      lVar3 = *(long *)((long)plStack_70 +
                       (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
      if (lVar3 == 0) goto LAB_025e22a0;
      uVar2 = ConveyorSlot__HasElement_24b100c(lVar3,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      uStack_60 = 0;
      uStack_58 = 0;
                    /* try { // try from 025e219c to 026e219f has its CatchHandler @ 025e222c */
      aplStack_50[0] = (long *)0x0;
                    /* try { // try from 025e21a0 to 026e21df has its CatchHandler @ 025e1dcc */
      lVar4 = *(long *)PTR_DAT_049c1590;
      puVar1 = (undefined8 *)
               thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80
                                                 ) + 0x60);
      uStack_40 = *puVar1;
      uStack_38 = 0;
      thunk_FUN_021f190c(&uStack_40);
      uStack_38 = 0;
      uStack_58 = 0;
      uStack_60 = uStack_40;
                    /* try { // try from 025e21e0 to 026e21e3 has its CatchHandler @ 025e227c */
      thunk_FUN_021f190c(&uStack_60,0);
                    /* try { // try from 025e21e4 to 026e21e7 has its CatchHandler @ 025e2270 */
                    /* try { // try from 025e21e8 to 026e21eb has its CatchHandler @ 025e226c */
                    /* try { // try from 025e21ec to 026e21ef has its CatchHandler @ 025e2264 */
                    /* try { // try from 025e21f0 to 026e21f3 has its CatchHandler @ 025e225c */
                    /* try { // try from 025e21f4 to 026e21f7 has its CatchHandler @ 025e2260 */
                    /* try { // try from 025e21f8 to 026e21fb has its CatchHandler @ 025e2250 */
                    /* try { // try from 025e21fc to 026e21ff has its CatchHandler @ 025e2248 */
      puVar1 = (undefined8 *)
               thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80
                                                 ) + 0x80);
                    /* try { // try from 025e2200 to 026e2203 has its CatchHandler @ 025e2228 */
      aplStack_50[0] = (long *)*puVar1;
                    /* try { // try from 025e2204 to 026e220b has its CatchHandler @ 025e1dcc */
                    /* try { // try from 025e220c to 026e220f has its CatchHandler @ 025e2220 */
      thunk_FUN_021f190c(aplStack_50);
                    /* try { // try from 025e2210 to 026e2217 has its CatchHandler @ 025e222c */
                    /* catch() { ... } // from try @ 025e1f08 with catch @ 025e2218
                       try { // try from 025e2218 to 026e22ab has its CatchHandler @ 025e1dcc */
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
                    /* catch() { ... } // from try @ 025e1f28 with catch @ 025e221c */
      plStack_90 = aplStack_50[0];
                    /* catch() { ... } // from try @ 025e220c with catch @ 025e2220 */
                    /* catch() { ... } // from try @ 025e1ef4 with catch @ 025e2224 */
                    /* catch() { ... } // from try @ 025e2200 with catch @ 025e2228 */
                    /* catch() { ... } // from try @ 025e219c with catch @ 025e222c
                       catch() { ... } // from try @ 025e2210 with catch @ 025e222c */
      while (uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0),
            (uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 025e2058 with catch @ 025e2238 */
                    /* catch() { ... } // from try @ 025e20b0 with catch @ 025e223c */
                    /* catch() { ... } // from try @ 025e2080 with catch @ 025e2240 */
                    /* catch() { ... } // from try @ 025e2028 with catch @ 025e2244 */
                    /* catch() { ... } // from try @ 025e21fc with catch @ 025e2248 */
        lVar3 = *(long *)((long)plStack_90 +
                         (ulong)*(uint *)(*plStack_90 + 0x104) * (long)uStack_98._4_4_ + 0x20);
                    /* catch() { ... } // from try @ 025e20c8 with catch @ 025e224c */
        if (lVar3 == 0) goto LAB_025e22a0;
                    /* catch() { ... } // from try @ 025e21f8 with catch @ 025e2250 */
                    /* catch() { ... } // from try @ 025e2070 with catch @ 025e2254 */
                    /* catch() { ... } // from try @ 025e203c with catch @ 025e2258 */
        uVar2 = Carrier__IsEmpty_23faccc(lVar3,0);
                    /* catch() { ... } // from try @ 025e21f0 with catch @ 025e225c */
                    /* catch() { ... } // from try @ 025e21f4 with catch @ 025e2260 */
                    /* catch() { ... } // from try @ 025e21ec with catch @ 025e2264 */
                    /* catch() { ... } // from try @ 025e2094 with catch @ 025e2268 */
                    /* catch() { ... } // from try @ 025e21e8 with catch @ 025e226c */
        if (((uVar2 & 1) == 0) && (uVar2 = Carrier__CanComplete_2409e98(lVar3,0), (uVar2 & 1) == 0))
        {
                    /* catch() { ... } // from try @ 025e1fa0 with catch @ 025e228c */
          return;
        }
      }
                    /* catch() { ... } // from try @ 025e20ec with catch @ 025e2274 */
                    /* catch() { ... } // from try @ 025e20dc with catch @ 025e2278 */
      if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 025e21e0 with catch @ 025e227c */
                    /* catch() { ... } // from try @ 025e2008 with catch @ 025e2280 */
                    /* catch() { ... } // from try @ 025e1f78 with catch @ 025e2284 */
                    /* catch() { ... } // from try @ 025e2144 with catch @ 025e2288 */
        GameMachine__RequestStateChange_object__261a650
                  (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049b5318);
        return;
      }
    }
  }
LAB_025e22a0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

