/* IL2CPP: BattlePassSubMonitor$$OnProgressClaimClicked
void BattlePassSubMonitor__OnProgressClaimClicked (BattlePassSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, CloudPrefsBool_o claim, System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, int32_t milestoneLevel, bool premium, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$OnProgressClaimClicked
   void BattlePassSubMonitor__OnProgressClaimClicked (BattlePassSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, CloudPrefsBool_o claim,
   System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, int32_t milestoneLevel,
   bool premium, const MethodInfo* method); */

void BattlePassSubMonitor__OnProgressClaimClicked_246e978
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,long param_7,undefined4 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  int iStack_94;
  
  puVar3 = PTR_DAT_049c5520;
  puVar2 = PTR_DAT_049b3c20;
  if ((bRam0000000004f4b995 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5528);
    FUN_021f03f8(PTR_DAT_049c5530);
    FUN_021f03f8(PTR_DAT_049c5538);
    FUN_021f03f8(PTR_DAT_049c5540);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c5520);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c5548);
    bRam0000000004f4b995 = 1;
  }
  uStack_c0 = 0;
  puStack_b8 = (ulong *)0x0;
  uStack_b0 = 0;
  CloudPrefsBool__Set_24eb1bc(param_6,1,0);
  uStack_110 = 0;
  uStack_a0._0_4_ = param_8;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_110,&uStack_a0,*(undefined8 *)puVar2);
  uVar11 = uStack_110;
  uStack_110 = 0;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,param_9) & 0xffffffff00000001;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_110,&uStack_a0,*(undefined8 *)puVar3);
  uVar8 = uStack_110;
  if (*(long *)(param_4 + 0x50) != 0) {
    uVar7 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(param_4 + 0x50) + 0x68,0);
    uStack_a0 = 0;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar7) & 0xffffffff00000001;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_a0,&uStack_110,*(undefined8 *)puVar3);
    if (*(long *)(param_4 + 0x78) != 0) {
      uStack_f8 = uVar11;
      uStack_f0 = 0;
      uStack_e8 = uVar8;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = uStack_a0;
      AnalyticsModule__LiveOpsMilestoneCompleted_2540658(*(long *)(param_4 + 0x78),10,&uStack_f8,0);
      if (param_7 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (param_7,&uStack_110,*(undefined8 *)PTR_DAT_049c5540);
        uStack_c0 = uStack_110;
        uStack_110 = 0;
        puStack_b8 = puStack_108;
        uStack_b0 = uStack_100;
        puStack_108 = &uStack_c0;
        while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&uStack_c0,*(undefined8 *)PTR_DAT_049c5530), (uVar8 & 1) != 0) {
          lVar12 = *(long *)PTR_DAT_049c5538;
          lVar9 = *(long *)(lVar12 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x135);
          lVar10 = lVar9;
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_02229718();
            lVar9 = *(long *)(lVar12 + 0x20);
            uVar1 = *(ushort *)(lVar9 + 0x135);
          }
          uVar7 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar11 = thunk_FUN_0224e54c(&uStack_c0,
                                      *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_a0,uVar11,uVar7);
          uVar8 = uStack_a0;
          uStack_120._0_4_ = param_8;
          uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_120);
          uVar11 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5548,uVar11,0);
          if (*(long *)(param_4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          iVar13 = (int)(uVar8 >> 0x20);
          FulfillModule__FulfillFreePayout_254358c
                    (*(long *)(param_4 + 0x68),uVar8 & 0xffffffff,(double)iVar13,uVar11,0);
          lVar10 = *(long *)(param_4 + 0x78);
          uStack_a0 = 0;
          uStack_118._0_4_ = param_8;
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_a0,&uStack_118,*(undefined8 *)puVar2);
          uVar5 = uStack_a0;
          uStack_a0 = 0;
          uStack_118 = CONCAT44(uStack_118._4_4_,param_9) & 0xffffffff00000001;
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_a0,&uStack_118,*(undefined8 *)puVar3);
          uVar6 = uStack_a0;
          uStack_118 = 0;
          uStack_120 = CONCAT44(uStack_120._4_4_,(int)uVar8);
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_118,&uStack_120,*(undefined8 *)PTR_DAT_049c2ce8);
          uVar4 = uStack_118;
          uStack_120 = 0;
          uStack_128 = uStack_128 & 0xffffffff00000000;
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_120,&uStack_128,*(undefined8 *)PTR_DAT_049c2ce0);
          uVar11 = uStack_120;
          uStack_128 = 0;
          iStack_94 = iVar13;
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_128,&iStack_94,*(undefined8 *)puVar2);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uStack_160 = uVar5;
          uStack_158 = 0;
          uStack_150 = uVar6;
          uStack_148 = uVar4;
          uStack_140 = uVar11;
          uStack_138 = uStack_128;
          uStack_130 = 0;
          AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar10,10,&uStack_160,0);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_c0,*(undefined8 *)PTR_DAT_049c5528);
        BattlePassSubMonitor__RefreshProgressElements_246e670(param_4);
        lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                           (param_5,0xbcdc2f95,0);
        if ((lVar10 != 0) &&
           (lVar10 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar10,0), lVar10 != 0)) {
          fVar14 = (float)UnityEngine_Transform__get_position_3c2d540(lVar10,0);
          if (cRam0000000004f4a55e == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          lVar9 = *(long *)(param_4 + 0x80);
          lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          fVar15 = *(float *)(lVar10 + 0x18);
          fVar16 = *(float *)(lVar10 + 0x1c);
          fVar17 = *(float *)(lVar10 + 0x20);
          uVar11 = BattlePassSubMonitor__ToPayouts_246ee78(param_7);
          if (lVar9 != 0) {
            FulfillItemsMonitor__Show_243ea38
                      (fVar14 + fVar15 * 1.5,param_2 + fVar16 * 1.5,param_3 + fVar17 * 1.5,lVar9,
                       uVar11,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

