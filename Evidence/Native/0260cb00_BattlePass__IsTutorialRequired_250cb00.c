/* IL2CPP: BattlePass$$IsTutorialRequired
bool BattlePass__IsTutorialRequired (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$IsTutorialRequired
   bool BattlePass__IsTutorialRequired (BattlePass_o* __this, const MethodInfo* method); */

uint BattlePass__IsTutorialRequired_250cb00(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
                    /* try { // try from 0260cb08 to 0270cb13 has its CatchHandler @ 0260cc84 */
  if ((bRam0000000004f4bdd6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c68);
    bRam0000000004f4bdd6 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x88), lVar3 != 0)) {
                    /* try { // try from 0260cb44 to 0270cb57 has its CatchHandler @ 0260cc94 */
    uStack_14 = 10;
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar3,&uStack_14,*(undefined8 *)PTR_DAT_049c2c68);
    if (lVar3 != 0) {
                    /* try { // try from 0260cb60 to 0270cb67 has its CatchHandler @ 0260cca4 */
      uStack_38 = *(undefined8 *)(lVar3 + 0xd0);
      uStack_40 = *(undefined8 *)(lVar3 + 200);
      uStack_28 = *(undefined8 *)(lVar3 + 0xe0);
      uStack_30 = *(undefined8 *)(lVar3 + 0xd8);
                    /* try { // try from 0260cb6c to 0270cb7b has its CatchHandler @ 0260cc78 */
      iVar1 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
                    /* try { // try from 0260cb88 to 0270cb97 has its CatchHandler @ 0260cca0 */
      if ((iVar1 < 2) && (iVar1 = BattlePass__GetTotalKeyCount_250be90(param_1), iVar1 == 0)) {
        uStack_58 = *(undefined8 *)(param_1 + 0x90);
        uStack_60 = *(undefined8 *)(param_1 + 0x88);
        uStack_48 = *(undefined8 *)(param_1 + 0xa0);
        uStack_50 = *(undefined8 *)(param_1 + 0x98);
        uVar2 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_60,0);
                    /* try { // try from 0260cbbc to 0270cbc7 has its CatchHandler @ 0260cc64 */
        uVar2 = uVar2 ^ 1;
      }
      else {
        uVar2 = 0;
      }
                    /* try { // try from 0260cb9c to 0270cba3 has its CatchHandler @ 0260cc6c */
      return uVar2 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

