/* IL2CPP: MetalBlockSystem$$TryComplete
void MetalBlockSystem__TryComplete (MetalBlockSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$TryComplete
   void MetalBlockSystem__TryComplete (MetalBlockSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void MetalBlockSystem__TryComplete_23ed078
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5,
               long param_6)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c4 [4];
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_58;
  
  if ((bRam0000000004f4b636 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c13b0);
    FUN_021f03f8(PTR_DAT_049c1f38);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1f40);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1f48);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1f50);
    FUN_021f03f8(PTR_DAT_049c1f58);
    bRam0000000004f4b636 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  auStack_c4[0] = 0;
  if ((param_6 != 0) &&
     (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (param_6,0,&lStack_e0,*(undefined8 *)PTR_DAT_049c1558), lStack_e0 != 0)) {
    uVar7 = Block__TryGetFeature_23dc908(lStack_e0,0x1f,&uStack_a0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_5 + 0x78);
    iVar1 = *(int *)(param_6 + 0x18) + *(int *)(param_5 + 0x90);
    *(int *)(param_5 + 0x90) = iVar1;
    puVar6 = PTR_DAT_049c14f0;
    if (lVar8 != 0) {
      if (iVar1 < *(int *)(lVar8 + 0x18)) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar8,&lStack_e0,*(undefined8 *)PTR_DAT_049c14f0);
      puVar5 = PTR_DAT_049c14e8;
      puVar4 = PTR_DAT_049c14e0;
      puVar3 = PTR_DAT_049c13b0;
      plStack_b8 = plStack_d8;
      lStack_c0 = lStack_e0;
      plStack_d8 = &lStack_c0;
      uStack_b0 = uStack_d0;
      lStack_e0 = 0;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&lStack_c0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        lVar14 = *(long *)puVar5;
        lVar9 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar8 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar9 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&lStack_c0,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&lStack_58,uVar10,uVar17);
        lVar8 = lStack_58;
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar15 = *(long **)(lStack_58 + 0x100);
        if (plVar15 != (long *)0x0) {
          lVar9 = *plVar15;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_024ed2d8;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)puVar3,1);
LAB_024ed2d8:
          (*(code *)*puVar11)(plVar15,lVar8,puVar11[1]);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_c0,*(undefined8 *)PTR_DAT_049c14d8);
      if (*(long *)(param_5 + 0x78) != 0) {
        uVar17 = *(undefined4 *)(*(long *)(param_5 + 0x78) + 0x18);
        lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1f50);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
                  (lVar8,uVar17,*(undefined8 *)PTR_DAT_049c1f40);
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        if (*(long *)(param_5 + 0x78) != 0) {
          pfVar12 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          fVar19 = *pfVar12;
          fVar20 = pfVar12[1];
          fVar21 = pfVar12[2];
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_5 + 0x78),&lStack_e0,*(undefined8 *)puVar6);
          puVar3 = PTR_DAT_049c1f58;
          puVar6 = PTR_DAT_049c1f38;
          plStack_b8 = plStack_d8;
          lStack_c0 = lStack_e0;
          uStack_b0 = uStack_d0;
          plStack_d8 = &lStack_c0;
          lStack_e0 = 0;
          while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&lStack_c0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
            lVar16 = *(long *)puVar5;
            lVar14 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar14 + 0x135);
            lVar9 = lVar14;
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_02229718();
              lVar14 = *(long *)(lVar16 + 0x20);
              uVar2 = *(ushort *)(lVar14 + 0x135);
            }
            uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar14 = FUN_02229718();
            }
            uVar10 = thunk_FUN_0224e54c(&lStack_c0,
                                        *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_58,uVar10,uVar17);
            lVar9 = lStack_58;
            if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar14 = UnityEngine_Component__get_transform_3c18724(lStack_58,0);
            lVar16 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
            System_Object___ctor_3142338(lVar16,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            *(long *)(lVar16 + 0x10) = lVar9;
            thunk_FUN_021f190c((long *)(lVar16 + 0x10),lVar9);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar17 = UnityEngine_Transform__get_position_3c2d540(lVar14,0);
            *(undefined4 *)(lVar16 + 0x20) = uVar17;
            *(float *)(lVar16 + 0x24) = param_2;
            *(float *)(lVar16 + 0x28) = param_3;
            uVar17 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar14,0);
            *(undefined4 *)(lVar16 + 0x2c) = uVar17;
            *(float *)(lVar16 + 0x30) = param_2;
            *(float *)(lVar16 + 0x34) = param_3;
            *(undefined4 *)(lVar16 + 0x38) = param_4;
            uVar10 = UnityEngine_Transform__get_parent_3c2d470(lVar14,0);
            *(undefined8 *)(lVar16 + 0x40) = uVar10;
            thunk_FUN_021f190c();
            fVar18 = (float)UnityEngine_Random__get_value_3c11d1c(0);
            param_2 = 100.0;
            *(float *)(lVar16 + 0x18) = fVar18 * 100.0;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_02333498(lVar8,lVar16,*(undefined8 *)puVar6);
            fVar18 = (float)UnityEngine_Transform__get_position_3c2d540(lVar14,0);
            fVar19 = fVar19 + fVar18;
            fVar20 = fVar20 + param_2;
            fVar21 = fVar21 + param_3;
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_c0,*(undefined8 *)PTR_DAT_049c14d8);
          if (lVar8 != 0) {
            fVar18 = (float)*(int *)(lVar8 + 0x18);
            auStack_c4[0] =
                 MetalBlockSystem__ApplyMagnetMotion_23ee4a8
                           (fVar19 / fVar18,fVar20 / fVar18,fVar21 / fVar18,param_5,lVar8);
            Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_c4,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

