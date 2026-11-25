/* IL2CPP: GameBehaviourBase$$SetEntityViewDisabled
void GameBehaviourBase__SetEntityViewDisabled (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$SetEntityViewDisabled
   void GameBehaviourBase__SetEntityViewDisabled (GameBehaviourBase_o* __this, const MethodInfo*
   method); */

ulong GameBehaviourBase__SetEntityViewDisabled_24f69c4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  
  if ((bRam0000000004f4bd26 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7838);
    FUN_021f03f8(PTR_DAT_049c84a8);
    FUN_021f03f8(PTR_DAT_049c77c0);
    bRam0000000004f4bd26 = 1;
  }
  uVar6 = Scellecs_Morpeh_WorldExtensions__IsNullOrDisposed_32bd5a8
                    (*(undefined8 *)(param_1 + 0x80),0);
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  uVar11 = *(ulong *)(param_1 + 0x60);
  iVar12 = (int)(uVar11 >> 0x20);
  if (iVar12 < 1) {
    return uVar6;
  }
  uVar6 = *(ulong *)(param_1 + 0x80);
  if (*(int *)(uVar6 + 0x70) <= iVar12) {
    return uVar6;
  }
  if ((uint)*(ushort *)(*(long *)(uVar6 + 0x60) + (uVar11 >> 0x20) * 2 + 0x20) !=
      (uint)uVar11 >> 0x10) {
    return uVar6;
  }
  if (*(uint *)(uVar6 + 0xc4) != ((uint)(uVar11 >> 8) & 0xff)) {
    return uVar6;
  }
  if (*(uint *)(uVar6 + 200) != ((uint)uVar11 & 0xff)) {
    return uVar6;
  }
  lVar7 = FUN_024f5544(uVar6,*(undefined8 *)PTR_DAT_049c77c0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar6 = FUN_024f5708(lVar7,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_049c7838);
  if ((uVar6 & 1) == 0) {
    return uVar6;
  }
  uVar6 = *(ulong *)(param_1 + 0x60);
  lVar8 = *(long *)PTR_DAT_049c84a8;
  plVar9 = *(long **)(*(long *)(lVar8 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar9[3] + 0xfc);
  plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(long *)(*plVar9 + 0x80) + 0x20);
  uVar17 = (uint)(uVar6 >> 0x20);
  if (((((int)uVar17 < 1) || (lVar10 = *plVar9, *(int *)(lVar10 + 0x70) <= (int)uVar17)) ||
      ((uint)*(ushort *)(*(long *)(lVar10 + 0x60) + (uVar6 >> 0x20) * 2 + 0x20) !=
       (uint)uVar6 >> 0x10)) ||
     ((*(uint *)(lVar10 + 0xc4) != ((uint)(uVar6 >> 8) & 0xff) ||
      (*(uint *)(lVar10 + 200) != ((uint)uVar6 & 0xff))))) {
    puVar4 = (undefined8 *)
             thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80)
                                      + 0xc0);
    Scellecs_Morpeh_InvalidRemoveOperationException__ThrowDisposedEntity_32b82d0(uVar6,*puVar4,0);
  }
  plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                     0x80) + 0x60);
  lVar10 = *plVar9;
  uVar14 = *(uint *)(lVar10 + 0x18) & uVar17;
  uVar3 = *(int *)(*(long *)(lVar10 + 0x30) + (long)(int)uVar14 * 4) - 1;
  uVar11 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    return 0;
  }
  lVar13 = *(long *)(lVar10 + 0x48);
  piVar16 = (int *)(lVar13 + uVar11 * 8);
  if (*piVar16 - 1U == uVar17) {
    *(int *)(*(long *)(lVar10 + 0x30) +
            (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2)) = piVar16[1] + 1;
  }
  else {
    do {
      uVar19 = uVar11;
      uVar11 = (ulong)(uint)piVar16[1];
      if (piVar16[1] < 0) {
        return 0;
      }
      piVar16 = (int *)(lVar13 + uVar11 * 8);
    } while (*piVar16 - 1U != uVar17);
    *(int *)(lVar13 + uVar19 * 8 + 4) = piVar16[1];
  }
  uVar18 = (undefined4)uVar11;
  iVar12 = *(int *)(lVar10 + 0x20);
  iVar2 = *(int *)(lVar10 + 0x10);
  *piVar16 = -1;
  piVar16[1] = iVar12;
  iVar2 = iVar2 + -1;
  *(int *)(lVar10 + 0x10) = iVar2;
  if (iVar2 == 0) {
    uVar18 = 0xffffffff;
    *(undefined4 *)(lVar10 + 0x1c) = 0;
  }
  lVar13 = *(long *)(lVar8 + 0x20);
  *(undefined4 *)(lVar10 + 0x20) = uVar18;
  plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(lVar13 + 0xc0) + 0x80) + 0x20);
  lVar20 = *plVar9;
  puVar5 = (ulong *)thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x80) + 0x40);
  lVar10 = *(long *)(lVar20 + 0x58) + 0x20;
  lVar13 = lVar10 + (long)(int)uVar17 * 0x30;
  uVar14 = *(uint *)(lVar13 + 0x14);
  uVar3 = uVar14 - 1;
  *(ulong *)(lVar13 + 8) = *(ulong *)(lVar13 + 8) ^ *puVar5;
  if (-1 < (int)uVar3) {
    lVar15 = *(long *)(lVar10 + (long)(int)uVar17 * 0x30 + 0x20);
    do {
      uVar14 = uVar14 - 1;
      piVar16 = (int *)(lVar15 + (ulong)uVar14 * 4 + 0x20);
      if (*piVar16 == (int)puVar5[1]) {
        *(uint *)(lVar13 + 0x14) = uVar3;
        *piVar16 = *(int *)(lVar15 + (ulong)uVar3 * 4 + 0x20);
        goto LAB_024f5b00;
      }
    } while (0 < (int)uVar14);
  }
  lVar10 = lVar10 + (long)(int)uVar17 * 0x30;
  piVar16 = (int *)(lVar10 + 0x18);
  iVar12 = *piVar16;
  plVar9 = (long *)(lVar10 + 0x28);
  lVar10 = *plVar9;
  if (iVar12 == *(int *)(lVar10 + 0x18)) {
    Scellecs_Morpeh_WorldExtensions__ExpandRemovedComponents_32becbc(lVar13,0);
    lVar10 = *plVar9;
    iVar12 = *piVar16;
  }
  lVar13 = *(long *)(lVar20 + 0x78);
  *piVar16 = iVar12 + 1;
  *(int *)(lVar10 + (long)iVar12 * 4 + 0x20) = (int)puVar5[1];
  if ((int)uVar17 < *(int *)(lVar13 + 0x20)) {
    lVar10 = *(long *)(lVar13 + 0x10);
    iVar2 = *(int *)(lVar10 + ((long)uVar6 >> 0x20) * 4 + 0x20);
    iVar12 = *(int *)(lVar13 + 0x24);
    if ((iVar2 < iVar12) && (*(uint *)(*(long *)(lVar13 + 0x18) + (long)iVar2 * 4 + 0x20) == uVar17)
       ) goto LAB_024f5b00;
  }
  else {
    iVar12 = *(int *)(lVar13 + 0x24);
    lVar10 = *(long *)(lVar13 + 0x10);
  }
  *(uint *)(*(long *)(lVar13 + 0x18) + (long)iVar12 * 4 + 0x20) = uVar17;
  iVar12 = *(int *)(lVar13 + 0x24);
  *(int *)(lVar10 + ((long)uVar6 >> 0x20) * 4 + 0x20) = iVar12;
  *(int *)(lVar13 + 0x24) = iVar12 + 1;
LAB_024f5b00:
  plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(undefined8 *)
                                             (**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80));
  lVar10 = *plVar9;
  if (lVar10 != 0) {
    plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                       + 0x80) + 0x80);
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),
               *plVar9 + *(uint *)(*(long *)*plVar9 + 0x104) * uVar11 + 0x20,
               *(undefined8 *)(lVar10 + 0x28));
  }
  plVar9 = (long *)thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                     0x80) + 0x80);
  func_0x04608670(*plVar9 + uVar11 * *(uint *)(*(long *)*plVar9 + 0x104) + 0x20,0,uVar1);
  return 1;
}

