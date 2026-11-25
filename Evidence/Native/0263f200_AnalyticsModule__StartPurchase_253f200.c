/* IL2CPP: AnalyticsModule$$StartPurchase
void AnalyticsModule__StartPurchase (AnalyticsModule_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$StartPurchase
   void AnalyticsModule__StartPurchase (AnalyticsModule_o* __this, AnalyticsPurchaseEvent_o args,
   const MethodInfo* method); */

void AnalyticsModule__StartPurchase_253f200(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4bfa9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfa9 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uVar5 = param_2[6];
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_0263f2ac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca4d8,9);
LAB_0263f2ac:
    uStack_60 = uVar7;
    uStack_58 = uVar8;
    uStack_50 = uVar9;
    uStack_48 = uVar10;
    uStack_40 = uVar11;
    uStack_38 = uVar12;
    uStack_30 = uVar5;
    (*(code *)*puVar1)(plVar6,&uStack_60,puVar1[1]);
  }
                    /* try { // try from 0263f2e0 to 0273f2f3 has its CatchHandler @ 0263fe38 */
  return;
}

