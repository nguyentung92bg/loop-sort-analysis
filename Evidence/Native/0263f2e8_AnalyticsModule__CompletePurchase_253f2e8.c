/* IL2CPP: AnalyticsModule$$CompletePurchase
void AnalyticsModule__CompletePurchase (AnalyticsModule_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$CompletePurchase
   void AnalyticsModule__CompletePurchase (AnalyticsModule_o* __this, AnalyticsPurchaseEvent_o args,
   const MethodInfo* method); */

void AnalyticsModule__CompletePurchase_253f2e8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
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
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 0263f2f8 to 0273f2ff has its CatchHandler @ 0263fde4 */
                    /* try { // try from 0263f300 to 0273f313 has its CatchHandler @ 0263fe34 */
  if ((bRam0000000004f4bfaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
                    /* try { // try from 0263f324 to 0273f32b has its CatchHandler @ 0263fde0 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bfaa = 1;
  }
                    /* try { // try from 0263f334 to 0273f33b has its CatchHandler @ 0263fe30 */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  CloudPrefsBool__Set_24eb1bc(*(long *)(lVar2 + 0xb8) + 0x328,1,0);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    uVar13 = param_2[5];
    uVar12 = param_2[4];
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    uVar6 = param_2[6];
                    /* try { // try from 0263f37c to 0273f3a3 has its CatchHandler @ 0263fe2c */
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 10) * 0x10 + 0x138);
          goto LAB_0263f3d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca4d8,10);
LAB_0263f3d4:
    uStack_70 = uVar8;
    uStack_68 = uVar9;
    uStack_60 = uVar10;
    uStack_58 = uVar11;
    uStack_50 = uVar12;
    uStack_48 = uVar13;
    uStack_40 = uVar6;
    (*(code *)*puVar3)(plVar7,&uStack_70,puVar3[1]);
  }
                    /* try { // try from 0263f40c to 0273f433 has its CatchHandler @ 0263fe70 */
  return;
}

