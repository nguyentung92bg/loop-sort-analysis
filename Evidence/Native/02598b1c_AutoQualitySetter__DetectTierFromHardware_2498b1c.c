/* IL2CPP: AutoQualitySetter$$DetectTierFromHardware
int32_t AutoQualitySetter__DetectTierFromHardware (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$DetectTierFromHardware
   int32_t AutoQualitySetter__DetectTierFromHardware (const MethodInfo* method); */

undefined4 AutoQualitySetter__DetectTierFromHardware_2498b1c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar6 = PTR_DAT_049c6078;
  if ((bRam0000000004f4baa8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    FUN_021f03f8(PTR_DAT_049c6080);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c6088);
    FUN_021f03f8(PTR_DAT_049c6090);
    FUN_021f03f8(PTR_DAT_049c6098);
    FUN_021f03f8(PTR_DAT_049c60a0);
    FUN_021f03f8(PTR_DAT_049c60a8);
    FUN_021f03f8(PTR_DAT_049c60b0);
    FUN_021f03f8(PTR_DAT_049c60b8);
    FUN_021f03f8(PTR_DAT_049c60c0);
    FUN_021f03f8(PTR_DAT_049c60c8);
    FUN_021f03f8(PTR_DAT_049c60d0);
    FUN_021f03f8(PTR_DAT_049c60d8);
    FUN_021f03f8(PTR_DAT_049c60e0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c60f0);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049c60f8);
    FUN_021f03f8(PTR_DAT_049c6100);
    FUN_021f03f8(PTR_DAT_049c6108);
    FUN_021f03f8(PTR_DAT_049c6110);
    FUN_021f03f8(PTR_DAT_049c6118);
    FUN_021f03f8(PTR_DAT_049b4550);
    FUN_021f03f8(PTR_DAT_049c6120);
    FUN_021f03f8(PTR_DAT_049b6568);
    FUN_021f03f8(PTR_DAT_049c6128);
    FUN_021f03f8(PTR_DAT_049c6130);
    FUN_021f03f8(PTR_DAT_049c6138);
    FUN_021f03f8(PTR_DAT_049c6140);
    FUN_021f03f8(PTR_DAT_049c6148);
    bRam0000000004f4baa8 = 1;
  }
  lVar12 = *(long *)puVar6;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_58 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
    lVar12 = *(long *)puVar6;
  }
  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (lVar17 == 0) {
LAB_02598d4c:
    puVar4 = PTR_DAT_049c6098;
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c60b0);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (uVar13,*(undefined8 *)puVar4);
    lVar12 = *(long *)puVar6;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      lVar12 = *(long *)puVar6;
    }
    puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
    *puVar14 = uVar13;
    thunk_FUN_021f190c(puVar14,uVar13);
    puVar10 = PTR_DAT_049c60e0;
    puVar9 = PTR_DAT_049c60d8;
    puVar8 = PTR_DAT_049c60c8;
    puVar7 = PTR_DAT_049c60c0;
    puVar5 = PTR_DAT_049c60b8;
    puVar4 = PTR_DAT_049c6088;
    lVar12 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    if (lVar12 == 0) {
LAB_0259964c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
              (lVar12,&uStack_e0,*(undefined8 *)PTR_DAT_049c6090);
    uStack_90 = CONCAT44(uStack_dc,uStack_e0);
    uStack_70 = uStack_c0;
    uStack_88 = uStack_d8;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    while (uVar15 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                              (&uStack_90,*(undefined8 *)puVar7), (uVar15 & 1) != 0) {
      lVar18 = *(long *)puVar8;
      lVar17 = *(long *)(lVar18 + 0x20);
      uVar3 = *(ushort *)(lVar17 + 0x135);
      lVar12 = lVar17;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar17 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar17 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_e0,uVar13,uVar1);
      lVar12 = *(long *)puVar6;
      uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
      uStack_98 = uStack_d8;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_021f0574(lVar12);
        lVar12 = *(long *)puVar6;
      }
      lVar19 = *(long *)puVar10;
      lVar17 = *(long *)(lVar19 + 0x20);
      lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      uVar3 = *(ushort *)(lVar17 + 0x135);
      lVar12 = lVar17;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar17 = *(long *)(lVar19 + 0x20);
        uVar3 = *(ushort *)(lVar17 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&uStack_e0,uVar13,uVar1);
      uVar1 = uStack_e0;
      lVar19 = *(long *)puVar9;
      lVar17 = *(long *)(lVar19 + 0x20);
      uVar3 = *(ushort *)(lVar17 + 0x135);
      lVar12 = lVar17;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar17 = *(long *)(lVar19 + 0x20);
        uVar3 = *(ushort *)(lVar17 + 0x135);
      }
      uVar2 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_a0,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      func_0x04608620(&uStack_e0,uVar13,uVar2);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_54 = uVar1;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar18,&uStack_54,CONCAT44(uStack_dc,uStack_e0),*(undefined8 *)puVar4);
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
              (&uStack_90,*(undefined8 *)puVar5);
  }
  else {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      lVar17 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      if (lVar17 == 0) goto LAB_0259964c;
    }
    iVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                       (lVar17,*(undefined8 *)PTR_DAT_049c60a0);
    if (iVar11 == 0) goto LAB_02598d4c;
  }
  lVar12 = UnityEngine_Resources__Load_object__26a73fc
                     (*(undefined8 *)PTR_DAT_049c6148,*(undefined8 *)PTR_DAT_049c60e8);
  GpuDetect__GetRaw_2499904(&uStack_e0);
  uVar13 = CONCAT44(uStack_dc,uStack_e0);
  uStack_58 = 2;
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar15 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
  puVar4 = PTR_DAT_049b3c58;
  if ((uVar15 & 1) != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar16 = UnityEngine_TextAsset__get_text_3c222c8(lVar12,0);
    uVar15 = System_String__IsNullOrEmpty_2f7c924(uVar16,0);
    if ((uVar15 & 1) == 0) {
      uVar16 = UnityEngine_TextAsset__get_text_3c222c8(lVar12,0);
      uVar16 = System_String__Concat_2f7d424
                         (*(undefined8 *)PTR_DAT_049c60f0,uVar16,*(undefined8 *)PTR_DAT_049b4550,0);
      UnityEngine_JsonUtility__FromJson___Il2CppFullySharedGenericType__265034c
                (uVar16,&uStack_e0,*(undefined8 *)PTR_DAT_049c60d0);
      lVar12 = CONCAT44(uStack_dc,uStack_e0);
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) ||
         (*(long *)(*(long *)(lVar12 + 0x10) + 0x18) == 0)) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__LogWarning_3bcf90c(*(undefined8 *)PTR_DAT_049c6110,0);
        return 2;
      }
      GpuDetect__GetNormalized_2499a0c(&uStack_e0);
      puVar5 = PTR_DAT_049b4540;
      lVar17 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,7);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_049c6108;
      thunk_FUN_021f190c();
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x28) = uVar13;
      thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x28),uVar13);
      if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_049c6100;
      thunk_FUN_021f190c();
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x38) = uStack_d8;
      thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x38),uStack_d8);
      if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_049c6130;
      thunk_FUN_021f190c();
      if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x48) = uStack_d0;
      thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x48),uStack_d0);
      if (*(uint *)(lVar17 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)PTR_DAT_049b6568;
      thunk_FUN_021f190c();
      uVar16 = System_String__Concat_2f7dcb4(lVar17,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__Log_3bd0be4(uVar16,0);
      uVar16 = *(undefined8 *)(lVar12 + 0x10);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar16 = AutoQualitySetter__FindTierByExactGpuName_249a350(uVar16,uVar13);
      uVar15 = System_String__IsNullOrEmpty_2f7c924(uVar16,0);
      if ((uVar15 & 1) == 0) {
        uVar13 = System_String__Concat_2f7dbac
                           (*(undefined8 *)PTR_DAT_049c60f8,uVar16,*(undefined8 *)PTR_DAT_049c6140,
                            uVar13,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__Log_3bd0be4(uVar13,0);
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_021f0574();
          lVar12 = *(long *)puVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (lVar12,uVar16,&uStack_e0,*(undefined8 *)PTR_DAT_049c60a8);
        return uStack_e0;
      }
      uVar16 = *(undefined8 *)(lVar12 + 0x10);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar16 = AutoQualitySetter__FindTierByFamilyAndModel_249a664(uVar16,uStack_d8,uStack_d0);
      uVar15 = System_String__IsNullOrEmpty_2f7c924(uVar16,0);
      if ((uVar15 & 1) == 0) {
        lVar12 = FUN_021f04e4(*(undefined8 *)puVar5,6);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_0200f5e8(lVar12,0,*(undefined8 *)PTR_DAT_049c60f8);
        FUN_0200f5e8(lVar12,1,uVar16);
        FUN_0200f5e8(lVar12,2,*(undefined8 *)PTR_DAT_049c6120);
        FUN_0200f5e8(lVar12,3,uStack_d8);
        FUN_0200f5e8(lVar12,4,*(undefined8 *)PTR_DAT_049b6188);
        FUN_0200f5e8(lVar12,5,uStack_d0);
        uVar13 = System_String__Concat_2f7dcb4(lVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__Log_3bd0be4(uVar13,0);
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_021f0574();
          lVar12 = *(long *)puVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (lVar12,uVar16,&uStack_e0,*(undefined8 *)PTR_DAT_049c60a8);
        return uStack_e0;
      }
      goto LAB_02599050;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__LogWarning_3bcf90c(*(undefined8 *)PTR_DAT_049c6118,0);
LAB_02599050:
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar15 = AutoQualitySetter__DetectTierFromRAM_24996e0(&uStack_58);
  uVar1 = uStack_58;
  if ((uVar15 & 1) == 0) {
    uVar13 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c6138,uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__LogWarning_3bcf90c(uVar13,0);
    return 2;
  }
  uStack_e0 = uStack_58;
  uVar13 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c6080,&uStack_e0);
  uVar13 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c6128,uVar13,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(uVar13,0);
  return uVar1;
}

