/* IL2CPP: StickyBlockGroup$$Update
void StickyBlockGroup__Update (StickyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroup$$Update
   void StickyBlockGroup__Update (StickyBlockGroup_o* __this, const MethodInfo* method); */

void StickyBlockGroup__Update_23f2308
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
                    /* try { // try from 024f2308 to 025f2327 has its CatchHandler @ 024f23e0 */
  if (*(char *)(param_4 + 0xa8) != '\0') {
    return;
  }
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                    /* try { // try from 024f2338 to 025f233f has its CatchHandler @ 024f23d0 */
                    /* try { // try from 024f2344 to 025f234f has its CatchHandler @ 024f23cc */
  if (((*(long *)(param_4 + 0xb0) != 0) &&
      (lVar2 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 0xb0),0), lVar2 != 0
      )) && (fStack_2c = (float)UnityEngine_Transform__get_position_3c2d540(lVar2,0), lVar1 != 0)) {
                    /* try { // try from 024f2364 to 025f236b has its CatchHandler @ 024f23c4 */
    fStack_2c = fStack_2c + *(float *)(param_4 + 0xb8);
    fStack_24 = param_3 + *(float *)(param_4 + 0xc0);
    fStack_28 = param_2 + *(float *)(param_4 + 0xbc);
                    /* try { // try from 024f2378 to 025f2397 has its CatchHandler @ 024f23c8 */
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

