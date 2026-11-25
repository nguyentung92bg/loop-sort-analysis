/* IL2CPP: CloudPrefsFloat$$DeleteValue
void CloudPrefsFloat__DeleteValue (CloudPrefsFloat_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$DeleteValue
   void CloudPrefsFloat__DeleteValue (CloudPrefsFloat_o __this, const MethodInfo* method); */

void CloudPrefsFloat__DeleteValue_24ea408(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6ca0;
                    /* try { // try from 025ea408 to 026ea413 has its CatchHandler @ 025ea5e4 */
                    /* try { // try from 025ea424 to 026ea42b has its CatchHandler @ 025ea5e0 */
  if ((bRam0000000004f4bcbd & 1) == 0) {
                    /* try { // try from 025ea42c to 026ea433 has its CatchHandler @ 025ea5d8 */
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcbd = 1;
  }
                    /* try { // try from 025ea440 to 026ea447 has its CatchHandler @ 025ea5dc */
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
                    /* try { // try from 025ea448 to 026ea5c3 has its CatchHandler @ 025ea1d8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsFloat__DeleteValue_3f0df9c(&uStack_30,0);
  return;
}

