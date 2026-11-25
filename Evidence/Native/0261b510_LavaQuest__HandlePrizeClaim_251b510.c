/* IL2CPP: LavaQuest$$HandlePrizeClaim
void LavaQuest__HandlePrizeClaim (LavaQuest_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$HandlePrizeClaim
   void LavaQuest__HandlePrizeClaim (LavaQuest_o* __this, LavaQuestGame_o game, const MethodInfo*
   method); */

void LavaQuest__HandlePrizeClaim_251b510(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
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
  undefined4 uStack_34;
  
  if ((bRam0000000004f4be42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
                    /* try { // try from 0261b550 to 0271b5d7 has its CatchHandler @ 0261ba3c */
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c9558);
    bRam0000000004f4be42 = 1;
  }
  puVar3 = PTR_DAT_049c2ce8;
  puVar2 = PTR_DAT_049c2ce0;
  puVar1 = PTR_DAT_049b3c20;
  if (*(long *)(param_1 + 0x50) != 0) {
    FulfillModule__FulfillFreePayout_254358c
              (*(long *)(param_1 + 0x50),1,(double)(int)param_2[4],*(undefined8 *)PTR_DAT_049c9558,0
              );
    lVar7 = *(long *)(param_1 + 0x40);
    uStack_48 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,1);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_48,&uStack_50,*(undefined8 *)puVar3);
    uVar6 = uStack_48;
                    /* try { // try from 0261b5e4 to 0271b5ef has its CatchHandler @ 0261b964 */
    uStack_50 = 0;
    uStack_58 = CONCAT44(uStack_58._4_4_,*param_2);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_50,&uStack_58,*(undefined8 *)puVar1);
    uVar5 = uStack_50;
    uStack_58 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,param_2[4]);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_58,&uStack_60,*(undefined8 *)puVar1);
    uVar4 = uStack_58;
                    /* try { // try from 0261b61c to 0271b61f has its CatchHandler @ 0261b960 */
    uStack_60 = 0;
    uStack_34 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_60,&uStack_34,*(undefined8 *)puVar2);
                    /* try { // try from 0261b630 to 0271b64b has its CatchHandler @ 0261ba08 */
    if (lVar7 != 0) {
      uStack_98 = uVar5;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = uVar6;
      uStack_78 = uStack_60;
      uStack_70 = uVar4;
      uStack_68 = 0;
      AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar7,0xc,&uStack_98,0);
                    /* try { // try from 0261b660 to 0271b663 has its CatchHandler @ 0261b95c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

