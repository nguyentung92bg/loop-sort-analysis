/* IL2CPP: AreaOffer$$TourArea
System_Nullable_AreaType__o AreaOffer__TourArea (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$TourArea
   System_Nullable_AreaType__o AreaOffer__TourArea (AreaOffer_o* __this, const MethodInfo* method);
    */

undefined8 AreaOffer__TourArea_250a2d0(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  if ((bRam0000000004f4bdbd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c9038);
    FUN_021f03f8(PTR_DAT_049c9040);
    FUN_021f03f8(PTR_DAT_049c8fe8);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bdbd = 1;
  }
  if (param_1[2] != 0) {
    lVar12 = *(long *)(param_1[2] + 0x88);
    uVar8 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if (lVar12 != 0) {
      uStack_44 = uVar8;
      uVar10 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                         (lVar12,&uStack_44,*(undefined8 *)PTR_DAT_049c2f60);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (param_1[2] != 0) {
        lVar12 = *(long *)(param_1[2] + 0x88);
        uVar8 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
                    /* try { // try from 0260a3dc to 0270a43f has its CatchHandler @ 0260b1b4 */
        if ((lVar12 != 0) &&
           (uStack_44 = uVar8,
           lVar12 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                              (lVar12,&uStack_44,*(undefined8 *)PTR_DAT_049c2c68), lVar12 != 0)) {
          uVar10 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(lVar12,0);
          if ((uVar10 & 1) != 0) {
            plVar13 = param_1 + 0xc;
            lVar11 = *plVar13;
            if (lVar11 == 0) {
              lVar11 = AreaOffer__BuildTourAreas_250a604(param_1);
              param_1[0xc] = lVar11;
              thunk_FUN_021f190c(plVar13,lVar11);
              lVar11 = param_1[0xc];
              if (lVar11 == 0) goto LAB_0260a600;
            }
            if (*(int *)(lVar11 + 0x18) != 0) {
              if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                FUN_021f0574();
              }
              auVar14 = TimeProvider__get_UtcNow_24f95ec(0);
                    /* try { // try from 0260a44c to 0270a453 has its CatchHandler @ 0260b070 */
              auVar14 = LiveOpsSheet_Row__GetJoinStartTime_25636b4
                                  (lVar12,auVar14._0_8_,auVar14._8_8_,0);
              puVar6 = PTR_DAT_049b5050;
                    /* try { // try from 0260a468 to 0270a473 has its CatchHandler @ 0260b06c */
              lVar11 = param_1[0xd];
              lVar1 = param_1[0xe];
              if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                    /* try { // try from 0260a488 to 0270a493 has its CatchHandler @ 0260b068 */
                FUN_021f0574();
              }
              uVar10 = System_DateTimeOffset__op_Inequality_30e46dc
                                 (auVar14._0_8_,auVar14._8_8_,lVar11,lVar1,0);
              puVar7 = PTR_DAT_049c5440;
              if ((uVar10 & 1) != 0) {
                    /* try { // try from 0260a4a8 to 0270a4b3 has its CatchHandler @ 0260b064 */
                *(undefined1 (*) [16])(param_1 + 0xd) = auVar14;
                *(undefined4 *)(param_1 + 0xf) = 0;
                lVar11 = *(long *)puVar7;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_021f0574();
                    /* try { // try from 0260a4c8 to 0270a4d3 has its CatchHandler @ 0260b060 */
                  lVar11 = *(long *)puVar7;
                }
                auVar15 = *(undefined1 (*) [16])(*(long *)(lVar11 + 0xb8) + 8);
                while( true ) {
                  auVar15 = LiveOpsSheet_Row__GetNextJoinStartTime_2563b6c
                                      (lVar12,auVar15._0_8_,auVar15._8_8_,0);
                    /* try { // try from 0260a4f8 to 0270a4fb has its CatchHandler @ 0260afd4 */
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar10 = System_DateTimeOffset__op_LessThanOrEqual_30e4824
                                     (auVar15._0_8_,auVar15._8_8_,auVar14._0_8_,auVar14._8_8_,0);
                  if ((uVar10 & 1) == 0) break;
                    /* try { // try from 0260a524 to 0270a527 has its CatchHandler @ 0260afc8 */
                  *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
                }
              }
                    /* try { // try from 0260a550 to 0270a557 has its CatchHandler @ 0260b05c */
                    /* try { // try from 0260a560 to 0270a567 has its CatchHandler @ 0260afbc */
              iVar9 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
              puVar6 = PTR_DAT_049c5440;
              if (param_1[0xc] != 0) {
                iVar2 = *(int *)(param_1[0xc] + 0x18);
                lVar12 = *(long *)PTR_DAT_049c5440;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar12 = *(long *)puVar6;
                }
                    /* try { // try from 0260a598 to 0270a59b has its CatchHandler @ 0260af70 */
                if ((**(long **)(lVar12 + 0xb8) != 0) && (lVar11 = *plVar13, lVar11 != 0)) {
                  iVar3 = *(int *)(**(long **)(lVar12 + 0xb8) + 0x18);
                  iVar4 = *(int *)(lVar11 + 0x18);
                    /* try { // try from 0260a5b4 to 0270a5bb has its CatchHandler @ 0260afac */
                  iVar5 = 0;
                  if (iVar3 != 0) {
                    iVar5 = (iVar2 * (iVar9 + -0x1e)) / iVar3;
                  }
                  iVar5 = iVar5 + (int)param_1[0xf];
                  iVar9 = 0;
                  if (iVar4 != 0) {
                    iVar9 = iVar5 / iVar4;
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (lVar11,iVar5 - iVar9 * iVar4,&uStack_44,*(undefined8 *)PTR_DAT_049c9040
                            );
                    /* try { // try from 0260a5e0 to 0270a5e3 has its CatchHandler @ 0260af58 */
                  uStack_58 = 0;
                  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                            (&uStack_58,&uStack_44,*(undefined8 *)PTR_DAT_049c8fe8);
                  return uStack_58;
                    /* try { // try from 0260a5fc to 0270a603 has its CatchHandler @ 0260af7c */
                }
              }
              goto LAB_0260a600;
            }
          }
          return 0;
        }
      }
    }
  }
LAB_0260a600:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

