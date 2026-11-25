/* IL2CPP: CloudPrefsInt$$WriteTo
void CloudPrefsInt__WriteTo (CloudPrefsInt_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$WriteTo
   void CloudPrefsInt__WriteTo (CloudPrefsInt_o __this, ICloudPrefsStore_o* store, const MethodInfo*
   method); */

void CloudPrefsInt__WriteTo_24e9c00(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb5 = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsInt__HasValue_3f0dc08(&uStack_40,0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      if (param_2 == (long *)0x0) goto LAB_025e9ebc;
      lVar6 = *param_2;
      uVar8 = param_1[3];
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_025e9dcc;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,1);
LAB_025e9dcc:
      (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
    }
  }
  else {
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = PlayerPrefsInt__get_Value_3f0d974(&uStack_40,0);
    puVar1 = PTR_DAT_049c3da0;
    if (*(char *)(param_1 + 2) != '\0') {
      if (param_2 == (long *)0x0) goto LAB_025e9ebc;
      lVar6 = *param_2;
      uVar8 = param_1[3];
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025e9d64;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025e9d64:
      uVar4 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
      if ((uVar4 & 1) != 0) {
        lVar6 = *param_2;
        uVar8 = param_1[3];
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_025e9df0;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,4);
LAB_025e9df0:
        uVar3 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b8758);
        }
        uVar2 = System_Math__Max_30ff598(uVar2,uVar3,0);
      }
    }
    if (param_2 == (long *)0x0) {
LAB_025e9ebc:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *param_2;
    uVar8 = param_1[3];
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_025e9e94;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,5);
LAB_025e9e94:
    (*(code *)*puVar5)(param_2,uVar8,uVar2,puVar5[1]);
  }
  return;
}

