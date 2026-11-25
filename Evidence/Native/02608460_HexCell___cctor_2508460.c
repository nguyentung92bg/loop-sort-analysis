/* IL2CPP: HexCell$$.cctor
void HexCell___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HexCell$$.cctor
   void HexCell___cctor (const MethodInfo* method); */

void HexCell___cctor_2508460(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_049c1428;
                    /* try { // try from 02608470 to 02708473 has its CatchHandler @ 02608480 */
                    /* try { // try from 02608474 to 02708477 has its CatchHandler @ 0260847c */
                    /* try { // try from 02608478 to 0270849f has its CatchHandler @ 02608210 */
  if ((bRam0000000004f4bda5 & 1) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02608474 with catch @ 0260847c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02608470 with catch @ 02608480
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02608364 with catch @ 02608484
                        */
    FUN_021f03f8(PTR_DAT_049c8f00);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026083e4 with catch @ 02608488
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02608384 with catch @ 0260848c
                        */
    FUN_021f03f8(PTR_DAT_049c1428);
    bRam0000000004f4bda5 = 1;
  }
                    /* try { // try from 026084a0 to 027084a3 has its CatchHandler @ 026084bc */
                    /* try { // try from 026084a4 to 027084bf has its CatchHandler @ 02608210 */
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar2,6);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 026084a0 with catch @ 026084bc */
                    /* try { // try from 026084c0 to 027084c7 has its CatchHandler @ 026084d0 */
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0x1ffffffff;
                    /* try { // try from 026084c8 to 027084d3 has its CatchHandler @ 02608210 */
      if (uVar1 != 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026084c0 with catch @ 026084d0
                        */
        *(undefined8 *)(lVar3 + 0x2c) = 0x100000000;
        *(undefined4 *)(lVar3 + 0x34) = 0xffffffff;
        if (2 < uVar1) {
          *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
          *(undefined8 *)(lVar3 + 0x38) = 1;
          if (uVar1 != 3) {
            *(undefined4 *)(lVar3 + 0x4c) = 0;
            *(undefined8 *)(lVar3 + 0x44) = 0xffffffff00000001;
            if (4 < uVar1) {
              *(undefined8 *)(lVar3 + 0x50) = 0xffffffff00000000;
              *(undefined4 *)(lVar3 + 0x58) = 1;
              puVar2 = PTR_DAT_049c8f00;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar3 + 0x5c) = 0xffffffff;
                *(undefined4 *)(lVar3 + 100) = 1;
                **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
                uVar4 = *(ulong *)(*(long *)puVar2 + 0xb8);
                if (iRam0000000005174518 != 0) {
                  FUN_023118d0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0)
                  ;
                }
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

