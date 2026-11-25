/* IL2CPP: CloudSaveConflict$$ReadInt
int32_t CloudSaveConflict__ReadInt (ICloudPrefsStore_o* store, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$ReadInt
   int32_t CloudSaveConflict__ReadInt (ICloudPrefsStore_o* store, System_String_o* key, const
   MethodInfo* method); */

undefined8 CloudSaveConflict__ReadInt_24eba80(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000004f4bcd5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    bRam0000000004f4bcd5 = 1;
  }
  puVar1 = PTR_DAT_049c3da0;
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_025ebb08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(param_1,*(long *)PTR_DAT_049c3da0,0);
LAB_025ebb08:
    uVar5 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      lVar4 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_025ebb7c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02229a4c(param_1,*(long *)puVar1,4);
LAB_025ebb7c:
                    /* WARNING: Could not recover jumptable at 0x025ebb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
      return uVar3;
    }
  }
  return 0;
}

