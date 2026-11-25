/* IL2CPP: LavaQuest$$JoinGame
void LavaQuest__JoinGame (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$JoinGame
   void LavaQuest__JoinGame (LavaQuest_o* __this, const MethodInfo* method); */

void LavaQuest__JoinGame_251abf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 0261abf8 to 0271ac13 has its CatchHandler @ 0261b980 */
  if ((bRam0000000004f4be3d & 1) == 0) {
                    /* try { // try from 0261ac1c to 0271ac23 has its CatchHandler @ 0261b97c */
    FUN_021f03f8(PTR_DAT_049c4fd8);
                    /* try { // try from 0261ac2c to 0271ac33 has its CatchHandler @ 0261b978 */
    FUN_021f03f8(PTR_DAT_049c9540);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0261ac40 to 0271ac4b has its CatchHandler @ 0261b8fc */
    bRam0000000004f4be3d = 1;
  }
  puVar3 = PTR_DAT_049c9540;
  puVar2 = PTR_DAT_049c4fd8;
  LavaQuest__GetNewGame_251acdc(&uStack_48,param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
                    /* try { // try from 0261ac78 to 0271ac7b has its CatchHandler @ 0261b8f8 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (*(long *)(lVar4 + 0xb8) + 0x670,*(undefined8 *)puVar2);
                    /* try { // try from 0261ac8c to 0271acab has its CatchHandler @ 0261b94c */
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x628,&uStack_60,*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 0261acc0 to 0271acc3 has its CatchHandler @ 0261b8f4 */
    LiveOpsModule__Join_25475e0(*(long *)(param_1 + 0x30),0xc,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

