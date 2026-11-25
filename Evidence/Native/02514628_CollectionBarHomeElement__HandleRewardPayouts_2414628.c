/* IL2CPP: CollectionBarHomeElement$$HandleRewardPayouts
void CollectionBarHomeElement__HandleRewardPayouts (CollectionBarHomeElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02514b10) */
/* WARNING: Removing unreachable block (ram,0x02514b14) */
/* WARNING: Removing unreachable block (ram,0x02514bc4) */
/* IL2CPP: CollectionBarHomeElement$$HandleRewardPayouts
   void CollectionBarHomeElement__HandleRewardPayouts (CollectionBarHomeElement_o* __this, const
   MethodInfo* method); */

void CollectionBarHomeElement__HandleRewardPayouts_2414628(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong auStack_180 [4];
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong auStack_130 [8];
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  int iStack_64;
  
  if ((bRam0000000004f4b73b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c88);
    FUN_021f03f8(PTR_DAT_049c2c90);
    FUN_021f03f8(PTR_DAT_049c2c98);
    FUN_021f03f8(PTR_DAT_049c2ca0);
    FUN_021f03f8(PTR_DAT_049c2ca8);
    FUN_021f03f8(PTR_DAT_049c2cb0);
    FUN_021f03f8(PTR_DAT_049c2cb8);
    FUN_021f03f8(PTR_DAT_049c2cc0);
    FUN_021f03f8(PTR_DAT_049c2cc8);
    FUN_021f03f8(PTR_DAT_049c2cd0);
    FUN_021f03f8(PTR_DAT_049c2cd8);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c2cf8);
    bRam0000000004f4b73b = 1;
  }
  lVar13 = *(long *)(param_1 + 0xc0);
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (lVar13 != 0) {
    lVar11 = *(long *)PTR_DAT_049c2cc0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar15 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar15) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar13 + 0x10),0,iVar15,0);
      }
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar9 = CollectionBar__GetClaimableProgresses_2511f44(*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0xc0) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                  (*(long *)(param_1 + 0xc0),uVar9,*(undefined8 *)PTR_DAT_049c2cb8);
        puVar6 = PTR_DAT_049c2ce0;
        puVar5 = PTR_DAT_049c2c98;
        puVar4 = PTR_DAT_049b3c20;
        lVar13 = *(long *)(param_1 + 0xc0);
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x18) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (lVar13,&lStack_e8,*(undefined8 *)PTR_DAT_049c2cc8);
            uStack_80 = uStack_d8;
            plStack_f0 = &lStack_90;
            plStack_88 = plStack_e0;
            lStack_90 = lStack_e8;
            auStack_130[7] = 0;
            while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&lStack_90,*(undefined8 *)PTR_DAT_049c2ca0),
                  uVar8 = auStack_130[7], (uVar10 & 1) != 0) {
              lVar14 = *(long *)PTR_DAT_049c2ca8;
              lVar11 = *(long *)(lVar14 + 0x20);
              uVar3 = *(ushort *)(lVar11 + 0x135);
              lVar13 = lVar11;
              if ((uVar3 & 1) == 0) {
                lVar13 = FUN_02229718();
                lVar11 = *(long *)(lVar14 + 0x20);
                uVar3 = *(ushort *)(lVar11 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
              if ((uVar3 & 1) == 0) {
                lVar11 = FUN_02229718();
              }
              uVar9 = thunk_FUN_0224e54c(&lStack_90,
                                         *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                         0x60);
              func_0x04608620(&lStack_e8,uVar9,uVar1);
              lVar13 = lStack_e8;
              if (lStack_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uStack_a8 = *(undefined8 *)(lStack_e8 + 0x38);
              uStack_b0 = *(undefined8 *)(lStack_e8 + 0x30);
              uStack_98 = *(undefined8 *)(lStack_e8 + 0x48);
              uStack_a0 = *(undefined8 *)(lStack_e8 + 0x40);
              CloudPrefsBool__Set_24eb1bc(&uStack_b0,1,0);
              plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
              uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
              uVar9 = thunk_FUN_0224e54c(lVar13,*(undefined8 *)(*plVar12 + 0x80));
              func_0x04608620(&lStack_e8,uVar9,uVar1);
              uVar1 = (undefined4)lStack_e8;
              lVar11 = *(long *)(param_1 + 0x78);
              uStack_70 = 0;
              System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                        (&uStack_70,&lStack_e8,*(undefined8 *)puVar4);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              auStack_130[0] = uStack_70;
              auStack_130[2] = 0;
              auStack_130[1] = 0;
              auStack_130[4] = 0;
              auStack_130[3] = 0;
              auStack_130[6] = 0;
              auStack_130[5] = 0;
              AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar11,0xb,auStack_130,0);
              lVar13 = *(long *)(lVar13 + 0x28);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (lVar13,&lStack_e8,*(undefined8 *)PTR_DAT_049c2cd0);
              uStack_c0 = uStack_d8;
              plStack_c8 = plStack_e0;
              lStack_d0 = lStack_e8;
              lStack_e8 = 0;
              plStack_e0 = &lStack_d0;
              while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                       (&lStack_d0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
                lVar14 = *(long *)PTR_DAT_049c2cb0;
                lVar11 = *(long *)(lVar14 + 0x20);
                uVar3 = *(ushort *)(lVar11 + 0x135);
                lVar13 = lVar11;
                if ((uVar3 & 1) == 0) {
                  lVar13 = FUN_02229718();
                  lVar11 = *(long *)(lVar14 + 0x20);
                  uVar3 = *(ushort *)(lVar11 + 0x135);
                }
                uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar11 = FUN_02229718();
                }
                uVar9 = thunk_FUN_0224e54c(&lStack_d0,
                                           *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80)
                                           + 0x60);
                func_0x04608620(&uStack_70,uVar9,uVar2);
                uVar8 = uStack_70;
                if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                iVar15 = (int)(uStack_70 >> 0x20);
                FulfillModule__FulfillFreePayout_254358c
                          (*(long *)(param_1 + 0x68),uStack_70 & 0xffffffff,(double)iVar15,
                           *(undefined8 *)PTR_DAT_049c2cf8,0);
                lVar13 = *(long *)(param_1 + 0x78);
                uStack_70 = 0;
                uStack_138 = CONCAT44(uStack_138._4_4_,uVar1);
                System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                          (&uStack_70,&uStack_138,*(undefined8 *)puVar4);
                uVar10 = uStack_70;
                uStack_138 = 0;
                uStack_140 = CONCAT44(uStack_140._4_4_,(int)uVar8);
                System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                          (&uStack_138,&uStack_140,*(undefined8 *)PTR_DAT_049c2ce8);
                uVar7 = uStack_138;
                uStack_140 = 0;
                uStack_148 = uStack_148 & 0xffffffff00000000;
                System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                          (&uStack_140,&uStack_148,*(undefined8 *)puVar6);
                uVar9 = uStack_140;
                uStack_148 = 0;
                iStack_64 = iVar15;
                System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                          (&uStack_148,&iStack_64,*(undefined8 *)puVar4);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                auStack_180[1] = 0;
                auStack_180[2] = 0;
                auStack_180[0] = uVar10;
                auStack_180[3] = uVar7;
                uStack_160 = uVar9;
                uStack_158 = uStack_148;
                uStack_150 = 0;
                AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar13,0xb,auStack_180,0);
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&lStack_d0,*(undefined8 *)PTR_DAT_049c2c88);
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (plStack_f0,*(undefined8 *)PTR_DAT_049c2c90);
            if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0698(uVar8);
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

