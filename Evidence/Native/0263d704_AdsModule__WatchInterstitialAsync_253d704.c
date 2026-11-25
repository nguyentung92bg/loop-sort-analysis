/* IL2CPP: AdsModule$$WatchInterstitialAsync
Cysharp_Threading_Tasks_UniTaskVoid_o AdsModule__WatchInterstitialAsync (AdsModule_o* __this, System_String_o* placement, System_Action_bool__o* watched, System_Action_o* completed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$WatchInterstitialAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o AdsModule__WatchInterstitialAsync (AdsModule_o* __this,
   System_String_o* placement, System_Action_bool__o* watched, System_Action_o* completed, const
   MethodInfo* method); */

undefined8
AdsModule__WatchInterstitialAsync_253d704
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049ca438;
                    /* try { // try from 0263d724 to 0273d76f has its CatchHandler @ 0263d8c0 */
  if ((bRam0000000004f4bf95 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca438);
    bRam0000000004f4bf95 = 1;
  }
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
                    /* try { // try from 0263d770 to 0273d77f has its CatchHandler @ 0263d5a8 */
  uStack_80 = param_1;
  thunk_FUN_021f190c(&uStack_80,param_1);
                    /* try { // try from 0263d780 to 0273d793 has its CatchHandler @ 0263d8b4 */
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_68 = param_3;
                    /* try { // try from 0263d794 to 0273d7ab has its CatchHandler @ 0263d894 */
  thunk_FUN_021f190c(&uStack_68,param_3);
  uStack_78 = param_4;
  thunk_FUN_021f190c(&uStack_78,param_4);
                    /* try { // try from 0263d7c0 to 0273d7c3 has its CatchHandler @ 0263d890 */
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
                    /* try { // try from 0263d7dc to 0273d7e3 has its CatchHandler @ 0263d8a8 */
  return 0;
}

