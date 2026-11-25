/* IL2CPP: GameBehaviourBase$$InjectColorType
void GameBehaviourBase__InjectColorType (GameBehaviourBase_o* __this, ColorType_o colorType, RendererPropertyRegistry_o* propertyRegistry, UnityEngine_Color_o colorOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025f54a0) */
/* WARNING: Removing unreachable block (ram,0x025f54a4) */
/* WARNING: Removing unreachable block (ram,0x025f553c) */
/* WARNING: Removing unreachable block (ram,0x025f5610) */
/* WARNING: Removing unreachable block (ram,0x025f5618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: GameBehaviourBase$$InjectColorType
   void GameBehaviourBase__InjectColorType (GameBehaviourBase_o* __this, ColorType_o colorType,
   RendererPropertyRegistry_o* propertyRegistry, UnityEngine_Color_o colorOffset, const MethodInfo*
   method); */

void GameBehaviourBase__InjectColorType_24f4fa0
               (float param_1,float param_2,float param_3,float param_4,long param_5,ulong param_6,
               long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  undefined8 uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  ulong uStack_b0;
  long lStack_a8;
  
  uStack_b0 = param_6;
  if ((bRam0000000004f4bd1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1530);
    FUN_021f03f8(PTR_DAT_049c1538);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c6a98);
    FUN_021f03f8(PTR_DAT_049c6890);
    FUN_021f03f8(PTR_DAT_049c68a0);
    FUN_021f03f8(PTR_DAT_049c6aa0);
    FUN_021f03f8(PTR_DAT_049c6aa8);
    FUN_021f03f8(PTR_DAT_049c68b8);
    FUN_021f03f8(PTR_DAT_049c68d0);
    FUN_021f03f8(PTR_DAT_049c6ab0);
    FUN_021f03f8(PTR_DAT_049c83e8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1570);
    FUN_021f03f8(PTR_DAT_049be6b8);
    FUN_021f03f8(PTR_DAT_049c83f0);
    bRam0000000004f4bd1d = 1;
  }
  puVar5 = PTR_DAT_049b3b98;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  lStack_c8 = 0;
  uStack_110 = 0;
  puStack_108 = (ulong *)0x0;
  uStack_100 = 0;
  puStack_e8 = (ulong *)0x0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(long *)(param_5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Colors__Get_24f5718(&uStack_130,*(long *)(param_5 + 0x28),param_6);
  uVar18 = uStack_130;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = UnityEngine_Object__op_Equality_3c1eeb4(uVar18,0,0);
  if (((uVar10 & 1) == 0) || ((param_6 & 0xffffffff) == 0xffffffff)) {
    if (*(int *)(*(long *)PTR_DAT_049c1538 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_c0 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_c8,*(undefined8 *)PTR_DAT_049c1530);
    if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = RendererPropertyRegistry__GetTargets_249c98c(param_7,*(undefined8 *)PTR_DAT_049be6b8,0)
    ;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar15,&uStack_130,*(undefined8 *)PTR_DAT_049c6ab0);
    puVar9 = PTR_DAT_049c83e8;
    puVar8 = PTR_DAT_049c6aa0;
    puVar7 = PTR_DAT_049c68b8;
    puVar6 = PTR_DAT_049c68a0;
    puVar5 = PTR_DAT_049c6890;
    fVar4 = _UNK_013aa3dc;
    puStack_e8 = puStack_128;
    uStack_f0 = uStack_130;
    uStack_d8 = uStack_118;
    uStack_e0 = uStack_120;
    fVar24 = param_4 * param_4;
    fVar27 = fVar24 + param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
    uVar10 = uStack_130;
    uVar26 = uStack_120;
    do {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_f0,*(undefined8 *)puVar8);
      if ((uVar12 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_f0,*(undefined8 *)PTR_DAT_049c6a98);
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (auStack_c0,*(undefined8 *)PTR_DAT_049c1570);
        return;
      }
      lVar21 = *(long *)PTR_DAT_049c6aa8;
      lVar13 = *(long *)(lVar21 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar15 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_02229718();
        lVar13 = *(long *)(lVar21 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_f0,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_130,uVar11,uVar1);
      uVar12 = uStack_130;
      if (puStack_128 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = uStack_130._4_4_;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (puStack_128,&uStack_130,*(undefined8 *)PTR_DAT_049c68d0);
      uStack_110 = uStack_130;
      uStack_130 = 0;
      puStack_108 = puStack_128;
      uStack_100 = uStack_120;
      puStack_128 = &uStack_110;
      while( true ) {
        uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_110,*(undefined8 *)puVar6);
        if ((uVar14 & 1) == 0) break;
        lVar21 = *(long *)puVar7;
        lVar13 = *(long *)(lVar21 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
        lVar15 = lVar13;
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_02229718();
          lVar13 = *(long *)(lVar21 + 0x20);
          uVar3 = *(ushort *)(lVar13 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&uStack_110,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_a8,uVar11,uVar2);
        lVar15 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Renderer__GetSharedMaterials_3bddd80(lStack_a8,lStack_c8,0);
        if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                  (lStack_c8,uVar1,uVar18,*(undefined8 *)puVar9);
        UnityEngine_Renderer__SetSharedMaterials_3bddc98(lVar15,lStack_c8,0);
        fVar25 = (float)uVar26;
        fVar23 = (float)uVar10;
        if (fVar4 <= fVar27) {
          if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fVar22 = (float)UnityEngine_Material__GetColor_3be6388(uVar18,uVar12 & 0xffffffff,0);
          if (*(long *)(param_5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_MaterialPropertyBlock__Clear_3bdb93c(*(long *)(param_5 + 0x48),0);
          if (*(long *)(param_5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar10 = (ulong)(uint)(param_2 + fVar23);
          fVar24 = param_3 + fVar24;
          uVar26 = (ulong)(uint)(param_4 + fVar25);
          UnityEngine_MaterialPropertyBlock__SetColor_3bdbd6c
                    (param_1 + fVar22,uVar10,fVar24,uVar26,*(long *)(param_5 + 0x48),
                     uVar12 & 0xffffffff,0);
          UnityEngine_Renderer__SetPropertyBlock_3bdc9f0
                    (lVar15,*(undefined8 *)(param_5 + 0x48),uVar1,0);
        }
        else {
          UnityEngine_Renderer__SetPropertyBlock_3bdc9f0(lVar15,0,uVar1,0);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_110,*(undefined8 *)puVar5);
    } while( true );
  }
  uVar11 = ColorType__ToString_24f57b0(&uStack_b0);
  uVar11 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c83f0,uVar11,0);
  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
  }
  puVar5 = PTR_DAT_049b3c58;
  uVar17 = 0;
  if ((bRam0000000004f56b85 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049ceff8);
    bRam0000000004f56b85 = 1;
    uVar17 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
    uVar17 = extraout_x1_00;
  }
  if (cRam0000000004f4c367 == '\0') {
    FUN_021f03f8(PTR_DAT_049b3c58,uVar17);
    cRam0000000004f4c367 = '\x01';
  }
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    FUN_021f0574();
    lVar15 = *(long *)puVar5;
  }
  plVar20 = *(long **)(*(long *)(lVar15 + 0xb8) + 8);
  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar15 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_049ceff8) {
        puVar16 = (undefined8 *)(lVar15 + (long)(*piVar19 + 5) * 0x10 + 0x138);
        goto LAB_03cd1318;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar16 = (undefined8 *)FUN_02229a4c(plVar20,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd1318:
                    /* WARNING: Could not recover jumptable at 0x03cd1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar16)(plVar20,0,uVar11,puVar16[1]);
  return;
}

