/* IL2CPP: GameBootstrapState$$GateGameMaintenance
bool GameBootstrapState__GateGameMaintenance (GameBootstrapState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBootstrapState$$GateGameMaintenance
   bool GameBootstrapState__GateGameMaintenance (GameBootstrapState_o* __this, const MethodInfo*
   method); */

undefined8 GameBootstrapState__GateGameMaintenance_24fbd9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f4bd54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8a20);
    FUN_021f03f8(PTR_DAT_049c8a28);
    bRam0000000004f4bd54 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_049c8a28);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      uVar2 = 0;
    }
    else {
      if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__Activate_object__268887c
                (*(long *)(param_1 + 0xa0),0,*(undefined8 *)PTR_DAT_049c8a20);
      uVar2 = 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

