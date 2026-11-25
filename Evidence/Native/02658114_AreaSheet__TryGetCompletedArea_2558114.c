/* IL2CPP: AreaSheet$$TryGetCompletedArea
bool AreaSheet__TryGetCompletedArea (AreaSheet_o* __this, int32_t level, AreaSheet_Row_o** data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026583dc) */
/* IL2CPP: AreaSheet$$TryGetCompletedArea
   bool AreaSheet__TryGetCompletedArea (AreaSheet_o* __this, int32_t level, AreaSheet_Row_o** data,
   const MethodInfo* method); */

undefined4 AreaSheet__TryGetCompletedArea_2558114(long param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  long *plVar8;
  int iVar9;
  
  if ((bRam0000000004f4c0c0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cb368);
    FUN_021f03f8(PTR_DAT_049cb370);
    FUN_021f03f8(PTR_DAT_049b4360);
    bRam0000000004f4c0c0 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cb368) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_026581e0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049cb368,0);
LAB_026581e0:
  plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
  puVar2 = PTR_DAT_049cb370;
  puVar1 = PTR_DAT_049b4360;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0265825c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,0);
LAB_0265825c:
    uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      iVar9 = 5;
      goto LAB_02658328;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_026582c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar2,0);
LAB_026582c0:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  } while ((*(int *)(lVar4 + 0x24) != param_2) ||
          (uVar5 = CloudPrefsBool__get_Value_24eb0d0(lVar4 + 0x38,0), (uVar5 & 1) != 0));
  *param_3 = lVar4;
  thunk_FUN_021f190c(param_3,lVar4);
  uVar7 = 1;
  iVar9 = 4;
LAB_02658328:
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02658388;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b3cc8,0);
LAB_02658388:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  if ((iVar9 == 5) || (iVar9 == 0)) {
    *param_3 = 0;
    thunk_FUN_021f190c(param_3,0);
    uVar7 = 0;
  }
  return uVar7;
}

