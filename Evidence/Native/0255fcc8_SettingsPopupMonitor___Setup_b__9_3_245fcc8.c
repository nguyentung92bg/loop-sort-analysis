/* IL2CPP: SettingsPopupMonitor$$<Setup>b__9_3
void SettingsPopupMonitor___Setup_b__9_3 (SettingsPopupMonitor_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$<Setup>b__9_3
   void SettingsPopupMonitor___Setup_b__9_3 (SettingsPopupMonitor_o* __this, bool isActive, const
   MethodInfo* method); */

void SettingsPopupMonitor___Setup_b__9_3_245fcc8(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_049b52a8;
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  param_2 = param_2 & 1;
  if ((bRam0000000004f4bf7c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca378,param_2,0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf7c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(lVar2 + 0x78,param_2,0);
  plVar6 = *(long **)(lVar2 + 0x30);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca378) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02639f78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca378,0);
LAB_02639f78:
                    /* WARNING: Could not recover jumptable at 0x02639f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,param_2,puVar3[1]);
  return;
}

