/* IL2CPP: AdsModule$$HandleInterstitialCompleted
Cysharp_Threading_Tasks_UniTaskVoid_o AdsModule__HandleInterstitialCompleted (AdsModule_o* __this, bool watched, System_Action_o* completed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$HandleInterstitialCompleted
   Cysharp_Threading_Tasks_UniTaskVoid_o AdsModule__HandleInterstitialCompleted (AdsModule_o*
   __this, bool watched, System_Action_o* completed, const MethodInfo* method); */

undefined8
AdsModule__HandleInterstitialCompleted_253d7e4
          (undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049ca440;
                    /* try { // try from 0263d7f0 to 0273d7f3 has its CatchHandler @ 0263d898 */
                    /* try { // try from 0263d808 to 0273d813 has its CatchHandler @ 0263d89c */
  if ((bRam0000000004f4bf96 & 1) == 0) {
                    /* try { // try from 0263d81c to 0273d827 has its CatchHandler @ 0263d8b8 */
    FUN_021f03f8(PTR_DAT_049ca440);
    bRam0000000004f4bf96 = 1;
  }
                    /* try { // try from 0263d83c to 0273d847 has its CatchHandler @ 0263d8b0 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
                    /* try { // try from 0263d848 to 0273d87f has its CatchHandler @ 0263d5a8 */
  uStack_48 = param_1;
  thunk_FUN_021f190c(&uStack_48,param_1);
  uStack_50 = CONCAT71(uStack_50._1_7_,param_2) & 0xffffffffffffff01;
  uStack_40 = param_3;
  thunk_FUN_021f190c(&uStack_40,param_3);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
                    /* try { // try from 0263d880 to 0273d883 has its CatchHandler @ 0263d8ac */
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
                    /* try { // try from 0263d884 to 0273d887 has its CatchHandler @ 0263d8a4 */
                    /* try { // try from 0263d888 to 0273d88b has its CatchHandler @ 0263d8a0 */
                    /* try { // try from 0263d88c to 0273d8db has its CatchHandler @ 0263d5a8 */
                    /* catch() { ... } // from try @ 0263d7c0 with catch @ 0263d890 */
                    /* catch() { ... } // from try @ 0263d794 with catch @ 0263d894 */
                    /* catch() { ... } // from try @ 0263d7f0 with catch @ 0263d898 */
  return 0;
}

