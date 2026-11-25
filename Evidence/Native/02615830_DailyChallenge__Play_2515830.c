/* IL2CPP: DailyChallenge$$Play
void DailyChallenge__Play (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$Play
   void DailyChallenge__Play (DailyChallenge_o* __this, const MethodInfo* method); */

void DailyChallenge__Play_2515830(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  
  puVar2 = PTR_DAT_049b5fc8;
                    /* try { // try from 0261583c to 02715857 has its CatchHandler @ 02616994 */
  if ((bRam0000000004f4be12 & 1) == 0) {
                    /* try { // try from 02615858 to 0271586b has its CatchHandler @ 02616910 */
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be12 = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  auStack_30._8_8_ = 0;
                    /* try { // try from 0261587c to 02715893 has its CatchHandler @ 0261690c */
  auStack_30._0_8_ = 0;
  auStack_34[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_30 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 026158a4 to 027158a7 has its CatchHandler @ 02616908 */
                    /* try { // try from 026158ac to 027158b7 has its CatchHandler @ 02616904 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = System_DateTimeOffset__get_Date_30e0fe4(auStack_30,0);
                    /* try { // try from 026158cc to 027158cf has its CatchHandler @ 02616890 */
  auStack_34[0] = DailyChallenge__Play_25158f0(param_1,uVar3);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_34,0);
  return;
}

