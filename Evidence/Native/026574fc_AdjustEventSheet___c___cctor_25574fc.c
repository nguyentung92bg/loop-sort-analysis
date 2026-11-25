/* IL2CPP: AdjustEventSheet.<>c$$.cctor
void AdjustEventSheet___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet.<>c$$.cctor
   void AdjustEventSheet___c___cctor (const MethodInfo* method); */

void AdjustEventSheet___c___cctor_25574fc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049cb1d0;
  if ((bRam0000000004f4c0b7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb1d0);
                    /* try { // try from 02657528 to 02757533 has its CatchHandler @ 02657540 */
    bRam0000000004f4c0b7 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 0265753c to 0275753f has its CatchHandler @ 02657544 */
  System_Object___ctor_3142338(uVar2,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02657528 with catch @ 02657540
                       try { // try from 02657540 to 0275755b has its CatchHandler @ 026574f0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0265753c with catch @ 02657544
                        */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 0265755c to 02757573 has its CatchHandler @ 026575c8 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

