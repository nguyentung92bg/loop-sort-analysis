/* IL2CPP: SceneScope$$OnDestroy
void SceneScope__OnDestroy (SceneScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x033bd31c) */
/* IL2CPP: SceneScope$$OnDestroy
   void SceneScope__OnDestroy (SceneScope_o* __this, const MethodInfo* method); */

void SceneScope__OnDestroy_25545ac(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long alStack_60 [2];
  long *plStack_50;
  undefined8 uStack_48;
  
  VContainer_Unity_LifetimeScope__OnDestroy_3f2c364(param_1,0);
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 == 0) {
    return;
  }
  if ((bRam0000000004f50ca6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb680,0);
    FUN_021f03f8(PTR_DAT_049f7c78);
    FUN_021f03f8(PTR_DAT_049f7c80);
    FUN_021f03f8(PTR_DAT_049cb688);
    FUN_021f03f8(PTR_DAT_049f7c88);
    FUN_021f03f8(PTR_DAT_049f7c90);
    FUN_021f03f8(PTR_DAT_049cb690);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049f7c98);
    FUN_021f03f8(PTR_DAT_049f7ca0);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049cb6a0);
    FUN_021f03f8(PTR_DAT_049f7ca8);
    FUN_021f03f8(PTR_DAT_049f7cb0);
    FUN_021f03f8(PTR_DAT_049c8ed0);
    bRam0000000004f50ca6 = 1;
  }
  puVar4 = PTR_DAT_049c8ed0;
  plStack_78 = (long *)0x0;
  if (*(char *)(lVar6 + 0x16) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_049c8ed0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar4;
  }
  lVar16 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar16 != 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    }
    plStack_70 = *(long **)(lVar16 + 0x10);
    uStack_68 = (long **)0x0;
    thunk_FUN_021f190c(&plStack_70);
    plVar9 = plStack_70;
    puVar5 = PTR_DAT_049cb6a0;
    puVar4 = PTR_DAT_049cb688;
    uStack_68 = (long **)CONCAT44(*(int *)(lVar16 + 0x18),0xffffffff);
    uVar14 = 0;
    if (0 < *(int *)(lVar16 + 0x18)) {
      uVar17 = (ulong)uStack_68 & 0xffffffff00000000;
      do {
        lVar7 = *(long *)(*(long *)puVar4 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02229718();
        }
        func_0x04608620(&plStack_70,
                        (long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar14 + 0x20,
                        *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc));
        plVar15 = plStack_70;
        lVar7 = *plStack_70;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_033bcd70;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plStack_70,*(long *)puVar5,1);
LAB_033bcd70:
        (*(code *)*puVar8)(plVar15,lVar6,puVar8[1]);
        uVar1 = (int)uVar17 + 1;
        uVar14 = (ulong)uVar1;
        uVar3 = uVar17 >> 0x20;
        uVar17 = uVar17 & 0xffffffff00000000 | uVar14;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  plVar9 = (long *)System_Collections_Generic_SortedList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_29918d4
                             (*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)PTR_DAT_049f7cb0);
  lVar7 = *plVar9;
  uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar14 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049f7c98) {
        puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_033bce08;
      }
      uVar14 = uVar14 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049f7c98,0);
LAB_033bce08:
  plStack_78 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
  puVar5 = PTR_DAT_049f7ca0;
  puVar4 = PTR_DAT_049b4360;
  uStack_68 = &plStack_78;
  plStack_70 = (long *)0x0;
  do {
    plVar9 = plStack_78;
    lVar7 = *plStack_78;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033bce80;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar4,0);
LAB_033bce80:
    uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    plVar9 = plStack_78;
    if ((uVar14 & 1) == 0) break;
    lVar7 = *plStack_78;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033bcee0;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar5,0);
LAB_033bcee0:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
    Scellecs_Morpeh_SystemsGroup__Dispose_32ba6f4();
  } while( true );
  if (plStack_78 != (long *)0x0) {
    lVar7 = *plStack_78;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033bcf58;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)PTR_DAT_049b3cc8,0);
