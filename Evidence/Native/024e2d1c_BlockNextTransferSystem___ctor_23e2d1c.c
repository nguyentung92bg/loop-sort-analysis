/* IL2CPP: BlockNextTransferSystem$$.ctor
void BlockNextTransferSystem___ctor (BlockNextTransferSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockNextTransferSystem$$.ctor
   void BlockNextTransferSystem___ctor (BlockNextTransferSystem_o* __this, const MethodInfo*
   method); */

undefined1  [16] BlockNextTransferSystem___ctor_23e2d1c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c17e0;
  puVar1 = PTR_DAT_049c17d8;
                    /* try { // try from 024e2d38 to 025e2d43 has its CatchHandler @ 024e2fb4 */
  if ((bRam0000000004f4b5e4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c17e0);
    FUN_021f03f8(PTR_DAT_049c17d8);
    bRam0000000004f4b5e4 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Stack___Il2CppFullySharedGenericType____ctor_29a21c8
            (uVar3,*(undefined8 *)puVar2);
                    /* try { // try from 024e2d84 to 025e2db3 has its CatchHandler @ 024e2f0c */
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

