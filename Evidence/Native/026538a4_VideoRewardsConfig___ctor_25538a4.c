/* IL2CPP: VideoRewardsConfig$$.ctor
void VideoRewardsConfig___ctor (VideoRewardsConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsConfig$$.ctor
   void VideoRewardsConfig___ctor (VideoRewardsConfig_o* __this, const MethodInfo* method); */

undefined1  [16] VideoRewardsConfig___ctor_25538a4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049caf08;
  puVar1 = PTR_DAT_049b4e08;
                    /* try { // try from 026538cc to 027538cf has its CatchHandler @ 02653920 */
  if ((bRam0000000004f4c091 & 1) == 0) {
                    /* try { // try from 026538d0 to 027538f3 has its CatchHandler @ 02653924 */
    FUN_021f03f8(PTR_DAT_049b4e08);
    FUN_021f03f8(PTR_DAT_049caf08);
    bRam0000000004f4c091 = 1;
  }
                    /* try { // try from 026538f4 to 0275390b has its CatchHandler @ 02653478 */
  uVar3 = FUN_021f04e4(*(undefined8 *)puVar1,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar3,*(undefined8 *)puVar2,0);
                    /* try { // try from 0265390c to 0275391b has its CatchHandler @ 02653930 */
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* catch() { ... } // from try @ 026538cc with catch @ 02653920 */
                    /* catch() { ... } // from try @ 026538d0 with catch @ 02653924 */
                    /* catch() { ... } // from try @ 02653898 with catch @ 02653930
                       catch() { ... } // from try @ 0265390c with catch @ 02653930 */
  return auVar4;
}

