/* IL2CPP: CloudPrefsInt$$ReadFrom
void CloudPrefsInt__ReadFrom (CloudPrefsInt_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$ReadFrom
   void CloudPrefsInt__ReadFrom (CloudPrefsInt_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsInt__ReadFrom_24e9ec0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bcb6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb6 = 1;
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
        goto LAB_025e9f74;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025e9f74:
  uVar6 = (*(code *)*puVar4)(param_2,uVar8,puVar4[1]);
  if ((uVar6 & 1) != 0) {
    lVar5 = *param_2;
    uVar8 = param_1[3];
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_025e9fdc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,4);
LAB_025e9fdc:
    uVar2 = (*(code *)*puVar4)(param_2,uVar8,puVar4[1]);
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (*(char *)(param_1 + 2) != '\0') {
      uStack_48 = param_1[1];
      uStack_50 = *param_1;
      if (*(int *)(*(long *)PTR_DAT_049c5aa8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = PlayerPrefsInt__get_Value_3f0d974(&uStack_50,0);
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b8758);
      }
      uVar2 = System_Math__Max_30ff598(uVar3,uVar2,0);
    }
    if (*(int *)(*(long *)PTR_DAT_049c5aa8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsInt__Set_3f0dba4(&uStack_40,uVar2,0);
  }
  return;
}

