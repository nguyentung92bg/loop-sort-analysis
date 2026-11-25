/* IL2CPP: CloudPrefsBool$$get_Value
bool CloudPrefsBool__get_Value (CloudPrefsBool_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$get_Value
   bool CloudPrefsBool__get_Value (CloudPrefsBool_o __this, const MethodInfo* method); */

uint CloudPrefsBool__get_Value_24eb0d0(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b52a8;
                    /* try { // try from 025eb0d0 to 026eb0e7 has its CatchHandler @ 025eaa84 */
                    /* try { // try from 025eb0e8 to 026eb0eb has its CatchHandler @ 025eb0f0 */
                    /* catch() { ... } // from try @ 025eb0e8 with catch @ 025eb0f0 */
  if ((bRam0000000004f4bcc9 & 1) == 0) {
                    /* try { // try from 025eb0f4 to 026eb0fb has its CatchHandler @ 025eb104 */
                    /* try { // try from 025eb0fc to 026eb107 has its CatchHandler @ 025eaa84 */
    FUN_021f03f8(PTR_DAT_049b52a8);
                    /* catch() { ... } // from try @ 025eb044 with catch @ 025eb104
                       catch() { ... } // from try @ 025eb0c8 with catch @ 025eb104
                       catch() { ... } // from try @ 025eb0f4 with catch @ 025eb104 */
    bRam0000000004f4bcc9 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_30,0);
  return uVar2 & 1;
}

