/* IL2CPP: CarrierVisibilitySystem$$BuildMessages
void CarrierVisibilitySystem__BuildMessages (CarrierVisibilitySystem_o* __this, MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierVisibilitySystem$$BuildMessages
   void CarrierVisibilitySystem__BuildMessages (CarrierVisibilitySystem_o* __this,
   MessagePipe_DisposableBagBuilder_o* bag, const MethodInfo* method); */

void CarrierVisibilitySystem__BuildMessages_240e1e4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar5 = PTR_DAT_049c2a98;
  puVar4 = PTR_DAT_049c1898;
  puVar3 = PTR_DAT_049c1890;
  if ((bRam0000000004f4b709 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1890);
    FUN_021f03f8(PTR_DAT_049c1898);
    FUN_021f03f8(PTR_DAT_049c2a98);
    FUN_021f03f8(PTR_DAT_049c18c8);
    bRam0000000004f4b709 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar5,0);
  lVar14 = *(long *)puVar4;
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c18c8;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  ppppuVar7 = (undefined8 ****)
              MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                        (uVar12,uVar6,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar3);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(ppppuVar7,0,0);
  }
  if ((bRam0000000004f4ecdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e25b0);
    bRam0000000004f4ecdc = 1;
  }
  lVar9 = *(long *)(param_2 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)PTR_DAT_049e25b0;
  lVar14 = tpidr_el0;
  lStack_68 = *(long *)(lVar14 + 0x28);
  lVar16 = *(long *)(*(long *)(lVar8 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(*(long *)(lVar16 + 0x48) + 0xfc);
  uVar10 = uVar13 + 0xf & 0x1fffffff0;
  plVar11 = (long *)((long)&pppuStack_70 - uVar10);
  lVar15 = (long)plVar11 - uVar10;
  plVar17 = *(long **)(lVar9 + 0x10);
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  pppuStack_70 = ppppuVar7;
  if (plVar17 == (long *)0x0) {
    if (*(long *)(lVar14 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(plVar17 + 3)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      if (-1 < *(int *)(*(long *)(lVar16 + 0x48) + 0x28)) {
        ppppuVar7 = &pppuStack_70;
      }
      func_0x04608620(plVar11,ppppuVar7,uVar13);
      func_0x04608650((long)plVar17 + (ulong)*(uint *)(*plVar17 + 0x104) * (long)(int)uVar2 + 0x20,
                      ppppuVar7,uVar13);
      lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      if (*(uint *)(plVar17 + 3) <= uVar2) {
        if (*(long *)(lVar14 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar9,(long)plVar17 +
                         (ulong)*(uint *)(*plVar17 + 0x104) * (long)(int)uVar2 + 0x20,plVar11);
    }
    else {
      iVar1 = *(int *)(*(long *)(lVar16 + 0x48) + 0x28);
      if (-1 < iVar1) {
        ppppuVar7 = &pppuStack_70;
      }
      func_0x04608620(plVar11,ppppuVar7,uVar13);
      if (iVar1 < 0) {
        func_0x04608620(lVar15,ppppuVar7,uVar13);
      }
      else {
        lVar15 = *plVar11;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (lVar9,lVar15,*(undefined8 *)(lVar16 + 0x70));
    }
    if (*(long *)(lVar14 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

