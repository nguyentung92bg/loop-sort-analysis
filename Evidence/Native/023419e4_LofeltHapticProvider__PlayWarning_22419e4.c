/* IL2CPP: LofeltHapticProvider$$PlayWarning
void LofeltHapticProvider__PlayWarning (LofeltHapticProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02fb8c1c) */
/* IL2CPP: LofeltHapticProvider$$PlayWarning
   void LofeltHapticProvider__PlayWarning (LofeltHapticProvider_o* __this, const MethodInfo*
   method); */

long * LofeltHapticProvider__PlayWarning_22419e4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar14;
  byte bVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  long in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar3 = PTR_DAT_049b53b0;
  if ((bRam0000000004f49b1c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b53b0);
    bRam0000000004f49b1c = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049e0b48;
  uVar13 = 0;
  if ((bRam0000000004f4e742 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e0b28,0);
    FUN_021f03f8(PTR_DAT_049e0b48);
    FUN_021f03f8(PTR_DAT_049b53b0);
    FUN_021f03f8(PTR_DAT_049b53a8);
    bRam0000000004f4e742 = 1;
    uVar13 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
    uVar13 = extraout_x1_00;
  }
  if (cRam0000000004f4e784 == '\0') {
    FUN_021f03f8(PTR_DAT_049e0b48,uVar13);
    cRam0000000004f4e784 = '\x01';
  }
  plVar9 = *(long **)puVar3;
  if (*(int *)((long)plVar9 + 0xe4) == 0) {
    FUN_021f0574();
    plVar9 = *(long **)puVar3;
  }
  if (*(char *)(plVar9[0x17] + 0x24) == '\0') {
    return plVar9;
  }
  if (*(int *)(*(long *)PTR_DAT_049b53b0 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Lofelt_NiceVibrations_HapticPatterns__GetPresetForType_2eb7198(&stack0xffffffffffffffc8,2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = Lofelt_NiceVibrations_HapticController__Init_2eb447c();
  puVar4 = PTR_DAT_049e0b28;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049e0b28 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4e77f == '\0') {
      FUN_021f03f8(PTR_DAT_049e0b28);
      cRam0000000004f4e77f = '\x01';
    }
    plVar9 = *(long **)puVar4;
    if (*(int *)((long)plVar9 + 0xe4) == 0) {
      FUN_021f0574();
      plVar9 = *(long **)puVar4;
    }
    if (*(char *)(plVar9[0x17] + 9) == '\0') {
      return plVar9;
    }
    if (*(int *)(*(long *)PTR_DAT_049b53a8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049b53a8;
    if ((bRam0000000004f4e776 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049e0b38);
      FUN_021f03f8(PTR_DAT_049b53a8);
      bRam0000000004f4e776 = 1;
    }
    puVar4 = PTR_DAT_049e0b38;
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar4);
    }
    puVar3 = PTR_DAT_049b3d18;
    if ((bRam0000000004f4e760 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049e0b38);
      FUN_021f03f8(PTR_DAT_049b3d18);
      bRam0000000004f4e760 = 1;
    }
    plVar9 = (long *)FUN_021f04e4(*(undefined8 *)puVar3,1);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if ((in_stack_ffffffffffffffd0 != 0) &&
       (lVar8 = thunk_FUN_0222c938(in_stack_ffffffffffffffd0,*(undefined8 *)(*plVar9 + 0x40)),
       lVar8 == 0)) {
      uVar13 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar13,0);
    }
    puVar3 = PTR_DAT_049e0b38;
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    plVar9[4] = in_stack_ffffffffffffffd0;
    thunk_FUN_021f190c(plVar9 + 4,in_stack_ffffffffffffffd0);
    uVar11 = UnityEngine_AndroidJNIHelper__CreateJNIArgArray_3b946b8(plVar9,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Lofelt_NiceVibrations_JNIHelpers__Call_2eb87a4(uVar13,uVar12,uVar11);
    plVar9 = (long *)UnityEngine_AndroidJNIHelper__DeleteJNIArgArray_3b94dac(plVar9,uVar11,0);
    return plVar9;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Lofelt_NiceVibrations_HapticController__Load_2eb4f68(in_stack_ffffffffffffffd8);
  Lofelt_NiceVibrations_HapticController__Loop_2eb5cc4(0);
  puVar3 = PTR_DAT_049e0b48;
  if ((bRam0000000004f4e731 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e0b28);
    FUN_021f03f8(PTR_DAT_049e0b48);
    FUN_021f03f8(PTR_DAT_049b53b0);
    FUN_021f03f8(PTR_DAT_049b53a8);
    bRam0000000004f4e731 = 1;
  }
  plVar9 = *(long **)puVar3;
  if (*(int *)((long)plVar9 + 0xe4) == 0) {
    FUN_021f0574();
    plVar9 = *(long **)puVar3;
  }
  if (*(char *)(plVar9[0x17] + 0x24) == '\0') {
    return plVar9;
  }
  if (*(int *)((long)plVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = Lofelt_NiceVibrations_HapticController__Init_2eb447c();
  puVar4 = PTR_DAT_049e0b28;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049e0b28 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4e77f == '\0') {
      FUN_021f03f8(PTR_DAT_049e0b28);
      cRam0000000004f4e77f = '\x01';
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 9) == '\0') {
      fVar17 = 0.0;
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f4e782 == '\0') {
        FUN_021f03f8(PTR_DAT_049e0b48);
        cRam0000000004f4e782 = '\x01';
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar3;
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_049b53b0 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b53b0);
      }
      fVar17 = (float)Lofelt_NiceVibrations_HapticPatterns__GetPresetDuration_2eb5648(uVar2);
      if (cRam0000000004f4e782 == '\0') {
        FUN_021f03f8(PTR_DAT_049e0b48);
        cRam0000000004f4e782 = '\x01';
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar3;
      }
      Lofelt_NiceVibrations_HapticPatterns__PlayPreset_2eb56cc
                (*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20));
    }
    bVar15 = 0;
  }
  else {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_049e0b28;
    fVar17 = *(float *)(*(long *)(lVar8 + 0xb8) + 0x10);
    fVar18 = *(float *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_049e0b28 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049e0b28);
    }
    if (cRam0000000004f4e781 == '\0') {
      FUN_021f03f8(PTR_DAT_049e0b28);
      cRam0000000004f4e781 = '\x01';
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar4;
    }
    fVar17 = fVar17 - fVar18;
    bVar15 = *(byte *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_049b53a8 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b53a8);
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    Lofelt_NiceVibrations_LofeltHaptics__Play_2eb55bc();
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar3;
  }
  lVar14 = *(long *)(lVar8 + 0xb8);
  lVar8 = *(long *)(lVar14 + 0x38);
  *(byte *)(lVar14 + 0x1e) = *(byte *)(lVar14 + 0x1d) & bVar15;
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *(long *)puVar3;
  if (fVar17 <= 0.0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049e0b48;
    if ((bRam0000000004f4e730 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049e0b48);
      bRam0000000004f4e730 = 1;
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(undefined1 *)(lVar8 + 0x1e) = 0;
    if (*(long *)(lVar8 + 8) != 0) {
      plVar9 = (long *)System_Timers_Timer__set_Enabled_36eca70(*(long *)(lVar8 + 8),0,0);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02fb526c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar9 = (long *)(**(code **)(lVar8 + 0x18))
                                   (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        return plVar9;
      }
      return plVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    System_Timers_Timer__set_Interval_36ecc7c((double)(fVar17 * 1000.0),lVar8,0);
    lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    if (lVar8 != 0) {
      System_Timers_Timer__set_AutoReset_36ec9d0(lVar8,0,0);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar8 != 0) {
        bVar5 = *(char *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1e) == '\0';
        if ((bRam0000000004f52e02 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b8f58,bVar5,0);
          FUN_021f03f8(PTR_DAT_049dd720);
          bRam0000000004f52e02 = 1;
        }
        plVar9 = (long *)System_ComponentModel_Component__get_DesignMode_373b4d4(lVar8,0);
        if (((ulong)plVar9 & 1) == 0) {
          if (*(char *)(lVar8 + 0x31) != '\0') {
            *(bool *)(lVar8 + 0x32) = bVar5;
            return plVar9;
          }
          if ((bool)*(char *)(lVar8 + 0x30) == bVar5) {
            return plVar9;
          }
          if (bVar5) {
            plVar9 = (long *)(lVar8 + 0x58);
            *(undefined1 *)(lVar8 + 0x30) = 1;
            if (*plVar9 == 0) {
              if (*(char *)(lVar8 + 0x50) == '\0') {
                uVar7 = System_Timers_Timer__CalculateRoundedInterval_36ec7ec
                                  (*(undefined8 *)(lVar8 + 0x28),0);
                uVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8f58);
                System_Object___ctor_3142338(uVar13,0);
                *(undefined8 *)(lVar8 + 0x68) = uVar13;
                thunk_FUN_021f190c((undefined8 *)(lVar8 + 0x68),uVar13);
                uVar13 = *(undefined8 *)(lVar8 + 0x60);
                uVar12 = *(undefined8 *)(lVar8 + 0x68);
                uVar2 = uVar7;
                if (*(char *)(lVar8 + 0x40) == '\0') {
                  uVar2 = 0xffffffff;
                }
                uVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049dd720);
                System_Threading_Timer___ctor_3173da4(uVar11,uVar13,uVar12,uVar7,uVar2,0);
                *(undefined8 *)(lVar8 + 0x58) = uVar11;
                if (iRam0000000005174518 != 0) {
                  plVar9 = (long *)FUN_023118d0(1L << ((ulong)plVar9 >> 0xc & 0x3f),
                                                ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
                }
                return plVar9;
              }
              plVar9 = (long *)System_Object__GetType_3142aac(lVar8,0);
              FUN_02010d90();
              uVar13 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              thunk_FUN_02256840(PTR_DAT_049bdc08);
              uVar12 = thunk_FUN_0222ca34();
              System_ObjectDisposedException___ctor_310ea18(uVar12,uVar13,0);
              uVar13 = thunk_FUN_02256840(PTR_DAT_04a0b638);
                    /* WARNING: Subroutine does not return */
              FUN_021f0564(uVar12,uVar13);
            }
            iVar6 = System_Timers_Timer__CalculateRoundedInterval_36ec7ec
                              (*(undefined8 *)(lVar8 + 0x28),0);
            if (*(long *)(lVar8 + 0x58) != 0) {
              iVar1 = iVar6;
              if (*(char *)(lVar8 + 0x40) == '\0') {
                iVar1 = -1;
              }
              System_Threading_Timer__Change_3173f68
                        (*(long *)(lVar8 + 0x58),(long)iVar6,(long)iVar1,0);
              return (long *)0x1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          plVar16 = (long *)(lVar8 + 0x58);
          if (*plVar16 != 0) {
            *(undefined8 *)(lVar8 + 0x68) = 0;
            thunk_FUN_021f190c((undefined8 *)(lVar8 + 0x68),0);
            if (*(long *)(lVar8 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Threading_Timer__Dispose_3174208(*(long *)(lVar8 + 0x58),0);
            *plVar16 = 0;
            plVar9 = (long *)thunk_FUN_021f190c(plVar16,0);
          }
        }
        else {
          *(bool *)(lVar8 + 0x32) = bVar5;
        }
        *(bool *)(lVar8 + 0x30) = bVar5;
        return plVar9;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

