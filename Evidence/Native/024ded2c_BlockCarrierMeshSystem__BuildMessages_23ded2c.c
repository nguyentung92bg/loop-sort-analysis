/* IL2CPP: BlockCarrierMeshSystem$$BuildMessages
void BlockCarrierMeshSystem__BuildMessages (BlockCarrierMeshSystem_o* __this, MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$BuildMessages
   void BlockCarrierMeshSystem__BuildMessages (BlockCarrierMeshSystem_o* __this,
   MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method); */

void BlockCarrierMeshSystem__BuildMessages_23ded2c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar5 = PTR_DAT_049c1458;
  puVar4 = PTR_DAT_049c1450;
  puVar3 = PTR_DAT_049c1448;
  if ((bRam0000000004f4b5c8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1460);
    FUN_021f03f8(PTR_DAT_049c1448);
    FUN_021f03f8(PTR_DAT_049c1468);
    FUN_021f03f8(PTR_DAT_049c1470);
    FUN_021f03f8(PTR_DAT_049c1478);
    FUN_021f03f8(PTR_DAT_049c1480);
    FUN_021f03f8(PTR_DAT_049c1488);
    FUN_021f03f8(PTR_DAT_049c1458);
    FUN_021f03f8(PTR_DAT_049c1490);
    FUN_021f03f8(PTR_DAT_049c1450);
    FUN_021f03f8(PTR_DAT_049c1498);
    FUN_021f03f8(PTR_DAT_049c14a0);
    FUN_021f03f8(PTR_DAT_049c14a8);
    FUN_021f03f8(PTR_DAT_049c14b0);
    FUN_021f03f8(PTR_DAT_049c14b8);
    FUN_021f03f8(PTR_DAT_049c14c0);
                    /* try { // try from 024dee30 to 025dee57 has its CatchHandler @ 024df074 */
    bRam0000000004f4b5c8 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar4,0);
  lVar16 = *(long *)puVar5;
  lVar10 = *(long *)(lVar16 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar16);
    lVar10 = *(long *)(lVar16 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c14b0;
  puVar5 = PTR_DAT_049c14a0;
  puVar4 = PTR_DAT_049c1478;
  puVar3 = PTR_DAT_049c1470;
                    /* try { // try from 024dee94 to 025deebb has its CatchHandler @ 024df070 */
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
                    /* try { // try from 024deed8 to 025def23 has its CatchHandler @ 024df07c */
  uVar7 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar6);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar7,param_2,0);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar5,0);
  lVar16 = *(long *)puVar4;
  lVar10 = *(long *)(lVar16 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar16);
    lVar10 = *(long *)(lVar16 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
                    /* try { // try from 024def24 to 025def37 has its CatchHandler @ 024dec80 */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
                    /* try { // try from 024def38 to 025def4b has its CatchHandler @ 024df078 */
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c14c0;
  puVar5 = PTR_DAT_049c1490;
  puVar4 = PTR_DAT_049c1488;
  puVar3 = PTR_DAT_049c1468;
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
                    /* try { // try from 024def84 to 025defb3 has its CatchHandler @ 024df06c */
  uVar7 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar6);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar7,param_2,0);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar5,0);
                    /* try { // try from 024defbc to 025defbf has its CatchHandler @ 024df068 */
  lVar16 = *(long *)puVar4;
                    /* try { // try from 024defc0 to 025df04b has its CatchHandler @ 024dec80 */
  lVar10 = *(long *)(lVar16 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar16);
    lVar10 = *(long *)(lVar16 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c14a8;
  puVar5 = PTR_DAT_049c1498;
  puVar4 = PTR_DAT_049c1480;
  puVar3 = PTR_DAT_049c1460;
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  uVar7 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar6);
                    /* try { // try from 024df04c to 025df04f has its CatchHandler @ 024df064 */
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar7,param_2,0);
                    /* try { // try from 024df050 to 025df053 has its CatchHandler @ 024df060 */
                    /* try { // try from 024df054 to 025df097 has its CatchHandler @ 024dec80 */
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024df050 with catch @ 024df060
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024df04c with catch @ 024df064
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024defbc with catch @ 024df068
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024def84 with catch @ 024df06c
                        */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar5,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dee94 with catch @ 024df070
                        */
  lVar16 = *(long *)puVar4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dee30 with catch @ 024df074
                        */
  lVar10 = *(long *)(lVar16 + 0x38);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024def38 with catch @ 024df078
                        */
  if (lVar10 == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024deed8 with catch @ 024df07c
                        */
    FUN_02229774(lVar16);
    lVar10 = *(long *)(lVar16 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 024df098 to 025df09b has its CatchHandler @ 024df0a4 */
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024df098 with catch @ 024df0a4 */
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c14b8;
                    /* try { // try from 024df0a8 to 025df0af has its CatchHandler @ 024df0b8 */
                    /* try { // try from 024df0b0 to 025df0bb has its CatchHandler @ 024dec80 */
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024df0a8 with catch @ 024df0b8
                        */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  ppppuVar8 = (undefined8 ****)
              MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                        (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar3);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(ppppuVar8,0,0);
  }
  if ((bRam0000000004f4ecdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e25b0);
    bRam0000000004f4ecdc = 1;
  }
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = *(long *)PTR_DAT_049e25b0;
  lVar16 = tpidr_el0;
  lStack_68 = *(long *)(lVar16 + 0x28);
  lVar17 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(*(long *)(lVar17 + 0x48) + 0xfc);
  uVar11 = uVar13 + 0xf & 0x1fffffff0;
  plVar12 = (long *)((long)&pppuStack_70 - uVar11);
  lVar15 = (long)plVar12 - uVar11;
  plVar18 = *(long **)(lVar10 + 0x10);
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  pppuStack_70 = ppppuVar8;
  if (plVar18 == (long *)0x0) {
    if (*(long *)(lVar16 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(plVar18 + 3)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      if (-1 < *(int *)(*(long *)(lVar17 + 0x48) + 0x28)) {
        ppppuVar8 = &pppuStack_70;
      }
      func_0x04608620(plVar12,ppppuVar8,uVar13);
      func_0x04608650((long)plVar18 + (ulong)*(uint *)(*plVar18 + 0x104) * (long)(int)uVar2 + 0x20,
                      ppppuVar8,uVar13);
      lVar10 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      if (*(uint *)(plVar18 + 3) <= uVar2) {
        if (*(long *)(lVar16 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar10,(long)plVar18 +
                          (ulong)*(uint *)(*plVar18 + 0x104) * (long)(int)uVar2 + 0x20,plVar12);
    }
    else {
      iVar1 = *(int *)(*(long *)(lVar17 + 0x48) + 0x28);
      if (-1 < iVar1) {
        ppppuVar8 = &pppuStack_70;
      }
      func_0x04608620(plVar12,ppppuVar8,uVar13);
      if (iVar1 < 0) {
        func_0x04608620(lVar15,ppppuVar8,uVar13);
      }
      else {
        lVar15 = *plVar12;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (lVar10,lVar15,*(undefined8 *)(lVar17 + 0x70));
    }
    if (*(long *)(lVar16 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

