/* IL2CPP: AreaSheet$$GetCurrentArea
AreaSheet_Row_o* AreaSheet__GetCurrentArea (AreaSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetCurrentArea
   AreaSheet_Row_o* AreaSheet__GetCurrentArea (AreaSheet_o* __this, const MethodInfo* method); */

long AreaSheet__GetCurrentArea_2557950(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c0b9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c0b9 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
  if ((bRam0000000004f4c0ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb2e8);
    FUN_021f03f8(PTR_DAT_049cb2f0);
    bRam0000000004f4c0ba = 1;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049cb2e8) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02657a68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049cb2e8,0);
LAB_02657a68:
    puVar1 = PTR_DAT_049cb2f0;
    iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) break;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02657adc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,0);
LAB_02657adc:
      lVar4 = (*(code *)*puVar5)(plVar8,iVar3,puVar5[1]);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x24) <= iVar2 + 1) {
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

