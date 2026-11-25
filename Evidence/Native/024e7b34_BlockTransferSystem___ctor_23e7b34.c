/* IL2CPP: BlockTransferSystem$$.ctor
void BlockTransferSystem___ctor (BlockTransferSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$.ctor
   void BlockTransferSystem___ctor (BlockTransferSystem_o* __this, const MethodInfo* method); */

undefined1  [16] BlockTransferSystem___ctor_23e7b34(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c1b40;
  puVar3 = PTR_DAT_049c1b38;
  puVar2 = PTR_DAT_049c1b30;
  puVar1 = PTR_DAT_049c1b28;
  if ((bRam0000000004f4b600 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b30);
    FUN_021f03f8(PTR_DAT_049c1b40);
    FUN_021f03f8(PTR_DAT_049c1b38);
    FUN_021f03f8(PTR_DAT_049c1b28);
                    /* try { // try from 024e7ba8 to 025e7dbf has its CatchHandler @ 024e7ba8
                       catch() { ... } // from try @ 024e7ba8 with catch @ 024e7ba8
                       catch() { ... } // from try @ 024e7e64 with catch @ 024e7ba8
                       catch() { ... } // from try @ 024e80a8 with catch @ 024e7ba8
                       catch() { ... } // from try @ 024e8164 with catch @ 024e7ba8
                       catch() { ... } // from try @ 024e81d0 with catch @ 024e7ba8
                       catch() { ... } // from try @ 024e8210 with catch @ 024e7ba8 */
    bRam0000000004f4b600 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xe8),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf0),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

