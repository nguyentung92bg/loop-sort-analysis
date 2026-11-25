/* IL2CPP: NakamaCloudSaveProvider$$MarkDirty
void NakamaCloudSaveProvider__MarkDirty (NakamaCloudSaveProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$MarkDirty
   void NakamaCloudSaveProvider__MarkDirty (NakamaCloudSaveProvider_o* __this, const MethodInfo*
   method); */

void NakamaCloudSaveProvider__MarkDirty_22476e4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f49b52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5840);
    bRam0000000004f49b52 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049b5840) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x16) * 0x10 + 0x138);
        goto LAB_02347774;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b5840,0x16);
LAB_02347774:
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

