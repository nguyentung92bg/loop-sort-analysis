/* IL2CPP: LavaQuest$$Complete
void LavaQuest__Complete (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$Complete
   void LavaQuest__Complete (LavaQuest_o* __this, const MethodInfo* method); */

void LavaQuest__Complete_251a8d4(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a0 [16];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
                    /* catch() { ... } // from try @ 0261a320 with catch @ 0261a8d4
                       catch() { ... } // from try @ 0261a7d0 with catch @ 0261a8d4 */
                    /* catch() { ... } // from try @ 0261a354 with catch @ 0261a8d8
                       catch() { ... } // from try @ 0261a7ac with catch @ 0261a8d8 */
                    /* catch() { ... } // from try @ 0261a094 with catch @ 0261a8dc */
  if ((bRam0000000004f4be3b & 1) == 0) {
                    /* try { // try from 0261a8f4 to 0271a90b has its CatchHandler @ 0261a970 */
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049c9528);
                    /* try { // try from 0261a90c to 0271a95f has its CatchHandler @ 02619f84 */
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049c8308);
    FUN_021f03f8(PTR_DAT_049c9530);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* try { // try from 0261a960 to 0271a96f has its CatchHandler @ 0261a970 */
    bRam0000000004f4be3b = 1;
  }
  puVar2 = PTR_DAT_049b5310;
  uStack_30 = 0;
                    /* catch() { ... } // from try @ 0261a8f4 with catch @ 0261a970
                       catch() { ... } // from try @ 0261a960 with catch @ 0261a970 */
                    /* try { // try from 0261a974 to 0271a977 has its CatchHandler @ 0261a980 */
                    /* try { // try from 0261a978 to 0271a983 has its CatchHandler @ 02619f84 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* catch() { ... } // from try @ 0261a974 with catch @ 0261a980 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  LiveOpsBase__Complete_2521cec(param_1,0);
                    /* try { // try from 0261a990 to 0271ab0b has its CatchHandler @ 0261a990
                       catch() { ... } // from try @ 0261a990 with catch @ 0261a990
                       catch() { ... } // from try @ 0261b6b4 with catch @ 0261a990
                       catch() { ... } // from try @ 0261b8e8 with catch @ 0261a990
                       catch() { ... } // from try @ 0261ba6c with catch @ 0261a990
                       catch() { ... } // from try @ 0261bb34 with catch @ 0261a990 */
  if (cRam0000000004f4be72 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5310);
    cRam0000000004f4be72 = '\x01';
  }
  puVar3 = PTR_DAT_049c8308;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  uStack_30 = *(undefined8 *)(lVar6 + 0x658);
  uStack_58 = *(undefined8 *)(lVar6 + 0x630);
  uStack_60 = *(undefined8 *)(lVar6 + 0x628);
  uStack_48 = *(undefined8 *)(lVar6 + 0x640);
  uStack_50 = *(undefined8 *)(lVar6 + 0x638);
  uStack_38 = *(undefined8 *)(lVar6 + 0x650);
  uStack_40 = *(undefined8 *)(lVar6 + 0x648);
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (&uStack_60,auStack_b8,*(undefined8 *)puVar3);
  auVar1._8_8_ = auStack_b8._8_8_;
  auVar1._0_8_ = auStack_b8._0_8_;
  bVar4 = auStack_b8._12_4_ == 3;
  auStack_b8 = auVar1;
  if (bVar4) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x88), lVar6 != 0)) {
      auStack_b8._0_4_ = 0xc;
      lVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar6,auStack_b8,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar6 != 0) {
        uStack_88 = *(undefined8 *)(lVar6 + 0xa0);
        uStack_90 = *(undefined8 *)(lVar6 + 0x98);
        uStack_78 = *(undefined8 *)(lVar6 + 0xb0);
        uStack_80 = *(undefined8 *)(lVar6 + 0xa8);
        uStack_68 = *(undefined8 *)(lVar6 + 0xc0);
        uStack_70 = *(undefined8 *)(lVar6 + 0xb8);
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (&uStack_90,*(undefined8 *)PTR_DAT_049c4fd8);
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0xf0), lVar6 != 0)) {
          iVar5 = ConstantSheetBase_object___GetInt_281c070
                            (lVar6,0x18,*(undefined8 *)PTR_DAT_049c9530);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574(*(long *)puVar2);
          }
          if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auStack_a0 = TimeProvider__get_UtcNow_24f95ec(0);
          if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auStack_b8 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar5,auStack_a0,0);
                    /* try { // try from 0261ab0c to 0271ab2f has its CatchHandler @ 0261b99c */
          CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                    (*(long *)(*(long *)puVar2 + 0xb8) + 0x670,auStack_b8,
                     *(undefined8 *)PTR_DAT_049b5fa0);
          goto LAB_0261ab10;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0261ab4c to 0271ab5f has its CatchHandler @ 0261b994 */
    FUN_021f06a0();
  }
LAB_0261ab10:
  puVar3 = PTR_DAT_049c9528;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
                    /* try { // try from 0261ab30 to 0271ab43 has its CatchHandler @ 0261b998 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (*(long *)(lVar6 + 0xb8) + 0x628,*(undefined8 *)puVar3);
  return;
}

