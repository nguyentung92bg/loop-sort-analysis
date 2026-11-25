/* IL2CPP: CarrierBlockCreateSystem$$CreateBlocks
void CarrierBlockCreateSystem__CreateBlocks (CarrierBlockCreateSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0250d790) */
/* WARNING: Removing unreachable block (ram,0x0250d63c) */
/* WARNING: Removing unreachable block (ram,0x0250d7bc) */
/* WARNING: Removing unreachable block (ram,0x0250d704) */
/* WARNING: Removing unreachable block (ram,0x0250d8f4) */
/* IL2CPP: CarrierBlockCreateSystem$$CreateBlocks
   void CarrierBlockCreateSystem__CreateBlocks (CarrierBlockCreateSystem_o* __this, const
   MethodInfo* method); */

void CarrierBlockCreateSystem__CreateBlocks_240d018(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f4b6fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c29e8);
    FUN_021f03f8(PTR_DAT_049c13b8);
    FUN_021f03f8(PTR_DAT_049c29f0);
    FUN_021f03f8(PTR_DAT_049c29f8);
    FUN_021f03f8(PTR_DAT_049c13c0);
    FUN_021f03f8(PTR_DAT_049c2a00);
    FUN_021f03f8(PTR_DAT_049c13c8);
    FUN_021f03f8(PTR_DAT_049c2a08);
    FUN_021f03f8(PTR_DAT_049c2a10);
    FUN_021f03f8(PTR_DAT_049c2a18);
    FUN_021f03f8(PTR_DAT_049c13d8);
    FUN_021f03f8(PTR_DAT_049c2a20);
    FUN_021f03f8(PTR_DAT_049c2a28);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4b6fe = 1;
  }
  lVar19 = *(long *)(param_1 + 0x30);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_d8 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  plStack_110 = (long *)0x0;
  uStack_108 = 0;
  lStack_118 = 0;
  if (lVar19 != 0) {
    uStack_78 = *(undefined8 *)(lVar19 + 0x40);
    uStack_80 = *(undefined8 *)(lVar19 + 0x38);
    uStack_70 = *(undefined8 *)(lVar19 + 0x48);
    lVar19 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                       (&uStack_80,*(undefined8 *)PTR_DAT_049c2788);
    puVar8 = PTR_DAT_049c2a08;
    puVar7 = PTR_DAT_049c29e8;
    puVar6 = PTR_DAT_049c13c8;
    puVar5 = PTR_DAT_049c13c0;
    if ((*(long *)(param_1 + 0xa0) != 0) && (lVar21 = *(long *)(param_1 + 0xc0), lVar21 != 0)) {
      iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + 0x154);
      lStack_130 = 0;
      lStack_128 = 0;
      uStack_138 = (ulong)*(uint *)(lVar21 + 0x30) << 0x20;
      thunk_FUN_021f190c(&lStack_130,0);
      lStack_128 = *(long *)(lVar21 + 0x28);
      thunk_FUN_021f190c(&lStack_128);
      lStack_98 = lStack_130;
      uStack_a0 = uStack_138;
      lStack_90 = lStack_128;
LAB_0250d1e0:
      iVar18 = (int)uStack_a0 + -1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar18);
      if (iVar18 < 0) {
        uVar4 = uStack_a0._4_4_ - 1;
        uStack_a0 = CONCAT44(uVar4,iVar18);
        if ((int)uVar4 < 0) {
          plVar10 = *(long **)(param_1 + 0xb8);
          if (plVar10 != (long *)0x0) {
            lVar19 = *plVar10;
            uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar11 == 0) goto LAB_0250d8a4;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            goto LAB_0250d88c;
          }
          goto LAB_0250d8f0;
        }
        lVar21 = *(long *)(lStack_90 + (ulong)uVar4 * 8 + 0x20);
        lStack_98 = *(long *)(lVar21 + 0x18);
        thunk_FUN_021f190c((ulong)&uStack_a0 | 8);
        iVar18 = *(int *)(lVar21 + 0x30) + -1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar18);
      }
      if (*(long *)(param_1 + 200) == 0) goto LAB_0250d8f0;
      plVar10 = (long *)FUN_024f6008(*(long *)(param_1 + 200),
                                     *(undefined8 *)(lStack_98 + (long)iVar18 * 8 + 0x20),
                                     *(undefined8 *)PTR_DAT_049c22d8);
      lVar21 = *plVar10;
      if ((lVar21 == 0) || (lVar19 == 0)) goto LAB_0250d8f0;
      uVar11 = CarrierSheet_Row__TryGetCarrier_255afe4
                         (lVar19,*(undefined4 *)(lVar21 + 0x130),&lStack_a8,0);
      if ((uVar11 & 1) != 0) {
        if (lStack_a8 == 0) goto LAB_0250d8f0;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_a8,&uStack_138,*(undefined8 *)PTR_DAT_049c2a20);
        lStack_c8 = lStack_130;
        uStack_d0 = uStack_138;
        uStack_b8 = uStack_120;
        lStack_c0 = lStack_128;
        while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_d0,*(undefined8 *)PTR_DAT_049c29f8), (uVar11 & 1) != 0) {
          lVar22 = *(long *)PTR_DAT_049c2a00;
          lVar12 = *(long *)(lVar22 + 0x20);
          uVar3 = *(ushort *)(lVar12 + 0x135);
          lVar13 = lVar12;
          if ((uVar3 & 1) == 0) {
            lVar13 = FUN_02229718();
            lVar12 = *(long *)(lVar22 + 0x20);
            uVar3 = *(ushort *)(lVar12 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_d0,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_138,uVar14,uVar2);
          lVar13 = lStack_130;
          uVar11 = uStack_138;
          if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (lStack_130,&uStack_138,*(undefined8 *)PTR_DAT_049c13d8);
          lStack_f8 = lStack_130;
          uStack_100 = uStack_138;
          uStack_e8 = uStack_120;
          lStack_f0 = lStack_128;
          iVar18 = 0;
          while (iVar25 = iVar18,
                uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&uStack_100,*(undefined8 *)puVar5), (uVar15 & 1) != 0) {
            lVar23 = *(long *)puVar6;
            lVar22 = *(long *)(lVar23 + 0x20);
            uVar3 = *(ushort *)(lVar22 + 0x135);
            lVar12 = lVar22;
            if ((uVar3 & 1) == 0) {
              lVar12 = FUN_02229718();
              lVar22 = *(long *)(lVar23 + 0x20);
              uVar3 = *(ushort *)(lVar22 + 0x135);
            }
            uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
            if ((uVar3 & 1) == 0) {
              lVar22 = FUN_02229718();
            }
            uVar14 = thunk_FUN_0224e54c(&uStack_100,
                                        *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_138,uVar14,uVar2);
            iVar9 = (int)uStack_138;
            iVar18 = iVar25;
            if ((int)uStack_138 != 0) {
              if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar15 = Blocks__TryGetValue_24b6714
                                 (*(long *)(param_1 + 0x48),uStack_138 & 0xffffffff,&uStack_108,0);
              iVar18 = iVar9;
              if ((uVar15 & 1) == 0) {
                iVar18 = iVar25;
              }
            }
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_100,*(undefined8 *)PTR_DAT_049c13b8);
          if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          Blocks__TryGetValue_24b6714(*(long *)(param_1 + 0x48),iVar25,&uStack_d8,0);
          if (0 < iVar1) {
            iVar18 = 0;
            do {
              lVar12 = PrefabModuleExtensions__Rent_object__269ed94
                                 (*(undefined8 *)(param_1 + 0x38),uStack_d8,
                                  *(undefined8 *)PTR_DAT_049c2a28);
              uVar14 = Level__GetColor_2555cdc(param_1 + 0x58,uVar11,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0(uVar14,uVar14);
              }
              Block__SetColorType_23dc3fc(lVar12,uVar14,0);
              Block__SetFeatures_23dc46c(lVar12,lVar13,0);
              if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              Block__SetMotionDurationMultiplier_23dc644
                        (*(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),lVar12,0);
              Carrier__AddBlock_23fe404(0,lVar21,lVar12,0);
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (lVar13,&uStack_138,*(undefined8 *)PTR_DAT_049c13d8);
              lStack_f8 = lStack_130;
              uStack_100 = uStack_138;
              uStack_e8 = uStack_120;
              lStack_f0 = lStack_128;
              while (uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&uStack_100,*(undefined8 *)puVar5), (uVar15 & 1) != 0) {
                lVar24 = *(long *)puVar6;
                lVar23 = *(long *)(lVar24 + 0x20);
                uVar3 = *(ushort *)(lVar23 + 0x135);
                lVar22 = lVar23;
                if ((uVar3 & 1) == 0) {
                  lVar22 = FUN_02229718();
                  lVar23 = *(long *)(lVar24 + 0x20);
                  uVar3 = *(ushort *)(lVar23 + 0x135);
                }
                uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar22 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar23 = FUN_02229718();
                }
                uVar14 = thunk_FUN_0224e54c(&uStack_100,
                                            *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&uStack_138,uVar14,uVar2);
                lVar22 = lStack_130;
                uVar15 = uStack_138;
                uVar16 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                                   (lVar12,&plStack_110,*(undefined8 *)puVar7);
                plVar10 = plStack_110;
                if ((uVar16 & 1) != 0) {
                  if (plStack_110 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar23 = *plStack_110;
                  uVar16 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar16 != 0) {
                    piVar20 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)puVar8) {
                        puVar17 = (undefined8 *)(lVar23 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0250d5fc;
                      }
                      uVar16 = uVar16 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar17 = (undefined8 *)FUN_02229a4c(plStack_110,*(long *)puVar8,0);
LAB_0250d5fc:
                  (*(code *)*puVar17)(plVar10,uVar15 & 0xffffffff,lVar22,puVar17[1]);
                }
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_100,*(undefined8 *)PTR_DAT_049c13b8);
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar1);
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_d0,*(undefined8 *)PTR_DAT_049c29f0);
        plVar10 = *(long **)(param_1 + 0xb0);
        lStack_118 = lVar21;
        thunk_FUN_021f190c(&lStack_118);
        lVar21 = lStack_118;
        if (plVar10 == (long *)0x0) goto LAB_0250d8f0;
        lVar13 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049c2a18) {
              puVar17 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0250d778;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar17 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c2a18,0);
LAB_0250d778:
        (*(code *)*puVar17)(plVar10,lVar21,puVar17[1]);
      }
      goto LAB_0250d1e0;
    }
  }
LAB_0250d8f0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar20 = piVar20 + 4;
    if (uVar11 == 0) break;
LAB_0250d88c:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049c2a10) {
      puVar17 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0250d8c0;
    }
  }
LAB_0250d8a4:
  puVar17 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c2a10,0);
LAB_0250d8c0:
  (*(code *)*puVar17)(plVar10,0,puVar17[1]);
  return;
}

