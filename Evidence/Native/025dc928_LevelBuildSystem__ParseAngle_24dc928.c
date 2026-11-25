/* IL2CPP: LevelBuildSystem$$ParseAngle
float LevelBuildSystem__ParseAngle (LevelBuildSystem_o* __this, System_String_array* s1, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: LevelBuildSystem$$ParseAngle
   float LevelBuildSystem__ParseAngle (LevelBuildSystem_o* __this, System_String_array* s1, const
   MethodInfo* method); */

float LevelBuildSystem__ParseAngle_24dc928(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  double adStack_e8 [14];
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long lStack_58;
  
  puVar3 = PTR_DAT_049b44e8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(param_2 + 0x18) < 2) {
    return 0.0;
  }
  lVar8 = *(long *)(param_2 + 0x28);
  if ((bRam0000000004f4bc55 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    bRam0000000004f4bc55 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  if ((bRam0000000004f4fd7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ea188,0xa7,uVar4,0);
    bRam0000000004f4fd7d = 1;
  }
  System_Globalization_NumberFormatInfo__ValidateParseStyleFloatingPoint_307ec60(0xa7,0);
  puVar3 = PTR_DAT_049ea188;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_3111684(0x30);
  }
  if (cRam0000000004f4a4e8 == '\0') {
    FUN_021f03f8(PTR_DAT_049bd288);
    cRam0000000004f4a4e8 = '\x01';
  }
  uVar7 = System_String__GetRawStringData_2f7a1ac(lVar8,0);
  uVar1 = *(undefined4 *)(lVar8 + 0x10);
  lVar8 = System_Globalization_NumberFormatInfo__GetInstance_307e4f4(uVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_049ea188;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4fd36 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ea188,uVar1,0xa7,lVar8,0);
    FUN_021f03f8(PTR_DAT_049edd48);
    bRam0000000004f4fd36 = 1;
  }
  adStack_e8[0] = 0.0;
  adStack_e8[4] = 0.0;
  adStack_e8[3] = 0.0;
  adStack_e8[6] = 0.0;
  adStack_e8[5] = 0.0;
  adStack_e8[8] = 0.0;
  adStack_e8[7] = 0.0;
  adStack_e8[10] = 0.0;
  adStack_e8[9] = 0.0;
  adStack_e8[0xc] = 0.0;
  adStack_e8[0xb] = 0.0;
  adStack_e8[2] = 0.0;
  adStack_e8[1] = 0.0;
  uStack_78 = 0;
  adStack_e8[0xd] = 0.0;
  uStack_6e = 0;
  uStack_76 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Number__TryStringToNumber_310c1e0(uVar7,uVar1,0xa7,adStack_e8 + 1,lVar8,0);
  if ((uVar5 & 1) == 0) {
LAB_0320d040:
    System_MemoryExtensions__TrimStart_3101530(uVar7,uVar1);
    auVar11 = System_MemoryExtensions__TrimEnd_310164c();
    uVar7 = auVar11._8_8_;
    uVar4 = auVar11._0_8_;
    if (lVar8 == 0) {
      if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0320d2bc;
    }
    uVar5 = *(ulong *)(lVar8 + 0x70);
    if (cRam0000000004f4a4e8 == '\0') {
      FUN_021f03f8(PTR_DAT_049bd288);
      cRam0000000004f4a4e8 = '\x01';
      if (uVar5 != 0) goto LAB_0320d070;
LAB_0320d0a0:
      uVar6 = 0;
    }
    else {
      if (uVar5 == 0) goto LAB_0320d0a0;
LAB_0320d070:
      uVar6 = System_String__GetRawStringData_2f7a1ac(uVar5,0);
      uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    if (cRam0000000004f4f69d == '\0') {
      FUN_021f03f8(PTR_DAT_049e45a0);
      FUN_021f03f8(PTR_DAT_049d9c90);
      cRam0000000004f4f69d = '\x01';
    }
    iVar9 = auVar11._8_4_;
    if ((iVar9 == (int)uVar5) &&
       ((iVar9 == 0 ||
        (uVar5 = FUN_02ecf90c(uVar4,uVar7,uVar6,uVar5,*(undefined8 *)PTR_DAT_049e45a0),
        (uVar5 & 1) != 0)))) {
      fVar10 = INFINITY;
    }
    else {
      uVar5 = *(ulong *)(lVar8 + 0x78);
      if (cRam0000000004f4a4e8 == '\0') {
        FUN_021f03f8(PTR_DAT_049bd288);
        cRam0000000004f4a4e8 = '\x01';
        if (uVar5 != 0) goto LAB_0320d118;
LAB_0320d148:
        uVar6 = 0;
      }
      else {
        if (uVar5 == 0) goto LAB_0320d148;
LAB_0320d118:
        uVar6 = System_String__GetRawStringData_2f7a1ac(uVar5,0);
        uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
      }
      if (cRam0000000004f4f69d == '\0') {
        FUN_021f03f8(PTR_DAT_049e45a0);
        FUN_021f03f8(PTR_DAT_049d9c90);
        cRam0000000004f4f69d = '\x01';
      }
      if ((iVar9 == (int)uVar5) &&
         ((iVar9 == 0 ||
          (uVar5 = FUN_02ecf90c(uVar4,uVar7,uVar6,uVar5,*(undefined8 *)PTR_DAT_049e45a0),
          (uVar5 & 1) != 0)))) {
        fVar10 = -INFINITY;
      }
      else {
        uVar5 = *(ulong *)(lVar8 + 0x68);
        if (cRam0000000004f4a4e8 == '\0') {
          FUN_021f03f8(PTR_DAT_049bd288);
          cRam0000000004f4a4e8 = '\x01';
          if (uVar5 != 0) goto LAB_0320d1bc;
LAB_0320d1ec:
          uVar6 = 0;
        }
        else {
          if (uVar5 == 0) goto LAB_0320d1ec;
LAB_0320d1bc:
          uVar6 = System_String__GetRawStringData_2f7a1ac(uVar5,0);
          uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
        }
        if (cRam0000000004f4f69d == '\0') {
          FUN_021f03f8(PTR_DAT_049e45a0);
          FUN_021f03f8(PTR_DAT_049d9c90);
          cRam0000000004f4f69d = '\x01';
        }
        if ((iVar9 != (int)uVar5) ||
           ((iVar9 != 0 &&
            (uVar5 = FUN_02ecf90c(uVar4,uVar7,uVar6,uVar5,*(undefined8 *)PTR_DAT_049e45a0),
            (uVar5 & 1) == 0)))) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (*(long *)(lVar2 + 0x28) == lStack_58) {
            System_Number__ThrowOverflowOrFormatException_3109bf8(0,0);
          }
          goto LAB_0320d2bc;
        }
        fVar10 = NAN;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = System_Number__NumberBufferToDouble_310ce8c(adStack_e8 + 1,adStack_e8);
    if (((uVar5 & 1) == 0) || (fVar10 = (float)adStack_e8[0], ABS(fVar10) == INFINITY)) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(long *)(lVar2 + 0x28) != lStack_58) goto LAB_0320d2bc;
      System_Number__ThrowOverflowOrFormatException_3109bf8(1,*(undefined8 *)PTR_DAT_049edd48);
      goto LAB_0320d040;
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return fVar10;
  }
LAB_0320d2bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

