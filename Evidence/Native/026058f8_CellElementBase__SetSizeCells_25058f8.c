/* IL2CPP: CellElementBase$$SetSizeCells
void CellElementBase__SetSizeCells (CellElementBase_o* __this, System_Collections_Generic_List_CellBase__o* sizeCells, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029d0080) */
/* WARNING: Removing unreachable block (ram,0x029d0090) */
/* WARNING: Removing unreachable block (ram,0x029cffec) */
/* IL2CPP: CellElementBase$$SetSizeCells
   void CellElementBase__SetSizeCells (CellElementBase_o* __this,
   System_Collections_Generic_List_CellBase__o* sizeCells, const MethodInfo* method); */

void CellElementBase__SetSizeCells_25058f8(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long alStack_90 [2];
  long **pplStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bd8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8df8);
    bRam0000000004f4bd8b = 1;
  }
  puVar3 = PTR_DAT_049c8df8;
  if (*(long *)(param_1 + 0xd0) == 0) {
LAB_02605960:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
            (*(long *)(param_1 + 0xd0),param_2,*(undefined8 *)PTR_DAT_049c8df8);
  plVar5 = *(long **)(param_1 + 0xd8);
  if (plVar5 == (long *)0x0) goto LAB_02605960;
  uVar13 = *(uint *)(plVar5 + 3);
  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x90);
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4c8a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b4360);
    bRam0000000004f4c8a6 = 1;
  }
  uVar14 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x48) + 0xfc);
  uVar11 = uVar14 + 0xf & 0x1fffffff0;
  plVar15 = (long *)((long)alStack_90 - uVar11);
  lVar16 = (long)plVar15 - uVar11;
  plStack_78 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_3111684(6,0);
  }
  if (*(uint *)(plVar5 + 3) < uVar13) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_3121248(0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  plVar6 = (long *)thunk_FUN_0222c938(param_2,lVar8);
  if (plVar6 == (long *)0x0) {
    if ((int)uVar13 < (int)plVar5[3]) {
      if (param_2 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02229718(lVar8);
        }
        lVar10 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_029cfe08;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(param_2,lVar8,0);
LAB_029cfe08:
        plStack_78 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
        puVar3 = PTR_DAT_049b4360;
        pplStack_80 = &plStack_78;
        alStack_90[1] = 0;
        while (plVar6 = plStack_78, plStack_78 != (long *)0x0) {
          lVar8 = *plStack_78;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_029cfe7c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar3,0);
LAB_029cfe7c:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          plVar6 = plStack_78;
          if ((uVar11 & 1) == 0) {
            if (plStack_78 == (long *)0x0) goto LAB_029d0008;
            lVar9 = *plStack_78;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 == 0) goto LAB_029cffb8;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_029cffa0;
          }
          if (plStack_78 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_029d00f4;
          }
          lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x148);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02229718(lVar8);
          }
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                lVar8 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_029cff00;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          lVar8 = FUN_02229a4c(plVar6,lVar8,0);
LAB_029cff00:
          lVar8 = *(long *)(lVar8 + 8);
          plStack_70 = plVar15;
          (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar6,&plStack_70,plVar15);
          lVar10 = *(long *)(lVar9 + 0x20);
          lVar8 = *(long *)(lVar10 + 0xc0);
          if (*(int *)(*(long *)(lVar8 + 0x48) + 0x28) < 0) {
            func_0x04608620(lVar16,plVar15,uVar14);
            lVar8 = *(long *)(lVar10 + 0xc0);
            lVar10 = lVar16;
          }
          else {
            lVar10 = *plVar15;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Insert_28cf704
                    (plVar5,uVar13,lVar10,*(undefined8 *)(lVar8 + 0x160));
          uVar13 = uVar13 + 1;
        }
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      goto LAB_029d00f4;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddEnumerable_28d0c10
              (plVar5,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar16 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02229718(lVar16);
    }
    lVar8 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar16) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_029cfcc4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar6,lVar16,0);
LAB_029cfcc4:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (0 < iVar4) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___EnsureCapacity_28ce920
                (plVar5,(int)plVar5[3] + iVar4,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)plVar5[3] - uVar13;
      if (iVar1 != 0 && (int)uVar13 <= (int)plVar5[3]) {
        System_Array__Copy_3122c7c(plVar5[2],uVar13,plVar5[2],iVar4 + uVar13,iVar1,0);
      }
      lVar16 = plVar5[2];
      if (plVar6 == plVar5) {
        System_Array__Copy_3122c7c(lVar16,0,lVar16,uVar13,uVar13,0);
        System_Array__Copy_3122c7c
                  (plVar5[2],iVar4 + uVar13,plVar5[2],uVar13 << 1,(int)plVar5[3] - uVar13,0);
      }
      else {
        lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718(lVar9);
        }
        lVar8 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_029cfdd8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(plVar6,lVar9,5);
LAB_029cfdd8:
        (*(code *)*puVar7)(plVar6,lVar16,uVar13,puVar7[1]);
      }
      *(int *)(plVar5 + 3) = (int)plVar5[3] + iVar4;
    }
  }
  goto LAB_029d0008;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_029cffa0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_029cffd4;
    }
  }
LAB_029cffb8:
  puVar7 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)PTR_DAT_049b3cc8,0);
LAB_029cffd4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_029d0008:
  *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
LAB_029d00f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

