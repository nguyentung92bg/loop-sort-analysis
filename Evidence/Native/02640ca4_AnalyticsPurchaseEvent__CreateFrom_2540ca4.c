/* IL2CPP: AnalyticsPurchaseEvent$$CreateFrom
AnalyticsPurchaseEvent_o AnalyticsPurchaseEvent__CreateFrom (PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsPurchaseEvent$$CreateFrom
   AnalyticsPurchaseEvent_o AnalyticsPurchaseEvent__CreateFrom (PurchaseRequest_o request, const
   MethodInfo* method); */

void AnalyticsPurchaseEvent__CreateFrom_2540ca4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar3 = PTR_DAT_049b4ec0;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4bfc1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4ec0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4e50);
    FUN_021f03f8(PTR_DAT_049ca540);
    bRam0000000004f4bfc1 = 1;
  }
  lVar7 = param_2[5];
  lVar1 = param_2[6];
  lVar8 = param_2[3];
  lStack_70 = 0;
  uStack_68 = 0;
                    /* try { // try from 02640d38 to 02740d3f has its CatchHandler @ 02640fa8 */
  uStack_60 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  System_Decimal___ctor_315a5c4(&uStack_68,100,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02640d58 to 02740da3 has its CatchHandler @ 02640fac */
  puVar4 = PTR_DAT_049b5310;
  auVar9 = System_Decimal__op_Multiply_315f04c(lVar7,lVar1,uStack_68,uStack_60,0);
  uVar5 = System_Decimal__op_Explicit_315ec78(auVar9._0_8_,auVar9._8_8_,0);
  puVar3 = PTR_DAT_049b3bd0;
                    /* try { // try from 02640da4 to 02740dc3 has its CatchHandler @ 02640bc4 */
  if ((*param_2 == 0) ||
     (lVar7 = System_String__Replace_2f7fb18
                        (*param_2,*(undefined8 *)PTR_DAT_049ca540,
                         **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0), lVar7 == 0
     )) {
                    /* try { // try from 02640dc4 to 02740dd3 has its CatchHandler @ 02640fa4 */
    lVar7 = **(long **)(*(long *)(puVar3 + 0x90) + 0xb8);
  }
  puVar3 = PTR_DAT_049b4e50;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a0 = lVar8;
  thunk_FUN_021f190c(&lStack_a0,lVar8);
  lStack_90 = *param_2;
  uStack_98 = CONCAT44(uVar5,(int)param_2[4]);
  thunk_FUN_021f190c(&lStack_90);
  lStack_88 = lVar7;
  thunk_FUN_021f190c(&lStack_88,lVar7);
  lStack_80 = param_2[2];
                    /* try { // try from 02640e2c to 02740e37 has its CatchHandler @ 02640fa0 */
  thunk_FUN_021f190c(&lStack_80);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
                    /* try { // try from 02640e44 to 02740e4f has its CatchHandler @ 02640f98 */
    lVar7 = *(long *)puVar4;
  }
  iVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x60,0);
  lStack_70 = *(long *)puVar3;
                    /* try { // try from 02640e5c to 02740e67 has its CatchHandler @ 02640f9c */
  lStack_78 = CONCAT44(lStack_78._4_4_,iVar6 + 1);
  thunk_FUN_021f190c(&lStack_70);
                    /* try { // try from 02640e74 to 02740e7f has its CatchHandler @ 02640f94 */
  param_1[5] = lStack_78;
  param_1[4] = lStack_80;
  param_1[1] = uStack_98;
  *param_1 = lStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = lStack_90;
  param_1[6] = lStack_70;
                    /* try { // try from 02640e94 to 02740e9f has its CatchHandler @ 02640f8c */
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* try { // try from 02640ea0 to 02740f7b has its CatchHandler @ 02640bc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

