/* IL2CPP: ShopMonitor$$FillProductElements
void ShopMonitor__FillProductElements (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026c8938) */
/* WARNING: Removing unreachable block (ram,0x026c8a58) */
/* WARNING: Removing unreachable block (ram,0x026c8a6c) */
/* IL2CPP: ShopMonitor$$FillProductElements
   void ShopMonitor__FillProductElements (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__FillProductElements_2460100(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long alStack_d0 [3];
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long **pplStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b943 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fb8);
    FUN_021f03f8(PTR_DAT_049c4fc0);
    FUN_021f03f8(PTR_DAT_049c4fc8);
    bRam0000000004f4b943 = 1;
  }
  alStack_d0[2] =
       StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c(param_1,0x952904eb,0)
  ;
  puVar3 = PTR_DAT_049c4fc8;
  if (*(long *)(param_1 + 0x98) != 0) {
    plVar16 = *(long **)(*(long *)(param_1 + 0x98) + 0x20);
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4fb8);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
              (lVar5,param_1,*(undefined8 *)puVar3,0);
    if (alStack_d0[2] != 0) {
      lVar11 = *(long *)PTR_DAT_049c4fc0;
      alStack_d0[1] = tpidr_el0;
      lStack_68 = *(long *)(alStack_d0[1] + 0x28);
      lVar12 = *(long *)(lVar11 + 0x38);
      if (lVar12 == 0) {
        FUN_021f03f8(PTR_DAT_049cd0e8);
        FUN_021f03f8(PTR_DAT_049cd0f0);
        FUN_021f03f8(PTR_DAT_049cd0f8);
        FUN_021f03f8(PTR_DAT_049b3cc8);
        FUN_021f03f8(PTR_DAT_049b4360);
        FUN_021f03f8(PTR_DAT_049cd100);
        FUN_021f03f8(PTR_DAT_049cd108);
        FUN_021f03f8(PTR_DAT_049cbed0);
        lVar12 = *(long *)(lVar11 + 0x38);
        if (lVar12 == 0) {
          FUN_02229774(lVar11);
          lVar12 = *(long *)(lVar11 + 0x38);
        }
      }
      uVar18 = (ulong)*(uint *)(*(long *)(lVar12 + 0x20) + 0xfc);
      uVar14 = uVar18 + 0xf & 0x1fffffff0;
      puVar9 = (undefined8 *)((long)alStack_d0 - uVar14);
      plStack_78 = (long *)0x0;
      lVar12 = (long)puVar9 - uVar14;
      func_0x04608670(lVar12,0,uVar18);
      puStack_90 = (undefined8 *)0x0;
      ppuStack_88 = (undefined8 **)0x0;
      uStack_80 = 0;
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(alStack_d0[2],0);
      if (plVar16 == (long *)0x0) {
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        lVar10 = **(long **)(lVar11 + 0x38);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02229718(lVar10);
        }
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_026c86c4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar16,lVar10,0);
LAB_026c86c4:
        plStack_78 = (long *)(*(code *)*puVar6)(plVar16,puVar6[1]);
        puVar4 = PTR_DAT_049cd0f8;
        puVar3 = PTR_DAT_049cd0f0;
        pplStack_98 = &plStack_78;
        lStack_a0 = 0;
        while (plVar16 = plStack_78, plStack_78 != (long *)0x0) {
          lVar10 = *plStack_78;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b4360) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_026c8748;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)PTR_DAT_049b4360,0);
LAB_026c8748:
          uVar14 = (*(code *)*puVar6)(plVar16,puVar6[1]);
          plVar16 = plStack_78;
          if ((uVar14 & 1) == 0) {
            plVar16 = *pplStack_98;
            if (plVar16 == (long *)0x0) goto LAB_026c8b7c;
            lVar5 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar14 == 0) goto LAB_026c8b54;
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_026c8b3c;
          }
          if (plStack_78 == (long *)0x0) {
            if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_026c8bf8;
          }
          lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02229718(lVar10);
          }
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                lVar10 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                goto LAB_026c87c8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar10 = FUN_02229a4c(plVar16,lVar10,0);
LAB_026c87c8:
          lVar10 = *(long *)(lVar10 + 8);
          puStack_b8 = puVar9;
          (**(code **)(lVar10 + 0x10))
                    (*(undefined8 *)(lVar10 + 8),lVar10,plVar16,&puStack_b8,puVar9);
          func_0x04608620(lVar12,puVar9,uVar18);
          uVar7 = StatefulUI_Runtime_Core_ContainerView__AddInstance_3346aac(alStack_d0[2],0);
          if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar10 = StatefulUI_Runtime_Core_StatefulUiUtils__GetComponentAlways_object__26d0d3c
                             (uVar7,*(undefined8 *)PTR_DAT_049cd108);
          if (lVar10 == 0) {
            if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_026c8bf8;
          }
          StatefulUI_Runtime_Core_StatefulComponent__Localize_33472f8(lVar10,0);
          if (*(long *)(lVar10 + 0x60) == 0) {
            if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_026c8bf8;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(lVar10 + 0x60),&puStack_b8,*(undefined8 *)PTR_DAT_049cd100);
          uStack_80 = uStack_a8;
          ppuStack_88 = ppuStack_b0;
          puStack_90 = puStack_b8;
          puStack_b8 = (undefined8 *)0x0;
          ppuStack_b0 = &puStack_90;
          while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&puStack_90,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
            lVar17 = *(long *)puVar4;
            lVar8 = *(long *)(lVar17 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
            lVar13 = lVar8;
            if ((uVar2 & 1) == 0) {
              lVar13 = FUN_02229718();
              lVar8 = *(long *)(lVar17 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar8 = FUN_02229718();
            }
            uVar7 = thunk_FUN_0224e54c(&puStack_90,
                                       *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                       0x60);
            func_0x04608620(&lStack_70,uVar7,uVar1);
            if (lStack_70 == 0) {
              if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_026c8bf8;
            }
            if (*(long *)(lStack_70 + 0x20) == 0) {
              if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_026c8bf8;
            }
            StatefulUI_Runtime_Core_StatefulComponent__Localize_33472f8
                      (*(long *)(lStack_70 + 0x20),0);
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&puStack_90,*(undefined8 *)PTR_DAT_049cd0e8);
          func_0x04608620(puVar9,lVar12,uVar18);
          if (lVar5 == 0) {
            if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_026c8bf8;
          }
          puVar6 = puVar9;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x20) + 0x28)) {
            puVar6 = (undefined8 *)*puVar9;
          }
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),lVar10,puVar6,*(undefined8 *)(lVar5 + 0x28));
        }
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      goto LAB_026c8bf8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_026c8b3c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_026c8b70;
    }
  }
LAB_026c8b54:
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049b3cc8,0);
LAB_026c8b70:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_026c8b7c:
  if (lStack_a0 == 0) {
    if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
      return;
    }
  }
  else if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
LAB_026c8bf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

