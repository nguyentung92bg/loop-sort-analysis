/* IL2CPP: CloudSaveModule$$IsStoreUnchangedSinceBaseline
bool CloudSaveModule__IsStoreUnchangedSinceBaseline (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$IsStoreUnchangedSinceBaseline
   bool CloudSaveModule__IsStoreUnchangedSinceBaseline (CloudSaveModule_o* __this, const MethodInfo*
   method); */

bool CloudSaveModule__IsStoreUnchangedSinceBaseline_24ecf84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000004f4bce7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c5138);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bce7 = 1;
  }
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
        goto LAB_025ed040;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049c8008,2);
LAB_025ed040:
  lVar11 = (*(code *)*puVar5)(plVar14,puVar5[1]);
  uVar12 = System_String__IsNullOrEmpty_2f7c924(lVar11,0);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar12 & 1) != 0) {
    return false;
  }
                    /* try { // try from 025ed078 to 026ed1ff has its CatchHandler @ 025ed078
                       catch() { ... } // from try @ 025ed078 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed26c with catch @ 025ed078
                       catch() { ... } // from try @ 025ed2e8 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed428 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed4f0 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed588 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed5f0 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed61c with catch @ 025ed078
                       catch() { ... } // from try @ 025ed640 with catch @ 025ed078
                       catch() { ... } // from try @ 025ed66c with catch @ 025ed078 */
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5120;
  if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar12 = PlayerPrefsString__HasValue_3f0e508(*(long *)(*(long *)puVar1 + 0xb8) + 0x978,0);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
    lVar6 = *(long *)PTR_DAT_049c5138;
    lVar11 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718(lVar11);
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar11 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x28) + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    plVar14 = (long *)thunk_FUN_0224e54c(lVar10 + 2000,
                                         *(long *)(**(long **)(lVar11 + 0xc0) + 0x80) + 0x60);
    uVar8 = 0;
    lVar11 = *plVar14;
    if ((bRam0000000004f57f90 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a24c78,0);
      FUN_021f03f8(PTR_DAT_049d9c90);
      bRam0000000004f57f90 = 1;
      uVar8 = extraout_x1;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (lVar11 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else if (*(int *)(lVar11 + 0x10) == 0) {
      uVar8 = System_UIntPtr__op_Explicit_3159868(1,0);
      uVar8 = System_UIntPtr__op_Explicit_3159870(uVar8,0);
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc(&stack0xffffffffffffffd0,uVar8,0,0);
      uStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      if (cRam0000000004f4dd4d == '\0') {
        FUN_021f03f8(PTR_DAT_049bd288,uVar8);
        cRam0000000004f4dd4d = '\x01';
      }
      uStack_40 = System_String__GetRawStringData_2f7a1ac(lVar11,0);
      uStack_38 = (ulong)*(uint *)(lVar11 + 0x10);
      uVar8 = System_ReadOnlySpan___Il2CppFullySharedGenericType___GetPinnableReference_2936698
                        (&uStack_40,*(undefined8 *)PTR_DAT_04a24c78);
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc
                (&uStack_50,uVar8,uStack_38 & 0xffffffff,0);
    }
    if (pcRam0000000004f57fd8 == (code *)0x0) {
      pcRam0000000004f57fd8 = (code *)FUN_021f03bc(&UNK_013af7f0);
    }
    bVar4 = (*pcRam0000000004f57fd8)(&uStack_50);
    return (bool)(bVar4 & 1);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar6 = PlayerPrefsString__get_Value_3f0e288(*(long *)(*(long *)puVar1 + 0xb8) + 0x978,0);
  if (lVar11 == lVar6) {
    return true;
  }
  if (lVar11 == 0) {
    return false;
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar11 + 0x10) != *(int *)(lVar6 + 0x10)) {
      return false;
    }
    lVar10 = (long)*(int *)(lVar11 + 0x10) << 1;
    lVar11 = lVar11 + 0x14;
    lVar6 = lVar6 + 0x14;
    if (lVar11 != lVar6) {
      lVar7 = System_IntPtr__op_Explicit_314af4c(0,0,lVar10,0);
      uVar8 = System_IntPtr__op_Explicit_314af58(lVar10,0);
      uVar12 = System_IntPtr__op_Explicit_314af64(uVar8,0);
      if (7 < uVar12) {
        lVar10 = System_IntPtr__op_Subtraction_314af78(uVar8,8,0);
        while( true ) {
          uVar12 = System_IntPtr__op_Explicit_314af64(lVar10,0);
          uVar9 = System_IntPtr__op_Explicit_314af64(lVar7,0);
          if (uVar12 <= uVar9) {
            return *(long *)(lVar11 + lVar10) == *(long *)(lVar6 + lVar10);
          }
          uVar12 = System_UIntPtr__op_Inequality_3159858
                             (*(undefined8 *)(lVar11 + lVar7),*(undefined8 *)(lVar6 + lVar7),0);
          if ((uVar12 & 1) != 0) break;
          lVar7 = System_IntPtr__op_Addition_314af70(lVar7,8,0);
        }
        return false;
      }
      uVar12 = System_IntPtr__op_Explicit_314af64(uVar8,0);
      uVar9 = System_IntPtr__op_Explicit_314af64(lVar7,0);
      if (uVar9 < uVar12) {
        do {
          bVar3 = *(char *)(lVar11 + lVar7) == *(char *)(lVar6 + lVar7);
          if (!bVar3) {
            return bVar3;
          }
          lVar7 = System_IntPtr__op_Addition_314af70(lVar7,1,0);
          uVar12 = System_IntPtr__op_Explicit_314af64(uVar8,0);
          uVar9 = System_IntPtr__op_Explicit_314af64(lVar7,0);
        } while (uVar9 < uVar12);
        return bVar3;
      }
    }
    return true;
  }
  return false;
}

