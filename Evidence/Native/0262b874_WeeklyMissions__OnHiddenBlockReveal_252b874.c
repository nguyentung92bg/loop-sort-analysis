/* IL2CPP: WeeklyMissions$$OnHiddenBlockReveal
void WeeklyMissions__OnHiddenBlockReveal (WeeklyMissions_o* __this, HiddenBlockRevealMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnHiddenBlockReveal
   void WeeklyMissions__OnHiddenBlockReveal (WeeklyMissions_o* __this, HiddenBlockRevealMessage_o m,
   const MethodInfo* method); */

void WeeklyMissions__OnHiddenBlockReveal_252b874(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4becd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4becd = 1;
  }
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar2 = PTR_DAT_049c9bb0;
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0262b8e4 to 0272b8f7 has its CatchHandler @ 0262bac4 */
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&uStack_e0,*(undefined8 *)puVar2);
                    /* try { // try from 0262b920 to 0272b927 has its CatchHandler @ 0262bac0 */
    uStack_90 = uStack_ac;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    iStack_100 = iStack_b0 + param_2;
    uStack_7c = (undefined4)uStack_98;
    uStack_78 = (undefined4)((ulong)uStack_98 >> 0x20);
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
                    /* try { // try from 0262b948 to 0272b94b has its CatchHandler @ 0262b97c */
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
                    /* try { // try from 0262b950 to 0272b953 has its CatchHandler @ 0262b978 */
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
                    /* try { // try from 0262b958 to 0272b95b has its CatchHandler @ 0262b970 */
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
                    /* try { // try from 0262b960 to 0272b963 has its CatchHandler @ 0262b96c */
                    /* try { // try from 0262b964 to 0272b9a7 has its CatchHandler @ 0262b334 */
    uStack_fc = uStack_ac;
                    /* catch() { ... } // from try @ 0262b69c with catch @ 0262b968 */
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_130);
  }
                    /* catch() { ... } // from try @ 0262b960 with catch @ 0262b96c */
                    /* catch() { ... } // from try @ 0262b958 with catch @ 0262b970 */
                    /* catch() { ... } // from try @ 0262b7e4 with catch @ 0262b974 */
                    /* catch() { ... } // from try @ 0262b950 with catch @ 0262b978 */
                    /* catch() { ... } // from try @ 0262b948 with catch @ 0262b97c */
                    /* catch() { ... } // from try @ 0262b748 with catch @ 0262b980 */
  return;
}

