/* IL2CPP: DailyRewards$$ClaimReward
void DailyRewards__ClaimReward (DailyRewards_o* __this, RewardInfo_o reward, bool isDoubled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewards$$ClaimReward
   void DailyRewards__ClaimReward (DailyRewards_o* __this, RewardInfo_o reward, bool isDoubled,
   const MethodInfo* method); */

void DailyRewards__ClaimReward_2517be4(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_88;
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
  
  iVar6 = (int)(param_2 >> 0x20);
  if ((bRam0000000004f4be28 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
                    /* try { // try from 02617c20 to 02717c27 has its CatchHandler @ 02617e3c */
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
                    /* try { // try from 02617c3c to 02717c3f has its CatchHandler @ 02617e2c */
    FUN_021f03f8(PTR_DAT_049c7d30);
    bRam0000000004f4be28 = 1;
  }
                    /* try { // try from 02617c48 to 02717c4f has its CatchHandler @ 02617e44 */
  lVar5 = *(long *)(param_1 + 0x20);
  if ((param_3 & 1) == 0) {
    if (lVar5 == 0) goto LAB_02617d4c;
                    /* try { // try from 02617c84 to 02717d0b has its CatchHandler @ 02617e78 */
    FulfillModule__FulfillFreePayout_254358c
              (lVar5,param_2 & 0xffffffff,(double)iVar6,*(undefined8 *)PTR_DAT_049c7d30,0);
  }
  else {
    if (lVar5 == 0) goto LAB_02617d4c;
    iVar6 = iVar6 << 1;
                    /* try { // try from 02617c68 to 02717c73 has its CatchHandler @ 02617e7c */
    FulfillModule__FulfillRewardedPayout_2543594
              (lVar5,param_2 & 0xffffffff,(double)iVar6,*(undefined8 *)PTR_DAT_049c7d30,0);
  }
  puVar2 = PTR_DAT_049c2ce0;
  puVar1 = PTR_DAT_049b3c20;
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_40 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,(int)param_2);
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_40,&uStack_48,*(undefined8 *)PTR_DAT_049c2ce8);
  uVar4 = uStack_40;
  uStack_48 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_48,&uStack_50,*(undefined8 *)puVar1);
  uVar3 = uStack_48;
  uStack_50 = 0;
  uStack_34 = 0;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_50,&uStack_34,*(undefined8 *)puVar2);
  if (lVar5 != 0) {
                    /* try { // try from 02617d10 to 02717d17 has its CatchHandler @ 02617e60 */
                    /* try { // try from 02617d18 to 02717ddb has its CatchHandler @ 02617a24 */
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = uVar4;
    uStack_68 = uStack_50;
    uStack_60 = uVar3;
    uStack_58 = 0;
    AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar5,0xd,&uStack_88,0);
    return;
  }
LAB_02617d4c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

