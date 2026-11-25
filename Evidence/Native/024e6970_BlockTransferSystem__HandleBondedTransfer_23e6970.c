/* IL2CPP: BlockTransferSystem$$HandleBondedTransfer
void BlockTransferSystem__HandleBondedTransfer (BlockTransferSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HandleBondedTransfer
   void BlockTransferSystem__HandleBondedTransfer (BlockTransferSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void BlockTransferSystem__HandleBondedTransfer_23e6970(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4b5f9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
                    /* try { // try from 024e69a8 to 025e69ab has its CatchHandler @ 024e6a14 */
                    /* try { // try from 024e69ac to 025e69af has its CatchHandler @ 024e6a00 */
    FUN_021f03f8(PTR_DAT_049c14e0);
                    /* try { // try from 024e69b0 to 025e69b3 has its CatchHandler @ 024e69f0 */
                    /* try { // try from 024e69b4 to 025e69b7 has its CatchHandler @ 024e6a18 */
                    /* try { // try from 024e69b8 to 025e69bb has its CatchHandler @ 024e69ec */
    FUN_021f03f8(PTR_DAT_049c14e8);
                    /* try { // try from 024e69bc to 025e69bf has its CatchHandler @ 024e6a10 */
                    /* try { // try from 024e69c0 to 025e69c3 has its CatchHandler @ 024e69e8 */
                    /* try { // try from 024e69c4 to 025e69c7 has its CatchHandler @ 024e69e4 */
    FUN_021f03f8(PTR_DAT_049c1410);
                    /* try { // try from 024e69c8 to 025e69cb has its CatchHandler @ 024e69e0 */
                    /* try { // try from 024e69cc to 025e69cf has its CatchHandler @ 024e69dc */
                    /* try { // try from 024e69d0 to 025e69d3 has its CatchHandler @ 024e69d8 */
    FUN_021f03f8(PTR_DAT_049c14f0);
                    /* try { // try from 024e69d4 to 025e69d7 has its CatchHandler @ 024e69f4 */
                    /* catch() { ... } // from try @ 024e69d0 with catch @ 024e69d8
                       try { // try from 024e69d8 to 025e6a43 has its CatchHandler @ 024e64ec */
                    /* catch() { ... } // from try @ 024e69cc with catch @ 024e69dc */
    FUN_021f03f8(PTR_DAT_049c1550);
                    /* catch() { ... } // from try @ 024e69c8 with catch @ 024e69e0 */
                    /* catch() { ... } // from try @ 024e69c4 with catch @ 024e69e4 */
                    /* catch() { ... } // from try @ 024e69c0 with catch @ 024e69e8 */
    FUN_021f03f8(PTR_DAT_049c1558);
                    /* catch() { ... } // from try @ 024e69b8 with catch @ 024e69ec */
                    /* catch() { ... } // from try @ 024e69b0 with catch @ 024e69f0 */
                    /* catch() { ... } // from try @ 024e6768 with catch @ 024e69f4
                       catch() { ... } // from try @ 024e69d4 with catch @ 024e69f4 */
    FUN_021f03f8(PTR_DAT_049c1ac8);
                    /* catch() { ... } // from try @ 024e6908 with catch @ 024e69f8
                       catch() { ... } // from try @ 024e6944 with catch @ 024e69f8 */
                    /* catch() { ... } // from try @ 024e6968 with catch @ 024e69fc */
    bRam0000000004f4b5f9 = 1;
  }
  puVar3 = PTR_DAT_049c1558;
                    /* catch() { ... } // from try @ 024e69ac with catch @ 024e6a00 */
  lStack_60 = 0;
  uStack_58 = 0;
                    /* catch() { ... } // from try @ 024e67ac with catch @ 024e6a04
                       catch() { ... } // from try @ 024e6830 with catch @ 024e6a04 */
  uStack_50 = 0;
                    /* catch() { ... } // from try @ 024e672c with catch @ 024e6a08
                       catch() { ... } // from try @ 024e67cc with catch @ 024e6a08 */
                    /* catch() { ... } // from try @ 024e67f0 with catch @ 024e6a0c */
                    /* catch() { ... } // from try @ 024e65f0 with catch @ 024e6a10
                       catch() { ... } // from try @ 024e69bc with catch @ 024e6a10 */
                    /* catch() { ... } // from try @ 024e69a8 with catch @ 024e6a14 */
                    /* catch() { ... } // from try @ 024e65ac with catch @ 024e6a18
                       catch() { ... } // from try @ 024e69b4 with catch @ 024e6a18 */
                    /* catch() { ... } // from try @ 024e6634 with catch @ 024e6a1c */
                    /* catch() { ... } // from try @ 024e6894 with catch @ 024e6a20 */
                    /* catch() { ... } // from try @ 024e66b8 with catch @ 024e6a24 */
                    /* catch() { ... } // from try @ 024e673c with catch @ 024e6a28
                       catch() { ... } // from try @ 024e6918 with catch @ 024e6a28 */
  if ((param_2 != 0) &&
     (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (param_2,0,&lStack_78,*(undefined8 *)PTR_DAT_049c1558), lStack_78 != 0)) {
    if (0 < *(int *)(param_2 + 0x18)) {
      uVar11 = *(undefined8 *)(lStack_78 + 0xe4);
      iVar12 = 0;
      do {
                    /* try { // try from 024e6a44 to 025e6a47 has its CatchHandler @ 024e6a60 */
                    /* try { // try from 024e6a48 to 025e6a63 has its CatchHandler @ 024e64ec */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_2,iVar12,&lStack_78,*(undefined8 *)puVar3);
        if (lStack_78 == 0) goto LAB_024e6bc0;
                    /* catch() { ... } // from try @ 024e6a44 with catch @ 024e6a60 */
                    /* try { // try from 024e6a64 to 025e6a6b has its CatchHandler @ 024e6a74 */
                    /* try { // try from 024e6a6c to 025e6a77 has its CatchHandler @ 024e64ec */
        uVar7 = ColorType__op_Equality_24f9db0(*(undefined8 *)(lStack_78 + 0xe4),uVar11,0);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (param_2,&lStack_78,*(undefined8 *)PTR_DAT_049c14f0);
          puVar6 = PTR_DAT_049c1ac8;
          puVar5 = PTR_DAT_049c14e8;
          puVar4 = PTR_DAT_049c14e0;
          puVar3 = PTR_DAT_049c1410;
          uStack_58 = plStack_70;
          lStack_60 = lStack_78;
          uStack_50 = uStack_68;
          plStack_70 = &lStack_60;
          lStack_78 = 0;
          while( true ) {
            uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&lStack_60,*(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&lStack_60,*(undefined8 *)PTR_DAT_049c14d8);
              return;
            }
            lVar10 = *(long *)puVar5;
            lVar8 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
            lVar9 = lVar8;
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_02229718();
              lVar8 = *(long *)(lVar10 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar8 = FUN_02229718();
            }
            uVar11 = thunk_FUN_0224e54c(&lStack_60,
                                        *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_48,uVar11,uVar1);
            lVar9 = lStack_48;
            lVar8 = *(long *)(param_1 + 0xb0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar9 == 0) break;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_024f581c(lVar8,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* catch() { ... } // from try @ 024e6a64 with catch @ 024e6a74 */
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_024e6bc0;
        iVar12 = *(int *)(*(long *)(param_1 + 0x48) + 0x154) + iVar12;
      } while (iVar12 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_024e6bc0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

