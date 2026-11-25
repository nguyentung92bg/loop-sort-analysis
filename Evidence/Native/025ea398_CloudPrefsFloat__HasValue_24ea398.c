/* IL2CPP: CloudPrefsFloat$$HasValue
bool CloudPrefsFloat__HasValue (CloudPrefsFloat_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$HasValue
   bool CloudPrefsFloat__HasValue (CloudPrefsFloat_o __this, const MethodInfo* method); */

uint CloudPrefsFloat__HasValue_24ea398(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6ca0;
  if ((bRam0000000004f4bcbc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcbc = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
                    /* try { // try from 025ea3dc to 026ea3ef has its CatchHandler @ 025ea1d8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025ea3f0 to 026ea3ff has its CatchHandler @ 025ea5f0 */
  uVar2 = PlayerPrefsFloat__HasValue_3f0e08c(&uStack_30,0);
  return uVar2 & 1;
}

