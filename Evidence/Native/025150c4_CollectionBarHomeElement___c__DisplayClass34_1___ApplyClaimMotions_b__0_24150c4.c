/* IL2CPP: CollectionBarHomeElement.<>c__DisplayClass34_1$$<ApplyClaimMotions>b__0
void CollectionBarHomeElement___c__DisplayClass34_1___ApplyClaimMotions_b__0 (CollectionBarHomeElement___c__DisplayClass34_1_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CollectionBarHomeElement.<>c__DisplayClass34_1$$<ApplyClaimMotions>b__0
   void CollectionBarHomeElement___c__DisplayClass34_1___ApplyClaimMotions_b__0
   (CollectionBarHomeElement___c__DisplayClass34_1_o* __this, float x, const MethodInfo* method); */

void CollectionBarHomeElement___c__DisplayClass34_1___ApplyClaimMotions_b__0_24150c4
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_046086e0(param_1 * _UNK_013aa860);
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
    (*pcRam0000000004f58a38)(lVar2,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

