/* IL2CPP: VoodooSauceProvider$$.ctor
void VoodooSauceProvider___ctor (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$.ctor
   void VoodooSauceProvider___ctor (VoodooSauceProvider_o* __this, const MethodInfo* method); */

undefined1  [16] VoodooSauceProvider___ctor_2258b90(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049b64f0;
                    /* try { // try from 02358b90 to 02458bbf has its CatchHandler @ 02358b90
                       catch() { ... } // from try @ 02358b90 with catch @ 02358b90
                       catch() { ... } // from try @ 02358bcc with catch @ 02358b90 */
  puVar1 = PTR_DAT_049b64e8;
  if ((bRam0000000004f49bdb & 1) == 0) {
                    /* try { // try from 02358bc0 to 02458bcb has its CatchHandler @ 02358bec */
    FUN_021f03f8(PTR_DAT_049b64f0);
                    /* try { // try from 02358bcc to 02458c07 has its CatchHandler @ 02358b90 */
    FUN_021f03f8(PTR_DAT_049b64e8);
    bRam0000000004f49bdb = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02358bc0 with catch @ 02358bec */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 02358c08 to 02458c7b has its CatchHandler @ 02358c08
                       catch() { ... } // from try @ 02358c08 with catch @ 02358c08
                       catch() { ... } // from try @ 02358c90 with catch @ 02358c08 */
  return auVar4;
}

