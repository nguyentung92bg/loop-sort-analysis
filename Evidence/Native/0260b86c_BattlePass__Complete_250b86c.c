/* IL2CPP: BattlePass$$Complete
void BattlePass__Complete (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$Complete
   void BattlePass__Complete (BattlePass_o* __this, const MethodInfo* method); */

void BattlePass__Complete_250b86c(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
                    /* try { // try from 0260b880 to 0270b88b has its CatchHandler @ 0260bb68 */
  if ((bRam0000000004f4bdcb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c90f8);
                    /* try { // try from 0260b898 to 0270b8a7 has its CatchHandler @ 0260bb64 */
    FUN_021f03f8(PTR_DAT_049c9100);
    FUN_021f03f8(PTR_DAT_049c9108);
                    /* try { // try from 0260b8b4 to 0270b8cb has its CatchHandler @ 0260bb70 */
    FUN_021f03f8(PTR_DAT_049c9110);
    bRam0000000004f4bdcb = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
                    /* try { // try from 0260b8d4 to 0270b8e3 has its CatchHandler @ 0260bb58 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  LiveOpsBase__Complete_2521cec(param_1,0);
  puVar4 = PTR_DAT_049c9108;
  puVar3 = PTR_DAT_049c9100;
  puVar2 = PTR_DAT_049c90f8;
  auVar1._8_8_ = auStack_40._8_8_;
  auVar1._0_8_ = auStack_40._0_8_;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), auStack_40 = auVar1, lVar5 != 0)) {
                    /* try { // try from 0260b8ec to 0270b903 has its CatchHandler @ 0260bb6c */
                    /* try { // try from 0260b904 to 0270b91f has its CatchHandler @ 0260bb44 */
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar5,*(undefined8 *)PTR_DAT_049c9110);
    puStack_68 = auStack_40;
    uStack_70 = 0;
    while (uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                             (auStack_40,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
                    /* try { // try from 0260b938 to 0270b93b has its CatchHandler @ 0260bb28 */
      lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_40,*(undefined8 *)puVar4);
                    /* try { // try from 0260b940 to 0270b953 has its CatchHandler @ 0260bb40 */
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_58 = *(undefined8 *)(lVar5 + 0x48);
      uStack_60 = *(undefined8 *)(lVar5 + 0x40);
      uStack_48 = *(undefined8 *)(lVar5 + 0x58);
      uStack_50 = *(undefined8 *)(lVar5 + 0x50);
                    /* try { // try from 0260b954 to 0270b963 has its CatchHandler @ 0260bb3c */
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      uStack_48 = *(undefined8 *)(lVar5 + 0x78);
      uStack_50 = *(undefined8 *)(lVar5 + 0x70);
                    /* try { // try from 0260b968 to 0270b973 has its CatchHandler @ 0260bb38 */
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
    }
                    /* try { // try from 0260b974 to 0270b987 has its CatchHandler @ 0260bb34 */
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_40,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 0260b988 to 0270b99b has its CatchHandler @ 0260bb30 */
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0x28;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_94 = 0;
      uStack_9c = 0;
      uStack_84 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      EconomyModule__Set_2524e30(*(long *)(param_1 + 0x18),&uStack_c0,0);
                    /* try { // try from 0260b9b8 to 0270b9bb has its CatchHandler @ 0260bb24 */
      CloudPrefsBool__DeleteValue_24eb2a8(param_1 + 0x68,0);
                    /* try { // try from 0260b9c0 to 0270b9cb has its CatchHandler @ 0260bb2c */
      CloudPrefsInt__DeleteValue_24e9b94(param_1 + 0xa8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0260b9e0 to 0270ba93 has its CatchHandler @ 0260bb60 */
  FUN_021f06a0();
}

