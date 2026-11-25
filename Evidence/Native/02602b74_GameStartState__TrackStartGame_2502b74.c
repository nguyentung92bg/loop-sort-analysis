/* IL2CPP: GameStartState$$TrackStartGame
Cysharp_Threading_Tasks_UniTaskVoid_o GameStartState__TrackStartGame (GameStartState_o* __this, LevelSheet_Level_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStartState$$TrackStartGame
   Cysharp_Threading_Tasks_UniTaskVoid_o GameStartState__TrackStartGame (GameStartState_o* __this,
   LevelSheet_Level_o* level, const MethodInfo* method); */

undefined8 GameStartState__TrackStartGame_2502b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c8c88;
                    /* catch() { ... } // from try @ 02602b68 with catch @ 02602b84 */
                    /* try { // try from 02602b88 to 02702b8f has its CatchHandler @ 02602b98 */
                    /* try { // try from 02602b90 to 02702b9b has its CatchHandler @ 02602998 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02602b88 with catch @ 02602b98
                        */
  if ((bRam0000000004f4bd71 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c88);
    bRam0000000004f4bd71 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_48 = param_2;
  thunk_FUN_021f190c(&uStack_48,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

