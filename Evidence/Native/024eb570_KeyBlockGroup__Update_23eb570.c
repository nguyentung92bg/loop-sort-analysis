/* IL2CPP: KeyBlockGroup$$Update
void KeyBlockGroup__Update (KeyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroup$$Update
   void KeyBlockGroup__Update (KeyBlockGroup_o* __this, const MethodInfo* method); */

void KeyBlockGroup__Update_23eb570(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
                    /* try { // try from 024eb578 to 025eb57b has its CatchHandler @ 024eb598 */
  if (*(char *)(param_4 + 0xb8) != '\0') {
                    /* try { // try from 024eb588 to 025eb58b has its CatchHandler @ 024eb5ac */
    return;
  }
                    /* try { // try from 024eb58c to 025eb58f has its CatchHandler @ 024eb5a4 */
                    /* try { // try from 024eb590 to 025eb593 has its CatchHandler @ 024eb5a8 */
                    /* try { // try from 024eb594 to 025eb597 has its CatchHandler @ 024eb5a0 */
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                    /* catch() { ... } // from try @ 024eb578 with catch @ 024eb598
                       try { // try from 024eb598 to 025eb5db has its CatchHandler @ 024eaf70 */
                    /* catch() { ... } // from try @ 024eb564 with catch @ 024eb59c */
                    /* catch() { ... } // from try @ 024eb594 with catch @ 024eb5a0 */
                    /* catch() { ... } // from try @ 024eb58c with catch @ 024eb5a4 */
                    /* catch() { ... } // from try @ 024eb4b0 with catch @ 024eb5a8
                       catch() { ... } // from try @ 024eb590 with catch @ 024eb5a8 */
                    /* catch() { ... } // from try @ 024eb588 with catch @ 024eb5ac */
                    /* catch() { ... } // from try @ 024eb4f4 with catch @ 024eb5b0
                       catch() { ... } // from try @ 024eb530 with catch @ 024eb5b0 */
                    /* catch() { ... } // from try @ 024eb3c0 with catch @ 024eb5b4 */
                    /* catch() { ... } // from try @ 024eb238 with catch @ 024eb5b8
                       catch() { ... } // from try @ 024eb3f4 with catch @ 024eb5b8
                       catch() { ... } // from try @ 024eb504 with catch @ 024eb5b8 */
                    /* catch() { ... } // from try @ 024eb410 with catch @ 024eb5bc */
  if (((*(long *)(param_4 + 0xc0) != 0) &&
      (lVar2 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 0xc0),0), lVar2 != 0
      )) && (fStack_2c = (float)UnityEngine_Transform__get_position_3c2d540(lVar2,0), lVar1 != 0)) {
                    /* catch() { ... } // from try @ 024eb434 with catch @ 024eb5c0 */
    fStack_2c = fStack_2c + *(float *)(param_4 + 200);
    fStack_24 = param_3 + *(float *)(param_4 + 0xd0);
                    /* try { // try from 024eb5dc to 025eb5df has its CatchHandler @ 024eb5fc */
    fStack_28 = param_2 + *(float *)(param_4 + 0xcc);
                    /* try { // try from 024eb5e0 to 025eb5ff has its CatchHandler @ 024eaf70 */
    if ((bRam0000000004f58a09 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a09 = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f58a38 == (code *)0x0) {
        pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
      }
      (*pcRam0000000004f58a38)(lVar2,&fStack_2c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

