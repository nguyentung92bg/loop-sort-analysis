/* IL2CPP: LevelFunnel$$Resolve
void LevelFunnel__Resolve (System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$Resolve
   void LevelFunnel__Resolve (System_Collections_Generic_Dictionary_string__string__o* args, const
   MethodInfo* method); */

void LevelFunnel__Resolve_2561ed8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar2 = PTR_DAT_049b6270;
  if ((bRam0000000004f4c133 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b6270);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049cba10);
    FUN_021f03f8(PTR_DAT_049cba18);
    FUN_021f03f8(PTR_DAT_049cba08);
    FUN_021f03f8(PTR_DAT_049bb3a0);
    FUN_021f03f8(PTR_DAT_049cba20);
    FUN_021f03f8(PTR_DAT_049cba28);
    FUN_021f03f8(PTR_DAT_049cba30);
    bRam0000000004f4c133 = 1;
  }
  puVar1 = PTR_DAT_049b3bd0;
  uVar12 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4c1f3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f4c1f3 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  *puVar7 = uVar12;
  thunk_FUN_021f190c(puVar7,uVar12);
  uVar12 = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  if (cRam0000000004f4c1f4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f4c1f4 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  *puVar7 = uVar12;
  thunk_FUN_021f190c(puVar7,uVar12);
  lVar6 = LevelFunnel__ReadConfig_256238c(param_1);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = System_String__Trim_2f8204c(*(long *)(lVar6 + 0x18),0);
  }
  uVar8 = System_String__IsNullOrEmpty_2f7c924(uVar12,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4c1f3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f4c1f3 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  *puVar7 = uVar12;
  thunk_FUN_021f190c(puVar7,uVar12);
  puVar5 = PTR_DAT_049cba08;
  puVar4 = PTR_DAT_049c60e8;
  puVar3 = PTR_DAT_049bb3a0;
  puVar1 = PTR_DAT_049b3b98;
  lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar6 == 0) {
LAB_02662388:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar8 = 0;
    uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
LAB_02662144:
    if (uVar8 < uVar10) {
      uVar13 = *(undefined8 *)(lVar6 + 0x20 + uVar8 * 8);
      uVar9 = System_String__Concat_2f7dbac
                        (*(undefined8 *)puVar5,uVar12,*(undefined8 *)puVar3,uVar13,0);
      uVar9 = UnityEngine_Resources__Load_object__26a73fc(uVar9,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar9,0,0);
      if ((uVar10 & 1) != 0) {
        uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar8) goto LAB_026621ac;
        goto LAB_02662144;
      }
      lVar6 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,5);
      if (lVar6 == 0) goto LAB_02662388;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_049cba18;
        thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x20));
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar12;
          thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x28),uVar12);
          if (2 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_049cba10;
            thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x30));
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar6 + 0x38) = uVar13;
              thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x38),uVar13);
              if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_02662384;
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_049cba20;
              thunk_FUN_021f190c();
              uVar12 = System_String__Concat_2f7dcb4(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                FUN_021f0574(*(long *)PTR_DAT_049b3c58);
              }
              puVar2 = PTR_DAT_049b3c58;
              uVar9 = 0;
              if ((bRam0000000004f56b85 & 1) == 0) {
                FUN_021f03f8(PTR_DAT_049b3c58,0);
                FUN_021f03f8(PTR_DAT_049ceff8);
                bRam0000000004f56b85 = 1;
                uVar9 = extraout_x1_01;
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                FUN_021f0574();
                uVar9 = extraout_x1_02;
              }
              if (cRam0000000004f4c367 == '\0') {
                FUN_021f03f8(PTR_DAT_049b3c58,uVar9);
                cRam0000000004f4c367 = '\x01';
              }
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                FUN_021f0574();
                lVar6 = *(long *)puVar2;
              }
              plVar14 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar6 = *plVar14;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 == 0) goto LAB_03cd12f8;
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_03cd12e0;
            }
          }
        }
      }
    }
LAB_02662384:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_026621ac:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4c1f4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f4c1f4 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  *puVar7 = uVar12;
  thunk_FUN_021f190c(puVar7,uVar12);
  uVar12 = System_String__Concat_2f7d424
                     (*(undefined8 *)PTR_DAT_049cba28,uVar12,*(undefined8 *)PTR_DAT_049cba30,0);
  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
  }
  puVar2 = PTR_DAT_049b3c58;
  uVar9 = 0;
  if ((bRam0000000004f56b81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049ceff8);
    bRam0000000004f56b81 = 1;
    uVar9 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
    uVar9 = extraout_x1_00;
  }
  if (cRam0000000004f4c367 == '\0') {
    FUN_021f03f8(PTR_DAT_049b3c58,uVar9);
    cRam0000000004f4c367 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  plVar14 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *plVar14;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049ceff8) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_03cd0ccc;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd0ccc:
                    /* WARNING: Could not recover jumptable at 0x03cd0ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar14,3,uVar12,puVar7[1]);
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_03cd12e0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049ceff8) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
      goto LAB_03cd1318;
    }
  }
LAB_03cd12f8:
  puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd1318:
                    /* WARNING: Could not recover jumptable at 0x03cd1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar14,0,uVar12,puVar7[1]);
  return;
}

