/* IL2CPP: CloudSaveModule$$ShouldPushLocal
bool CloudSaveModule__ShouldPushLocal (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$ShouldPushLocal
   bool CloudSaveModule__ShouldPushLocal (CloudSaveModule_o* __this, const MethodInfo* method); */

bool CloudSaveModule__ShouldPushLocal_24ece0c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bce1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8058);
    bRam0000000004f4bce1 = 1;
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar3;
  }
  iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar9 + 0xb8) + 0x60);
  iVar8 = CloudSaveModule__StoreLevel_24ecb08(param_1);
  puVar4 = PTR_DAT_049c8058;
  puVar2 = PTR_DAT_049c8018;
  puVar3 = PTR_DAT_049b3c58;
  if (iVar7 != iVar8) {
    lVar9 = *(long *)PTR_DAT_049c8018;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_049b3bd0;
    uVar20 = **(undefined8 **)(lVar9 + 0xb8);
    uStack_48._4_4_ = iVar7;
    uVar14 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),(long)&uStack_48 + 4);
    uStack_48 = CONCAT44(uStack_48._4_4_,iVar8);
    uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_48);
    uVar14 = System_String__Format_2f7dff0(*(undefined8 *)puVar4,uVar20,uVar14,uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar3);
    }
    UnityEngine_Debug__Log_3bd0be4(uVar14,0);
    return iVar8 < iVar7;
  }
  if ((bRam0000000004f4bce7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c5138);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bce7 = 1;
  }
  plVar19 = *(long **)(param_1 + 0x10);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar11 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
        goto LAB_025ed040;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_02229a4c(plVar19,*(long *)PTR_DAT_049c8008,2);
LAB_025ed040:
  lVar9 = (*(code *)*puVar11)(plVar19,puVar11[1]);
  uVar17 = System_String__IsNullOrEmpty_2f7c924(lVar9,0);
  puVar3 = PTR_DAT_049b5310;
  if ((uVar17 & 1) != 0) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5120;
  if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar17 = PlayerPrefsString__HasValue_3f0e508(*(long *)(*(long *)puVar3 + 0xb8) + 0x978,0);
  if ((uVar17 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
    lVar12 = *(long *)PTR_DAT_049c5138;
    lVar9 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar9 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x28) + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    plVar19 = (long *)thunk_FUN_0224e54c(lVar16 + 2000,
                                         *(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x60);
    uVar14 = 0;
    lVar9 = *plVar19;
    if ((bRam0000000004f57f90 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a24c78,0);
      FUN_021f03f8(PTR_DAT_049d9c90);
      bRam0000000004f57f90 = 1;
      uVar14 = extraout_x1;
    }
    uStack_50 = 0;
    uStack_48 = 0;
    if (lVar9 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else if (*(int *)(lVar9 + 0x10) == 0) {
      uVar14 = System_UIntPtr__op_Explicit_3159868(1,0);
      uVar14 = System_UIntPtr__op_Explicit_3159870(uVar14,0);
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc(&stack0xffffffffffffffd0,uVar14,0,0);
      uStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      if (cRam0000000004f4dd4d == '\0') {
        FUN_021f03f8(PTR_DAT_049bd288,uVar14);
        cRam0000000004f4dd4d = '\x01';
      }
      System_String__GetRawStringData_2f7a1ac(lVar9,0);
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      uVar14 = System_ReadOnlySpan___Il2CppFullySharedGenericType___GetPinnableReference_2936698
                         (&stack0xffffffffffffffc0,*(undefined8 *)PTR_DAT_04a24c78);
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc(&uStack_50,uVar14,uVar1,0);
    }
    if (pcRam0000000004f57fd8 == (code *)0x0) {
      pcRam0000000004f57fd8 = (code *)FUN_021f03bc(&UNK_013af7f0);
    }
    bVar6 = (*pcRam0000000004f57fd8)(&uStack_50);
    return (bool)(bVar6 & 1);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar12 = PlayerPrefsString__get_Value_3f0e288(*(long *)(*(long *)puVar3 + 0xb8) + 0x978,0);
  if (lVar9 == lVar12) {
    return true;
  }
  if (lVar9 == 0) {
    return false;
  }
  if (lVar12 != 0) {
    if (*(int *)(lVar9 + 0x10) != *(int *)(lVar12 + 0x10)) {
      return false;
    }
    lVar16 = (long)*(int *)(lVar9 + 0x10) << 1;
    lVar9 = lVar9 + 0x14;
    lVar12 = lVar12 + 0x14;
    if (lVar9 != lVar12) {
      lVar13 = System_IntPtr__op_Explicit_314af4c(0,0,lVar16,0);
      uVar14 = System_IntPtr__op_Explicit_314af58(lVar16,0);
      uVar17 = System_IntPtr__op_Explicit_314af64(uVar14,0);
      if (7 < uVar17) {
        lVar16 = System_IntPtr__op_Subtraction_314af78(uVar14,8,0);
        while( true ) {
          uVar17 = System_IntPtr__op_Explicit_314af64(lVar16,0);
          uVar15 = System_IntPtr__op_Explicit_314af64(lVar13,0);
          if (uVar17 <= uVar15) {
            return *(long *)(lVar9 + lVar16) == *(long *)(lVar12 + lVar16);
          }
          uVar17 = System_UIntPtr__op_Inequality_3159858
                             (*(undefined8 *)(lVar9 + lVar13),*(undefined8 *)(lVar12 + lVar13),0);
          if ((uVar17 & 1) != 0) break;
          lVar13 = System_IntPtr__op_Addition_314af70(lVar13,8,0);
        }
        return false;
      }
      uVar17 = System_IntPtr__op_Explicit_314af64(uVar14,0);
      uVar15 = System_IntPtr__op_Explicit_314af64(lVar13,0);
      if (uVar15 < uVar17) {
        do {
          bVar5 = *(char *)(lVar9 + lVar13) == *(char *)(lVar12 + lVar13);
          if (!bVar5) {
            return bVar5;
          }
          lVar13 = System_IntPtr__op_Addition_314af70(lVar13,1,0);
          uVar17 = System_IntPtr__op_Explicit_314af64(uVar14,0);
          uVar15 = System_IntPtr__op_Explicit_314af64(lVar13,0);
        } while (uVar15 < uVar17);
        return bVar5;
      }
    }
    return true;
  }
  return false;
}

