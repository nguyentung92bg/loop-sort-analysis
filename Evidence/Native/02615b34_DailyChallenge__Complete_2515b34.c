/* IL2CPP: DailyChallenge$$Complete
void DailyChallenge__Complete (DailyChallenge_o* __this, System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$Complete
   void DailyChallenge__Complete (DailyChallenge_o* __this, System_DateTime_o date, const
   MethodInfo* method); */

void DailyChallenge__Complete_2515b34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined2 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049b5310;
  uStack_40 = param_2;
  if ((bRam0000000004f4be17 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b3c20);
                    /* try { // try from 02615b7c to 02715b87 has its CatchHandler @ 02616884 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be17 = 1;
  }
  puVar2 = PTR_DAT_049b5fb0;
  DailyChallenge__SetMonth_2515d10(param_2);
  uVar3 = DailyChallenge__GetCompletedDays_25168ec();
  lVar6 = *(long *)puVar1;
                    /* try { // try from 02615bac to 02715bc7 has its CatchHandler @ 026168e4 */
  iVar5 = *(int *)(lVar6 + 0xe4);
  uVar4 = CONCAT13(POPCOUNT((char)((uint)uVar3 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((uint)uVar3 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((uint)uVar3 >> 8)),POPCOUNT((char)uVar3))));
  uVar7 = NEON_uaddlv((ulong)uVar4,1);
  *(uint *)(param_1 + 0x5c) = CONCAT22((short)(uVar4 >> 0x10),uVar7);
  if (iVar5 == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049b3c20;
  lVar6 = *(long *)(lVar6 + 0xb8);
                    /* try { // try from 02615bdc to 02715be7 has its CatchHandler @ 026168e0 */
  uVar4 = CloudPrefsInt__get_Value_24e99c0(lVar6 + 0x8d8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
                    /* try { // try from 02615c00 to 02715c03 has its CatchHandler @ 026168d8 */
  iVar5 = System_DateTime__get_Day_30dd524(&uStack_40,0);
                    /* try { // try from 02615c08 to 02715c13 has its CatchHandler @ 026168d4 */
  CloudPrefsInt__set_Value_24e9a2c(lVar6 + 0x8d8,1 << (ulong)(iVar5 - 1U & 0x1f) | uVar4,0);
  lVar6 = *(long *)(param_1 + 0x48);
                    /* try { // try from 02615c28 to 02715c2b has its CatchHandler @ 02616880 */
  uVar3 = DailyChallenge__GetCompletedDays_25168ec();
                    /* try { // try from 02615c30 to 02715c3b has its CatchHandler @ 026168d0 */
  uStack_48 = 0;
  uVar4 = CONCAT13(POPCOUNT((char)((uint)uVar3 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((uint)uVar3 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((uint)uVar3 >> 8)),POPCOUNT((char)uVar3))));
  uVar7 = NEON_uaddlv((ulong)uVar4,1);
  uStack_34 = CONCAT22((short)(uVar4 >> 0x10),uVar7);
                    /* try { // try from 02615c4c to 02715cdb has its CatchHandler @ 02616964 */
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_48,&uStack_34,*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    uStack_80 = uStack_48;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar6,0x1c,&uStack_80,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

