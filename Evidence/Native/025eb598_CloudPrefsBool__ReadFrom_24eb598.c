/* IL2CPP: CloudPrefsBool$$ReadFrom
void CloudPrefsBool__ReadFrom (CloudPrefsBool_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$ReadFrom
   void CloudPrefsBool__ReadFrom (CloudPrefsBool_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsBool__ReadFrom_24eb598(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bccf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bccf = 1;
  }
  puVar1 = PTR_DAT_049c3da0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *param_2;
  uVar8 = param_1[3];
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_025eb640;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025eb640:
  uVar6 = (*(code *)*puVar4)(param_2,uVar8,puVar4[1]);
  if ((uVar6 & 1) != 0) {
    lVar5 = *param_2;
    uVar8 = param_1[3];
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_025eb6a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,8);
LAB_025eb6a8:
    uVar2 = (*(code *)*puVar4)(param_2,uVar8,puVar4[1]);
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (*(char *)(param_1 + 2) != '\0') {
      uStack_48 = param_1[1];
      uStack_50 = *param_1;
      if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_50,0);
      uVar2 = uVar2 | uVar3;
    }
    if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsBool__Set_3f0e92c(&uStack_40,uVar2 & 1,0);
  }
  return;
}

