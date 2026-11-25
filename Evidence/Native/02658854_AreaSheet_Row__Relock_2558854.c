/* IL2CPP: AreaSheet.Row$$Relock
void AreaSheet_Row__Relock (AreaSheet_Row_o* __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row$$Relock
   void AreaSheet_Row__Relock (AreaSheet_Row_o* __this, ICloudPrefsStore_o* store, const MethodInfo*
   method); */

void AreaSheet_Row__Relock_2558854(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  CloudPrefsBool__Set_24eb1bc(param_1 + 0x38,0,0);
  puVar1 = PTR_DAT_049b52a8;
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((bRam0000000004f4bcce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0,param_2,0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bcce = 1;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsBool__HasValue_3f0e990(&uStack_40,0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (param_2 == (long *)0x0) goto LAB_025eb594;
      lVar6 = *param_2;
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_025eb4d4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,1);
LAB_025eb4d4:
      (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
    }
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_40,0);
    puVar1 = PTR_DAT_049c3da0;
    if (*(char *)(param_1 + 0x48) != '\0') {
      if (param_2 == (long *)0x0) goto LAB_025eb594;
      lVar6 = *param_2;
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025eb46c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025eb46c:
      uVar4 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
      if ((uVar4 & 1) != 0) {
        lVar6 = *param_2;
        uVar8 = *(undefined8 *)(param_1 + 0x50);
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_025eb4f8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,8);
LAB_025eb4f8:
        uVar3 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
        uVar2 = uVar2 | uVar3;
      }
    }
    if (param_2 == (long *)0x0) {
LAB_025eb594:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *param_2;
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_025eb56c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,9);
LAB_025eb56c:
    (*(code *)*puVar5)(param_2,uVar8,uVar2 & 1,puVar5[1]);
  }
  return;
}

