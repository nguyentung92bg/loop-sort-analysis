/* IL2CPP: RewardClaimMonitor$$Show
void RewardClaimMonitor__Show (RewardClaimMonitor_o* __this, RewardClaimMonitor_ShowArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026c8938) */
/* WARNING: Removing unreachable block (ram,0x026c8a58) */
/* WARNING: Removing unreachable block (ram,0x026c8a6c) */
/* IL2CPP: RewardClaimMonitor$$Show
   void RewardClaimMonitor__Show (RewardClaimMonitor_o* __this, RewardClaimMonitor_ShowArgs_o args,
   const MethodInfo* method); */

void RewardClaimMonitor__Show_245c954(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
  
  if ((bRam0000000004f4b922 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4d78);
    bRam0000000004f4b922 = 1;
  }
  uVar21 = param_2[1];
  uVar20 = *param_2;
  uVar19 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0xd0) = param_2[4];
  *(undefined8 *)(param_1 + 0xb8) = uVar21;
  *(undefined8 *)(param_1 + 0xb0) = uVar20;
  *(undefined8 *)(param_1 + 200) = uVar19;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  thunk_FUN_021f190c(param_1 + 0xb0,0);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__Additive_object__26888e8(*(long *)(param_1 + 0x30),0,1,*(undefined8 *)PTR_DAT_049c4d78);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x91273900,*param_2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
            (param_1,0x993134c1,param_2[1],0);
  puVar4 = PTR_DAT_049c4d88;
  puVar3 = PTR_DAT_049c4d80;
  plVar11 = (long *)param_2[2];
  if ((bRam0000000004f4b923 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4d80);
    FUN_021f03f8(PTR_DAT_049c4d90);
    FUN_021f03f8(PTR_DAT_049c4d88);
    bRam0000000004f4b923 = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbcdc2f95,0);
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
            (lVar6,param_1,*(undefined8 *)puVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *(long *)PTR_DAT_049c4d90;
  alStack_d0[1] = tpidr_el0;
  lStack_68 = *(long *)(alStack_d0[1] + 0x28);
  lVar13 = *(long *)(lVar12 + 0x38);
  alStack_d0[2] = lVar5;
  if (lVar13 == 0) {
    FUN_021f03f8(PTR_DAT_049cd0e8);
    FUN_021f03f8(PTR_DAT_049cd0f0);
    FUN_021f03f8(PTR_DAT_049cd0f8);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049cd100);
    FUN_021f03f8(PTR_DAT_049cd108);
    FUN_021f03f8(PTR_DAT_049cbed0);
    lVar13 = *(long *)(lVar12 + 0x38);
    if (lVar13 == 0) {
      FUN_02229774(lVar12);
      lVar13 = *(long *)(lVar12 + 0x38);
    }
  }
  uVar18 = (ulong)*(uint *)(*(long *)(lVar13 + 0x20) + 0xfc);
  uVar15 = uVar18 + 0xf & 0x1fffffff0;
  puVar10 = (undefined8 *)((long)alStack_d0 - uVar15);
  plStack_78 = (long *)0x0;
  lVar5 = (long)puVar10 - uVar15;
  func_0x04608670(lVar5,0,uVar18);
  puStack_90 = (undefined8 *)0x0;
  ppuStack_88 = (undefined8 **)0x0;
  uStack_80 = 0;
  StatefulUI_Runtime_Core_ContainerView__Clear_3347548(alStack_d0[2],0);
  if (plVar11 == (long *)0x0) {
    if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar13 = **(long **)(lVar12 + 0x38);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02229718(lVar13);
    }
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_026c86c4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar11,lVar13,0);
LAB_026c86c4:
    plStack_78 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    puVar4 = PTR_DAT_049cd0f8;
    puVar3 = PTR_DAT_049cd0f0;
    pplStack_98 = &plStack_78;
    lStack_a0 = 0;
    while (plVar11 = plStack_78, plStack_78 != (long *)0x0) {
      lVar13 = *plStack_78;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b4360) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_026c8748;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)PTR_DAT_049b4360,0);
LAB_026c8748:
      uVar15 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      plVar11 = plStack_78;
      if ((uVar15 & 1) == 0) {
        plVar11 = *pplStack_98;
        if (plVar11 == (long *)0x0) goto LAB_026c8b7c;
        lVar5 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar15 == 0) goto LAB_026c8b54;
        piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_026c8b3c;
      }
      if (plStack_78 == (long *)0x0) {
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_026c8bf8;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02229718(lVar13);
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            lVar13 = lVar14 + (long)*piVar16 * 0x10 + 0x138;
            goto LAB_026c87c8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      lVar13 = FUN_02229a4c(plVar11,lVar13,0);
LAB_026c87c8:
      lVar13 = *(long *)(lVar13 + 8);
      puStack_b8 = puVar10;
      (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8),lVar13,plVar11,&puStack_b8,puVar10);
      func_0x04608620(lVar5,puVar10,uVar18);
      uVar8 = StatefulUI_Runtime_Core_ContainerView__AddInstance_3346aac(alStack_d0[2],0);
      if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar13 = StatefulUI_Runtime_Core_StatefulUiUtils__GetComponentAlways_object__26d0d3c
                         (uVar8,*(undefined8 *)PTR_DAT_049cd108);
      if (lVar13 == 0) {
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_026c8bf8;
      }
      StatefulUI_Runtime_Core_StatefulComponent__Localize_33472f8(lVar13,0);
      if (*(long *)(lVar13 + 0x60) == 0) {
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_026c8bf8;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(lVar13 + 0x60),&puStack_b8,*(undefined8 *)PTR_DAT_049cd100);
      uStack_80 = uStack_a8;
      ppuStack_88 = ppuStack_b0;
      puStack_90 = puStack_b8;
      puStack_b8 = (undefined8 *)0x0;
      ppuStack_b0 = &puStack_90;
      while (uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&puStack_90,*(undefined8 *)puVar3), (uVar15 & 1) != 0) {
        lVar17 = *(long *)puVar4;
        lVar9 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar14 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar9 = *(long *)(lVar17 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar8 = thunk_FUN_0224e54c(&puStack_90,
                                   *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&lStack_70,uVar8,uVar1);
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
        StatefulUI_Runtime_Core_StatefulComponent__Localize_33472f8(*(long *)(lStack_70 + 0x20),0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&puStack_90,*(undefined8 *)PTR_DAT_049cd0e8);
      func_0x04608620(puVar10,lVar5,uVar18);
      if (lVar6 == 0) {
        if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        goto LAB_026c8bf8;
      }
      puVar7 = puVar10;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x20) + 0x28)) {
        puVar7 = (undefined8 *)*puVar10;
      }
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),lVar13,puVar7,*(undefined8 *)(lVar6 + 0x28));
    }
    if (*(long *)(alStack_d0[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  goto LAB_026c8bf8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_026c8b3c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar10 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_026c8b70;
    }
  }
LAB_026c8b54:
  puVar10 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b3cc8,0);
LAB_026c8b70:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
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

