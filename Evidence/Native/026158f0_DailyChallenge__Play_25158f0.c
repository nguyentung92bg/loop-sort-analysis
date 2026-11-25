/* IL2CPP: DailyChallenge$$Play
Cysharp_Threading_Tasks_UniTaskVoid_o DailyChallenge__Play (DailyChallenge_o* __this, System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$Play
   Cysharp_Threading_Tasks_UniTaskVoid_o DailyChallenge__Play (DailyChallenge_o* __this,
   System_DateTime_o date, const MethodInfo* method); */

undefined8 DailyChallenge__Play_25158f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c9370;
                    /* try { // try from 026158f4 to 027158ff has its CatchHandler @ 0261688c */
  if ((bRam0000000004f4be13 & 1) == 0) {
                    /* try { // try from 02615924 to 0271593f has its CatchHandler @ 02616900 */
    FUN_021f03f8(PTR_DAT_049c9370);
    bRam0000000004f4be13 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_60 = param_1;
                    /* try { // try from 02615954 to 0271595f has its CatchHandler @ 026168fc */
  thunk_FUN_021f190c(&uStack_60,param_1);
                    /* try { // try from 02615970 to 02715987 has its CatchHandler @ 026168f8 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_58 = param_2;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

