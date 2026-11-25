/* IL2CPP: CoreStreak$$UpdateBarView
Cysharp_Threading_Tasks_UniTask_o CoreStreak__UpdateBarView (CoreStreak_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, bool withMotion, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$UpdateBarView
   Cysharp_Threading_Tasks_UniTask_o CoreStreak__UpdateBarView (CoreStreak_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, bool withMotion,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void CoreStreak__UpdateBarView_2513184
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049c92d0;
                    /* try { // try from 02613190 to 0271319b has its CatchHandler @ 02613570 */
                    /* try { // try from 026131b0 to 02713293 has its CatchHandler @ 0261358c */
  if ((bRam0000000004f4be05 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c92d0);
    bRam0000000004f4be05 = 1;
  }
  uStack_50 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_b0 | 8,0);
  uStack_80 = param_1;
  thunk_FUN_021f190c(&uStack_80,param_1);
  uStack_98 = param_2;
  thunk_FUN_021f190c(&uStack_98,param_2);
  uStack_90 = CONCAT71(uStack_90._1_7_,param_3) & 0xffffffffffffff01;
  uStack_88 = param_4;
  thunk_FUN_021f190c(&uStack_88,0);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_b0 | 8,&uStack_b0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_b0 | 8,0);
  return;
}

