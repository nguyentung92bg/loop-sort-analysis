/* IL2CPP: AnalyticsModule$$LiveOpsPurchase
void AnalyticsModule__LiveOpsPurchase (AnalyticsModule_o* __this, int32_t liveOps, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$LiveOpsPurchase
   void AnalyticsModule__LiveOpsPurchase (AnalyticsModule_o* __this, int32_t liveOps,
   System_String_o* placement, const MethodInfo* method); */

void AnalyticsModule__LiveOpsPurchase_2540920(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bfbd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca4d8);
                    /* try { // try from 02640964 to 02740973 has its CatchHandler @ 02640490 */
    bRam0000000004f4bfbd = 1;
  }
                    /* try { // try from 02640974 to 02740983 has its CatchHandler @ 02640b64 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = Extensions__HasTracking_24e7838(param_2,0);
                    /* try { // try from 02640988 to 0274099b has its CatchHandler @ 02640b58 */
  if (((uVar2 & 1) == 0) || (plVar6 = *(long **)(param_1 + 0x10), plVar6 == (long *)0x0)) {
    return;
  }
  lVar4 = *plVar6;
                    /* try { // try from 0264099c to 02740b87 has its CatchHandler @ 02640490 */
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x18) * 0x10 + 0x138);
        goto LAB_026409fc;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca4d8,0x18);
LAB_026409fc:
                    /* WARNING: Could not recover jumptable at 0x02640a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,param_2,param_3,puVar3[1]);
  return;
}

