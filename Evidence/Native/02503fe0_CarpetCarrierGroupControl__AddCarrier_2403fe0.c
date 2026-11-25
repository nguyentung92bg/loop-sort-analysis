/* IL2CPP: CarpetCarrierGroupControl$$AddCarrier
void CarpetCarrierGroupControl__AddCarrier (CarpetCarrierGroupControl_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl$$AddCarrier
   void CarpetCarrierGroupControl__AddCarrier (CarpetCarrierGroupControl_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

void CarpetCarrierGroupControl__AddCarrier_2403fe0(long param_1,undefined8 ****param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b6a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c26a0);
    bRam0000000004f4b6a5 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *(long *)PTR_DAT_049c26a0;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
  uVar8 = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + 0xfc);
  uVar6 = uVar8 + 0xf & 0x1fffffff0;
  plVar7 = (long *)((long)&pppuStack_70 - uVar6);
  lVar9 = (long)plVar7 - uVar6;
  plVar11 = *(long **)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  pppuStack_70 = param_2;
  if (plVar11 == (long *)0x0) {
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(plVar11 + 3)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x48) + 0x28)) {
        param_2 = &pppuStack_70;
      }
      func_0x04608620(plVar7,param_2,uVar8);
      func_0x04608650((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20,
                      param_2,uVar8);
      lVar4 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      if (*(uint *)(plVar11 + 3) <= uVar2) {
        if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar4,(long)plVar11 +
                         (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20,plVar7);
    }
    else {
      iVar1 = *(int *)(*(long *)(lVar10 + 0x48) + 0x28);
      if (-1 < iVar1) {
        param_2 = &pppuStack_70;
      }
      func_0x04608620(plVar7,param_2,uVar8);
      if (iVar1 < 0) {
        func_0x04608620(lVar9,param_2,uVar8);
      }
      else {
        lVar9 = *plVar7;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (lVar4,lVar9,*(undefined8 *)(lVar10 + 0x70));
    }
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

