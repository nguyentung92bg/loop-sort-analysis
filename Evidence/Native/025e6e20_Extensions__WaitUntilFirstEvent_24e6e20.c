/* IL2CPP: Extensions$$WaitUntilFirstEvent
Cysharp_Threading_Tasks_UniTask_o Extensions__WaitUntilFirstEvent (Spine_TrackEntry_o* trackEntry, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$WaitUntilFirstEvent
   Cysharp_Threading_Tasks_UniTask_o Extensions__WaitUntilFirstEvent (Spine_TrackEntry_o*
   trackEntry, System_Threading_CancellationToken_o token, const MethodInfo* method); */

void Extensions__WaitUntilFirstEvent_24e6e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c7c70;
                    /* try { // try from 025e6e30 to 026e6e37 has its CatchHandler @ 025e6e80 */
                    /* try { // try from 025e6e38 to 026e6e6b has its CatchHandler @ 025e6c38 */
  if ((bRam0000000004f4bc93 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c70);
    bRam0000000004f4bc93 = 1;
  }
                    /* try { // try from 025e6e6c to 026e6e6f has its CatchHandler @ 025e6e7c */
                    /* try { // try from 025e6e70 to 026e6e73 has its CatchHandler @ 025e6e78 */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6e1c with catch @ 025e6e74
                       try { // try from 025e6e74 to 026e6ea3 has its CatchHandler @ 025e6c38 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6e70 with catch @ 025e6e78
                        */
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6e6c with catch @ 025e6e7c
                        */
  uStack_58 = param_1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6e30 with catch @ 025e6e80
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6d90 with catch @ 025e6e84
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6db0 with catch @ 025e6e88
                        */
  thunk_FUN_021f190c(&uStack_58,param_1);
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,0);
                    /* try { // try from 025e6ea4 to 026e6ea7 has its CatchHandler @ 025e6ec8 */
                    /* try { // try from 025e6ea8 to 026e6ecb has its CatchHandler @ 025e6c38 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
                    /* catch() { ... } // from try @ 025e6ea4 with catch @ 025e6ec8 */
                    /* try { // try from 025e6ecc to 026e6ed3 has its CatchHandler @ 025e6edc */
  return;
}

