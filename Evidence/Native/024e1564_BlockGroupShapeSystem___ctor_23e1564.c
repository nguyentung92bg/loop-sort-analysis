/* IL2CPP: BlockGroupShapeSystem$$.ctor
void BlockGroupShapeSystem___ctor (BlockGroupShapeSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockGroupShapeSystem$$.ctor
   void BlockGroupShapeSystem___ctor (BlockGroupShapeSystem_o* __this, const MethodInfo* method); */

undefined1  [16] BlockGroupShapeSystem___ctor_23e1564(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c16d0;
  puVar3 = PTR_DAT_049c16c8;
  puVar2 = PTR_DAT_049c16c0;
                    /* catch() { ... } // from try @ 024e13d8 with catch @ 024e1564 */
  puVar1 = PTR_DAT_049c16b8;
                    /* catch() { ... } // from try @ 024e0bbc with catch @ 024e1568 */
                    /* catch() { ... } // from try @ 024e0b50 with catch @ 024e156c */
                    /* catch() { ... } // from try @ 024e0b3c with catch @ 024e1570 */
                    /* catch() { ... } // from try @ 024e13d4 with catch @ 024e1574 */
                    /* catch() { ... } // from try @ 024e13d0 with catch @ 024e1578 */
                    /* catch() { ... } // from try @ 024e0b20 with catch @ 024e157c */
                    /* try { // try from 024e159c to 025e159f has its CatchHandler @ 024e15a8 */
  if ((bRam0000000004f4b5db & 1) == 0) {
                    /* catch() { ... } // from try @ 024e159c with catch @ 024e15a8 */
                    /* try { // try from 024e15ac to 025e15b3 has its CatchHandler @ 024e15bc */
    FUN_021f03f8(PTR_DAT_049c16d0);
                    /* try { // try from 024e15b4 to 025e15bf has its CatchHandler @ 024e04a4 */
    FUN_021f03f8(PTR_DAT_049c16c0);
                    /* catch() { ... } // from try @ 024e141c with catch @ 024e15bc
                       catch() { ... } // from try @ 024e14f0 with catch @ 024e15bc
                       catch() { ... } // from try @ 024e15ac with catch @ 024e15bc */
                    /* try { // try from 024e15c0 to 025e16f3 has its CatchHandler @ 024e15c0
                       catch() { ... } // from try @ 024e15c0 with catch @ 024e15c0
                       catch() { ... } // from try @ 024e1830 with catch @ 024e15c0
                       catch() { ... } // from try @ 024e18c8 with catch @ 024e15c0
                       catch() { ... } // from try @ 024e1928 with catch @ 024e15c0 */
    FUN_021f03f8(PTR_DAT_049c16c8);
    FUN_021f03f8(PTR_DAT_049c16b8);
    bRam0000000004f4b5db = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x70),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

