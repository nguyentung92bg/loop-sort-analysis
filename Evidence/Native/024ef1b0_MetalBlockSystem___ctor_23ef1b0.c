/* IL2CPP: MetalBlockSystem$$.ctor
void MetalBlockSystem___ctor (MetalBlockSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$.ctor
   void MetalBlockSystem___ctor (MetalBlockSystem_o* __this, const MethodInfo* method); */

undefined1  [16] MetalBlockSystem___ctor_23ef1b0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_049c2038;
  puVar5 = PTR_DAT_049c2030;
  puVar4 = PTR_DAT_049c2028;
  puVar3 = PTR_DAT_049c2020;
  puVar2 = PTR_DAT_049c1a38;
  puVar1 = PTR_DAT_049c1a30;
                    /* try { // try from 024ef1b4 to 025ef1db has its CatchHandler @ 024ee4f8 */
                    /* catch() { ... } // from try @ 024ee800 with catch @ 024ef1b8
                       catch() { ... } // from try @ 024ef040 with catch @ 024ef1b8 */
                    /* catch() { ... } // from try @ 024ee894 with catch @ 024ef1bc */
                    /* try { // try from 024ef1dc to 025ef1df has its CatchHandler @ 024ef1e8 */
                    /* catch() { ... } // from try @ 024ef1dc with catch @ 024ef1e8 */
                    /* try { // try from 024ef1f0 to 025ef1f7 has its CatchHandler @ 024ef2bc */
                    /* try { // try from 024ef1f8 to 025ef20b has its CatchHandler @ 024ee4f8 */
  if ((bRam0000000004f4b63b & 1) == 0) {
                    /* try { // try from 024ef20c to 025ef223 has its CatchHandler @ 024ef2ac */
    FUN_021f03f8(PTR_DAT_049c2028);
    FUN_021f03f8(PTR_DAT_049c2020);
                    /* try { // try from 024ef224 to 025ef29b has its CatchHandler @ 024ee4f8 */
    FUN_021f03f8(PTR_DAT_049c1a30);
    FUN_021f03f8(PTR_DAT_049c2038);
    FUN_021f03f8(PTR_DAT_049c2030);
    FUN_021f03f8(PTR_DAT_049c1a38);
    bRam0000000004f4b63b = 1;
  }
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar7,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar7);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar7);
                    /* try { // try from 024ef29c to 025ef2ab has its CatchHandler @ 024ef2ac */
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 024ef20c with catch @ 024ef2ac
                       catch() { ... } // from try @ 024ef29c with catch @ 024ef2ac */
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar7,*(undefined8 *)puVar6);
                    /* try { // try from 024ef2b0 to 025ef2b3 has its CatchHandler @ 024ef2bc */
                    /* try { // try from 024ef2b4 to 025ef2bf has its CatchHandler @ 024ee4f8 */
  *(undefined8 *)(param_1 + 0x88) = uVar7;
                    /* catch() { ... } // from try @ 024ef0fc with catch @ 024ef2bc
                       catch() { ... } // from try @ 024ef158 with catch @ 024ef2bc
                       catch() { ... } // from try @ 024ef1ac with catch @ 024ef2bc
                       catch() { ... } // from try @ 024ef1f0 with catch @ 024ef2bc
                       catch() { ... } // from try @ 024ef2b0 with catch @ 024ef2bc */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar7);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1;
  return auVar8;
}

