/* IL2CPP: CollectItems.<>c__DisplayClass10_0$$<ApplyCollectItemJumpMotion>b__0
void CollectItems___c__DisplayClass10_0___ApplyCollectItemJumpMotion_b__0 (CollectItems___c__DisplayClass10_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CollectItems.<>c__DisplayClass10_0$$<ApplyCollectItemJumpMotion>b__0
   void CollectItems___c__DisplayClass10_0___ApplyCollectItemJumpMotion_b__0
   (CollectItems___c__DisplayClass10_0_o* __this, float x, const MethodInfo* method); */

void CollectItems___c__DisplayClass10_0___ApplyCollectItemJumpMotion_b__0_250edec
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0260ee2c to 0270efe3 has its CatchHandler @ 0260ee2c
                       catch() { ... } // from try @ 0260ee2c with catch @ 0260ee2c
                       catch() { ... } // from try @ 0260f050 with catch @ 0260ee2c
                       catch() { ... } // from try @ 0260f07c with catch @ 0260ee2c
                       catch() { ... } // from try @ 0260f0a8 with catch @ 0260ee2c
                       catch() { ... } // from try @ 0260f0d8 with catch @ 0260ee2c
                       catch() { ... } // from try @ 0260f0fc with catch @ 0260ee2c */
  FUN_046086e0(param_1 * _UNK_013aa860);
  if ((bRam0000000004f58960 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26c78,0);
    bRam0000000004f58960 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f589a8 == (code *)0x0) {
      pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
    }
    (*pcRam0000000004f589a8)(lVar2,&stack0xffffffffffffffe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

