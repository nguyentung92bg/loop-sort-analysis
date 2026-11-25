/* IL2CPP: LofeltHapticProvider$$PlaySoft
void LofeltHapticProvider__PlaySoft (LofeltHapticProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LofeltHapticProvider$$PlaySoft
   void LofeltHapticProvider__PlaySoft (LofeltHapticProvider_o* __this, const MethodInfo* method);
    */

void LofeltHapticProvider__PlaySoft_224192c(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_34;
  
  puVar4 = PTR_DAT_049b53b0;
  if ((bRam0000000004f49b1a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b53b0);
    bRam0000000004f49b1a = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049b53b0;
  fVar3 = _UNK_013aa85c;
  fVar2 = _UNK_013aa810;
  if ((bRam0000000004f4e740 & 1) == 0) {
    FUN_021f03f8(_UNK_013aa810,_UNK_013aa810,PTR_DAT_049e0b28);
    FUN_021f03f8(PTR_DAT_049e0b48);
    FUN_021f03f8(PTR_DAT_049b53b0);
    FUN_021f03f8(PTR_DAT_049b53a8);
    FUN_021f03f8(PTR_DAT_049e0c30);
    bRam0000000004f4e740 = 1;
  }
  lVar7 = *(long *)puVar4;
  fStack_34 = 0.0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar4;
  }
  puVar6 = PTR_DAT_049e0b48;
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049e0b48 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4e784 == '\0') {
      FUN_021f03f8(PTR_DAT_049e0b48);
      cRam0000000004f4e784 = '\x01';
    }
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar6;
    }
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x24) != '\0') {
      lVar7 = *(long *)puVar4;
      fStack_34 = fVar3;
      if (fVar3 <= 0.0) {
        fStack_34 = 0.0;
      }
      fVar11 = 1.0;
      if (fVar2 <= 1.0) {
        fVar11 = fVar2;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar2) {
        fVar12 = fVar11;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar4;
      }
      lVar1 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar8 = System_Single__ToString_31122f0
                        (&fStack_34,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
      if (lVar1 == 0) {
LAB_02fb7190:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar8 = System_String__Replace_2f7fb18(lVar1,*(undefined8 *)PTR_DAT_049e0c30,uVar8,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar6);
      }
      uVar9 = Lofelt_NiceVibrations_HapticController__Init_2eb447c();
      puVar5 = PTR_DAT_049e0b28;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_049e0b28 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f4e77f == '\0') {
          FUN_021f03f8(PTR_DAT_049e0b28);
          cRam0000000004f4e77f = '\x01';
        }
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar5;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 9) != '\0') {
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_021f0574();
            lVar7 = *(long *)puVar4;
          }
          puVar4 = PTR_DAT_049b53a8;
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (lVar7 == 0) goto LAB_02fb7190;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          *(float *)(lVar7 + 0x24) = fVar3;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Lofelt_NiceVibrations_LofeltHaptics__PlayMaximumAmplitudePattern_2eb6e30(lVar7);
        }
      }
      else {
        plVar10 = (long *)System_Text_Encoding__get_UTF8_2f9af48(0);
        if (plVar10 == (long *)0x0) goto LAB_02fb7190;
        uVar8 = (**(code **)(*plVar10 + 600))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x260));
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar6);
        }
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        Lofelt_NiceVibrations_HapticController__Load_2eb5130(uVar8,&uStack_60);
        Lofelt_NiceVibrations_HapticController__Loop_2eb5cc4(0);
        Lofelt_NiceVibrations_HapticController__set_clipLevel_2eb4418(fVar12);
        Lofelt_NiceVibrations_HapticController__set_clipFrequencyShift_2eb5c40();
        Lofelt_NiceVibrations_HapticController__Play_2eb5280();
      }
    }
  }
  return;
}

