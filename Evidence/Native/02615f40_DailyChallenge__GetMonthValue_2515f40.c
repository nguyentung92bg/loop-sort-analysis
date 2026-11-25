/* IL2CPP: DailyChallenge$$GetMonthValue
int32_t DailyChallenge__GetMonthValue (CloudPrefsInt_o prefs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetMonthValue
   int32_t DailyChallenge__GetMonthValue (CloudPrefsInt_o prefs, const MethodInfo* method); */

undefined8 DailyChallenge__GetMonthValue_2515f40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4be1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be1f = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5310;
  auStack_30 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 02615fc4 to 02715fcf has its CatchHandler @ 02616870 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02615fdc to 02715feb has its CatchHandler @ 0261686c */
  iVar3 = System_DateTimeOffset__get_Year_30e15d4(auStack_30,0);
  iVar4 = System_DateTimeOffset__get_Month_30e1374(auStack_30,0);
  lVar6 = *(long *)puVar2;
                    /* try { // try from 02616000 to 0271600b has its CatchHandler @ 02616960 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
                    /* try { // try from 0261601c to 0271609f has its CatchHandler @ 02616d60 */
  iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x8b8,0);
  if (iVar5 == iVar4 + iVar3 * 100) {
    uVar7 = CloudPrefsInt__get_Value_24e99c0(param_1,0);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

