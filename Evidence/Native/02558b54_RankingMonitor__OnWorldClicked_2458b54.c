/* IL2CPP: RankingMonitor$$OnWorldClicked
void RankingMonitor__OnWorldClicked (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$OnWorldClicked
   void RankingMonitor__OnWorldClicked (RankingMonitor_o* __this, const MethodInfo* method); */

undefined8 RankingMonitor__OnWorldClicked_2458b54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar2 = Leaderboard__get_LevelWorldId_251cc24(*(long *)(param_1 + 0xa8),0);
    RankingMonitor__SelectLeaderboard_245734c(param_1,uVar2,0x175d5162);
    if (*(long *)(param_1 + 0x160) != 0) {
      uVar2 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(param_1 + 0x160),0);
      puVar1 = PTR_DAT_049c4b48;
      if ((bRam0000000004f4b8f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c4b48);
        bRam0000000004f4b8f8 = 1;
      }
      uStack_68 = 0;
      lStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
      lStack_70 = param_1;
      thunk_FUN_021f190c(&lStack_70,param_1);
      uStack_68 = uVar2;
      thunk_FUN_021f190c(&uStack_68,0);
      uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

