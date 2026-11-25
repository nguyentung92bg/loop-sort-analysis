/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass29_0$$<CreateMissionElement>b__0
void WeeklyMissionsSubMonitor___c__DisplayClass29_0___CreateMissionElement_b__0 (WeeklyMissionsSubMonitor___c__DisplayClass29_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass29_0$$<CreateMissionElement>b__0
   void WeeklyMissionsSubMonitor___c__DisplayClass29_0___CreateMissionElement_b__0
   (WeeklyMissionsSubMonitor___c__DisplayClass29_0_o* __this, const MethodInfo* method); */

void WeeklyMissionsSubMonitor___c__DisplayClass29_0___CreateMissionElement_b__0_248de54
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  ulong auStack_120 [4];
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  int iStack_64;
  
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  if ((bRam0000000004f4ba56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c5de8);
    bRam0000000004f4ba56 = 1;
  }
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar3 != 0) {
    uStack_88 = *(undefined8 *)(lVar3 + 0x40);
    uStack_90 = *(undefined8 *)(lVar3 + 0x38);
    uStack_78 = *(undefined8 *)(lVar3 + 0x50);
    uStack_80 = *(undefined8 *)(lVar3 + 0x48);
    CloudPrefsBool__Set_24eb1bc(&uStack_90,1,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar2,0x240695d9,0);
    puVar7 = PTR_DAT_049b3c20;
    if (*(long *)(lVar3 + 0x30) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(lVar3 + 0x30),&uStack_c8,*(undefined8 *)PTR_DAT_049b6370);
      puVar6 = PTR_DAT_049b3bd0;
      puStack_a8 = puStack_c0;
      uStack_b0 = uStack_c8;
      uStack_a0 = uStack_b8;
      uStack_c8 = 0;
      puStack_c0 = &uStack_b0;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_b0,*(undefined8 *)PTR_DAT_049b6348), (uVar9 & 1) != 0) {
        lVar15 = *(long *)PTR_DAT_049b6350;
        lVar10 = *(long *)(lVar15 + 0x20);
        uVar5 = *(ushort *)(lVar10 + 0x135);
        lVar11 = lVar10;
        if ((uVar5 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar10 = *(long *)(lVar15 + 0x20);
          uVar5 = *(ushort *)(lVar10 + 0x135);
        }
        uVar4 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar5 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&uStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_70,uVar12,uVar4);
        uVar9 = uStack_70;
        iVar17 = (int)uStack_70;
        if (iVar17 == 0x1e) {
          if (*(long *)(lVar14 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          WeeklyMissions__AddBlock_252cb98(*(long *)(lVar14 + 0x58),uStack_70 >> 0x20,0);
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(lVar14 + 0xc0));
        uVar12 = thunk_FUN_0222c66c(*(undefined8 *)(puVar6 + 0x48),&uStack_70);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar1);
        uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(puVar6 + 0x48),&uStack_d0);
        uVar12 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c5de8,uVar12,uVar13,0);
        iVar16 = (int)(uVar9 >> 0x20);
        if (iVar17 != 0x1e) {
          if (*(long *)(lVar14 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FulfillModule__FulfillFreePayout_254358c
                    (*(long *)(lVar14 + 0x60),uVar9 & 0xffffffff,(double)iVar16,uVar12,0);
        }
        lVar11 = *(long *)(lVar14 + 0x68);
        uStack_70 = 0;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar1);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_70,&uStack_d0,*(undefined8 *)puVar7);
        uVar9 = uStack_70;
        uStack_d0 = 0;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar14 + 0xc0));
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_d0,&uStack_d8,*(undefined8 *)puVar7);
        uVar8 = uStack_d0;
        uStack_d8 = 0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar17);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_d8,&uStack_e0,*(undefined8 *)PTR_DAT_049c2ce8);
        uVar13 = uStack_d8;
        uStack_e0 = 0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_e0,&uStack_e8,*(undefined8 *)PTR_DAT_049c2ce0);
        uVar12 = uStack_e0;
        uStack_e8 = 0;
        iStack_64 = iVar16;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_e8,&iStack_64,*(undefined8 *)puVar7);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_120[1] = 0;
        auStack_120[2] = 0;
        auStack_120[0] = uVar9;
        auStack_120[3] = uVar13;
        uStack_100 = uVar12;
        uStack_f8 = uStack_e8;
        uStack_f0 = uVar8;
        AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar11,9,auStack_120,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_b0,*(undefined8 *)PTR_DAT_049b6330);
      lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                         (uVar2,0xbcdc2f95,0);
      if (((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) &&
         (lVar11 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638
                             (*(long *)(lVar11 + 0x20),0), lVar11 != 0)) {
        UnityEngine_Transform__get_position_3c2d540(lVar11,0);
        if (*(long *)(lVar14 + 0x70) != 0) {
          FulfillItemsMonitor__Show_243ebf8
                    (*(long *)(lVar14 + 0x70),*(undefined8 *)(lVar3 + 0x30),0);
          WeeklyMissionsSubMonitor__UpdateProgressView_248c388(lVar14,1);
          WeeklyMissionsSubMonitor__HandleGiftBox_248da74(lVar14);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

