/* IL2CPP: CoinRushSubMonitor.<>c__DisplayClass12_0$$<CreateMilestoneElement>b__0
void CoinRushSubMonitor___c__DisplayClass12_0___CreateMilestoneElement_b__0 (CoinRushSubMonitor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor.<>c__DisplayClass12_0$$<CreateMilestoneElement>b__0
   void CoinRushSubMonitor___c__DisplayClass12_0___CreateMilestoneElement_b__0
   (CoinRushSubMonitor___c__DisplayClass12_0_o* __this, const MethodInfo* method); */

void CoinRushSubMonitor___c__DisplayClass12_0___CreateMilestoneElement_b__0_24713ac
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
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
  
  lVar10 = *(long *)(param_4 + 0x10);
                    /* try { // try from 025713b0 to 026713b3 has its CatchHandler @ 025714d0 */
  if (lVar10 == 0) {
                    /* try { // try from 025713c0 to 026713c3 has its CatchHandler @ 025714c8 */
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar11 = *(long *)(param_4 + 0x20);
                    /* try { // try from 025713b8 to 026713bb has its CatchHandler @ 025714cc */
  if ((bRam0000000004f4b9a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c55c0);
    bRam0000000004f4b9a5 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x40);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (lVar8 == 0) {
LAB_0257129c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_b8 = *(undefined8 *)(lVar8 + 0x38);
  uStack_c0 = *(undefined8 *)(lVar8 + 0x30);
  uStack_a8 = *(undefined8 *)(lVar8 + 0x48);
  uStack_b0 = *(undefined8 *)(lVar8 + 0x40);
  uVar6 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_c0,0);
  if ((uVar6 & 1) == 0) {
    CoinRushSubMonitor__OnBuyClicked_24712a0(lVar10);
  }
  else {
    if (lVar11 == 0) goto LAB_0257129c;
    uStack_98 = *(undefined8 *)(lVar11 + 0x48);
    uStack_a0 = *(undefined8 *)(lVar11 + 0x40);
    uStack_88 = *(undefined8 *)(lVar11 + 0x58);
    uStack_90 = *(undefined8 *)(lVar11 + 0x50);
    uVar6 = CloudPrefsBool__get_Value_24eb0d0(&uStack_a0,0);
    if ((uVar6 & 1) != 0) {
      uStack_98 = *(undefined8 *)(lVar11 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar11 + 0x20);
      uStack_88 = *(undefined8 *)(lVar11 + 0x38);
      uStack_90 = *(undefined8 *)(lVar11 + 0x30);
      uVar6 = CloudPrefsBool__get_Value_24eb0d0(&uStack_a0,0);
      if ((uVar6 & 1) == 0) {
        uStack_98 = *(undefined8 *)(lVar11 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar11 + 0x20);
        uStack_88 = *(undefined8 *)(lVar11 + 0x38);
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
        uStack_90 = uVar7;
        CloudPrefsBool__Set_24eb1bc(&uStack_a0,1,0);
        uVar13 = (undefined4)uVar7;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (uVar1,0x240695d9,0);
        plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar12 = *(undefined4 *)(plVar9[1] + 0xfc);
        uVar7 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar9 + 0x80));
        func_0x04608620(&uStack_80,uVar7,uVar12);
        uVar12 = (undefined4)uStack_80;
        uStack_c4 = (undefined4)uStack_80;
        uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_c4);
        uVar7 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c55c0,uVar7,0);
        if (*(long *)(lVar10 + 0x58) != 0) {
          iVar2 = *(int *)(lVar11 + 0x1c);
          dVar14 = (double)iVar2;
          FulfillModule__FulfillFreePayout_254358c(*(long *)(lVar10 + 0x58),1,dVar14,uVar7,0);
          puVar3 = PTR_DAT_049b3c20;
          lVar11 = *(long *)(lVar10 + 0x60);
          uStack_d0 = 0;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
          System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (&uStack_d0,&uStack_80,*(undefined8 *)PTR_DAT_049b3c20);
          if (lVar11 != 0) {
            uStack_108 = uStack_d0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar11,7,&uStack_108,0);
            lVar11 = *(long *)(lVar10 + 0x60);
            uStack_110 = 0;
            uStack_80._0_4_ = uVar12;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_110,&uStack_80,*(undefined8 *)puVar3);
            uVar5 = uStack_110;
            uStack_118 = 0;
            uStack_80._0_4_ = 1;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_118,&uStack_80,*(undefined8 *)PTR_DAT_049c2ce8);
            uVar4 = uStack_118;
            uStack_120 = 0;
            uStack_80._0_4_ = 0;
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_120,&uStack_80,*(undefined8 *)PTR_DAT_049c2ce0);
            uVar7 = uStack_120;
            uStack_128 = 0;
            uStack_80 = CONCAT44(uStack_80._4_4_,iVar2);
            System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                      (&uStack_128,&uStack_80,*(undefined8 *)puVar3);
            if (lVar11 != 0) {
              uStack_160 = uVar5;
              uStack_158 = 0;
              uStack_150 = 0;
              uStack_148 = uVar4;
              uStack_140 = uVar7;
              uStack_138 = uStack_128;
              uStack_130 = 0;
              AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar11,7,&uStack_160,0);
              lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                                 (uVar1,0x78d4e5eb,0);
              if (((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) &&
                 (lVar11 = TMPro_TMP_Text__get_rectTransform_3b0ca7c(*(long *)(lVar11 + 0x38),0),
                 lVar11 != 0)) {
                uVar12 = UnityEngine_Transform__get_position_3c2d540(lVar11,0);
                lVar11 = *(long *)(lVar10 + 0x68);
                lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5380);
                System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                          (lVar10,*(undefined8 *)PTR_DAT_049b5388);
                if (lVar10 != 0) {
                  uStack_80 = 1;
                  dStack_78 = dVar14;
                  FUN_02333498(lVar10,&uStack_80,*(undefined8 *)PTR_DAT_049b5390);
                  if (lVar11 != 0) {
                    FulfillItemsMonitor__Show_243ea38(uVar12,uVar13,param_3,lVar11,lVar10,0);
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

