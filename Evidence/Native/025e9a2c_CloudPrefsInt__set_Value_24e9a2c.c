/* IL2CPP: CloudPrefsInt$$set_Value
void CloudPrefsInt__set_Value (CloudPrefsInt_o __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$set_Value
   void CloudPrefsInt__set_Value (CloudPrefsInt_o __this, int32_t value, const MethodInfo* method);
    */

void CloudPrefsInt__set_Value_24e9a2c(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
                    /* try { // try from 025e9a64 to 026e9a6b has its CatchHandler @ 025e9ac4 */
    bRam0000000004f4bcb1 = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025e9a84 to 026e9a87 has its CatchHandler @ 025e9ac0 */
                    /* try { // try from 025e9a88 to 026e9aaf has its CatchHandler @ 025e9924 */
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,param_2,0);
  return;
}

