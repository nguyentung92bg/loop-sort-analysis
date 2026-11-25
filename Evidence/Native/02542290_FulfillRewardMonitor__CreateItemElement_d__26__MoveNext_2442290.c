/* IL2CPP: FulfillRewardMonitor.<CreateItemElement>d__26$$MoveNext
void FulfillRewardMonitor__CreateItemElement_d__26__MoveNext (FulfillRewardMonitor__CreateItemElement_d__26_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillRewardMonitor.<CreateItemElement>d__26$$MoveNext
   void FulfillRewardMonitor__CreateItemElement_d__26__MoveNext
   (FulfillRewardMonitor__CreateItemElement_d__26_o __this, const MethodInfo* method); */

void FulfillRewardMonitor__CreateItemElement_d__26__MoveNext_2442290(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_74;
  
  if ((bRam0000000004f4b851 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4138);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c4140);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c4148);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b851 = 1;
  }
  puVar4 = PTR_DAT_049c1690;
  puVar3 = PTR_DAT_049bbf90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  lVar13 = *(long *)(param_1 + 8);
  uStack_b8 = 0;
  if (*param_1 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar6 = param_1[4];
    lVar14 = *(long *)(lVar13 + 0xf8);
    auStack_110._8_8_ = *(undefined8 *)(param_1 + 6);
    auStack_110._0_8_ = *(undefined8 *)(param_1 + 4);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
              (&uStack_d8,*(undefined8 *)(param_1 + 10),auStack_110,*(undefined8 *)PTR_DAT_049c4148)
    ;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_e8 = uStack_d0;
    uStack_f0 = uStack_d8;
    uStack_e0 = uStack_c8;
    FUN_02333498(lVar14,&uStack_f0,*(undefined8 *)PTR_DAT_049c4140);
    if (*(long *)(lVar13 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = *(long *)(*(long *)(lVar13 + 0xa0) + 0x20);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iStack_74 = iVar6;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (lVar14,&iStack_74,auStack_110,*(undefined8 *)PTR_DAT_049c2d00);
    uStack_88 = auStack_110._8_8_;
    uStack_90 = auStack_110._0_8_;
    uStack_80 = uStack_100;
    uStack_128 = auStack_110._8_8_;
    uStack_130 = auStack_110._0_8_;
    uStack_120 = uStack_100;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (*(undefined8 *)(param_1 + 10),0xbcdc2f95,&uStack_130,0);
    if (*(long *)(lVar13 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar1 = -0x80000000;
    if (*(double *)(param_1 + 6) != INFINITY) {
      iVar1 = (int)*(double *)(param_1 + 6);
    }
    uVar7 = Shop__FormatItemQuantity_257016c(*(long *)(lVar13 + 0x98),iVar6,iVar1,0);
    lVar14 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                       (*(undefined8 *)(param_1 + 10),0x9927ed9b,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    TMPro_TMP_Text__SetText_3b0f78c(lVar14,uVar7,0);
    lVar14 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar14,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
               *(undefined4 *)(lVar9 + 0x14),lVar14,0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 10),0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc(*puVar10,puVar10[1],puVar10[2],lVar14,0);
    iVar6 = param_1[0xc];
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = System_TimeSpan__FromSeconds_311711c((double)((float)iVar6 * _UNK_013aa810),0);
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_110 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar7,1,8,0,0,0);
    thunk_FUN_021f190c(auStack_110,0);
    uVar5 = auStack_110._8_8_;
    uVar7 = auStack_110._0_8_;
    auStack_a0 = auStack_110;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar7 != (long *)0x0) {
      lVar14 = *(long *)uVar7;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02542688;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar7,*(long *)PTR_DAT_049b54e0,0);
LAB_02542688:
      iVar6 = (*(code *)*puVar8)(uVar7,uVar5 & 0xffffffff,puVar8[1]);
      if (iVar6 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 0xe,0);
        FUN_0235c420(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c4138);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar7 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar15 = auStack_a0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02542720;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02542720:
    (*(code *)*puVar8)(uVar7,uVar15,puVar8[1]);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                     (lVar13,0x8204c370,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = StatefulUI_Runtime_Core_ContainerView__AddInstance_3346aac(lVar14,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = UnityEngine_GameObject__get_transform_3c1ca74(lVar14,0);
  if (*(long *)(param_1 + 10) != 0) {
    lVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 10),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(lVar9,0);
    if (lVar14 != 0) {
      UnityEngine_Transform__set_position_3c2d61c(lVar14,0);
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar4;
      }
      puVar10 = *(undefined4 **)(lVar14 + 0xb8);
      uVar16 = *puVar10;
      uVar17 = puVar10[1];
      uVar18 = puVar10[2];
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
      auStack_b0 = LitMotion_LMotion__Create_2eaa1b4
                             (uVar16,uVar17,uVar18,*(undefined4 *)(lVar14 + 0xc),
                              *(undefined4 *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x14),
                              0x3f000000,0);
      puVar3 = PTR_DAT_049c2288;
      lVar14 = *(long *)PTR_DAT_049c2288;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar3;
      }
      auVar19 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c2bc0);
      auStack_b0 = auVar19;
      auVar19 = FUN_024f4e50(auStack_b0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
      if (*(long *)(param_1 + 10) != 0) {
        uVar7 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 10),0);
        auVar19 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                            (auVar19._0_8_,auVar19._8_8_,uVar7,*(undefined8 *)PTR_DAT_049c1670);
        LitMotion_MotionHandleExtensions__AddTo_2eacb44
                  (auVar19._0_8_,auVar19._8_8_ & 0xffffffff,*(undefined8 *)(lVar13 + 0xf0),0);
        *param_1 = -2;
        FUN_0235afc8(param_1 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

