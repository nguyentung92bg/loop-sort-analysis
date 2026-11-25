/* IL2CPP: StreakTower.<HandleClaimableStage>d__19$$MoveNext
void StreakTower__HandleClaimableStage_d__19__MoveNext (StreakTower__HandleClaimableStage_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0262962c) */
/* WARNING: Removing unreachable block (ram,0x026298d4) */
/* IL2CPP: StreakTower.<HandleClaimableStage>d__19$$MoveNext
   void StreakTower__HandleClaimableStage_d__19__MoveNext (StreakTower__HandleClaimableStage_d__19_o
   __this, const MethodInfo* method); */

void StreakTower__HandleClaimableStage_d__19__MoveNext_2529298(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong auStack_1a8 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int iStack_11c;
  long lStack_118;
  int *piStack_110;
  long *plStack_108;
  undefined4 uStack_f8;
  long lStack_f0;
  int *piStack_e8;
  long *plStack_e0;
  long lStack_d0;
  int *piStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int *piStack_88;
  long *plStack_80;
  int iStack_74;
  ulong uStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4bebb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ab8);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c9ac0);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049c9ac8);
    bRam0000000004f4bebb = 1;
  }
  iStack_74 = *param_1;
  lStack_90 = 0;
  piStack_88 = (int *)0x0;
  plStack_80 = (long *)0x0;
  lStack_d0 = 0;
  piStack_c8 = (int *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_c0 = (long *)0x0;
  lStack_f0 = 0;
  piStack_e8 = (int *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_f8 = 0;
  if (iStack_74 == 0) {
    plStack_c0 = *(long **)(param_1 + 0xe);
    piStack_c8 = *(int **)(param_1 + 0xc);
    lStack_d0 = *(long *)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    iStack_74 = -1;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar18 = *(long *)(param_1 + 8);
    lVar10 = StreakTowerSheet_Stage__GetRewards_2568b84(*(long *)(param_1 + 6),0);
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar15 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar11 = thunk_FUN_0224e54c(*(long *)(param_1 + 6),*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&lStack_118,uVar11,uVar1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar9 = (int)lStack_118;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar10,&lStack_118,*(undefined8 *)PTR_DAT_049b6370);
    puVar6 = PTR_DAT_049c2ce8;
    puVar5 = PTR_DAT_049c2ce0;
    puVar4 = PTR_DAT_049b3c20;
    puVar3 = PTR_DAT_049b3bd0;
    piStack_88 = piStack_110;
    lStack_90 = lStack_118;
    iVar9 = iVar9 + -1;
    plStack_80 = plStack_108;
    piStack_110 = &iStack_74;
    lStack_118 = 0;
    plStack_108 = &lStack_90;
    while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&lStack_90,*(undefined8 *)PTR_DAT_049b6348), (uVar12 & 1) != 0) {
      lVar17 = *(long *)PTR_DAT_049b6350;
      lVar13 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
      lVar10 = lVar13;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar13 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&lStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_70,uVar11,uVar1);
      uVar12 = uStack_70;
      iStack_11c = iVar9;
      uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&iStack_11c);
      uVar11 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c9ac8,uVar11,0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar19 = (int)(uVar12 >> 0x20);
      FulfillModule__FulfillFreePayout_254358c
                (*(long *)(lVar18 + 0x38),uVar12 & 0xffffffff,(double)iVar19,uVar11,0);
      lVar10 = *(long *)(lVar18 + 0x48);
      uStack_70 = 0;
      uStack_128 = CONCAT44(uStack_128._4_4_,(int)uVar12);
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_70,&uStack_128,*(undefined8 *)puVar6);
      uVar12 = uStack_70;
      uStack_128 = 0;
      uStack_130 = CONCAT44(uStack_130._4_4_,iVar19);
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_128,&uStack_130,*(undefined8 *)puVar4);
      uVar8 = uStack_128;
      uStack_130 = 0;
      uStack_138 = CONCAT44(uStack_138._4_4_,iVar9);
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_130,&uStack_138,*(undefined8 *)puVar4);
      uVar11 = uStack_130;
      uStack_138 = 0;
      uStack_64 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_138,&uStack_64,*(undefined8 *)puVar5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_168 = 0;
      uStack_160 = 0;
      auStack_1a8[7] = uVar11;
      uStack_158 = uVar12;
      uStack_150 = uStack_138;
      uStack_148 = uVar8;
      uStack_140 = 0;
      AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar10,0x14,auStack_1a8 + 7,0);
    }
    if (iStack_74 < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (plStack_108,*(undefined8 *)PTR_DAT_049b6330);
    }
    lVar10 = *(long *)(param_1 + 6);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_a8 = *(undefined8 *)(lVar10 + 0x38);
    uStack_b0 = *(undefined8 *)(lVar10 + 0x30);
    uStack_98 = *(undefined8 *)(lVar10 + 0x48);
    uStack_a0 = *(undefined8 *)(lVar10 + 0x40);
    CloudPrefsBool__Set_24eb1bc(&uStack_b0,1,0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(lVar18 + 0x48);
    uStack_70 = 0;
    lStack_118 = CONCAT44(lStack_118._4_4_,iVar9);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_70,&lStack_118,*(undefined8 *)puVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_1a8[0] = uStack_70;
    auStack_1a8[2] = 0;
    auStack_1a8[1] = 0;
    auStack_1a8[4] = 0;
    auStack_1a8[3] = 0;
    auStack_1a8[6] = 0;
    auStack_1a8[5] = 0;
    AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar10,0x14,auStack_1a8,0);
    if (*(long *)(lVar18 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsModule__Show_253e230(&lStack_118,*(long *)(lVar18 + 0x28),0x14,1,0);
    piStack_e8 = piStack_110;
    lStack_f0 = lStack_118;
    plStack_e0 = plStack_108;
    FUN_0235b0c0(&lStack_f0,&lStack_118,*(undefined8 *)PTR_DAT_049c46b0);
    lVar18 = *(long *)PTR_DAT_049c46a0;
    piStack_c8 = piStack_110;
    lStack_d0 = lStack_118;
    plStack_c0 = plStack_108;
    lVar10 = *(long *)(lVar18 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&lStack_d0,
                                *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
    lVar10 = *(long *)(lVar18 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    iVar9 = FUN_0235b2a0(uVar11,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    if (iVar9 == 0) {
      iStack_74 = 0;
      *param_1 = 0;
      *(int **)(param_1 + 0xc) = piStack_c8;
      *(long *)(param_1 + 10) = lStack_d0;
      *(long **)(param_1 + 0xe) = plStack_c0;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,&lStack_d0,param_1,*(undefined8 *)PTR_DAT_049c9ab8);
      return;
    }
  }
  FUN_0235b3fc(&lStack_d0,&lStack_118,*(undefined8 *)PTR_DAT_049c4698);
  if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (lStack_118,&lStack_118,*(undefined8 *)PTR_DAT_049c9ac0);
  if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lStack_118 + 0x90) = *(undefined8 *)(param_1 + 6);
  thunk_FUN_021f190c();
  cVar7 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar7 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar14 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_02629888;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b56d0,2);
LAB_02629888:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  return;
}

