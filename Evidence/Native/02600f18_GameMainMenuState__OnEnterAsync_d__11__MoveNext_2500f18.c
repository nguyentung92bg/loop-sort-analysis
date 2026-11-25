/* IL2CPP: GameMainMenuState.<OnEnterAsync>d__11$$MoveNext
void GameMainMenuState__OnEnterAsync_d__11__MoveNext (GameMainMenuState__OnEnterAsync_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMainMenuState.<OnEnterAsync>d__11$$MoveNext
   void GameMainMenuState__OnEnterAsync_d__11__MoveNext (GameMainMenuState__OnEnterAsync_d__11_o
   __this, const MethodInfo* method); */

void GameMainMenuState__OnEnterAsync_d__11__MoveNext_2500f18(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bd68 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c18);
    FUN_021f03f8(PTR_DAT_049c8c20);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bd68 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  lVar9 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 02600f90 to 02700f93 has its CatchHandler @ 02601430 */
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
                    /* try { // try from 02600fa0 to 02700fa7 has its CatchHandler @ 02601444 */
    if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02600fb0 to 02700fbb has its CatchHandler @ 02601440 */
    if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsBool__Set_3f0e92c(*(long *)(*(long *)puVar1 + 0xb8) + 0x660,0,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02600fe4 to 02700feb has its CatchHandler @ 02601448 */
    if (*(long *)(lVar9 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    PlaySessionModule__End_2536df0(*(long *)(lVar9 + 0xa8),0);
    if (*(long *)(lVar9 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_50 = SceneModule__Load_25389f8(*(long *)(lVar9 + 0x80),7,0,0,0);
    puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 02601010 to 02701017 has its CatchHandler @ 02601438 */
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02601034 to 02701037 has its CatchHandler @ 0260142c */
    thunk_FUN_021f190c(auStack_50,0);
    uVar3 = auStack_50._8_8_;
    uVar2 = auStack_50._0_8_;
                    /* try { // try from 0260103c to 02701047 has its CatchHandler @ 02601434 */
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 0260105c to 027010ef has its CatchHandler @ 0260143c */
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
      lVar6 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0260110c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_0260110c:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c18);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0260113c to 027011c3 has its CatchHandler @ 02601458 */
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_026011a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_026011a4:
    (*(code *)*puVar5)(uVar2,uVar10,puVar5[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar9 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 026011c8 to 027011cf has its CatchHandler @ 0260144c */
  TimeModule__Resume_253a530(0,0,*(long *)(lVar9 + 0x88),0,0);
  lVar6 = *(long *)(lVar9 + 0x78);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    AudioModule__ChangeMusic_2530840(lVar6,*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x60),0);
    if (*(long *)(lVar9 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioModule__EnableMusic_253043c(*(long *)(lVar9 + 0x78),0);
                    /* try { // try from 02601200 to 02701207 has its CatchHandler @ 026014cc */
    if (*(long *)(lVar9 + 0x98) != 0) {
                    /* try { // try from 02601208 to 027013c7 has its CatchHandler @ 02600eb8 */
      LiveOpsModule__Update_254688c(*(long *)(lVar9 + 0x98),0);
      if (*(long *)(lVar9 + 0x70) != 0) {
        Monitors__Activate_object__268887c
                  (*(long *)(lVar9 + 0x70),0,*(undefined8 *)PTR_DAT_049c8c20);
        GameMainMenuState__HandleHomeActions_24fe51c(lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

