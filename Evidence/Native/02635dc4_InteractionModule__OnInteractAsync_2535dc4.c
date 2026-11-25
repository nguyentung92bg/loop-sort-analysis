/* IL2CPP: InteractionModule$$OnInteractAsync
Cysharp_Threading_Tasks_UniTask_o InteractionModule__OnInteractAsync (InteractionModule_o* __this, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$OnInteractAsync
   Cysharp_Threading_Tasks_UniTask_o InteractionModule__OnInteractAsync (InteractionModule_o*
   __this, System_Threading_CancellationToken_o token, const MethodInfo* method); */

void InteractionModule__OnInteractAsync_2535dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049ca1b8;
                    /* try { // try from 02635de0 to 02735de7 has its CatchHandler @ 026364b4 */
  if ((bRam0000000004f4bf5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca1b8);
    bRam0000000004f4bf5b = 1;
  }
                    /* try { // try from 02635e04 to 02735e0b has its CatchHandler @ 02636030 */
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
                    /* try { // try from 02635e24 to 02735e6f has its CatchHandler @ 02636040 */
  uStack_58 = param_1;
  thunk_FUN_021f190c(&uStack_58,param_1);
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,0);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
                    /* try { // try from 02635e70 to 02735e7f has its CatchHandler @ 02635a6c */
  return;
}

