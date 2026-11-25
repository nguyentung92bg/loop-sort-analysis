/* IL2CPP: GameMainMenuState$$HandleAreaProgress
Cysharp_Threading_Tasks_UniTask_o GameMainMenuState__HandleAreaProgress (GameMainMenuState_o* __this, HomeNavigationMonitor_o* homeNavigationMonitor, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMainMenuState$$HandleAreaProgress
   Cysharp_Threading_Tasks_UniTask_o GameMainMenuState__HandleAreaProgress (GameMainMenuState_o*
   __this, HomeNavigationMonitor_o* homeNavigationMonitor, System_Threading_CancellationToken_o
   token, const MethodInfo* method); */

void GameMainMenuState__HandleAreaProgress_24fe5ac
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c8b40;
  if ((bRam0000000004f4bd61 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8b40);
    bRam0000000004f4bd61 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_68 = param_1;
  thunk_FUN_021f190c(&uStack_68,param_1);
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,param_2);
  uStack_58 = param_3;
  thunk_FUN_021f190c(&uStack_58,0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_80 | 8,0);
  return;
}

