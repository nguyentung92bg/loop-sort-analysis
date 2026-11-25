/* IL2CPP: Extensions$$ToLookRotation
UnityEngine_Quaternion_o Extensions__ToLookRotation (int32_t direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToLookRotation
   UnityEngine_Quaternion_o Extensions__ToLookRotation (int32_t direction, const MethodInfo*
   method); */

undefined4 Extensions__ToLookRotation_24e6420(int param_1)

{
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 025e6424 to 026e642b has its CatchHandler @ 025e65cc */
  if (param_1 < 3) {
    if (param_1 == 0) {
                    /* try { // try from 025e6518 to 026e651f has its CatchHandler @ 025e65d4 */
      if (cRam0000000004f4a690 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a690 = '\x01';
      }
      goto LAB_025e65d4;
    }
    if (param_1 == 1) {
                    /* try { // try from 025e6598 to 026e659b has its CatchHandler @ 025e65a8 */
                    /* try { // try from 025e659c to 026e65a3 has its CatchHandler @ 025e65b4 */
      if (cRam0000000004f4a632 == '\0') {
                    /* catch() { ... } // from try @ 025e6468 with catch @ 025e65a4
                       try { // try from 025e65a4 to 026e6607 has its CatchHandler @ 025e618c */
                    /* catch() { ... } // from try @ 025e6598 with catch @ 025e65a8 */
                    /* catch() { ... } // from try @ 025e62f4 with catch @ 025e65ac */
        FUN_021f03f8(PTR_DAT_049bbf90);
                    /* catch() { ... } // from try @ 025e6584 with catch @ 025e65b0 */
                    /* catch() { ... } // from try @ 025e6538 with catch @ 025e65b4
                       catch() { ... } // from try @ 025e659c with catch @ 025e65b4 */
        cRam0000000004f4a632 = '\x01';
      }
      goto LAB_025e65d4;
    }
    if (param_1 == 2) {
                    /* try { // try from 025e6444 to 026e6447 has its CatchHandler @ 025e65b8 */
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      goto LAB_025e65d4;
    }
  }
  else {
    if (param_1 == 3) {
      if (cRam0000000004f4a68f == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68f = '\x01';
      }
      goto LAB_025e65d4;
    }
                    /* try { // try from 025e648c to 026e6493 has its CatchHandler @ 025e65e0 */
    if ((param_1 != 4) && (param_1 == 5)) {
      if (cRam0000000004f4a68e == '\0') {
                    /* try { // try from 025e64ac to 026e64f7 has its CatchHandler @ 025e65e8 */
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68e = '\x01';
      }
      goto LAB_025e65d4;
    }
  }
  if (cRam0000000004f4a55a == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55a = '\x01';
  }
LAB_025e65d4:
                    /* catch() { ... } // from try @ 025e6518 with catch @ 025e65d4 */
                    /* catch() { ... } // from try @ 025e63d8 with catch @ 025e65d8 */
                    /* catch() { ... } // from try @ 025e6400 with catch @ 025e65dc */
                    /* catch() { ... } // from try @ 025e648c with catch @ 025e65e0 */
                    /* catch() { ... } // from try @ 025e6354 with catch @ 025e65e4 */
                    /* catch() { ... } // from try @ 025e64ac with catch @ 025e65e8 */
  if (cRam0000000004f4a55e == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55e = '\x01';
  }
  uStack_28 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
  uStack_24 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x1c);
  uStack_38 = 0;
  if (pcRam0000000004f57ec0 == (code *)0x0) {
    pcRam0000000004f57ec0 = (code *)FUN_021f03bc(&UNK_013e8be1);
  }
  (*pcRam0000000004f57ec0)(&stack0xffffffffffffffe4,&uStack_28,&uStack_38);
  return (undefined4)uStack_38;
}

