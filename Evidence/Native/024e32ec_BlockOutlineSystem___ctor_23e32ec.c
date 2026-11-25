/* IL2CPP: BlockOutlineSystem$$.ctor
void BlockOutlineSystem___ctor (BlockOutlineSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockOutlineSystem$$.ctor
   void BlockOutlineSystem___ctor (BlockOutlineSystem_o* __this, const MethodInfo* method); */

undefined1  [16] BlockOutlineSystem___ctor_23e32ec(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c1848;
  puVar1 = PTR_DAT_049c1840;
                    /* try { // try from 024e3314 to 025e3347 has its CatchHandler @ 024e35dc */
  if ((bRam0000000004f4b5eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1848);
    FUN_021f03f8(PTR_DAT_049c1840);
    bRam0000000004f4b5eb = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 024e3348 to 025e3353 has its CatchHandler @ 024e35d4 */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 024e335c to 025e3373 has its CatchHandler @ 024e340c */
  return auVar4;
}

