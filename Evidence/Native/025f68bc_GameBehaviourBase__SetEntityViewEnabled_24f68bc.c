/* IL2CPP: GameBehaviourBase$$SetEntityViewEnabled
void GameBehaviourBase__SetEntityViewEnabled (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$SetEntityViewEnabled
   void GameBehaviourBase__SetEntityViewEnabled (GameBehaviourBase_o* __this, const MethodInfo*
   method); */

ulong GameBehaviourBase__SetEntityViewEnabled_24f68bc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  
  if ((bRam0000000004f4bd25 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c84a0);
    FUN_021f03f8(PTR_DAT_049c7838);
    FUN_021f03f8(PTR_DAT_049c77c0);
    bRam0000000004f4bd25 = 1;
  }
  uVar9 = Scellecs_Morpeh_WorldExtensions__IsNullOrDisposed_32bd5a8
                    (*(undefined8 *)(param_1 + 0x80),0);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  uVar14 = *(ulong *)(param_1 + 0x60);
  iVar15 = (int)(uVar14 >> 0x20);
  if (iVar15 < 1) {
    return uVar9;
  }
  uVar9 = *(ulong *)(param_1 + 0x80);
  if (*(int *)(uVar9 + 0x70) <= iVar15) {
    return uVar9;
  }
  if ((uint)*(ushort *)(*(long *)(uVar9 + 0x60) + (uVar14 >> 0x20) * 2 + 0x20) !=
      (uint)uVar14 >> 0x10) {
    return uVar9;
  }
  if (*(uint *)(uVar9 + 0xc4) != ((uint)(uVar14 >> 8) & 0xff)) {
    return uVar9;
  }
  if (*(uint *)(uVar9 + 200) != ((uint)uVar14 & 0xff)) {
    return uVar9;
  }
  lVar10 = FUN_024f5544(uVar9,*(undefined8 *)PTR_DAT_049c77c0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = FUN_024f5708(lVar10,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_049c7838);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  uVar9 = *(ulong *)(param_1 + 0x60);
  lVar11 = *(long *)PTR_DAT_049c84a0;
  plVar12 = *(long **)(*(long *)(lVar11 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar12[3] + 0xfc);
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(*plVar12 + 0x80) + 0x20);
  uVar21 = (uint)(uVar9 >> 0x20);
  if (((((int)uVar21 < 1) || (lVar13 = *plVar12, *(int *)(lVar13 + 0x70) <= (int)uVar21)) ||
      ((uint)*(ushort *)(*(long *)(lVar13 + 0x60) + (uVar9 >> 0x20) * 2 + 0x20) !=
       (uint)uVar9 >> 0x10)) ||
     ((*(uint *)(lVar13 + 0xc4) != ((uint)(uVar9 >> 8) & 0xff) ||
      (*(uint *)(lVar13 + 200) != ((uint)uVar9 & 0xff))))) {
    puVar6 = (undefined8 *)
             thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80
                                                ) + 0xc0);
    Scellecs_Morpeh_InvalidAddOperationException__ThrowDisposedEntity_32b7ce4(uVar9,*puVar6,0);
  }
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x60);
  lVar13 = *plVar12;
  uVar19 = *(int *)(*(long *)(lVar13 + 0x30) + (long)(int)(*(uint *)(lVar13 + 0x18) & uVar21) * 4) -
           1;
  if (-1 < (int)uVar19) {
    do {
      piVar18 = (int *)(*(long *)(lVar13 + 0x48) + (ulong)uVar19 * 8);
      if (*piVar18 - 1U == uVar21) {
        puVar6 = (undefined8 *)
                 thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x80) + 0xc0);
        Scellecs_Morpeh_InvalidAddOperationException__ThrowAlreadyExists_32b7d60(uVar9,*puVar6,0);
        uVar14 = (ulong)uVar19;
        goto LAB_024f5fbc;
      }
      uVar19 = piVar18[1];
    } while (-1 < (int)uVar19);
  }
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x60);
  lVar13 = *plVar12;
  uVar19 = *(uint *)(lVar13 + 0x20);
  if ((int)uVar19 < 0) {
    uVar19 = *(uint *)(lVar13 + 0x1c);
    bVar5 = uVar19 != *(uint *)(lVar13 + 0x14);
    if (!bVar5) {
      Scellecs_Morpeh_IntSlotMap__Expand_32b4ebc(lVar13,0);
      uVar19 = *(uint *)(lVar13 + 0x1c);
    }
    lVar16 = *(long *)(lVar13 + 0x48);
    iVar15 = uVar19 + 1;
    *(int *)(lVar13 + 0x1c) = iVar15;
  }
  else {
    lVar16 = *(long *)(lVar13 + 0x48);
    bVar5 = true;
    *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar16 + (ulong)uVar19 * 8 + 4);
    iVar15 = uVar19 + 1;
  }
  piVar18 = (int *)(lVar16 + (long)(int)uVar19 * 8);
  lVar16 = *(long *)(lVar13 + 0x30);
  uVar14 = (ulong)(int)uVar19;
  uVar19 = *(uint *)(lVar13 + 0x18) & uVar21;
  *piVar18 = uVar21 + 1;
  piVar18[1] = *(int *)(lVar16 + (long)(int)uVar19 * 4) + -1;
  *(int *)(lVar16 + (long)(int)uVar19 * 4) = iVar15;
  *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
  if (!bVar5) {
    plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) +
                                                                     0xc0) + 0x80) + 0x60);
    uVar2 = *(undefined4 *)(*plVar12 + 0x14);
    uVar7 = thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    Scellecs_Morpeh_Collections_ArrayHelpers__GrowNonInlined___Il2CppFullySharedGenericType__25aaf28
              (uVar7,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x28));
  }
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x80);
  func_0x04608670(*plVar12 + *(uint *)(*(long *)*plVar12 + 0x104) * uVar14 + 0x20,0,uVar1);
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x20);
  lVar20 = *plVar12;
  puVar8 = (ulong *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x40);
  lVar13 = *(long *)(lVar20 + 0x58) + 0x20;
  lVar16 = lVar13 + (long)(int)uVar21 * 0x30;
  uVar19 = *(uint *)(lVar16 + 0x18);
  uVar4 = uVar19 - 1;
  *(ulong *)(lVar16 + 8) = *(ulong *)(lVar16 + 8) ^ *puVar8;
  if (-1 < (int)uVar4) {
    lVar17 = *(long *)(lVar13 + (long)(int)uVar21 * 0x30 + 0x28);
    do {
      uVar19 = uVar19 - 1;
      piVar18 = (int *)(lVar17 + (ulong)uVar19 * 4 + 0x20);
      if (*piVar18 == (int)puVar8[1]) {
        *(uint *)(lVar16 + 0x18) = uVar4;
        *piVar18 = *(int *)(lVar17 + (ulong)uVar4 * 4 + 0x20);
        goto LAB_024f5fbc;
      }
    } while (0 < (int)uVar19);
  }
  lVar13 = lVar13 + (long)(int)uVar21 * 0x30;
  piVar18 = (int *)(lVar13 + 0x14);
  iVar15 = *piVar18;
  plVar12 = (long *)(lVar13 + 0x20);
  lVar13 = *plVar12;
  if (iVar15 == *(int *)(lVar13 + 0x18)) {
    Scellecs_Morpeh_WorldExtensions__ExpandAddedComponents_32beac4(lVar16,0);
    lVar13 = *plVar12;
    iVar15 = *piVar18;
  }
  lVar16 = *(long *)(lVar20 + 0x78);
  *piVar18 = iVar15 + 1;
  *(int *)(lVar13 + (long)iVar15 * 4 + 0x20) = (int)puVar8[1];
  if ((int)uVar21 < *(int *)(lVar16 + 0x20)) {
    lVar13 = *(long *)(lVar16 + 0x10);
    iVar3 = *(int *)(lVar13 + ((long)uVar9 >> 0x20) * 4 + 0x20);
    iVar15 = *(int *)(lVar16 + 0x24);
    if ((iVar3 < iVar15) && (*(uint *)(*(long *)(lVar16 + 0x18) + (long)iVar3 * 4 + 0x20) == uVar21)
       ) goto LAB_024f5fbc;
  }
  else {
    iVar15 = *(int *)(lVar16 + 0x24);
    lVar13 = *(long *)(lVar16 + 0x10);
  }
  *(uint *)(*(long *)(lVar16 + 0x18) + (long)iVar15 * 4 + 0x20) = uVar21;
  iVar15 = *(int *)(lVar16 + 0x24);
  *(int *)(lVar13 + ((long)uVar9 >> 0x20) * 4 + 0x20) = iVar15;
  *(int *)(lVar16 + 0x24) = iVar15 + 1;
LAB_024f5fbc:
  plVar12 = (long *)thunk_FUN_0224e54c(lVar10,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                       + 0x80) + 0x80);
  return *plVar12 + uVar14 * *(uint *)(*(long *)*plVar12 + 0x104) + 0x20;
}

