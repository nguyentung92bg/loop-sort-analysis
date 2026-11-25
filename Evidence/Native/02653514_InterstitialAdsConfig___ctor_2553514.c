/* IL2CPP: InterstitialAdsConfig$$.ctor
void InterstitialAdsConfig___ctor (InterstitialAdsConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: InterstitialAdsConfig$$.ctor
   void InterstitialAdsConfig___ctor (InterstitialAdsConfig_o* __this, const MethodInfo* method); */

long InterstitialAdsConfig___ctor_2553514(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_049caef0;
  puVar2 = PTR_DAT_049b4e08;
                    /* try { // try from 0265352c to 0275352f has its CatchHandler @ 0265383c */
                    /* try { // try from 02653530 to 0275354b has its CatchHandler @ 02653978 */
  if ((bRam0000000004f4c08d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4e08);
    FUN_021f03f8(PTR_DAT_049caef0);
    bRam0000000004f4c08d = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
                    /* try { // try from 0265356c to 02753573 has its CatchHandler @ 02653850 */
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)(param_1 + 0x14) = 0x46a8c00000000013;
                    /* try { // try from 02653584 to 0275358b has its CatchHandler @ 02653844 */
  uVar4 = FUN_021f04e4(uVar4,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar4);
  uVar1 = _UNK_013a9ff8;
  uVar4 = _UNK_013a9ff0;
                    /* try { // try from 026535a8 to 027535ab has its CatchHandler @ 02653838 */
                    /* try { // try from 026535b0 to 027535bb has its CatchHandler @ 02653840 */
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
                    /* try { // try from 026535d0 to 027536af has its CatchHandler @ 02653868 */
  return param_1;
}

