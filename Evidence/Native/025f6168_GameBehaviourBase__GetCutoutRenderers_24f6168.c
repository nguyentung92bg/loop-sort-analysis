/* IL2CPP: GameBehaviourBase$$GetCutoutRenderers
void GameBehaviourBase__GetCutoutRenderers (GameBehaviourBase_o* __this, System_Collections_Generic_List_Renderer__o* cutoutRenderers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025f6700) */
/* WARNING: Removing unreachable block (ram,0x025f66f0) */
/* IL2CPP: GameBehaviourBase$$GetCutoutRenderers
   void GameBehaviourBase__GetCutoutRenderers (GameBehaviourBase_o* __this,
   System_Collections_Generic_List_Renderer__o* cutoutRenderers, const MethodInfo* method); */

void GameBehaviourBase__GetCutoutRenderers_24f6168(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_049c8448;
  if ((bRam0000000004f4bd20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8450);
    FUN_021f03f8(PTR_DAT_049c8448);
    FUN_021f03f8(PTR_DAT_049c8458);
    FUN_021f03f8(PTR_DAT_049c8460);
    FUN_021f03f8(PTR_DAT_049c8468);
    FUN_021f03f8(PTR_DAT_049c8470);
    FUN_021f03f8(PTR_DAT_049c8478);
    FUN_021f03f8(PTR_DAT_049c6a70);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c62c0);
    FUN_021f03f8(PTR_DAT_049c62c8);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c63e8);
    FUN_021f03f8(PTR_DAT_049c63f8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c8480);
    FUN_021f03f8(PTR_DAT_049c8488);
    FUN_021f03f8(PTR_DAT_049c8490);
    FUN_021f03f8(PTR_DAT_049c8498);
    bRam0000000004f4bd20 = 1;
  }
  puVar4 = PTR_DAT_049c8458;
  puVar3 = PTR_DAT_049c8450;
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_58 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&uStack_60,*(undefined8 *)puVar3);
  UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22ec
            (param_1,1,uStack_60,*(undefined8 *)puVar4);
  uVar14 = uStack_60;
  puVar2 = PTR_DAT_049c8498;
  lVar12 = *(long *)PTR_DAT_049c8498;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
    lVar12 = *(long *)puVar2;
  }
  puVar15 = *(undefined8 **)(lVar12 + 0xb8);
  lVar18 = puVar15[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      puVar15 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar19 = *puVar15;
    lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c8478);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
              (lVar18,uVar19,*(undefined8 *)PTR_DAT_049c8488,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar13 = lVar18;
    thunk_FUN_021f190c(plVar13,lVar18);
  }
  uVar14 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                     (uVar14,lVar18,*(undefined8 *)PTR_DAT_049c8468);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
    lVar12 = *(long *)puVar2;
  }
  puVar15 = *(undefined8 **)(lVar12 + 0xb8);
  lVar18 = puVar15[2];
  if (lVar18 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      puVar15 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar19 = *puVar15;
    lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c8470);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
              (lVar18,uVar19,*(undefined8 *)PTR_DAT_049c8490,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar13 = lVar18;
    thunk_FUN_021f190c(plVar13,lVar18);
  }
  plVar13 = (long *)System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25defb0
                              (uVar14,lVar18,*(undefined8 *)PTR_DAT_049c8460);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *plVar13;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049c62c0) {
        puVar15 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_025f6464;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar15 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049c62c0,0);
