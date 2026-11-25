/* IL2CPP: AdsModule$$IsPlacementEligibleForInterstitial
bool AdsModule__IsPlacementEligibleForInterstitial (AdsModule_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$IsPlacementEligibleForInterstitial
   bool AdsModule__IsPlacementEligibleForInterstitial (AdsModule_o* __this, System_String_o*
   placement, const MethodInfo* method); */

undefined8 AdsModule__IsPlacementEligibleForInterstitial_253da00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  double dVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049ca448;
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bf9b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049ca450);
    FUN_021f03f8(PTR_DAT_049c5aa8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049ca448);
    FUN_021f03f8(PTR_DAT_049c5f18);
    FUN_021f03f8(PTR_DAT_049c6058);
    bRam0000000004f4bf9b = 1;
  }
  puVar2 = PTR_DAT_049c6058;
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_38 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar7 = System_String__Concat_2f72b28(*(undefined8 *)puVar3,param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  PlayerPrefsInt___ctor_3f0d944(&uStack_50,uVar7,0,0);
  iVar4 = PlayerPrefsInt__op_Implicit_3f0dc60(uStack_50,uStack_48,0);
  iVar4 = iVar4 + 1;
  PlayerPrefsInt__Set_3f0dba4(&uStack_50,iVar4,0);
  uVar8 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)puVar2,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_0263dd8c;
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x10) == '\0') {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = TimeProvider__get_UtcNow_24f95ec(0);
    puVar1 = PTR_DAT_049b5310;
    lVar9 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar9 + 0xb8) + 0x3b8,&uStack_f8,*(undefined8 *)PTR_DAT_049b5fa8);
    uVar7 = uStack_f0;
    if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_38 = System_DateTimeOffset__Subtract_30e2d84(auStack_60,uStack_f8,uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b6128);
    }
    dVar11 = (double)System_TimeSpan__get_TotalDays_3116b74(&uStack_38,0);
    lVar9 = *(long *)(param_1 + 0x48);
    if (lVar9 == 0) goto LAB_0263dd8c;
    if ((double)*(int *)(lVar9 + 0x28) <= dVar11) {
      if ((double)*(int *)(lVar9 + 0x2c) <= dVar11) {
        piVar10 = (int *)(lVar9 + 0x38);
      }
      else {
        piVar10 = (int *)(lVar9 + 0x34);
      }
    }
    else {
      piVar10 = (int *)(lVar9 + 0x30);
    }
    iVar6 = *piVar10;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar4 / iVar6;
    }
    if (iVar4 != iVar5 * iVar6) {
      return 0;
    }
  }
  uVar8 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049c5f18,0);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar8 & 1) == 0) {
    return 1;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x11) != '\0') {
      iVar6 = *(int *)(lVar9 + 0x44);
      lVar9 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
        lVar9 = *(long *)puVar1;
      }
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar9 + 0xb8) + 0x60,0);
      if (iVar6 <= iVar5 + 1) {
        if (*(long *)(param_1 + 0x48) != 0) {
          iVar6 = *(int *)(*(long *)(param_1 + 0x48) + 0x3c);
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = iVar4 / iVar6;
          }
          if (iVar4 != iVar5 * iVar6) {
            return 0;
          }
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),&uStack_f8,
                         *(undefined8 *)PTR_DAT_049ca450);
            func_0x04608620(&uStack_b0,&uStack_f8,0x48);
            if (*(long *)(param_1 + 0x48) != 0) {
              iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x40);
              if (0 < iVar4) {
                func_0x04608620(&uStack_f8,&uStack_b0,0x48);
                uStack_118 = uStack_e8;
                uStack_120 = uStack_f0;
                uStack_108 = uStack_d8;
                uStack_110 = uStack_e0;
                iVar6 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_120,0);
                if (iVar4 < iVar6) {
                  return 0;
                }
              }
              return 1;
            }
          }
        }
        goto LAB_0263dd8c;
      }
    }
    return 0;
  }
LAB_0263dd8c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

