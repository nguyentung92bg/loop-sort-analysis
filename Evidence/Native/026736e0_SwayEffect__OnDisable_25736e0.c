/* IL2CPP: SwayEffect$$OnDisable
void SwayEffect__OnDisable (SwayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwayEffect$$OnDisable
   void SwayEffect__OnDisable (SwayEffect_o* __this, const MethodInfo* method); */

void SwayEffect__OnDisable_25736e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 026736e0 to 027736fb has its CatchHandler @ 02673b64 */
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02673700 to 0277370b has its CatchHandler @ 02673b60 */
    FUN_021f06a0();
  }
  uStack_30 = *(undefined4 *)(param_1 + 0x38);
  uStack_2c = *(undefined4 *)(param_1 + 0x3c);
  uStack_28 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x44);
  if ((bRam0000000004f58a0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a0f = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58a68 == (code *)0x0) {
      pcRam0000000004f58a68 = (code *)FUN_021f03bc(&UNK_013d4d69);
    }
    (*pcRam0000000004f58a68)(lVar2,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

