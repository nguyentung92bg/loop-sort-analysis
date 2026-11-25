/* IL2CPP: WeeklyMissions$$OnLogin
void WeeklyMissions__OnLogin (WeeklyMissions_o* __this, LoginMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnLogin
   void WeeklyMissions__OnLogin (WeeklyMissions_o* __this, LoginMessage_o m, const MethodInfo*
   method); */

void WeeklyMissions__OnLogin_252b984(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  
                    /* catch() { ... } // from try @ 0262b5f4 with catch @ 0262b984 */
                    /* catch() { ... } // from try @ 0262b768 with catch @ 0262b988 */
  if ((bRam0000000004f4bece & 1) == 0) {
                    /* try { // try from 0262b9a8 to 0272b9ab has its CatchHandler @ 0262ba78 */
                    /* try { // try from 0262b9ac to 0272b9d7 has its CatchHandler @ 0262b334 */
    FUN_021f03f8(PTR_DAT_049b5f98);
                    /* catch() { ... } // from try @ 0262b614 with catch @ 0262b9b8 */
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049c9bb0);
                    /* try { // try from 0262b9d8 to 0272b9db has its CatchHandler @ 0262ba8c */
                    /* try { // try from 0262b9dc to 0272ba2f has its CatchHandler @ 0262b334 */
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bece = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
                    /* try { // try from 0262ba30 to 0272ba37 has its CatchHandler @ 0262bb00 */
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0262ba38 to 0272ba3b has its CatchHandler @ 0262baf8 */
                    /* try { // try from 0262ba3c to 0272ba3f has its CatchHandler @ 0262baf4 */
                    /* try { // try from 0262ba40 to 0272ba43 has its CatchHandler @ 0262baf0 */
                    /* try { // try from 0262ba44 to 0272ba47 has its CatchHandler @ 0262baec */
                    /* try { // try from 0262ba48 to 0272ba4f has its CatchHandler @ 0262bae8 */
                    /* try { // try from 0262ba50 to 0272ba53 has its CatchHandler @ 0262bad8 */
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 0262ba54 to 0272ba57 has its CatchHandler @ 0262bacc */
      FUN_021f0574();
    }
                    /* try { // try from 0262ba58 to 0272ba5b has its CatchHandler @ 0262bac8 */
    puVar2 = PTR_DAT_049b5f98;
                    /* try { // try from 0262ba5c to 0272ba5f has its CatchHandler @ 0262babc */
                    /* try { // try from 0262ba60 to 0272ba63 has its CatchHandler @ 0262bab4 */
                    /* try { // try from 0262ba64 to 0272ba67 has its CatchHandler @ 0262baac */
    auStack_40 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 0262ba68 to 0272ba6b has its CatchHandler @ 0262baa4 */
                    /* try { // try from 0262ba6c to 0272ba7f has its CatchHandler @ 0262b334 */
    lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 0262b9a8 with catch @ 0262ba78 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
                    /* try { // try from 0262ba80 to 0272ba9b has its CatchHandler @ 0262bb44 */
      lVar4 = *(long *)puVar1;
    }
                    /* catch() { ... } // from try @ 0262b9d8 with catch @ 0262ba8c */
    uVar3 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (*(long *)(lVar4 + 0xb8) + 0x458,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar1;
                    /* try { // try from 0262ba9c to 0272bb27 has its CatchHandler @ 0262b334 */
                    /* catch() { ... } // from try @ 0262b52c with catch @ 0262baa0 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0262ba68 with catch @ 0262baa4 */
        FUN_021f0574();
                    /* catch() { ... } // from try @ 0262b498 with catch @ 0262baa8 */
        lVar4 = *(long *)puVar1;
      }
                    /* catch() { ... } // from try @ 0262ba64 with catch @ 0262baac */
                    /* catch() { ... } // from try @ 0262b830 with catch @ 0262bab0 */
                    /* catch() { ... } // from try @ 0262ba60 with catch @ 0262bab4 */
                    /* catch() { ... } // from try @ 0262b4c0 with catch @ 0262bab8 */
                    /* catch() { ... } // from try @ 0262ba5c with catch @ 0262babc */
                    /* catch() { ... } // from try @ 0262b920 with catch @ 0262bac0 */
                    /* catch() { ... } // from try @ 0262b8e4 with catch @ 0262bac4 */
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar4 + 0xb8) + 0x458,auStack_100,*(undefined8 *)PTR_DAT_049b5fa8);
                    /* catch() { ... } // from try @ 0262ba58 with catch @ 0262bac8 */
                    /* catch() { ... } // from try @ 0262ba54 with catch @ 0262bacc */
                    /* catch() { ... } // from try @ 0262b864 with catch @ 0262bad0 */
                    /* catch() { ... } // from try @ 0262b84c with catch @ 0262bad4 */
                    /* catch() { ... } // from try @ 0262ba50 with catch @ 0262bad8 */
      uStack_a8 = auStack_100._8_8_;
      uStack_b0 = auStack_100._0_8_;
                    /* catch() { ... } // from try @ 0262b6b0 with catch @ 0262badc */
                    /* catch() { ... } // from try @ 0262b5d4 with catch @ 0262bae0 */
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0262b7fc with catch @ 0262bae4 */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 0262ba48 with catch @ 0262bae8 */
                    /* catch() { ... } // from try @ 0262ba44 with catch @ 0262baec */
                    /* catch() { ... } // from try @ 0262ba40 with catch @ 0262baf0 */
      uVar5 = System_DateTimeOffset__get_Date_30e0fe4(&uStack_b0,0);
                    /* catch() { ... } // from try @ 0262ba3c with catch @ 0262baf4 */
                    /* catch() { ... } // from try @ 0262ba38 with catch @ 0262baf8 */
                    /* catch() { ... } // from try @ 0262b728 with catch @ 0262bafc */
                    /* catch() { ... } // from try @ 0262ba30 with catch @ 0262bb00 */
      uVar6 = System_DateTimeOffset__get_Date_30e0fe4(auStack_40,0);
                    /* catch() { ... } // from try @ 0262b6e4 with catch @ 0262bb04 */
                    /* catch() { ... } // from try @ 0262b590 with catch @ 0262bb08 */
      if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5fb0);
      }
                    /* try { // try from 0262bb28 to 0272bb2b has its CatchHandler @ 0262bb30 */
                    /* catch() { ... } // from try @ 0262bb28 with catch @ 0262bb30 */
      uVar3 = System_DateTime__op_GreaterThanOrEqual_30df918(uVar5,uVar6,0);
                    /* try { // try from 0262bb34 to 0272bb3b has its CatchHandler @ 0262bb44 */
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)puVar1;
                    /* try { // try from 0262bb3c to 0272bb47 has its CatchHandler @ 0262b334 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0262ba80 with catch @ 0262bb44
                       catch() { ... } // from try @ 0262bb34 with catch @ 0262bb44 */
      FUN_021f0574();
                    /* try { // try from 0262bb48 to 0272bd4b has its CatchHandler @ 0262bb48
                       catch() { ... } // from try @ 0262bb48 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262bdb8 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262be64 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262bed8 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262bf10 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c004 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c168 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c1c4 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c39c with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c3f8 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c42c with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c458 with catch @ 0262bb48
                       catch() { ... } // from try @ 0262c49c with catch @ 0262bb48 */
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,auStack_100,*(undefined8 *)PTR_DAT_049c9bb0);
    uStack_78 = auStack_100._8_8_;
    uStack_80 = auStack_100._0_8_;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_50 = uStack_d0;
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_90 = uStack_b8;
    auStack_100 = auStack_40;
    CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x458,auStack_100,*(undefined8 *)PTR_DAT_049b5fa0
              );
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_138 = uStack_68;
    uStack_140 = uStack_70;
    uStack_120 = uStack_50;
    uStack_128 = uStack_58;
    uStack_130 = uStack_60;
    uStack_110 = uStack_98;
    uStack_118 = uStack_a0;
    uStack_108 = uStack_90;
    iStack_11c = iStack_cc + 1;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_150);
  }
  return;
}

