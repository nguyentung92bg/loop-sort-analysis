/* IL2CPP: Extensions$$HasTracking
bool Extensions__HasTracking (int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$HasTracking
   bool Extensions__HasTracking (int32_t liveOps, const MethodInfo* method); */

uint Extensions__HasTracking_24e7838(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 025e7838 to 026e785b has its CatchHandler @ 025e7118 */
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc9b & 1) == 0) {
                    /* catch() { ... } // from try @ 025e7834 with catch @ 025e7858 */
                    /* try { // try from 025e785c to 026e7863 has its CatchHandler @ 025e786c */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 025e7864 to 026e786f has its CatchHandler @ 025e7118 */
                    /* catch() { ... } // from try @ 025e785c with catch @ 025e786c */
    FUN_021f03f8(PTR_DAT_049c7d20);
    bRam0000000004f4bc9b = 1;
  }
  puVar2 = PTR_DAT_049c7d20;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = Extensions__ToAnalyticsName_24e78ac(param_1);
  uVar3 = System_String__Equals_2f7b508(uVar4,*(undefined8 *)puVar2,0);
  return (uVar3 ^ 0xffffffff) & 1;
}

