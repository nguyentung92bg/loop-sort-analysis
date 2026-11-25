/* IL2CPP: NakamaCloudSaveProvider$$get_UserId
System_String_o* NakamaCloudSaveProvider__get_UserId (NakamaCloudSaveProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$get_UserId
   System_String_o* NakamaCloudSaveProvider__get_UserId (NakamaCloudSaveProvider_o* __this, const
   MethodInfo* method); */

void NakamaCloudSaveProvider__get_UserId_22471a8(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plStack_18;
  
  if ((bRam0000000004f49b4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5578);
    bRam0000000004f49b4b = 1;
  }
  plStack_18 = (long *)0x0;
  uVar2 = NakamaServices__TryGetApi_2243784(&plStack_18);
  plVar1 = plStack_18;
  if ((uVar2 & 1) != 0) {
    if (plStack_18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0);
    }
    lVar4 = *plStack_18;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_02347248;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plStack_18,*(long *)PTR_DAT_049b5578,5);
LAB_02347248:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  }
  return;
}

