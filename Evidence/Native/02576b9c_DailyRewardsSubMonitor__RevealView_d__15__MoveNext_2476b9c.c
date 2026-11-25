/* IL2CPP: DailyRewardsSubMonitor.<RevealView>d__15$$MoveNext
void DailyRewardsSubMonitor__RevealView_d__15__MoveNext (DailyRewardsSubMonitor__RevealView_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor.<RevealView>d__15$$MoveNext
   void DailyRewardsSubMonitor__RevealView_d__15__MoveNext
   (DailyRewardsSubMonitor__RevealView_d__15_o __this, const MethodInfo* method); */

void DailyRewardsSubMonitor__RevealView_d__15__MoveNext_2476b9c(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  piVar5 = param_1;
  if ((bRam0000000004f4b9cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5798);
                    /* try { // try from 02576bcc to 02676bf7 has its CatchHandler @ 025773e8 */
    piVar5 = (int *)FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b9cb = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
                    /* try { // try from 02576c7c to 02676c83 has its CatchHandler @ 025773ac */
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_40 = DailyRewardsSubMonitor__ApplyRevealMotion_2474f98
                           (piVar5,*(undefined8 *)(param_1 + 6));
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar2 = auStack_40._0_8_;
                    /* try { // try from 02576c30 to 02676c37 has its CatchHandler @ 025773c8 */
    auStack_50 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02576c40 to 02676c47 has its CatchHandler @ 025773cc */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 02576c4c to 02676c53 has its CatchHandler @ 025773e0 */
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02576c60 to 02676c67 has its CatchHandler @ 025773a4 */
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 02576c90 to 02676c97 has its CatchHandler @ 025773a0 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02576ca0 to 02676ca7 has its CatchHandler @ 025773c0 */
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar2 != (long *)0x0) {
                    /* try { // try from 02576cac to 02676cb3 has its CatchHandler @ 025773bc */
      lVar7 = *(long *)uVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02576cbc to 02676cc3 has its CatchHandler @ 025773c4 */
      if (uVar8 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02576cf4 to 02676cfb has its CatchHandler @ 02577374 */
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02576cfc;
          }
          uVar8 = uVar8 - 1;
                    /* try { // try from 02576cd8 to 02676ce7 has its CatchHandler @ 02577378 */
          piVar5 = piVar5 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
                    /* try { // try from 02576cec to 02676cf3 has its CatchHandler @ 02577368 */
LAB_02576cfc:
                    /* try { // try from 02576cfc to 02676d0f has its CatchHandler @ 02577388 */
      iVar4 = (*(code *)*puVar6)(uVar2,uVar3 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
                    /* try { // try from 02576dec to 02676df7 has its CatchHandler @ 02577380 */
        thunk_FUN_021f190c(param_1 + 8,0);
                    /* try { // try from 02576e0c to 02676e1b has its CatchHandler @ 02577334 */
        FUN_0235c420(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c5798);
        return;
      }
    }
  }
                    /* try { // try from 02576d14 to 02676d1b has its CatchHandler @ 02577360 */
  if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02576d1c to 02676d23 has its CatchHandler @ 02577370 */
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_50._0_8_;
                    /* try { // try from 02576d34 to 02676d5f has its CatchHandler @ 02577398 */
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_50._0_8_;
    uVar9 = auStack_50._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02576d88 to 02676d97 has its CatchHandler @ 02577348 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_02576d94;
        }
                    /* try { // try from 02576d68 to 02676d73 has its CatchHandler @ 02577390 */
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02576d94:
                    /* try { // try from 02576d9c to 02676da3 has its CatchHandler @ 02577358 */
    (*(code *)*puVar6)(uVar2,uVar9,puVar6[1]);
  }
                    /* try { // try from 02576da4 to 02676dab has its CatchHandler @ 0257734c */
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 6),0xf7b703e5,0);
                    /* try { // try from 02576dbc to 02676de3 has its CatchHandler @ 0257738c */
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

