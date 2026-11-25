/* IL2CPP: CloudPrefsBool$$HasValue
bool CloudPrefsBool__HasValue (CloudPrefsBool_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$HasValue
   bool CloudPrefsBool__HasValue (CloudPrefsBool_o __this, const MethodInfo* method); */

uint CloudPrefsBool__HasValue_24eb238(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b52a8;
                    /* try { // try from 025eb258 to 026eb25b has its CatchHandler @ 025eb484 */
  if ((bRam0000000004f4bccc & 1) == 0) {
                    /* try { // try from 025eb25c to 026eb26b has its CatchHandler @ 025eb48c */
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bccc = 1;
  }
                    /* try { // try from 025eb270 to 026eb27b has its CatchHandler @ 025eb488 */
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025eb290 to 026eb35b has its CatchHandler @ 025eb49c */
  uVar2 = PlayerPrefsBool__HasValue_3f0e990(&uStack_30,0);
  return uVar2 & 1;
}

