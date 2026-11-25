/* IL2CPP: HiddenBlockSystem$$.ctor
void HiddenBlockSystem___ctor (HiddenBlockSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlockSystem$$.ctor
   void HiddenBlockSystem___ctor (HiddenBlockSystem_o* __this, const MethodInfo* method); */

undefined1  [16] HiddenBlockSystem___ctor_23eb108(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c1de0;
  puVar3 = PTR_DAT_049c1dd8;
  puVar2 = PTR_DAT_049c1dd0;
  puVar1 = PTR_DAT_049c1dc8;
                    /* try { // try from 024eb138 to 025eb16f has its CatchHandler @ 024eb338 */
  if ((bRam0000000004f4b61c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1dd0);
    FUN_021f03f8(PTR_DAT_049c1de0);
    FUN_021f03f8(PTR_DAT_049c1dc8);
    FUN_021f03f8(PTR_DAT_049c1dd8);
    bRam0000000004f4b61c = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                    /* try { // try from 024eb1b4 to 025eb1db has its CatchHandler @ 024eb35c */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

