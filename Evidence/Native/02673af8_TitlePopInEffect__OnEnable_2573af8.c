/* IL2CPP: TitlePopInEffect$$OnEnable
void TitlePopInEffect__OnEnable (TitlePopInEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TitlePopInEffect$$OnEnable
   void TitlePopInEffect__OnEnable (TitlePopInEffect_o* __this, const MethodInfo* method); */

void TitlePopInEffect__OnEnable_2573af8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b5680;
                    /* try { // try from 02673b08 to 02773b13 has its CatchHandler @ 02673b50 */
  if ((bRam0000000004f4c1f0 & 1) == 0) {
                    /* try { // try from 02673b24 to 02773b2f has its CatchHandler @ 02673b4c */
    FUN_021f03f8(PTR_DAT_049b5680);
    bRam0000000004f4c1f0 = 1;
  }
                    /* try { // try from 02673b34 to 02773b37 has its CatchHandler @ 02673bac */
  auStack_24[0] = 0;
                    /* try { // try from 02673b38 to 02773b3b has its CatchHandler @ 02673bb8 */
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 02673b3c to 02773b3f has its CatchHandler @ 02673b9c */
                    /* try { // try from 02673b40 to 02773b43 has its CatchHandler @ 02673bb0 */
                    /* try { // try from 02673b44 to 02773b47 has its CatchHandler @ 02673b94 */
  System_Threading_CancellationTokenSource___ctor_3165668(lVar2,0);
                    /* try { // try from 02673b48 to 02773b4b has its CatchHandler @ 02673ba0 */
                    /* catch() { ... } // from try @ 02673b24 with catch @ 02673b4c */
                    /* catch() { ... } // from try @ 02673b08 with catch @ 02673b50 */
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = lVar2;
                    /* catch() { ... } // from try @ 026736dc with catch @ 02673b54 */
                    /* catch() { ... } // from try @ 02673ac4 with catch @ 02673b58 */
  thunk_FUN_021f190c(plVar4,lVar2);
                    /* catch() { ... } // from try @ 02673aa8 with catch @ 02673b5c */
                    /* catch() { ... } // from try @ 02673700 with catch @ 02673b60 */
  if (*plVar4 != 0) {
                    /* catch() { ... } // from try @ 026736e0 with catch @ 02673b64 */
                    /* catch() { ... } // from try @ 026736c0 with catch @ 02673b68 */
    uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4(*plVar4,0);
                    /* catch() { ... } // from try @ 026738a8 with catch @ 02673b6c */
                    /* catch() { ... } // from try @ 02673720 with catch @ 02673b70
                       catch() { ... } // from try @ 02673ae4 with catch @ 02673b70 */
                    /* catch() { ... } // from try @ 026738b0 with catch @ 02673b74 */
    auStack_24[0] = TitlePopInEffect__Play_2573b9c(param_1,uVar3);
                    /* catch() { ... } // from try @ 02673880 with catch @ 02673b78 */
                    /* catch() { ... } // from try @ 0267386c with catch @ 02673b7c */
                    /* catch() { ... } // from try @ 02673864 with catch @ 02673b80 */
                    /* catch() { ... } // from try @ 0267384c with catch @ 02673b84 */
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_24,0);
                    /* catch() { ... } // from try @ 02673820 with catch @ 02673b88 */
                    /* catch() { ... } // from try @ 02673818 with catch @ 02673b8c */
                    /* catch() { ... } // from try @ 026737fc with catch @ 02673b90 */
                    /* catch() { ... } // from try @ 02673b44 with catch @ 02673b94 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026737ec with catch @ 02673b98 */
  FUN_021f06a0();
}

