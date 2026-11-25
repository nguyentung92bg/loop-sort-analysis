/* IL2CPP: GameBehaviourBase$$InjectMaterial
void GameBehaviourBase__InjectMaterial (GameBehaviourBase_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025f5f40) */
/* WARNING: Removing unreachable block (ram,0x025f5f44) */
/* WARNING: Removing unreachable block (ram,0x025f5fdc) */
/* WARNING: Removing unreachable block (ram,0x025f5fd0) */
/* WARNING: Removing unreachable block (ram,0x025f6044) */
/* IL2CPP: GameBehaviourBase$$InjectMaterial
   void GameBehaviourBase__InjectMaterial (GameBehaviourBase_o* __this, UnityEngine_Material_o*
   material, const MethodInfo* method); */

void GameBehaviourBase__InjectMaterial_24f5a90(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  puVar4 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bd1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1530);
    FUN_021f03f8(PTR_DAT_049c1538);
    FUN_021f03f8(PTR_DAT_049c83b8);
    FUN_021f03f8(PTR_DAT_049c6a98);
    FUN_021f03f8(PTR_DAT_049c6890);
    FUN_021f03f8(PTR_DAT_049c83c0);
    FUN_021f03f8(PTR_DAT_049c83c8);
    FUN_021f03f8(PTR_DAT_049c68a0);
    FUN_021f03f8(PTR_DAT_049c6aa0);
    FUN_021f03f8(PTR_DAT_049c6aa8);
    FUN_021f03f8(PTR_DAT_049c83d0);
    FUN_021f03f8(PTR_DAT_049c68b8);
    FUN_021f03f8(PTR_DAT_049c83d8);
    FUN_021f03f8(PTR_DAT_049c68d0);
    FUN_021f03f8(PTR_DAT_049c6ab0);
    FUN_021f03f8(PTR_DAT_049c83e0);
    FUN_021f03f8(PTR_DAT_049c83e8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1570);
    FUN_021f03f8(PTR_DAT_049be6b8);
    bRam0000000004f4bd1f = 1;
  }
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  plStack_b8 = (long *)0x0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_d0 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar11 & 1) == 0) {
    lVar14 = *(long *)(param_1 + 0x50);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar14 + 0x18) == 0) {
      UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
                (param_1,lVar14,*(undefined8 *)PTR_DAT_049c83b8);
    }
    if (*(int *)(*(long *)PTR_DAT_049c1538 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_78 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_80,*(undefined8 *)PTR_DAT_049c1530);
    puStack_e8 = auStack_78;
    lStack_f0 = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x50),&uStack_120,*(undefined8 *)PTR_DAT_049c83d8);
    puVar10 = PTR_DAT_049c83e8;
    puVar9 = PTR_DAT_049c6aa8;
    puVar8 = PTR_DAT_049c6aa0;
    puVar7 = PTR_DAT_049c68d0;
    puVar6 = PTR_DAT_049c68b8;
    puVar5 = PTR_DAT_049c68a0;
    puVar4 = PTR_DAT_049c6890;
    plStack_98 = plStack_118;
    lStack_a0 = uStack_120;
    uStack_90 = uStack_110;
    plStack_f8 = &lStack_a0;
    lStack_100 = 0;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_a0,*(undefined8 *)PTR_DAT_049c83c8);
      if ((uVar11 & 1) == 0) break;
      lVar15 = *(long *)PTR_DAT_049c83d0;
      lVar12 = *(long *)(lVar15 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
      lVar14 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar12 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar12 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&lStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_120,uVar13,uVar1);
      if (uStack_120 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = RendererPropertyRegistry__GetTargets_249c98c
                         (uStack_120,*(undefined8 *)PTR_DAT_049be6b8,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar14,&uStack_120,*(undefined8 *)PTR_DAT_049c6ab0);
      plStack_b8 = plStack_118;
      lStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      while( true ) {
        uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&lStack_c0,*(undefined8 *)puVar8);
        if ((uVar11 & 1) == 0) break;
        lVar15 = *(long *)puVar9;
        lVar12 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar12 + 0x135);
        lVar14 = lVar12;
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar12 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar12 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar12 = FUN_02229718();
        }
        uVar13 = thunk_FUN_0224e54c(&lStack_c0,
                                    *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_120,uVar13,uVar1);
        if (plStack_118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar1 = uStack_120._4_4_;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (plStack_118,&uStack_120,*(undefined8 *)puVar7);
        lStack_e0 = uStack_120;
        uStack_120 = 0;
        plStack_d8 = plStack_118;
        uStack_d0 = uStack_110;
        plStack_118 = &lStack_e0;
        while( true ) {
          uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&lStack_e0,*(undefined8 *)puVar5);
          if ((uVar11 & 1) == 0) break;
          lVar15 = *(long *)puVar6;
          lVar12 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar12 + 0x135);
          lVar14 = lVar12;
          if ((uVar3 & 1) == 0) {
            lVar14 = FUN_02229718();
            lVar12 = *(long *)(lVar15 + 0x20);
            uVar3 = *(ushort *)(lVar12 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          uVar13 = thunk_FUN_0224e54c(&lStack_e0,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar13,uVar2);
          lVar14 = lStack_68;
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__GetSharedMaterials_3bddd80(lStack_68,lStack_80,0);
          if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                    (lStack_80,uVar1,param_2,*(undefined8 *)puVar10);
          UnityEngine_Renderer__SetSharedMaterials_3bddc98(lVar14,lStack_80,0);
          UnityEngine_Renderer__SetPropertyBlock_3bdc9f0(lVar14,0,uVar1,0);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_e0,*(undefined8 *)puVar4);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_c0,*(undefined8 *)PTR_DAT_049c6a98);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (plStack_f8,*(undefined8 *)PTR_DAT_049c83c0);
    lVar14 = lStack_f0;
    if (lStack_100 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698();
    }
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_e8,*(undefined8 *)PTR_DAT_049c1570);
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar14);
    }
  }
  return;
}

