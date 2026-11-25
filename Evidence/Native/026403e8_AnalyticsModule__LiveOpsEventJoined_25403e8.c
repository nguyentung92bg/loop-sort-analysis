/* IL2CPP: AnalyticsModule$$LiveOpsEventJoined
void AnalyticsModule__LiveOpsEventJoined (AnalyticsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$LiveOpsEventJoined
   void AnalyticsModule__LiveOpsEventJoined (AnalyticsModule_o* __this, int32_t liveOps, const
   MethodInfo* method); */

void AnalyticsModule__LiveOpsEventJoined_25403e8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bfb9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca4d8);
    FUN_021f03f8(PTR_DAT_049ca530);
    bRam0000000004f4bfb9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = Extensions__HasTracking_24e7838(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
          goto LAB_026404cc;
        }
                    /* try { // try from 02640490 to 027408f7 has its CatchHandler @ 02640490
                       catch() { ... } // from try @ 02640490 with catch @ 02640490
                       catch() { ... } // from try @ 02640964 with catch @ 02640490
                       catch() { ... } // from try @ 0264099c with catch @ 02640490
                       catch() { ... } // from try @ 02640b8c with catch @ 02640490
                       catch() { ... } // from try @ 02640bb0 with catch @ 02640490 */
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca4d8,0x14);
LAB_026404cc:
    (*(code *)*puVar3)(plVar6,param_2,puVar3[1]);
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar6;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca530) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0264053c;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca530,0);
LAB_0264053c:
                    /* WARNING: Could not recover jumptable at 0x02640554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,param_2,puVar3[1]);
  return;
}

