/* IL2CPP: CloudSaveConflict$$get_LocalLevel
int32_t CloudSaveConflict__get_LocalLevel (CloudSaveConflict_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$get_LocalLevel
   int32_t CloudSaveConflict__get_LocalLevel (CloudSaveConflict_o* __this, const MethodInfo*
   method); */

undefined8 CloudSaveConflict__get_LocalLevel_24eba0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x18);
  uVar2 = CloudSaveConflict__get_LevelKey_24eba28();
  if ((bRam0000000004f4bcd5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    bRam0000000004f4bcd5 = 1;
  }
  puVar1 = PTR_DAT_049c3da0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_025ebb08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c3da0,0);
LAB_025ebb08:
    uVar5 = (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_025ebb7c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)puVar1,4);
LAB_025ebb7c:
                    /* WARNING: Could not recover jumptable at 0x025ebb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      return uVar2;
    }
  }
  return 0;
}

