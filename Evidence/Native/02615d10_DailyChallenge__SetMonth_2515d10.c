/* IL2CPP: DailyChallenge$$SetMonth
void DailyChallenge__SetMonth (System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$SetMonth
   void DailyChallenge__SetMonth (System_DateTime_o date, const MethodInfo* method); */

void DailyChallenge__SetMonth_2515d10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_18;
  
  puVar2 = PTR_DAT_049b5fb0;
                    /* try { // try from 02615d28 to 02715d33 has its CatchHandler @ 02616964 */
  uStack_18 = param_1;
  if ((bRam0000000004f4be16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fb0);
                    /* try { // try from 02615d44 to 02715dc7 has its CatchHandler @ 02616d60 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be16 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iVar3 = System_DateTime__get_Year_30ddc1c(&uStack_18,0);
  iVar4 = System_DateTime__get_Month_30dd8d0(&uStack_18,0);
  lVar5 = *(long *)puVar1;
  iVar4 = iVar4 + iVar3 * 100;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x8b8,0);
  if (iVar3 != iVar4) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(lVar5 + 0xb8) + 0x8b8,iVar4,0);
                    /* try { // try from 02615de4 to 02715e07 has its CatchHandler @ 02616990 */
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar1 + 0xb8) + 0x8d8,0,0);
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar1 + 0xb8) + 0x8f8,0,0);
                    /* try { // try from 02615e18 to 02715e1b has its CatchHandler @ 02616954 */
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar1 + 0xb8) + 0x918,0,0);
  }
                    /* try { // try from 02615e34 to 02715e3b has its CatchHandler @ 026168c0 */
  return;
}

