/* IL2CPP: GameStartState$$OnEnter
void GameStartState__OnEnter (GameStartState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStartState$$OnEnter
   void GameStartState__OnEnter (GameStartState_o* __this, const MethodInfo* method); */

void GameStartState__OnEnter_2502a3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [6];
  
  GameStateBase__OnEnter_24fc200();
  GameStartState__OnEnterAsync_2502a64(param_1);
  puVar1 = PTR_DAT_049c8080;
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    if ((bRam0000000004f4bce4 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c8080);
      bRam0000000004f4bce4 = 1;
    }
    alStack_48[3] = 0;
    alStack_48[0] = 0;
    uStack_50 = 0;
    alStack_48[2] = 0;
    alStack_48[1] = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
    alStack_48[0] = lVar2;
    thunk_FUN_021f190c(alStack_48,lVar2);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    FUN_0235c17c((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
    FUN_0235acf0((ulong)&uStack_60 | 8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

