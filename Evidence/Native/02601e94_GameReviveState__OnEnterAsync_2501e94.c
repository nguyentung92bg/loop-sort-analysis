/* IL2CPP: GameReviveState$$OnEnterAsync
Cysharp_Threading_Tasks_UniTaskVoid_o GameReviveState__OnEnterAsync (GameReviveState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameReviveState$$OnEnterAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o GameReviveState__OnEnterAsync (GameReviveState_o* __this,
   const MethodInfo* method); */

undefined8 GameReviveState__OnEnterAsync_2501e94(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c8c48;
                    /* try { // try from 02601ea4 to 02701eab has its CatchHandler @ 0260243c */
  if ((bRam0000000004f4bd6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c48);
    bRam0000000004f4bd6c = 1;
  }
                    /* try { // try from 02601ed4 to 02701edb has its CatchHandler @ 02602448 */
                    /* try { // try from 02601edc to 0270202f has its CatchHandler @ 02601564 */
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

