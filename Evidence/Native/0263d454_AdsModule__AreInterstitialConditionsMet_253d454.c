/* IL2CPP: AdsModule$$AreInterstitialConditionsMet
bool AdsModule__AreInterstitialConditionsMet (AdsModule_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$AreInterstitialConditionsMet
   bool AdsModule__AreInterstitialConditionsMet (AdsModule_o* __this, System_String_o* placement,
   const MethodInfo* method); */

uint AdsModule__AreInterstitialConditionsMet_253d454(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  float fVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bf9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4bf9a = 1;
  }
  lVar6 = *(long *)puVar3;
  auStack_58._8_8_ = 0;
  uStack_48 = 0;
  auStack_58._0_8_ = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  uVar7 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar6 + 0xb8) + 0x328,0);
  auVar2._8_8_ = auStack_58._8_8_;
  auVar2._0_8_ = auStack_58._0_8_;
  lVar6 = *(long *)(param_1 + 0x48);
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) goto LAB_0263d650;
LAB_0263d510:
    lVar8 = *(long *)puVar3;
    iVar1 = *(int *)(lVar6 + 0x14);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar8 + 0xb8) + 0x60,0);
    if (iVar1 <= iVar4 + 1) {
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_58 = TimeProvider__get_UtcNow_24f95ec(0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_88 = *(undefined8 *)(lVar6 + 0x3c0);
      uStack_90 = *(undefined8 *)(lVar6 + 0x3b8);
      uStack_78 = *(undefined8 *)(lVar6 + 0x3d0);
      uStack_80 = *(undefined8 *)(lVar6 + 0x3c8);
      uStack_68 = *(undefined8 *)(lVar6 + 0x3e0);
      uStack_70 = *(undefined8 *)(lVar6 + 0x3d8);
                    /* try { // try from 0263d5a8 to 0273d6fb has its CatchHandler @ 0263d5a8
                       catch() { ... } // from try @ 0263d5a8 with catch @ 0263d5a8
                       catch() { ... } // from try @ 0263d770 with catch @ 0263d5a8
                       catch() { ... } // from try @ 0263d848 with catch @ 0263d5a8
                       catch() { ... } // from try @ 0263d88c with catch @ 0263d5a8
                       catch() { ... } // from try @ 0263d8e0 with catch @ 0263d5a8
                       catch() { ... } // from try @ 0263d90c with catch @ 0263d5a8 */
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_90,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_48 = System_DateTimeOffset__Subtract_30e2d84(auStack_58,uStack_40,uStack_38,0);
      if (*(long *)(param_1 + 0x48) == 0) {
LAB_0263d650:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar10 = *(float *)(*(long *)(param_1 + 0x48) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar9 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_48,0);
      if ((double)fVar10 <= dVar9) {
        uVar5 = AdsModule__IsPlacementEligibleForInterstitial_253da00(param_1,param_2);
        goto LAB_0263d634;
      }
    }
  }
  else {
    auStack_58 = auVar2;
    if (lVar6 == 0) goto LAB_0263d650;
    if (*(char *)(lVar6 + 0x12) != '\0') goto LAB_0263d510;
  }
  uVar5 = 0;
LAB_0263d634:
  return uVar5 & 1;
}