LAB_025f6464:
  plVar13 = (long *)(*(code *)*puVar15)(plVar13,puVar15[1]);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *(long *)PTR_DAT_049c63f8;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  uVar16 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    puVar2 = PTR_DAT_049b3b98;
    puVar3 = PTR_DAT_049b4360;
    puVar4 = PTR_DAT_049c62c8;
    puVar5 = PTR_DAT_049c63e8;
    puVar6 = PTR_DAT_049c6a70;
    puVar7 = PTR_DAT_049c6a70;
    puVar8 = PTR_DAT_049c63e8;
    puVar9 = PTR_DAT_049c62c8;
    puVar10 = PTR_DAT_049b4360;
    puVar11 = PTR_DAT_049b3b98;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    puVar2 = PTR_DAT_049b3b98;
    puVar3 = PTR_DAT_049b4360;
    puVar4 = PTR_DAT_049c62c8;
    puVar5 = PTR_DAT_049c63e8;
    puVar6 = PTR_DAT_049c6a70;
    puVar7 = PTR_DAT_049c6a70;
    puVar8 = PTR_DAT_049c63e8;
    puVar9 = PTR_DAT_049c62c8;
    puVar10 = PTR_DAT_049b4360;
    puVar11 = PTR_DAT_049b3b98;
    if (0 < iVar1) {
      System_Array__Clear_31229cc(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
      puVar2 = PTR_DAT_049b3b98;
      puVar3 = PTR_DAT_049b4360;
      puVar4 = PTR_DAT_049c62c8;
      puVar5 = PTR_DAT_049c63e8;
      puVar6 = PTR_DAT_049c6a70;
      puVar7 = PTR_DAT_049c6a70;
      puVar8 = PTR_DAT_049c63e8;
      puVar9 = PTR_DAT_049c62c8;
      puVar10 = PTR_DAT_049b4360;
      puVar11 = PTR_DAT_049b3b98;
    }
  }
  do {
    PTR_DAT_049b3b98 = puVar11;
    PTR_DAT_049b4360 = puVar10;
    PTR_DAT_049c62c8 = puVar9;
    PTR_DAT_049c63e8 = puVar8;
    PTR_DAT_049c6a70 = puVar7;
    puVar7 = PTR_DAT_049c6a70;
    puVar8 = PTR_DAT_049c63e8;
    puVar9 = PTR_DAT_049c62c8;
    puVar10 = PTR_DAT_049b4360;
    puVar11 = PTR_DAT_049b3b98;
    PTR_DAT_049b3b98 = puVar2;
    PTR_DAT_049c62c8 = puVar4;
    PTR_DAT_049c63e8 = puVar5;
    PTR_DAT_049c6a70 = puVar6;
    if (plVar13 == (long *)0x0) {
      PTR_DAT_049b4360 = puVar3;
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar18 = *plVar13;
    lVar12 = *(long *)PTR_DAT_049b4360;
    uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          PTR_DAT_049b4360 = puVar3;
          goto LAB_025f6550;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    PTR_DAT_049b4360 = puVar3;
    puVar15 = (undefined8 *)FUN_02229a4c(plVar13,lVar12,0);
LAB_025f6550:
    uVar16 = (*(code *)*puVar15)(plVar13,puVar15[1]);
    if ((uVar16 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_025f66b0;
      lVar12 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 == 0) goto LAB_025f6688;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_025f65b4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar15 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)puVar9,0);
LAB_025f65b4:
    lVar12 = (*(code *)*puVar15)(plVar13,puVar15[1]);
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(lVar12,0,0);
    puVar2 = PTR_DAT_049b3b98;
    puVar3 = PTR_DAT_049b4360;
    puVar4 = PTR_DAT_049c62c8;
    puVar5 = PTR_DAT_049c63e8;
    puVar6 = PTR_DAT_049c6a70;
    if ((uVar16 & 1) == 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar12,&uStack_48,*(undefined8 *)puVar7);
      uVar14 = uStack_48;
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(uVar14,0,0);
      puVar2 = PTR_DAT_049b3b98;
      puVar3 = PTR_DAT_049b4360;
      puVar4 = PTR_DAT_049c62c8;
      puVar5 = PTR_DAT_049c63e8;
      puVar6 = PTR_DAT_049c6a70;
      if ((uVar16 & 1) == 0) {
        FUN_02333498(param_2,uVar14,*(undefined8 *)puVar8);
        puVar2 = PTR_DAT_049b3b98;
        puVar3 = PTR_DAT_049b4360;
        puVar4 = PTR_DAT_049c62c8;
        puVar5 = PTR_DAT_049c63e8;
        puVar6 = PTR_DAT_049c6a70;
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar15 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_025f66a4;
    }
  }
LAB_025f6688:
  puVar15 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b3cc8,0);
LAB_025f66a4:
  (*(code *)*puVar15)(plVar13,puVar15[1]);
LAB_025f66b0:
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (auStack_58,*(undefined8 *)PTR_DAT_049c8480);
  return;
}

