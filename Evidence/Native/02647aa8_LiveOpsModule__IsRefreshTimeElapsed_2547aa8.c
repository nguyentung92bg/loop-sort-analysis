/* IL2CPP: LiveOpsModule$$IsRefreshTimeElapsed
bool LiveOpsModule__IsRefreshTimeElapsed (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$IsRefreshTimeElapsed
   bool LiveOpsModule__IsRefreshTimeElapsed (LiveOpsModule_o* __this, int32_t liveOps, const
   MethodInfo* method); */

uint LiveOpsModule__IsRefreshTimeElapsed_2547aa8(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_a0;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c01c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c01c = 1;
  }
                    /* try { // try from 02647b20 to 02747b27 has its CatchHandler @ 02647c70 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar3 == 0)) goto LAB_02647c58;
                    /* try { // try from 02647b40 to 02747b8b has its CatchHandler @ 02647c74 */
  uStack_40 = param_2;
  uVar4 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (lVar3,&uStack_40,*(undefined8 *)PTR_DAT_049c2f60);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar3 == 0)) {
LAB_02647c58:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02647c0c with catch @ 02647c58 */
      FUN_021f06a0();
    }
    uStack_40 = param_2;
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar3,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
    if (lVar3 == 0) goto LAB_02647c58;
    uStack_68 = *(undefined8 *)(lVar3 + 0x40);
    uStack_70 = *(undefined8 *)(lVar3 + 0x38);
    uStack_58 = *(undefined8 *)(lVar3 + 0x50);
    uStack_60 = *(undefined8 *)(lVar3 + 0x48);
                    /* try { // try from 02647b8c to 02747ba7 has its CatchHandler @ 02647a3c */
    uStack_48 = *(undefined8 *)(lVar3 + 0x60);
    uStack_50 = *(undefined8 *)(lVar3 + 0x58);
                    /* try { // try from 02647ba8 to 02747bab has its CatchHandler @ 02647c50 */
    uVar4 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (&uStack_70,*(undefined8 *)PTR_DAT_049b5f98);
                    /* try { // try from 02647bac to 02747bb7 has its CatchHandler @ 02647c6c */
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02647bc8 to 02747bcb has its CatchHandler @ 02647c64 */
      auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
      uStack_98 = *(undefined8 *)(lVar3 + 0x40);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x38);
      uStack_88 = *(undefined8 *)(lVar3 + 0x50);
      uStack_90 = *(undefined8 *)(lVar3 + 0x48);
                    /* try { // try from 02647bdc to 02747bdf has its CatchHandler @ 02647c4c */
                    /* try { // try from 02647be0 to 02747bef has its CatchHandler @ 02647c68 */
      uStack_78 = *(undefined8 *)(lVar3 + 0x60);
      uStack_80 = *(undefined8 *)(lVar3 + 0x58);
                    /* try { // try from 02647bf4 to 02747c07 has its CatchHandler @ 02647c5c */
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_a0,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
                    /* try { // try from 02647c0c to 02747c17 has its CatchHandler @ 02647c58 */
      uVar1 = CONCAT44(uStack_3c,uStack_40);
                    /* try { // try from 02647c18 to 02747c3f has its CatchHandler @ 02647a3c */
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar2 = System_DateTimeOffset__op_GreaterThanOrEqual_30e496c
                        (auVar5._0_8_,auVar5._8_8_,uVar1,uStack_38,0);
      goto LAB_02647c40;
    }
  }
  uVar2 = 0;
LAB_02647c40:
                    /* try { // try from 02647c40 to 02747c43 has its CatchHandler @ 02647c60 */
                    /* try { // try from 02647c44 to 02747c47 has its CatchHandler @ 02647c54 */
                    /* try { // try from 02647c48 to 02747c87 has its CatchHandler @ 02647a3c */
                    /* catch() { ... } // from try @ 02647bdc with catch @ 02647c4c */
                    /* catch() { ... } // from try @ 02647ba8 with catch @ 02647c50 */
                    /* catch() { ... } // from try @ 02647c44 with catch @ 02647c54 */
  return uVar2 & 1;
}

