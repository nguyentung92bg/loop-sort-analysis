/* IL2CPP: StickyBlockGroupSystem$$OnAwake
void StickyBlockGroupSystem__OnAwake (StickyBlockGroupSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroupSystem$$OnAwake
   void StickyBlockGroupSystem__OnAwake (StickyBlockGroupSystem_o* __this, const MethodInfo*
   method); */

void StickyBlockGroupSystem__OnAwake_23f2a98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c1960;
                    /* try { // try from 024f2aa8 to 025f2aab has its CatchHandler @ 024f2bb4 */
                    /* try { // try from 024f2aac to 025f2aaf has its CatchHandler @ 024f2bbc */
                    /* try { // try from 024f2ab0 to 025f2ab3 has its CatchHandler @ 024f2aec */
                    /* try { // try from 024f2ab4 to 025f2ab7 has its CatchHandler @ 024f2ae8 */
  if ((bRam0000000004f4b64b & 1) == 0) {
                    /* try { // try from 024f2ab8 to 025f2abb has its CatchHandler @ 024f2b00 */
                    /* catch() { ... } // from try @ 024f2910 with catch @ 024f2abc
                       try { // try from 024f2abc to 025f2b2f has its CatchHandler @ 024f2628 */
                    /* catch() { ... } // from try @ 024f28e4 with catch @ 024f2ac0 */
    FUN_021f03f8(PTR_DAT_049c1960);
                    /* catch() { ... } // from try @ 024f2744 with catch @ 024f2ac4 */
                    /* catch() { ... } // from try @ 024f2a54 with catch @ 024f2ac8 */
    bRam0000000004f4b64b = 1;
  }
                    /* catch() { ... } // from try @ 024f287c with catch @ 024f2acc */
                    /* catch() { ... } // from try @ 024f2a6c with catch @ 024f2ad0 */
                    /* catch() { ... } // from try @ 024f2890 with catch @ 024f2ad4 */
  SystemBase__OnAwake_2555e24(param_1,0);
                    /* catch() { ... } // from try @ 024f2918 with catch @ 024f2ad8 */
                    /* catch() { ... } // from try @ 024f28ec with catch @ 024f2adc */
                    /* catch() { ... } // from try @ 024f2800 with catch @ 024f2ae0 */
  uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 024f27f4 with catch @ 024f2ae4 */
  puVar3 = (undefined8 *)(param_1 + 0x68);
  *puVar3 = uVar2;
                    /* catch() { ... } // from try @ 024f2ab4 with catch @ 024f2ae8 */
                    /* catch() { ... } // from try @ 024f2ab0 with catch @ 024f2aec */
                    /* catch() { ... } // from try @ 024f2748 with catch @ 024f2af0 */
                    /* catch() { ... } // from try @ 024f29dc with catch @ 024f2af4 */
                    /* catch() { ... } // from try @ 024f2810 with catch @ 024f2af8 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

