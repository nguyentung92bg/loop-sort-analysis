/* IL2CPP: DailyChallenge$$Finish
void DailyChallenge__Finish (DailyChallenge_o* __this, bool isWin, System_DateTime_o date, int32_t theme, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$Finish
   void DailyChallenge__Finish (DailyChallenge_o* __this, bool isWin, System_DateTime_o date,
   int32_t theme, const MethodInfo* method); */

void DailyChallenge__Finish_2515994
               (long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_34;
  
                    /* try { // try from 026159a0 to 027159a3 has its CatchHandler @ 026168f0 */
                    /* try { // try from 026159a8 to 027159b3 has its CatchHandler @ 026168ec */
  if ((bRam0000000004f4be14 & 1) == 0) {
                    /* try { // try from 026159c8 to 027159cb has its CatchHandler @ 02616888 */
    FUN_021f03f8(PTR_DAT_049b3c20);
                    /* try { // try from 026159d0 to 027159db has its CatchHandler @ 026168e8 */
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
                    /* try { // try from 026159ec to 02715a9b has its CatchHandler @ 0261698c */
    FUN_021f03f8(PTR_DAT_049c7d60);
    bRam0000000004f4be14 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  DailyChallenge__Complete_2515b34(param_1,param_3);
  iVar5 = DailyChallenge__GetReward_2515c98(param_1,param_4);
  if (*(long *)(param_1 + 0x30) != 0) {
    FulfillModule__FulfillFreePayout_254358c
              (*(long *)(param_1 + 0x30),1,(double)iVar5,*(undefined8 *)PTR_DAT_049c7d60,0);
    lVar7 = *(long *)(param_1 + 0x48);
    uVar6 = DailyChallenge__GetCompletedDays_25168ec();
    puVar1 = PTR_DAT_049b3c20;
    uStack_48 = 0;
    uVar9 = CONCAT13(POPCOUNT((char)((uint)uVar6 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)uVar6 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)uVar6 >> 8)),POPCOUNT((char)uVar6))));
    uVar8 = NEON_uaddlv((ulong)uVar9,1);
    uStack_50 = CONCAT44(uStack_50._4_4_,CONCAT22((short)(uVar9 >> 0x10),uVar8));
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_48,&uStack_50,*(undefined8 *)PTR_DAT_049b3c20);
    uVar4 = uStack_48;
    uStack_50 = 0;
    uStack_58 = CONCAT44(uStack_58._4_4_,1);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_50,&uStack_58,*(undefined8 *)PTR_DAT_049c2ce8);
    uVar3 = uStack_50;
                    /* try { // try from 02615aac to 02715b57 has its CatchHandler @ 02616d60 */
    uStack_58 = 0;
    uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_58,&uStack_60,*(undefined8 *)PTR_DAT_049c2ce0);
    uVar2 = uStack_58;
    uStack_60 = 0;
    iStack_34 = iVar5;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_60,&iStack_34,*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      uStack_98 = uVar4;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = uVar3;
      uStack_78 = uVar2;
      uStack_70 = uStack_60;
      uStack_68 = 0;
      AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar7,0x1c,&uStack_98,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

