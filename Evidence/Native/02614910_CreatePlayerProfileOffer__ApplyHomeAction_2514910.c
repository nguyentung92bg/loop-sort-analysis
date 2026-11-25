/* IL2CPP: CreatePlayerProfileOffer$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o CreatePlayerProfileOffer__ApplyHomeAction (CreatePlayerProfileOffer_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CreatePlayerProfileOffer$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o CreatePlayerProfileOffer__ApplyHomeAction
   (CreatePlayerProfileOffer_o* __this, System_Threading_CancellationToken_o cancellationToken,
   const MethodInfo* method); */

void CreatePlayerProfileOffer__ApplyHomeAction_2514910(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c9310;
                    /* try { // try from 02614914 to 0271491f has its CatchHandler @ 02614bfc */
  if ((bRam0000000004f4be09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9310);
                    /* try { // try from 02614940 to 02714953 has its CatchHandler @ 02614c0c */
    bRam0000000004f4be09 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_38 = param_1;
                    /* try { // try from 02614968 to 0271496f has its CatchHandler @ 02614c10 */
  thunk_FUN_021f190c(&uStack_38,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
                    /* try { // try from 02614990 to 02714997 has its CatchHandler @ 02614b48 */
  FUN_0235acf0((ulong)&uStack_50 | 8,0);
  return;
}

