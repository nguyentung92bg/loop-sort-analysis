/* IL2CPP: CoinRushSubMonitor$$OnMilestoneClaimClicked
void CoinRushSubMonitor__OnMilestoneClaimClicked (CoinRushSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, CoinRushSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$OnMilestoneClaimClicked
   void CoinRushSubMonitor__OnMilestoneClaimClicked (CoinRushSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, CoinRushSheet_Row_o* data, const MethodInfo*
   method); */

void CoinRushSubMonitor__OnMilestoneClaimClicked_2470efc
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  
                    /* try { // try from 02570f2c to 02670f33 has its CatchHandler @ 025714f4 */
  if ((bRam0000000004f4b9a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b5388);
                    /* try { // try from 02570f4c to 02670f97 has its CatchHandler @ 025714f8 */
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c55c0);
                    /* try { // try from 02570f98 to 0267138f has its CatchHandler @ 02570b6c */
    bRam0000000004f4b9a5 = 1;
  }
  lVar7 = *(long *)(param_4 + 0x40);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (lVar7 == 0) {
LAB_0257129c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_b8 = *(undefined8 *)(lVar7 + 0x38);
  uStack_c0 = *(undefined8 *)(lVar7 + 0x30);
  uStack_a8 = *(undefined8 *)(lVar7 + 0x48);
  uStack_b0 = *(undefined8 *)(lVar7 + 0x40);
  uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_c0,0);
  if ((uVar5 & 1) == 0) {
    CoinRushSubMonitor__OnBuyClicked_24712a0(param_4);
  }
  else {
    if (param_6 == 0) goto LAB_0257129c;
    uStack_98 = *(undefined8 *)(param_6 + 0x48);
    uStack_a0 = *(undefined8 *)(param_6 + 0x40);
    uStack_88 = *(undefined8 *)(param_6 + 0x58);
    uStack_90 = *(undefined8 *)(param_6 + 0x50);
    uVar5 = CloudPrefsBool__get_Value_24eb0d0(&uStack_a0,0);
    if ((uVar5 & 1) != 0) {
      uStack_98 = *(undefined8 *)(param_6 + 0x28);
      uStack_a0 = *(undefined8 *)(param_6 + 0x20);
      uStack_88 = *(undefined8 *)(param_6 + 0x38);
      uStack_90 = *(undefined8 *)(param_6 + 0x30);
      uVar5 = CloudPrefsBool__get_Value_24eb0d0(&uStack_a0,0);
      if ((uVar5 & 1) == 0) {
        uStack_98 = *(undefined8 *)(param_6 + 0x28);
        uStack_a0 = *(undefined8 *)(param_6 + 0x20);
        uStack_88 = *(undefined8 *)(param_6 + 0x38);
        uVar6 = *(undefined8 *)(param_6 + 0x30);
        uStack_90 = uVar6;
        CloudPrefsBool__Set_24eb1bc(&uStack_a0,1,0);
        uVar11 = (undefined4)uVar6;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_5,0x240695d9,0);
        plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar10 = *(undefined4 *)(plVar8[1] + 0xfc);
        uVar6 = thunk_FUN_0224e54c(param_6,*(undefined8 *)(*plVar8 + 0x80));
        func_0x04608620(&uStack_80,uVar6,uVar10);
        uVar10 = (undefined4)uStack_80;
        uStack_c4 = (undefined4)uStack_80;
        uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_c4);
        uVar6 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c55c0,uVar6,0);
        if (*(long *)(param_4 + 0x58) != 0) {
          iVar1 = *(int *)(param_6 + 0x1c);
          dVar12 = (double)iVar1;
          FulfillModule__FulfillFreePayout_254358c(*(long *)(param_4 + 0x58),1,dVar12,uVar6,0);
          puVar2 = PTR_DAT_049b3c20;
          lVar7 = *(long *)(param_4 + 0x60);
          uStack_d0 = 0;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_d0,&uStack_80,*(undefined8 *)PTR_DAT_049b3c20);
          if (lVar7 != 0) {
            uStack_108 = uStack_d0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar7,7,&uStack_108,0);
            lVar7 = *(long *)(param_4 + 0x60);
            uStack_110 = 0;
            uStack_80._0_4_ = uVar10;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_110,&uStack_80,*(undefined8 *)puVar2);
            uVar4 = uStack_110;
            uStack_118 = 0;
            uStack_80._0_4_ = 1;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_118,&uStack_80,*(undefined8 *)PTR_DAT_049c2ce8);
            uVar3 = uStack_118;
            uStack_120 = 0;
            uStack_80._0_4_ = 0;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_120,&uStack_80,*(undefined8 *)PTR_DAT_049c2ce0);
            uVar6 = uStack_120;
            uStack_128 = 0;
            uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_128,&uStack_80,*(undefined8 *)puVar2);
            if (lVar7 != 0) {
              uStack_160 = uVar4;
              uStack_158 = 0;
              uStack_150 = 0;
              uStack_148 = uVar3;
              uStack_140 = uVar6;
              uStack_138 = uStack_128;
              uStack_130 = 0;
              AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar7,7,&uStack_160,0);
              lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                                (param_5,0x78d4e5eb,0);
              if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
                 (lVar7 = TMPro_TMP_Text__get_rectTransform_3b0ca7c(*(long *)(lVar7 + 0x38),0),
                 lVar7 != 0)) {
                uVar10 = UnityEngine_Transform__get_position_3c2d540(lVar7,0);
                lVar9 = *(long *)(param_4 + 0x68);
                lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5380);
                System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                          (lVar7,*(undefined8 *)PTR_DAT_049b5388);
                if (lVar7 != 0) {
                  uStack_80 = 1;
                  dStack_78 = dVar12;
                  FUN_02333498(lVar7,&uStack_80,*(undefined8 *)PTR_DAT_049b5390);
                  if (lVar9 != 0) {
                    FulfillItemsMonitor__Show_243ea38(uVar10,uVar11,param_3,lVar9,lVar7,0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LAB_0257129c;
      }
    }
  }
  return;
}

