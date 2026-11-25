/* IL2CPP: Conveyor$$.ctor
void Conveyor___ctor (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$.ctor
   void Conveyor___ctor (Conveyor_o* __this, const MethodInfo* method); */

undefined1  [16] Conveyor___ctor_24b1528(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  puVar8 = PTR_DAT_049c6b38;
  puVar7 = PTR_DAT_049c6b30;
  puVar6 = PTR_DAT_049c6b28;
  puVar5 = PTR_DAT_049c6b20;
  puVar4 = PTR_DAT_049c6b18;
  puVar3 = PTR_DAT_049c6b10;
  puVar2 = PTR_DAT_049c1410;
  if ((bRam0000000004f4bb64 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6b38);
    FUN_021f03f8(PTR_DAT_049c6b28);
    FUN_021f03f8(PTR_DAT_049c6b20);
    FUN_021f03f8(PTR_DAT_049c6b30);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c6b18);
    FUN_021f03f8(PTR_DAT_049c6b10);
    bRam0000000004f4bb64 = 1;
  }
  uVar9 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  uVar9 = thunk_FUN_0222ca34(uVar9);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x120) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x120,uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar6);
                    /* catch() { ... } // from try @ 025b1640 with catch @ 025b1624
                       catch() { ... } // from try @ 025b1678 with catch @ 025b1624
                       catch() { ... } // from try @ 025b16a0 with catch @ 025b1624 */
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x128,uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
                    /* try { // try from 025b1638 to 026b163f has its CatchHandler @ 025b1658 */
                    /* try { // try from 025b1640 to 026b1673 has its CatchHandler @ 025b1624 */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x130) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x130,uVar9);
  lVar10 = *(long *)puVar2;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b1638 with catch @ 025b1658
                        */
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(undefined8 *)(param_1 + 0x168) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x170) = 0x3ff0000000000000;
  if (iVar1 == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025b1674 to 026b1677 has its CatchHandler @ 025b1694 */
  puVar5 = PTR_DAT_049c8510;
  puVar4 = PTR_DAT_049c8508;
  puVar3 = PTR_DAT_049c8500;
  puVar2 = PTR_DAT_049c84f8;
                    /* try { // try from 025b1678 to 026b1697 has its CatchHandler @ 025b1624 */
  if ((bRam0000000004f4bd27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8510,0);
    FUN_021f03f8(PTR_DAT_049c8500);
    FUN_021f03f8(PTR_DAT_049c8508);
    FUN_021f03f8(PTR_DAT_049c84f8);
    bRam0000000004f4bd27 = 1;
  }
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar9);
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1;
  return auVar11;
}

