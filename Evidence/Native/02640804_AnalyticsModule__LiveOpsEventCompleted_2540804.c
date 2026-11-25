/* IL2CPP: AnalyticsModule$$LiveOpsEventCompleted
void AnalyticsModule__LiveOpsEventCompleted (AnalyticsModule_o* __this, int32_t liveOps, LiveOpsEventCompletedArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$LiveOpsEventCompleted
   void AnalyticsModule__LiveOpsEventCompleted (AnalyticsModule_o* __this, int32_t liveOps,
   LiveOpsEventCompletedArgs_o args, const MethodInfo* method); */

void AnalyticsModule__LiveOpsEventCompleted_2540804
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bfbc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfbc = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = Extensions__HasTracking_24e7838(param_2,0);
  if (((uVar2 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0x10), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar9 = param_3[1];
    uVar8 = *param_3;
    uVar11 = param_3[3];
    uVar10 = param_3[2];
    uVar6 = param_3[4];
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
          goto LAB_026408e4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca4d8,0x17);
LAB_026408e4:
                    /* try { // try from 026408f8 to 027408ff has its CatchHandler @ 02640b68 */
    uStack_60 = uVar8;
    uStack_58 = uVar9;
    uStack_50 = uVar10;
    uStack_48 = uVar11;
    uStack_40 = uVar6;
    (*(code *)*puVar3)(plVar7,param_2,&uStack_60,puVar3[1]);
  }
                    /* try { // try from 02640918 to 02740963 has its CatchHandler @ 02640b6c */
  return;
}

