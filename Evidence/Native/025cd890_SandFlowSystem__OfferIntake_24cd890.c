/* IL2CPP: SandFlowSystem$$OfferIntake
void SandFlowSystem__OfferIntake (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$OfferIntake
   void SandFlowSystem__OfferIntake (SandFlowSystem_o* __this, const MethodInfo* method); */

int SandFlowSystem__OfferIntake_24cd890(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long alStack_70 [2];
  
  if ((bRam0000000004f4bbe5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7398);
    FUN_021f03f8(PTR_DAT_049c73a0);
    FUN_021f03f8(PTR_DAT_049c7388);
    bRam0000000004f4bbe5 = 1;
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
              (*(long *)(param_1 + 0x288),*(undefined8 *)PTR_DAT_049c7398);
    if (*(long *)(param_1 + 0x168) != 0) {
      if (_UNK_013aa94c < *(float *)(*(long *)(param_1 + 0x168) + 0x318)) {
        if (*(long *)(param_1 + 0x260) == 0) goto LAB_025cd96c;
        if (0 < *(int *)(*(long *)(param_1 + 0x260) + 0x18)) {
          SandFlowSystem__CollectIntake_24cd998(param_1);
        }
      }
      uVar12 = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x288);
      thunk_FUN_021f190c(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x288) = uVar12;
      thunk_FUN_021f190c(param_1 + 0x288,uVar12);
      lVar2 = *(long *)(param_1 + 0x298);
      if (lVar2 != 0) {
        lVar6 = *(long *)(param_1 + 0x2a0);
        lVar8 = *(long *)PTR_DAT_049c73a0;
        lVar10 = tpidr_el0;
        alStack_70[1] = *(long *)(lVar10 + 0x28);
        uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x98) + 0xfc
                                 );
        uVar11 = uVar13 + 0xf & 0x1fffffff0;
        puVar14 = (undefined8 *)((long)alStack_70 - uVar11);
        puVar15 = (undefined8 *)((long)puVar14 - uVar11);
        lVar16 = (long)puVar15 - uVar11;
        func_0x04608670(lVar16,0,uVar13);
        if (lVar6 == 0) {
          thunk_FUN_02256840(PTR_DAT_049baa58);
          uVar12 = thunk_FUN_0222ca34();
          uVar5 = thunk_FUN_02256840(PTR_DAT_049ccba0);
          if (*(long *)(lVar10 + 0x28) == alStack_70[1]) {
            System_ArgumentNullException___ctor_30655c4(uVar12,uVar5,0);
                    /* WARNING: Subroutine does not return */
            FUN_021f0564(uVar12,lVar8);
          }
        }
        else {
          alStack_70[0] = lVar10;
          if (*(int *)(lVar2 + 0x24) < 1) {
            iVar17 = 0;
          }
          else {
            uVar11 = 0;
            iVar17 = 0;
            do {
              plVar9 = *(long **)(lVar2 + 0x18);
              if (plVar9 == (long *)0x0) {
LAB_029a4374:
                if (*(long *)(alStack_70[0] + 0x28) == alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_029a43d8;
              }
              if (*(uint *)(plVar9 + 3) <= uVar11) {
LAB_029a435c:
                if (*(long *)(alStack_70[0] + 0x28) == alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a8();
                }
                goto LAB_029a43d8;
              }
              piVar3 = (int *)thunk_FUN_0224e54c((long)plVar9 +
                                                 uVar11 * *(uint *)(*plVar9 + 0x104) + 0x20,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x90) + 0x80));
              if (-1 < *piVar3) {
                plVar9 = *(long **)(lVar2 + 0x18);
                if (plVar9 == (long *)0x0) goto LAB_029a4374;
                if (*(uint *)(plVar9 + 3) <= uVar11) goto LAB_029a435c;
                uVar12 = thunk_FUN_0224e54c((long)plVar9 +
                                            uVar11 * *(uint *)(*plVar9 + 0x104) + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) +
                                                                         0xc0) + 0x90) + 0x80) +
                                            0x40);
                func_0x04608620(puVar14,uVar12,uVar13);
                func_0x04608620(lVar16,uVar12,uVar13);
                func_0x04608650(puVar15,uVar12,uVar13);
                puVar7 = puVar15;
                if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x98) + 0x28
                                 )) {
                  puVar7 = (undefined8 *)*puVar15;
                }
                uVar4 = (**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),puVar7,
                                   *(undefined8 *)(lVar6 + 0x28));
                if ((uVar4 & 1) != 0) {
                  func_0x04608620(puVar14,lVar16,uVar13);
                  lVar18 = *(long *)(lVar8 + 0x20);
                  lVar10 = *(long *)(lVar18 + 0xc0);
                  if (*(int *)(*(long *)(lVar10 + 0x98) + 0x28) < 0) {
                    func_0x04608620(puVar15,lVar16,uVar13);
                    lVar10 = *(long *)(lVar18 + 0xc0);
                    puVar7 = puVar15;
                  }
                  else {
                    puVar7 = (undefined8 *)*puVar14;
                  }
                  uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                                    (lVar2,puVar7,*(undefined8 *)(lVar10 + 0x178));
                  iVar17 = iVar17 + (uVar1 & 1);
                }
              }
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)*(int *)(lVar2 + 0x24));
          }
          if (*(long *)(alStack_70[0] + 0x28) == alStack_70[1]) {
            return iVar17;
          }
        }
LAB_029a43d8:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
LAB_025cd96c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