LAB_033bcf58:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  puVar4 = PTR_DAT_049f7ca8;
  puVar8 = (undefined8 *)(lVar6 + 0x48);
  System_Collections_Generic_SortedList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_2991a90
            (*puVar8,*(undefined8 *)PTR_DAT_049f7ca8);
  *puVar8 = 0;
  thunk_FUN_021f190c(puVar8,0);
  System_Collections_Generic_SortedList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_2991a90
            (*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)puVar4);
  *(undefined8 *)(lVar6 + 0x38) = 0;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x38),0);
  plVar15 = (long *)(lVar6 + 0x40);
  lVar7 = *plVar15;
  plStack_70 = *(long **)(lVar7 + 0x10);
  uStack_68 = (long **)0x0;
  thunk_FUN_021f190c(&plStack_70);
  plVar9 = plStack_70;
  puVar4 = PTR_DAT_049f7c80;
  iVar12 = *(int *)(lVar7 + 0x18);
  uStack_68 = (long **)CONCAT44(iVar12,0xffffffff);
  uVar14 = 0;
  if (0 < iVar12) {
    uVar17 = (ulong)uStack_68 & 0xffffffff00000000;
    do {
      lVar7 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      func_0x04608620(&plStack_70,
                      (long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar14 + 0x20,
                      *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc));
      Scellecs_Morpeh_SystemsGroup__Dispose_32ba6f4(plStack_70);
      uVar1 = (int)uVar17 + 1;
      uVar14 = (ulong)uVar1;
      uVar3 = uVar17 >> 0x20;
      uVar17 = uVar17 & 0xffffffff00000000 | uVar14;
    } while ((int)uVar1 < (int)uVar3);
  }
  plVar9 = (long *)(lVar6 + 0x50);
  lVar7 = *plVar9;
  if (0 < *(int *)(lVar7 + 0x18)) {
    System_Array__Clear_31229cc(*(undefined8 *)(lVar7 + 0x10),0,*(int *)(lVar7 + 0x18),0);
    *(undefined4 *)(lVar7 + 0x18) = 0;
  }
  *plVar9 = 0;
  thunk_FUN_021f190c(plVar9,0);
  lVar7 = *plVar15;
  if (0 < *(int *)(lVar7 + 0x18)) {
    System_Array__Clear_31229cc(*(undefined8 *)(lVar7 + 0x10),0,*(int *)(lVar7 + 0x18),0);
    *(undefined4 *)(lVar7 + 0x18) = 0;
  }
  *(undefined8 *)(lVar6 + 0x40) = 0;
  thunk_FUN_021f190c(plVar15,0);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x58),0);
  *(undefined4 *)(lVar6 + 0x70) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0xffffffffffffffff;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x60),0);
  plVar9 = (long *)(lVar6 + 0x88);
  *(undefined4 *)(*plVar9 + 0x10) = 0;
  *plVar9 = 0;
  thunk_FUN_021f190c(plVar9,0);
  *(undefined4 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x28),0);
  lVar7 = *(long *)(lVar6 + 0x90);
  *(undefined4 *)(*(long *)(lVar6 + 0x30) + 0x10) = 0;
  puVar4 = PTR_DAT_049b3cc8;
  uVar10 = *(undefined8 *)(lVar7 + 0x18);
  if (0 < (int)uVar10) {
    lVar16 = 0;
    do {
      plVar9 = *(long **)(lVar7 + lVar16 * 8 + 0x20);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_033bd1b0;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)puVar4,0);
LAB_033bd1b0:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
        uVar10 = *(undefined8 *)(lVar7 + 0x18);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar10);
  }
  *(undefined8 *)(lVar6 + 0x90) = 0;
  thunk_FUN_021f190c((long *)(lVar6 + 0x90),0);
  uStack_68 = (long **)0x0;
  alStack_60[0] = 0;
  lVar7 = *(long *)(lVar6 + 0x98);
  plStack_70 = (long *)0x0;
  plStack_50 = *(long **)(lVar7 + 0x10);
  uStack_48 = 0;
  thunk_FUN_021f190c(&plStack_50);
  uStack_48 = 0;
  uStack_68 = (long **)0x0;
  plStack_70 = plStack_50;
  thunk_FUN_021f190c(&plStack_70,0);
  alStack_60[0] = *(long *)(lVar7 + 0x18);
  thunk_FUN_021f190c(alStack_60);
  lVar7 = alStack_60[0];
  plVar9 = plStack_70;
  iVar2 = (int)plStack_70[3];
  iVar12 = (int)uStack_68;
  if ((int)uStack_68 < iVar2) {
    do {
      lVar11 = plVar9[6];
      lVar16 = (long)iVar12;
      if (*(long *)(lVar11 + (long)iVar12 * 0x10 + 0x20) + -1 < 0) {
        plVar15 = (long *)(lVar11 + lVar16 * 0x10 + 0x30);
        do {
          iVar12 = (int)lVar16;
          lVar16 = lVar16 + 1;
          if (iVar2 + -1 == iVar12) {
            if (iVar2 <= lVar16) goto LAB_033bd2c4;
            lVar16 = 0;
            iVar12 = iVar2;
            goto LAB_033bd2a8;
          }
          lVar11 = *plVar15;
          plVar15 = plVar15 + 2;
        } while (lVar11 + -1 < 0);
        iVar12 = (int)lVar16;
        if (iVar2 <= lVar16) break;
      }
LAB_033bd2a8:
      iVar12 = iVar12 + 1;
      Scellecs_Morpeh_Archetype__Dispose_32b3c18
                (*(undefined8 *)(lVar7 + (long)(int)lVar16 * 8 + 0x20));
      iVar2 = (int)plVar9[3];
    } while (iVar12 < iVar2);
  }
LAB_033bd2c4:
  *(undefined8 *)(lVar6 + 0x98) = 0;
  thunk_FUN_021f190c((long *)(lVar6 + 0x98),0);
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0xb8),0);
  *(undefined4 *)(lVar6 + 0xc0) = 0;
  Scellecs_Morpeh_ArchetypePool__Dispose_32b44d0(lVar6 + 0xa8);
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined1 *)(lVar6 + 0x16) = 1;
  Scellecs_Morpeh_WorldExtensions__ApplyRemoveWorld_32bd368(lVar6);
  return;
}

