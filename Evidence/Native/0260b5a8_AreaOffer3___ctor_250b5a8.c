/* IL2CPP: AreaOffer3$$.ctor
void AreaOffer3___ctor (AreaOffer3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer3$$.ctor
   void AreaOffer3___ctor (AreaOffer3_o* __this, const MethodInfo* method); */

undefined1  [16] AreaOffer3___ctor_250b5a8(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_049c5440;
                    /* try { // try from 0260b5c0 to 0270b5c3 has its CatchHandler @ 0260bb80 */
  if ((bRam0000000004f4bdc9 & 1) == 0) {
                    /* try { // try from 0260b5c8 to 0270b5d3 has its CatchHandler @ 0260bba4 */
    FUN_021f03f8(PTR_DAT_049c5440);
    bRam0000000004f4bdc9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0260b5e8 to 0270b69b has its CatchHandler @ 0260bc04 */
    FUN_021f0574();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

