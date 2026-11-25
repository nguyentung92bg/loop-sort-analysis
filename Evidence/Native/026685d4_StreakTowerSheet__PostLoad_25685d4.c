/* IL2CPP: StreakTowerSheet$$PostLoad
void StreakTowerSheet__PostLoad (StreakTowerSheet_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02668874) */
/* IL2CPP: StreakTowerSheet$$PostLoad
   void StreakTowerSheet__PostLoad (StreakTowerSheet_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void StreakTowerSheet__PostLoad_25685d4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_049cbd48;
  if ((bRam0000000004f4c17b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbd50);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cbd58);
    FUN_021f03f8(PTR_DAT_049cbd60);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049cbd48);
    bRam0000000004f4c17b = 1;
  }
  Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___PostLoad_2987db4
            (param_1,param_2,*(undefined8 *)puVar2);
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049cbd58) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_026686c0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049cbd58,0);
LAB_026686c0:
  plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  puVar3 = PTR_DAT_049cbd60;
  puVar2 = PTR_DAT_049b4360;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0266873c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)puVar2,0);
LAB_0266873c:
    uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_02668828;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026687a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)puVar3,0);
LAB_026687a0:
    lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    uVar4 = StreakTowerSheet__GetStageMilestone_25688d0(param_1,lVar6);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(lVar6 + 0x50) = uVar4;
    *(int *)(param_1 + 0x48) = *(int *)(lVar6 + 0x18) + iVar1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02668844;
    }
  }
LAB_02668828:
  puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b3cc8,0);
LAB_02668844:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  return;
}

