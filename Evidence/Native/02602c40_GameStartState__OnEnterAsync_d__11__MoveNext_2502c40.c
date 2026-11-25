/* IL2CPP: GameStartState.<OnEnterAsync>d__11$$MoveNext
void GameStartState__OnEnterAsync_d__11__MoveNext (GameStartState__OnEnterAsync_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStartState.<OnEnterAsync>d__11$$MoveNext
   void GameStartState__OnEnterAsync_d__11__MoveNext (GameStartState__OnEnterAsync_d__11_o __this,
   const MethodInfo* method); */

void GameStartState__OnEnterAsync_d__11__MoveNext_2502c40(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bd72 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c90);
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c8c98);
    FUN_021f03f8(PTR_DAT_049c8ca0);
    FUN_021f03f8(PTR_DAT_049c52c8);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bd72 = 1;
  }
  lVar10 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    TimeModule__Pause_253a43c(0,0,*(long *)(lVar10 + 0x80),0,0);
    if (*(long *)(lVar10 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_50 = SceneModule__Load_25389f8(*(long *)(lVar10 + 0x70),6,0,0,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    uVar3 = auStack_50._8_8_;
    uVar2 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar2 != (long *)0x0) {
      lVar7 = *(long *)uVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02602e28;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_02602e28:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
                    /* try { // try from 026030ac to 027031a3 has its CatchHandler @ 026030ac
                       catch() { ... } // from try @ 026030ac with catch @ 026030ac
                       catch() { ... } // from try @ 02603210 with catch @ 026030ac
                       catch() { ... } // from try @ 02603264 with catch @ 026030ac
                       catch() { ... } // from try @ 02603330 with catch @ 026030ac
                       catch() { ... } // from try @ 02603364 with catch @ 026030ac
                       catch() { ... } // from try @ 02603388 with catch @ 026030ac */
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c90);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02602ec0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02602ec0:
    (*(code *)*puVar5)(uVar2,uVar11,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar10 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  GameMachine__RequestStateChange_object__261a650
            (*(long *)(lVar10 + 0x58),*(undefined8 *)PTR_DAT_049c4650);
  if (*(long *)(lVar10 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  TimeModule__Resume_253a530(0,0,*(long *)(lVar10 + 0x80),0,0);
  if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar6 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(lVar10 + 0xa8),0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
  puVar1 = PTR_DAT_049b5310;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar12 = TimeProvider__get_UtcNow_24f95ec();
    if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar12;
    PlayerPrefsT___Il2CppFullySharedGenericStructType___Set_291172c
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x958,auStack_50,*(undefined8 *)PTR_DAT_049c52c8)
    ;
  }
  if (*(long *)(lVar10 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_0235c744(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x18),auStack_50,
               *(undefined8 *)PTR_DAT_049c8c98);
  uVar2 = auStack_50._0_8_;
  if (auStack_50._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(lVar10 + 0x88);
  if (*(int *)(auStack_50._0_8_ + 0x68) - 1U < 2) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0x70);
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0x68);
  }
  AudioModule__ChangeMusic_2530840(lVar7,*puVar5,0);
  if (*(long *)(lVar10 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  AudioModule__RestartMusic_25304dc(*(long *)(lVar10 + 0x88),0);
  if (*(long *)(lVar10 + 0x90) != 0) {
    lVar7 = Monitors__Get_object__26889d0(*(long *)(lVar10 + 0x90),*(undefined8 *)PTR_DAT_049c8ca0);
    if (lVar7 != 0) {
      WinMonitor__SetResults_24693b8(lVar7,0,0,0);
      uVar8 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      if ((uVar8 & 1) != 0) {
        GameStartState__TrackStartGame_2502b74(lVar10,uVar2);
      }
      *param_1 = -2;
      FUN_0235afc8(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

