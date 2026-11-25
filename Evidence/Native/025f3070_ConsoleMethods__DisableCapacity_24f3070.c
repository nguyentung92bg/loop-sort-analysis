/* IL2CPP: ConsoleMethods$$DisableCapacity
void ConsoleMethods__DisableCapacity (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$DisableCapacity
   void ConsoleMethods__DisableCapacity (const MethodInfo* method); */

void ConsoleMethods__DisableCapacity_24f3070(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd03 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8288);
    bRam0000000004f4bd03 = 1;
  }
  puVar3 = PTR_DAT_049b52a8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c58;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c8288;
  PlayerPrefsBool__Set_3f0e92c(*(long *)(*(long *)puVar2 + 0xb8) + 0x180,1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b3c58;
  uVar4 = *(undefined8 *)puVar3;
  uVar7 = 0;
  if ((bRam0000000004f56b81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049ceff8);
    bRam0000000004f56b81 = 1;
    uVar7 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
    uVar7 = extraout_x1_00;
  }
  if (cRam0000000004f4c367 == '\0') {
    FUN_021f03f8(PTR_DAT_049b3c58,uVar7);
    cRam0000000004f4c367 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar2;
  }
  plVar10 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049ceff8) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_03cd0ccc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd0ccc:
                    /* WARNING: Could not recover jumptable at 0x03cd0ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar10,3,uVar4,puVar6[1]);
  return;
}

