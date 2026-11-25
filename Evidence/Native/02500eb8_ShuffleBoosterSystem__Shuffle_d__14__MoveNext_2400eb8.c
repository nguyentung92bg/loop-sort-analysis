/* IL2CPP: ShuffleBoosterSystem.<Shuffle>d__14$$MoveNext
void ShuffleBoosterSystem__Shuffle_d__14__MoveNext (ShuffleBoosterSystem__Shuffle_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem.<Shuffle>d__14$$MoveNext
   void ShuffleBoosterSystem__Shuffle_d__14__MoveNext (ShuffleBoosterSystem__Shuffle_d__14_o __this,
   const MethodInfo* method); */

void ShuffleBoosterSystem__Shuffle_d__14__MoveNext_2400eb8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_c0;
  int *piStack_b8;
  int **ppiStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  int *piStack_98;
  int **ppiStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  int iStack_44;
  undefined1 auStack_40 [16];
  int *piStack_28;
  
  piStack_28 = param_1;
  if ((bRam0000000004f4b697 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2538);
    FUN_021f03f8(PTR_DAT_049c2540);
    FUN_021f03f8(PTR_DAT_049c2548);
    FUN_021f03f8(PTR_DAT_049c2550);
    FUN_021f03f8(PTR_DAT_049c2558);
    FUN_021f03f8(PTR_DAT_049c2560);
    FUN_021f03f8(PTR_DAT_049c2568);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2570);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b697 = 1;
  }
  iStack_44 = *param_1;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  iStack_80 = 0;
  if (iStack_44 == 0) {
LAB_02501104:
    lStack_a0 = 0;
    ppiStack_90 = &piStack_28;
    piStack_98 = &iStack_44;
LAB_02501114:
    puStack_a8 = &uStack_78;
    ppiStack_b0 = &piStack_28;
    piStack_b8 = &iStack_44;
    uStack_c0 = 0;
    iStack_44 = -1;
    auStack_60 = *(undefined1 (*) [16])(piStack_28 + 0x10);
    piStack_28[0x10] = 0;
    piStack_28[0x11] = 0;
    piStack_28[0x12] = 0;
    piStack_28[0x13] = 0;
    *piStack_28 = -1;
  }
  else {
    lVar7 = *(long *)(param_1 + 6);
    if (*(int *)(*(long *)PTR_DAT_049c2548 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar10 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (param_1 + 0xe,*(undefined8 *)PTR_DAT_049c2540);
    *(undefined1 (*) [16])(piStack_28 + 10) = auVar10;
    thunk_FUN_021f190c((undefined1 (*) [16])(piStack_28 + 10),0);
    piStack_98 = &iStack_44;
    lStack_a0 = 0;
    ppiStack_90 = &piStack_28;
    if (iStack_44 == 0) goto LAB_02501104;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    ShuffleBoosterSystem__CreateGroupMeshProxies_23ff094
              (lVar7,*(undefined8 *)(piStack_28 + 8),*(undefined8 *)(piStack_28 + 0xe));
    piStack_b8 = &iStack_44;
    ppiStack_b0 = &piStack_28;
    uStack_c0 = 0;
    puStack_a8 = &uStack_78;
    if (iStack_44 == 0) goto LAB_02501114;
    auStack_40 = ShuffleBoosterSystem__ShuffleBlocks_23ff6c8(lVar7,*(undefined8 *)(piStack_28 + 8));
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar6 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar8 = auStack_60._8_8_ & 0xffff;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_025013c4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025013c4:
      iVar2 = (*(code *)*puVar3)(uVar6,uVar8,puVar3[1]);
      if (iVar2 == 0) {
        iStack_44 = 0;
        *piStack_28 = 0;
        *(undefined1 (*) [16])(piStack_28 + 0x10) = auStack_60;
        thunk_FUN_021f190c(piStack_28 + 0x10,0);
        FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049c2538);
        iVar2 = 6;
        goto LAB_025011c8;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar8 = auStack_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_025011b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025011b4:
    (*(code *)*puVar3)(uVar6,uVar8,puVar3[1]);
  }
  iVar2 = 7;
LAB_025011c8:
  FUN_02018b28(&uStack_c0);
  if ((iVar2 == 7) || (iVar2 == 0)) {
    iVar2 = 8;
  }
  if (*piStack_98 < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppiStack_90 + 10,*(undefined8 *)PTR_DAT_049c2570);
  }
  if (lStack_a0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar2 == 8) {
    *piStack_28 = -2;
    piStack_28[10] = 0;
    piStack_28[0xb] = 0;
    piStack_28[0xc] = 0;
    piStack_28[0xd] = 0;
    piVar5 = piStack_28 + 0xe;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_021f190c(piVar5,0);
    piVar5 = piStack_28;
    if (cRam0000000004f49bfa == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar9 = *(long **)(piVar5 + 2);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_02501398;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_02501398:
      (*(code *)*puVar3)(plVar9,puVar3[1]);
    }
  }
  else if (iVar2 == 0) {
    *piStack_28 = -2;
    uVar6 = (&uStack_88)[iStack_80 + -1];
    piStack_28[10] = 0;
    piStack_28[0xb] = 0;
    piStack_28[0xc] = 0;
    piStack_28[0xd] = 0;
    piVar5 = piStack_28 + 0xe;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_021f190c(piVar5,0);
    piVar5 = piStack_28;
    if (cRam0000000004f49bf9 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bf9 = '\x01';
    }
    plVar9 = *(long **)(piVar5 + 2);
    if (plVar9 == (long *)0x0) {
      piVar5 = piVar5 + 4;
      *(undefined8 *)piVar5 = uVar6;
      thunk_FUN_021f190c(piVar5,uVar6);
    }
    else {
      lVar7 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_02501370;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,3);
LAB_02501370:
      (*(code *)*puVar3)(plVar9,uVar6,puVar3[1]);
    }
  }
  return;
}

