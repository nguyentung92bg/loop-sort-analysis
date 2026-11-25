/* IL2CPP: SceneRegistry$$.ctor
void SceneRegistry___ctor (SceneRegistry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$.ctor
   void SceneRegistry___ctor (SceneRegistry_o* __this, const MethodInfo* method); */

undefined1  [16] SceneRegistry___ctor_25544ac(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049cafb8;
  puVar1 = PTR_DAT_049cafb0;
  if ((bRam0000000004f4c098 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cafb8);
    FUN_021f03f8(PTR_DAT_049cafb0);
    bRam0000000004f4c098 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 02654528 to 02754637 has its CatchHandler @ 02654528
                       catch() { ... } // from try @ 02654528 with catch @ 02654528
                       catch() { ... } // from try @ 0265471c with catch @ 02654528
                       catch() { ... } // from try @ 026547b0 with catch @ 02654528
                       catch() { ... } // from try @ 0265480c with catch @ 02654528 */
  return auVar4;
}

