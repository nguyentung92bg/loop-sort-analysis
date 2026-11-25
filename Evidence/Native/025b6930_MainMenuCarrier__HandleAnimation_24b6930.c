/* IL2CPP: MainMenuCarrier$$HandleAnimation
Cysharp_Threading_Tasks_UniTaskVoid_o MainMenuCarrier__HandleAnimation (MainMenuCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainMenuCarrier$$HandleAnimation
   Cysharp_Threading_Tasks_UniTaskVoid_o MainMenuCarrier__HandleAnimation (MainMenuCarrier_o*
   __this, const MethodInfo* method); */

undefined8 MainMenuCarrier__HandleAnimation_24b6930(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6d28;
                    /* try { // try from 025b6930 to 026b6933 has its CatchHandler @ 025b69d0 */
                    /* try { // try from 025b6934 to 026b6977 has its CatchHandler @ 025b682c */
  if ((bRam0000000004f4bb9d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d28);
    bRam0000000004f4bb9d = 1;
  }
                    /* try { // try from 025b6978 to 026b697b has its CatchHandler @ 025b69d4 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* try { // try from 025b697c to 026b69c3 has its CatchHandler @ 025b69c4 */
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

