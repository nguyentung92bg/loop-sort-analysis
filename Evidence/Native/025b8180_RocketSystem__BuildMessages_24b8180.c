/* IL2CPP: RocketSystem$$BuildMessages
void RocketSystem__BuildMessages (RocketSystem_o* __this, MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$BuildMessages
   void RocketSystem__BuildMessages (RocketSystem_o* __this, MessagePipe_DisposableBagBuilder_o*
   bag, const MethodInfo* method); */

void RocketSystem__BuildMessages_24b8180(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bba4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1460);
    FUN_021f03f8(PTR_DAT_049c15c8);
    FUN_021f03f8(PTR_DAT_049c6d68);
    FUN_021f03f8(PTR_DAT_049c15d8);
    FUN_021f03f8(PTR_DAT_049c1480);
    FUN_021f03f8(PTR_DAT_049c6d70);
    FUN_021f03f8(PTR_DAT_049c6d78);
    FUN_021f03f8(PTR_DAT_049c6d80);
    FUN_021f03f8(PTR_DAT_049c6d88);
    FUN_021f03f8(PTR_DAT_049c14b8);
    FUN_021f03f8(PTR_DAT_049c15f8);
    FUN_021f03f8(PTR_DAT_049c6d90);
    bRam0000000004f4bba4 = 1;
  }
  SystemBase__BuildMessages_2555fa4(param_1,param_2,0);
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = CoreStreak__IsActive_2512d54(*(long *)(param_1 + 0x68),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6d68);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)PTR_DAT_049c6d88,0);
  lVar12 = *(long *)PTR_DAT_049c6d70;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  uVar4 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar10,uVar4,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_049c6d90);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar4,param_2,0);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1460);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)PTR_DAT_049c6d78,0);
  lVar12 = *(long *)PTR_DAT_049c1480;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  uVar4 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar10,uVar4,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_049c14b8);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar4,param_2,0);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c15c8);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)PTR_DAT_049c6d80,0);
  lVar12 = *(long *)PTR_DAT_049c15d8;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  ppppuVar5 = (undefined8 ****)
              MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                        (uVar10,uVar4,**(undefined8 **)(lVar7 + 0xb8),
                         *(undefined8 *)PTR_DAT_049c15f8);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(ppppuVar5,0,0);
  }
  if ((bRam0000000004f4ecdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e25b0);
    bRam0000000004f4ecdc = 1;
  }
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *(long *)PTR_DAT_049e25b0;
  lVar12 = tpidr_el0;
  lStack_68 = *(long *)(lVar12 + 0x28);
  lVar13 = *(long *)(*(long *)(lVar6 + 0x20) + 0xc0);
  uVar9 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + 0xfc);
  uVar3 = uVar9 + 0xf & 0x1fffffff0;
  plVar8 = (long *)((long)&pppuStack_70 - uVar3);
  lVar11 = (long)plVar8 - uVar3;
  plVar14 = *(long **)(lVar7 + 0x10);
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  pppuStack_70 = ppppuVar5;
  if (plVar14 == (long *)0x0) {
    if (*(long *)(lVar12 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(plVar14 + 3)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
        ppppuVar5 = &pppuStack_70;
      }
      func_0x04608620(plVar8,ppppuVar5,uVar9);
      func_0x04608650((long)plVar14 + (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar2 + 0x20,
                      ppppuVar5,uVar9);
      lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      if (*(uint *)(plVar14 + 3) <= uVar2) {
        if (*(long *)(lVar12 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar7,(long)plVar14 +
                         (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar2 + 0x20,plVar8);
    }
    else {
      iVar1 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
      if (-1 < iVar1) {
        ppppuVar5 = &pppuStack_70;
      }
      func_0x04608620(plVar8,ppppuVar5,uVar9);
      if (iVar1 < 0) {
        func_0x04608620(lVar11,ppppuVar5,uVar9);
      }
      else {
        lVar11 = *plVar8;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (lVar7,lVar11,*(undefined8 *)(lVar13 + 0x70));
    }
    if (*(long *)(lVar12 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

