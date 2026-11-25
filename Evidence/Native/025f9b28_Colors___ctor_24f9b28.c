/* IL2CPP: Colors$$.ctor
void Colors___ctor (Colors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Colors$$.ctor
   void Colors___ctor (Colors_o* __this, const MethodInfo* method); */

void Colors___ctor_24f9b28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_049c8890;
  puVar1 = PTR_DAT_049c8888;
                    /* try { // try from 025f9b48 to 026f9b53 has its CatchHandler @ 025f9c78 */
  if ((bRam0000000004f4bd3c & 1) == 0) {
                    /* try { // try from 025f9b58 to 026f9b5b has its CatchHandler @ 025f9b94 */
    FUN_021f03f8(PTR_DAT_049c8890);
                    /* try { // try from 025f9b60 to 026f9b63 has its CatchHandler @ 025f9b8c */
                    /* try { // try from 025f9b68 to 026f9b6b has its CatchHandler @ 025f9b88 */
    FUN_021f03f8(PTR_DAT_049c8888);
                    /* try { // try from 025f9b70 to 026f9b73 has its CatchHandler @ 025f9b84 */
    bRam0000000004f4bd3c = 1;
  }
                    /* try { // try from 025f9b74 to 026f9bbf has its CatchHandler @ 025f9328 */
                    /* catch() { ... } // from try @ 025f9a24 with catch @ 025f9b78 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025f9a54 with catch @ 025f9b7c */
                    /* catch() { ... } // from try @ 025f9a60 with catch @ 025f9b80 */
                    /* catch() { ... } // from try @ 025f9b70 with catch @ 025f9b84 */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 025f9b68 with catch @ 025f9b88 */
                    /* catch() { ... } // from try @ 025f9b60 with catch @ 025f9b8c */
                    /* catch() { ... } // from try @ 025f9a38 with catch @ 025f9b90 */
  *(undefined8 *)(param_1 + 0x20) = uVar3;
                    /* catch() { ... } // from try @ 025f9b58 with catch @ 025f9b94 */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar3);
  puVar1 = PTR_DAT_049b3b98;
                    /* catch() { ... } // from try @ 025f9aa4 with catch @ 025f9b98 */
                    /* catch() { ... } // from try @ 025f99a8 with catch @ 025f9b9c */
                    /* catch() { ... } // from try @ 025f99c8 with catch @ 025f9ba0 */
  if ((bRam0000000004f58430 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f58430 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Object___ctor_3142338(param_1,0);
  if (pcRam0000000004f58438 == (code *)0x0) {
    pcRam0000000004f58438 = (code *)FUN_021f03bc(&UNK_013c1465);
  }
                    /* WARNING: Could not recover jumptable at 0x03d209d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f58438)(param_1);
  return;
}

