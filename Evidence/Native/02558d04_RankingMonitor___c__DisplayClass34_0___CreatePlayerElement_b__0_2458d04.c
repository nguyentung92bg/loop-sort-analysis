/* IL2CPP: RankingMonitor.<>c__DisplayClass34_0$$<CreatePlayerElement>b__0
void RankingMonitor___c__DisplayClass34_0___CreatePlayerElement_b__0 (RankingMonitor___c__DisplayClass34_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor.<>c__DisplayClass34_0$$<CreatePlayerElement>b__0
   void RankingMonitor___c__DisplayClass34_0___CreatePlayerElement_b__0
   (RankingMonitor___c__DisplayClass34_0_o* __this, const MethodInfo* method); */

undefined8 RankingMonitor___c__DisplayClass34_0___CreatePlayerElement_b__0_2458d04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c4b80;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if ((bRam0000000004f4b8fb & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c4b80);
      bRam0000000004f4b8fb = 1;
    }
    uStack_40 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
    lStack_70 = lVar3;
    thunk_FUN_021f190c(&lStack_70,lVar3);
    uStack_68 = uVar2;
    thunk_FUN_021f190c(&uStack_68,uVar2);
    uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

