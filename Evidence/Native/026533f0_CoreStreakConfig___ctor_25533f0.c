/* IL2CPP: CoreStreakConfig$$.ctor
void CoreStreakConfig___ctor (CoreStreakConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreakConfig$$.ctor
   void CoreStreakConfig___ctor (CoreStreakConfig_o* __this, const MethodInfo* method); */

undefined1  [16] CoreStreakConfig___ctor_25533f0(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_049b4e08;
                    /* try { // try from 026533f8 to 02753447 has its CatchHandler @ 02652c68 */
  if ((bRam0000000004f4c08c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4e08);
    bRam0000000004f4c08c = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar3 = FUN_021f04e4(uVar2,5);
  if (lVar3 != 0) {
                    /* try { // try from 02653448 to 02753457 has its CatchHandler @ 02653458 */
    if (4 < *(uint *)(lVar3 + 0x18)) {
      *(undefined4 *)(lVar3 + 0x30) = 3;
                    /* catch() { ... } // from try @ 026533e0 with catch @ 02653458
                       catch() { ... } // from try @ 02653448 with catch @ 02653458 */
      *(long *)(param_1 + 0x18) = lVar3;
                    /* try { // try from 0265345c to 0275345f has its CatchHandler @ 02653468 */
      thunk_FUN_021f190c();
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      return auVar4;
                    /* try { // try from 02653460 to 0275346b has its CatchHandler @ 02652c68 */
                    /* catch() { ... } // from try @ 0265345c with catch @ 02653468 */
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02653478 to 027534f3 has its CatchHandler @ 02653478
                       catch() { ... } // from try @ 02653478 with catch @ 02653478
                       catch() { ... } // from try @ 0265378c with catch @ 02653478
                       catch() { ... } // from try @ 02653830 with catch @ 02653478
                       catch() { ... } // from try @ 026538f4 with catch @ 02653478
                       catch() { ... } // from try @ 0265393c with catch @ 02653478
                       catch() { ... } // from try @ 02653974 with catch @ 02653478
                       catch() { ... } // from try @ 026539b0 with catch @ 02653478
                       catch() { ... } // from try @ 02653a18 with catch @ 02653478 */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

