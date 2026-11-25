/* IL2CPP: AnalyticsModule$$LiveOpsMilestoneCompleted
void AnalyticsModule__LiveOpsMilestoneCompleted (AnalyticsModule_o* __this, int32_t liveOps, LiveOpsMilestoneArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$LiveOpsMilestoneCompleted
   void AnalyticsModule__LiveOpsMilestoneCompleted (AnalyticsModule_o* __this, int32_t liveOps,
   LiveOpsMilestoneArgs_o args, const MethodInfo* method); */

void AnalyticsModule__LiveOpsMilestoneCompleted_2540658
               (long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bfbb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca4d8);
    FUN_021f03f8(PTR_DAT_049ca538);
    bRam0000000004f4bfbb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = Extensions__HasTracking_24e7838(param_2,0);
  if ((uVar2 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar9 = param_3[1];
      uVar8 = *param_3;
      uVar11 = param_3[3];
      uVar10 = param_3[2];
      uVar13 = param_3[5];
      uVar12 = param_3[4];
      lVar4 = *plVar7;
      uVar6 = param_3[6];
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x16) * 0x10 + 0x138);
            goto LAB_0264074c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca4d8,0x16);
LAB_0264074c:
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar10;
      uStack_58 = uVar11;
      uStack_50 = uVar12;
      uStack_48 = uVar13;
      uStack_40 = uVar6;
      (*(code *)*puVar3)(plVar7,param_2,&uStack_70,puVar3[1]);
    }
    plVar7 = *(long **)(param_1 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca538) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_026407dc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca538,0);
LAB_026407dc:
    (*(code *)*puVar3)(plVar7,param_2,puVar3[1]);
  }
  return;
}

