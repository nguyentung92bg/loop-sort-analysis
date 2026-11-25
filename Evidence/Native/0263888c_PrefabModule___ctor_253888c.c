/* IL2CPP: PrefabModule$$.ctor
void PrefabModule___ctor (PrefabModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$.ctor
   void PrefabModule___ctor (PrefabModule_o* __this, const MethodInfo* method); */

undefined1  [16] PrefabModule___ctor_253888c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049ca330;
  puVar3 = PTR_DAT_049ca328;
  puVar2 = PTR_DAT_049ca320;
  puVar1 = PTR_DAT_049ca318;
  if ((bRam0000000004f4bf6d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca330);
                    /* try { // try from 026388e0 to 027388f3 has its CatchHandler @ 026393bc */
    FUN_021f03f8(PTR_DAT_049ca320);
    FUN_021f03f8(PTR_DAT_049ca328);
    FUN_021f03f8(PTR_DAT_049ca318);
    bRam0000000004f4bf6d = 1;
  }
                    /* try { // try from 02638904 to 02738907 has its CatchHandler @ 02639354 */
                    /* try { // try from 02638908 to 02738923 has its CatchHandler @ 02639378 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x10),uVar5);
                    /* try { // try from 02638928 to 02738933 has its CatchHandler @ 02639374 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
                    /* try { // try from 02638948 to 02738a33 has its CatchHandler @ 026393c0 */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

