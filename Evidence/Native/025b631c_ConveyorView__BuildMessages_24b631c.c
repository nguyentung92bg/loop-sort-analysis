/* IL2CPP: ConveyorView$$BuildMessages
void ConveyorView__BuildMessages (ConveyorView_o* __this, MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorView$$BuildMessages
   void ConveyorView__BuildMessages (ConveyorView_o* __this, MessagePipe_DisposableBagBuilder_o*
   bag, const MethodInfo* method); */

void ConveyorView__BuildMessages_24b631c(long param_1,long param_2)

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
  
  puVar5 = PTR_DAT_049c6cc0;
  puVar4 = PTR_DAT_049c1880;
  puVar3 = PTR_DAT_049c1870;
                    /* try { // try from 025b6324 to 026b633b has its CatchHandler @ 025b63b4 */
                    /* try { // try from 025b633c to 026b63a3 has its CatchHandler @ 025b611c */
  if ((bRam0000000004f4bb94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1888);
    FUN_021f03f8(PTR_DAT_049c1870);
    FUN_021f03f8(PTR_DAT_049c6cc8);
    FUN_021f03f8(PTR_DAT_049c1880);
    FUN_021f03f8(PTR_DAT_049c6cd0);
    FUN_021f03f8(PTR_DAT_049c18a0);
                    /* try { // try from 025b63a4 to 026b63b3 has its CatchHandler @ 025b63b4 */
    FUN_021f03f8(PTR_DAT_049c6cc0);
                    /* catch() { ... } // from try @ 025b62fc with catch @ 025b63b4
                       catch() { ... } // from try @ 025b6324 with catch @ 025b63b4
                       catch() { ... } // from try @ 025b63a4 with catch @ 025b63b4 */
                    /* try { // try from 025b63b8 to 026b63bb has its CatchHandler @ 025b63c4 */
    FUN_021f03f8(PTR_DAT_049c6cd8);
                    /* try { // try from 025b63bc to 026b63c7 has its CatchHandler @ 025b611c */
                    /* catch() { ... } // from try @ 025b63b8 with catch @ 025b63c4 */
    FUN_021f03f8(PTR_DAT_049c6ce0);
    FUN_021f03f8(PTR_DAT_049c18b8);
    FUN_021f03f8(PTR_DAT_049c18c0);
    FUN_021f03f8(PTR_DAT_049c6ce8);
    bRam0000000004f4bb94 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
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
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c6cd8;
  puVar5 = PTR_DAT_049c18b8;
  puVar4 = PTR_DAT_049c18a0;
  puVar3 = PTR_DAT_049c1888;
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  uVar7 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar5);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar7,param_2,0);
  uVar14 = *(undefined8 *)(param_1 + 200);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar6,0);
  lVar16 = *(long *)puVar4;
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
  puVar6 = PTR_DAT_049c6ce0;
  puVar5 = PTR_DAT_049c6cd0;
  puVar4 = PTR_DAT_049c6cc8;
  puVar3 = PTR_DAT_049c18c0;
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  uVar7 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar14,uVar7,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar3);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar7,param_2,0);
  uVar14 = *(undefined8 *)(param_1 + 0xd0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar6,0);
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
  puVar3 = PTR_DAT_049c6ce8;
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
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

