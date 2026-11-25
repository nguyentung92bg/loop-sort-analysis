/* IL2CPP: FulfillModule$$FulfillFreePayout
void FulfillModule__FulfillFreePayout (FulfillModule_o* __this, FulfillPayout_o payout, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillFreePayout
   void FulfillModule__FulfillFreePayout (FulfillModule_o* __this, FulfillPayout_o payout,
   System_String_o* placement, const MethodInfo* method); */

void FulfillModule__FulfillFreePayout_254358c
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  
  if ((bRam0000000004f4bfec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5e10);
    bRam0000000004f4bfec = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),param_4);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar14 = Monitors__Get_object__26889d0
                         (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c5e10), lVar14 != 0))
  {
    FulfillRewardMonitor__Enqueue_24400ec(lVar14,param_2,param_3,0);
    iVar7 = (int)param_2;
    if (iVar7 == 0x13) {
      FulfillModule__FulfillBoosters_2543690(param_3,param_1);
    }
    else if (iVar7 == 1) {
      FulfillModule__FulfillGold_254359c(param_3,param_1);
    }
    else {
      if (0xfffffff6 < iVar7 - 0x13U) {
        FulfillModule__FulfillBooster_254393c(param_3,param_1,param_2 & 0xffffffff);
      }
      if (iVar7 == 3) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_02643588;
        AdsModule__EnableNoAds_253d030(*(long *)(param_1 + 0x28),0);
      }
      else if (iVar7 == 2) {
        FulfillModule__FulfillLife_2543ba8(param_3,param_1);
      }
    }
    lVar14 = *(long *)(param_1 + 0x40);
    if (lVar14 != 0) {
      if ((bRam0000000004f4bce3 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c7f20,0);
        FUN_021f03f8(PTR_DAT_049c8018);
        FUN_021f03f8(PTR_DAT_049b3c58);
        FUN_021f03f8(PTR_DAT_049c8020);
        FUN_021f03f8(PTR_DAT_049c8028);
        FUN_021f03f8(PTR_DAT_049c8030);
        FUN_021f03f8(PTR_DAT_049c3da0);
        FUN_021f03f8(PTR_DAT_049c7f38);
        FUN_021f03f8(PTR_DAT_049c8008);
        FUN_021f03f8(PTR_DAT_049c8040);
        FUN_021f03f8(PTR_DAT_049c5120);
        FUN_021f03f8(PTR_DAT_049c8048);
        FUN_021f03f8(PTR_DAT_049b5310);
        FUN_021f03f8(PTR_DAT_049c8060);
        bRam0000000004f4bce3 = 1;
      }
      puVar2 = PTR_DAT_049c8008;
      plVar18 = *(long **)(lVar14 + 0x10);
      auStack_78._0_8_ = 0;
      auStack_78._8_8_ = 0;
      lStack_80 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049c8008) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_025ed2d0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049c8008,0);
LAB_025ed2d0:
      lVar15 = (*(code *)*puVar10)(plVar18,puVar10[1]);
      if (lVar15 != 0) {
        if (*(char *)(lVar14 + 0x28) == '\0') {
          *(undefined1 *)(lVar14 + 0x29) = 0;
          iVar7 = CloudSaveModule__StoreLevel_24ecb08(lVar14);
          puVar3 = PTR_DAT_049b5310;
          lVar15 = *(long *)PTR_DAT_049b5310;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            FUN_021f0574(lVar15);
            lVar15 = *(long *)puVar3;
          }
          iVar8 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar15 + 0xb8) + 0x60);
          puVar4 = PTR_DAT_049c8018;
          if (iVar8 < iVar7) {
            lVar15 = *(long *)PTR_DAT_049c8018;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              FUN_021f0574();
              lVar15 = *(long *)puVar4;
            }
            uVar19 = **(undefined8 **)(lVar15 + 0xb8);
            uVar9 = CloudSaveModule__StoreLevel_24ecb08(lVar14);
            puVar2 = PTR_DAT_049b3bd0;
            lStack_d8 = CONCAT44(lStack_d8._4_4_,uVar9);
            uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&lStack_d8);
            lVar15 = *(long *)puVar3;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              FUN_021f0574(lVar15);
              lVar15 = *(long *)puVar3;
            }
            uVar9 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar15 + 0xb8) + 0x60);
            lStack_c0 = CONCAT44(lStack_c0._4_4_,uVar9);
            uVar12 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&lStack_c0);
            uVar11 = System_String__Format_2f7dff0
                               (*(undefined8 *)PTR_DAT_049c8060,uVar19,uVar11,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
            }
            UnityEngine_Debug__LogWarning_3bcf90c(uVar11,0);
            CloudSaveModule__SyncCloudPrefs_24eda5c(lVar14);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_049c7f20 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auStack_78 = CloudPrefsRegistry__GetAllPrefs_24e96d4(&lStack_80);
            puStack_b8 = auStack_78;
            lStack_c0 = 0;
            if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (lStack_80,&lStack_d8,*(undefined8 *)PTR_DAT_049c8040);
            puVar6 = PTR_DAT_049c8030;
            puVar5 = PTR_DAT_049c8028;
            puVar4 = PTR_DAT_049c7f38;
            uStack_98 = plStack_d0;
            lStack_a0 = lStack_d8;
            uStack_90 = uStack_c8;
            plStack_d0 = &lStack_a0;
            lStack_d8 = 0;
            while( true ) {
              uVar16 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&lStack_a0,*(undefined8 *)puVar5);
              if ((uVar16 & 1) == 0) break;
              lVar20 = *(long *)puVar6;
              lVar13 = *(long *)(lVar20 + 0x20);
              uVar1 = *(ushort *)(lVar13 + 0x135);
              lVar15 = lVar13;
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_02229718();
                lVar13 = *(long *)(lVar20 + 0x20);
                uVar1 = *(ushort *)(lVar13 + 0x135);
              }
              uVar9 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar13 = FUN_02229718();
              }
              uVar11 = thunk_FUN_0224e54c(&lStack_a0,
                                          *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&plStack_68,uVar11,uVar9);
              plVar18 = plStack_68;
              plVar21 = *(long **)(lVar14 + 0x10);
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar15 = *plVar21;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_025ed57c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar10 = (undefined8 *)FUN_02229a4c(plVar21,*(long *)puVar2,0);
LAB_025ed57c:
              uVar11 = (*(code *)*puVar10)(plVar21,puVar10[1]);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar15 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                    puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_025ed5e0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar10 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)puVar4,1);
LAB_025ed5e0:
              (*(code *)*puVar10)(plVar18,uVar11,puVar10[1]);
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (plStack_d0,*(undefined8 *)PTR_DAT_049c8020);
            if (lStack_d8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0698();
            }
            plVar18 = *(long **)(lVar14 + 0x10);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar15 = *plVar18;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_025ed890;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)puVar2,0);
LAB_025ed890:
            plVar18 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar15 = *plVar18;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x620);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049c3da0) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_025ed930;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049c3da0,1);
LAB_025ed930:
            (*(code *)*puVar10)(plVar18,uVar11,puVar10[1]);
            plVar18 = *(long **)(lVar14 + 0x10);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar14 = *plVar18;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
                  goto LAB_025ed998;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)puVar2,10);
LAB_025ed998:
            (*(code *)*puVar10)(plVar18,puVar10[1]);
            lVar14 = lStack_c0;
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (puStack_b8,*(undefined8 *)PTR_DAT_049c8048);
            if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0698(lVar14);
            }
          }
        }
        else {
          *(undefined1 *)(lVar14 + 0x29) = 1;
        }
      }
      return;
    }
  }
LAB_02643588:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

