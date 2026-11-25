/* IL2CPP: AreaOffer$$.cctor
void AreaOffer___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$.cctor
   void AreaOffer___cctor (const MethodInfo* method); */

void AreaOffer___cctor_250b35c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bdc6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c90b0);
    FUN_021f03f8(PTR_DAT_049c90b8);
    FUN_021f03f8(PTR_DAT_049c90c0);
                    /* try { // try from 0260b3c4 to 0270b3c7 has its CatchHandler @ 0260bb7c */
                    /* try { // try from 0260b3c8 to 0270b3d7 has its CatchHandler @ 0260bb9c */
    bRam0000000004f4bdc6 = 1;
  }
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar1,3);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
                    /* try { // try from 0260b3ec to 0270b3ef has its CatchHandler @ 0260bb5c */
                    /* try { // try from 0260b3f0 to 0270b3ff has its CatchHandler @ 0260bb94 */
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_049c90b8;
      thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x20));
                    /* try { // try from 0260b40c to 0270b413 has its CatchHandler @ 0260bb90 */
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_049c90c0;
                    /* try { // try from 0260b424 to 0270b43b has its CatchHandler @ 0260bb8c */
        thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x28));
        puVar2 = PTR_DAT_049c5440;
        puVar1 = PTR_DAT_049b6128;
        if (2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 0260b444 to 0270b45b has its CatchHandler @ 0260bb88 */
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_049c90b0;
          thunk_FUN_021f190c();
                    /* try { // try from 0260b464 to 0270b477 has its CatchHandler @ 0260bb78 */
          **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
          thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar3);
          lVar3 = *(long *)puVar1;
                    /* try { // try from 0260b480 to 0270b493 has its CatchHandler @ 0260bb74 */
          if (*(int *)(lVar3 + 0xe4) == 0) {
            FUN_021f0574();
            lVar3 = *(long *)puVar1;
          }
                    /* try { // try from 0260b4ac to 0270b4b7 has its CatchHandler @ 0260bc0c */
          uStack_30 = 0;
          uStack_28 = 0;
          System_DateTimeOffset___ctor_30e0a3c
                    (&uStack_30,0x7ea,1,1,0,0,0,**(undefined8 **)(lVar3 + 0xb8),0);
                    /* try { // try from 0260b4c4 to 0270b4d3 has its CatchHandler @ 0260bc00 */
          lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
          *(undefined8 *)(lVar3 + 0x10) = uStack_28;
          *(undefined8 *)(lVar3 + 8) = uStack_30;
                    /* try { // try from 0260b4dc to 0270b4eb has its CatchHandler @ 0260bbfc */
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

