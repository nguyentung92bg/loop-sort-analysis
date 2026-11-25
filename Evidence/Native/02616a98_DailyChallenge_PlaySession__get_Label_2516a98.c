/* IL2CPP: DailyChallenge.PlaySession$$get_Label
System_String_o* DailyChallenge_PlaySession__get_Label (DailyChallenge_PlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge.PlaySession$$get_Label
   System_String_o* DailyChallenge_PlaySession__get_Label (DailyChallenge_PlaySession_o* __this,
   const MethodInfo* method); */

long DailyChallenge_PlaySession__get_Label_2516a98(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar3 = PTR_DAT_049c2ea8;
  if ((bRam0000000004f4be20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049c2ea8);
                    /* try { // try from 02616ad8 to 02716adf has its CatchHandler @ 02616d58 */
    FUN_021f03f8(PTR_DAT_049be810);
    bRam0000000004f4be20 = 1;
  }
  puVar2 = PTR_DAT_049b5fb0;
                    /* try { // try from 02616aec to 02716af7 has its CatchHandler @ 02616d44 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049be810;
  uVar5 = Localization__get_Culture_252dc80(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_049e9720;
                    /* try { // try from 02616b2c to 02716b3b has its CatchHandler @ 02616d4c */
  uVar10 = *(ulong *)puVar3;
  if ((bRam0000000004f4fb40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e9720,uVar10,uVar5,0);
    bRam0000000004f4fb40 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049e9720;
  if ((bRam0000000004f4fbc1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e9720);
    bRam0000000004f4fbc1 = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  uVar11 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  if ((bRam0000000004f4fbc2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e9508);
    FUN_021f03f8(PTR_DAT_049e9720);
    FUN_021f03f8(PTR_DAT_049e2d98);
    FUN_021f03f8(PTR_DAT_049e2da0);
    FUN_021f03f8(PTR_DAT_049cdd38);
    FUN_021f03f8(PTR_DAT_049ce7e0);
    bRam0000000004f4fbc2 = 1;
  }
  puVar3 = PTR_DAT_049e9720;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if ((uVar10 != 0) && (*(int *)(uVar10 + 0x10) == 1)) {
    uVar4 = System_String__get_Chars_2f7736c(uVar10,0,0);
    if (uVar4 < 0x53) {
      if (uVar4 == 0x4f) {
LAB_031e334c:
        uStack_80 = 0;
        lVar13 = *(long *)PTR_DAT_049cdd38;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        lVar9 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x40));
        if ((uVar10 & 1) != 0) {
          lVar9 = *(long *)(lVar13 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
          if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
            FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
          }
          uVar5 = System_Type__GetTypeFromHandle_310ebfc(uVar5,0);
          System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar5,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_DateTimeFormat__TryFormatO_30e8b78
                  (uVar12,uVar11,&uStack_c0,0x21,(long)&uStack_60 + 4);
        uVar10 = (ulong)uStack_60._4_4_;
        lVar9 = *(long *)PTR_DAT_049e2d98;
        if (0x21 < uStack_60._4_4_) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException_312048c(0);
        }
        lVar13 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar5 = System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                          (&uStack_c0,0,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x38));
        lVar9 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          FUN_02229718(lVar9);
        }
        uStack_70 = uVar5;
        uStack_68 = uVar10;
        lVar9 = System_Span___Il2CppFullySharedGenericType___ToString_2999280
                          (&uStack_70,*(undefined8 *)PTR_DAT_049e2da0);
LAB_031e35a0:
        if (*(long *)(lVar6 + 0x28) == lStack_58) {
          return lVar9;
        }
        goto LAB_031e35e4;
      }
      if (uVar4 == 0x52) goto LAB_031e3550;
    }
    else {
      if (uVar4 == 0x72) {
LAB_031e3550:
        lVar9 = System_String__FastAllocateString_2f7bd48(0x1d,0);
        if (lVar9 == 0) {
          if (*(long *)(lVar6 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_031e35e4;
        }
        uVar5 = System_String__GetRawStringData_2f7a1ac(lVar9,0);
        uVar1 = *(undefined4 *)(lVar9 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar3);
        }
        System_DateTimeFormat__TryFormatR_30e90a4(uVar12,uVar11,uVar5,uVar1,&uStack_60);
        goto LAB_031e35a0;
      }
      if (uVar4 == 0x6f) goto LAB_031e334c;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_049e9508 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Globalization_DateTimeFormatInfo__GetInstance_304b470(uVar5,0);
  if (cRam0000000004f4a4e8 == '\0') {
    FUN_021f03f8(PTR_DAT_049bd288);
    cRam0000000004f4a4e8 = '\x01';
    if (uVar10 != 0) goto LAB_031e34c4;
LAB_031e34f4:
    uVar7 = 0;
  }
  else {
    if (uVar10 == 0) goto LAB_031e34f4;
LAB_031e34c4:
    uVar7 = System_String__GetRawStringData_2f7a1ac(uVar10,0);
    uVar10 = (ulong)*(uint *)(uVar10 + 0x10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar8 = (long *)System_DateTimeFormat__FormatStringBuilder_30e9420
                             (uVar12,uVar7,uVar10,uVar5,uVar11);
  if (*(long *)(lVar6 + 0x28) == lStack_58) {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,0);
    }
    lVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    System_Text_StringBuilderCache__Release_2f8ecc8(plVar8);
    return lVar6;
  }
LAB_031e35e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

