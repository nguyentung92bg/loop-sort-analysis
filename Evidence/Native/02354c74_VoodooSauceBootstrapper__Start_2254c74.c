/* IL2CPP: VoodooSauceBootstrapper$$Start
void VoodooSauceBootstrapper__Start (VoodooSauceBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceBootstrapper$$Start
   void VoodooSauceBootstrapper__Start (VoodooSauceBootstrapper_o* __this, const MethodInfo*
   method); */

void VoodooSauceBootstrapper__Start_2254c74(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar5 = PTR_DAT_049b6210;
  puVar4 = PTR_DAT_049b6208;
  puVar3 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bb2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6208);
                    /* try { // try from 02354cb4 to 02454cd3 has its CatchHandler @ 02354cb4
                       catch() { ... } // from try @ 02354cb4 with catch @ 02354cb4
                       catch() { ... } // from try @ 02354ce8 with catch @ 02354cb4 */
    FUN_021f03f8(PTR_DAT_049b6210);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bb2 = 1;
  }
                    /* try { // try from 02354cd4 to 02454ce7 has its CatchHandler @ 02354cf8 */
  ppppuVar6 = (undefined8 ****)thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                    /* try { // try from 02354ce8 to 02454d0b has its CatchHandler @ 02354cb4 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38(ppppuVar6,0,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02354cd4 with catch @ 02354cf8 */
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049cec48;
                    /* try { // try from 02354d0c to 02454d2f has its CatchHandler @ 02354d0c
                       catch() { ... } // from try @ 02354d0c with catch @ 02354d0c
                       catch() { ... } // from try @ 02354d38 with catch @ 02354d0c */
  if ((bRam0000000004f5f46b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cec48,0);
    bRam0000000004f5f46b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049cec48;
  if ((bRam0000000004f5fc1a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a679a0,0);
    FUN_021f03f8(PTR_DAT_049cec48);
    bRam0000000004f5fc1a = 1;
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar3;
  }
  lVar10 = *(long *)(lVar8 + 0xb8);
  if (*(char *)(lVar10 + 10) == '\0') {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    lVar8 = *(long *)(lVar10 + 0x38);
    if (lVar8 != 0) {
      lVar10 = *(long *)PTR_DAT_04a679a0;
      if (*(long *)(lVar8 + 0x10) != 0) {
        uVar7 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                          (*(long *)(lVar8 + 0x10),ppppuVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x40));
        if ((uVar7 & 1) != 0) {
          return;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x48);
          lVar10 = tpidr_el0;
          lStack_68 = *(long *)(lVar10 + 0x28);
          lVar14 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
          uVar12 = (ulong)*(uint *)(*(long *)(lVar14 + 0x48) + 0xfc);
          uVar7 = uVar12 + 0xf & 0x1fffffff0;
          plVar11 = (long *)((long)&pppuStack_70 - uVar7);
          lVar13 = (long)plVar11 - uVar7;
          plVar15 = *(long **)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          pppuStack_70 = ppppuVar6;
          if (plVar15 == (long *)0x0) {
            if (*(long *)(lVar10 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(plVar15 + 3)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              if (-1 < *(int *)(*(long *)(lVar14 + 0x48) + 0x28)) {
                ppppuVar6 = &pppuStack_70;
              }
              func_0x04608620(plVar11,ppppuVar6,uVar12);
              func_0x04608650((long)plVar15 +
                              (ulong)*(uint *)(*plVar15 + 0x104) * (long)(int)uVar2 + 0x20,ppppuVar6
                              ,uVar12);
              lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x48);
              if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_02229718();
              }
              if (*(uint *)(plVar15 + 3) <= uVar2) {
                if (*(long *)(lVar10 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a8();
                }
                goto LAB_0233365c;
              }
              FUN_021f03a8(lVar8,(long)plVar15 +
                                 (ulong)*(uint *)(*plVar15 + 0x104) * (long)(int)uVar2 + 0x20,
                           plVar11);
            }
            else {
              iVar1 = *(int *)(*(long *)(lVar14 + 0x48) + 0x28);
              if (-1 < iVar1) {
                ppppuVar6 = &pppuStack_70;
              }
              func_0x04608620(plVar11,ppppuVar6,uVar12);
              if (iVar1 < 0) {
                func_0x04608620(lVar13,ppppuVar6,uVar12);
              }
              else {
                lVar13 = *plVar11;
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                        (lVar8,lVar13,*(undefined8 *)(lVar14 + 0x70));
            }
            if (*(long *)(lVar10 + 0x28) == lStack_68) {
              return;
            }
          }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else if (ppppuVar6 != (undefined8 ****)0x0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    }
                    /* WARNING: Could not recover jumptable at 0x04522478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)ppppuVar6[3])(ppppuVar6[8],*(undefined8 *)(lVar10 + 0x40),ppppuVar6[5]);
    return;
  }
  return;
}

