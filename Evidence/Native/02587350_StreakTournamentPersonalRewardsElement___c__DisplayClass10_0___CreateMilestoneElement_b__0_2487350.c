/* IL2CPP: StreakTournamentPersonalRewardsElement.<>c__DisplayClass10_0$$<CreateMilestoneElement>b__0
void StreakTournamentPersonalRewardsElement___c__DisplayClass10_0___CreateMilestoneElement_b__0 (StreakTournamentPersonalRewardsElement___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   StreakTournamentPersonalRewardsElement.<>c__DisplayClass10_0$$<CreateMilestoneElement>b__0
   void StreakTournamentPersonalRewardsElement___c__DisplayClass10_0___CreateMilestoneElement_b__0
   (StreakTournamentPersonalRewardsElement___c__DisplayClass10_0_o* __this, const MethodInfo*
   method); */

void StreakTournamentPersonalRewardsElement___c__DisplayClass10_0___CreateMilestoneElement_b__0_2487350
               (long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_44;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x20);
  if ((bRam0000000004f4ba31 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4ba31 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                    (*(undefined8 *)(lVar12 + 0x28),0x803eb6ff,0);
  puVar3 = PTR_DAT_049b3b98;
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar6,0);
    puVar14 = (undefined8 *)(lVar12 + 0x38);
    uVar15 = *puVar14;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar15,uVar11,0);
    if ((uVar7 & 1) != 0) {
      *puVar14 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)puVar14 >> 0xc & 0x3f),
                     ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    *puVar14 = uVar11;
    thunk_FUN_021f190c(puVar14,uVar11);
    lVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
    if (lVar6 != 0) {
      lVar8 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (uVar11,0x78d4e5eb,0);
      if (((lVar9 != 0) &&
          (lVar9 = UnityEngine_Component__get_transform_3c18724(lVar9,0), lVar9 != 0)) &&
         (UnityEngine_Transform__get_position_3c2d540(lVar9,0), lVar8 != 0)) {
        UnityEngine_Transform__set_position_3c2d61c(lVar8,0);
        lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                          (lVar6,0xbcdc2f95,0);
        if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) &&
           (StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar8,0), lVar10 != 0)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (lVar10,&uStack_98,*(undefined8 *)PTR_DAT_049b6370);
          puVar5 = PTR_DAT_049c2d00;
          puVar4 = PTR_DAT_049b6350;
          puVar3 = PTR_DAT_049b6348;
          uStack_68 = uStack_90;
          uStack_70 = uStack_98;
          puStack_a0 = &uStack_70;
          uStack_60 = uStack_88;
          uStack_a8 = 0;
          while( true ) {
            uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_70,*(undefined8 *)puVar3);
            if ((uVar7 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_70,*(undefined8 *)PTR_DAT_049b6330);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
              auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                                     (*(float *)(lVar10 + 0xc) * 0.5,*(float *)(lVar10 + 0x10) * 0.5
                                      ,*(float *)(lVar10 + 0x14) * 0.5,0);
              auVar16 = FUN_024f4e50(auStack_80,0x1a,*(undefined8 *)PTR_DAT_049c1680);
              uVar11 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
              auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar16._0_8_,auVar16._8_8_,uVar11,
                                   *(undefined8 *)PTR_DAT_049c1670);
              LitMotion_MotionHandleExtensions__AddTo_2eace68
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0x30),0);
              return;
            }
            lVar13 = *(long *)puVar4;
            lVar9 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
            lVar10 = lVar9;
            if ((uVar2 & 1) == 0) {
              lVar10 = FUN_02229718();
              lVar9 = *(long *)(lVar13 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_02229718();
            }
            uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                        *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_98,uVar11,uVar1);
            uVar11 = uStack_98;
            uVar15 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar8,0);
            if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar10 = *(long *)(*(long *)(lVar12 + 0x20) + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_44 = (undefined4)uVar11;
            GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                      (lVar10,&uStack_44,&uStack_98,*(undefined8 *)puVar5);
            uStack_b8 = uStack_90;
            uStack_c0 = uStack_98;
            uStack_b0 = uStack_88;
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                      (uVar15,0x1a9a2c8b,&uStack_c0,0);
            if (*(long *)(lVar12 + 0x20) == 0) break;
            uVar11 = Shop__FormatItemQuantity_2570348(*(long *)(lVar12 + 0x20),uVar11,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (uVar15,0x9927ed9b,uVar11,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

