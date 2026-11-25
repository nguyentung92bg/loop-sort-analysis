/* IL2CPP: GameStartState$$OnEnterAsync
Cysharp_Threading_Tasks_UniTaskVoid_o GameStartState__OnEnterAsync (GameStartState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStartState$$OnEnterAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o GameStartState__OnEnterAsync (GameStartState_o* __this,
   const MethodInfo* method); */

undefined8 GameStartState__OnEnterAsync_2502a64(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c8c78;
                    /* try { // try from 02602a64 to 02702a6b has its CatchHandler @ 02602b50 */
                    /* try { // try from 02602a84 to 02702acf has its CatchHandler @ 02602b54 */
  if ((bRam0000000004f4bd70 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c78);
    bRam0000000004f4bd70 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_40 = param_1;
  thunk_FUN_021f190c(&uStack_40,param_1);
                    /* try { // try from 02602ad0 to 02702ae3 has its CatchHandler @ 02602998 */
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
                    /* try { // try from 02602ae4 to 02702af3 has its CatchHandler @ 02602b4c */
  return 0;
}

