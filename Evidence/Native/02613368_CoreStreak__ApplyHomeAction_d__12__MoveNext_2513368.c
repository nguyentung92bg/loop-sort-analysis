/* IL2CPP: CoreStreak.<ApplyHomeAction>d__12$$MoveNext
void CoreStreak__ApplyHomeAction_d__12__MoveNext (CoreStreak__ApplyHomeAction_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02613778) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: CoreStreak.<ApplyHomeAction>d__12$$MoveNext
   void CoreStreak__ApplyHomeAction_d__12__MoveNext (CoreStreak__ApplyHomeAction_d__12_o __this,
   const MethodInfo* method); */

void CoreStreak__ApplyHomeAction_d__12__MoveNext_2513368(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_60 [16];
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
  if ((bRam0000000004f4be06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c92e0);
    FUN_021f03f8(PTR_DAT_049c92e8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4be06 = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 6);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iStack_24 == 0) {
LAB_02613480:
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_24 = -1;
    *param_1 = -1;
    goto LAB_02613498;
  }
  if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = CoreStreak__IsUnlocked_2512e64();
  if ((uVar4 & 1) == 0) goto LAB_0261356c;
  if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lStack_48 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__DisableRaycaster_256ea20(*(long *)(lStack_48 + 0x28),lStack_48,0);
  if (iStack_24 == 0) goto LAB_02613480;
  if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar8 = *(long **)(lStack_48 + 0x50);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *plVar8;
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c92e8) {
                    /* catch() { ... } // from try @ 02613604 with catch @ 02613614 */
                    /* try { // try from 0261361c to 02713623 has its CatchHandler @ 026136a4 */
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_02613624;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c92e8,1);
LAB_02613624:
                    /* try { // try from 02613624 to 02713637 has its CatchHandler @ 02612df8 */
  auStack_40 = (*(code *)*puVar5)(plVar8,0,uVar10,puVar5[1]);
  puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 02613638 to 0271364f has its CatchHandler @ 02613694 */
                    /* try { // try from 02613650 to 02713683 has its CatchHandler @ 02612df8 */
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  thunk_FUN_021f190c(auStack_40,0);
  auStack_60 = auStack_40;
  if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02613684 to 02713693 has its CatchHandler @ 02613694 */
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
                    /* catch() { ... } // from try @ 02613638 with catch @ 02613694
                       catch() { ... } // from try @ 02613684 with catch @ 02613694 */
                    /* try { // try from 02613698 to 0271369b has its CatchHandler @ 026136a4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0261369c to 027136a7 has its CatchHandler @ 02612df8 */
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 0261361c with catch @ 026136a4
                       catch() { ... } // from try @ 02613698 with catch @ 026136a4 */
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar10 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ == (long *)0x0) {
LAB_02613498:
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 026134a4 to 027134af has its CatchHandler @ 02613568 */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* try { // try from 026134c0 to 027134cb has its CatchHandler @ 02613564 */
      lVar6 = *(long *)auStack_60._0_8_;
                    /* try { // try from 026134cc to 02713543 has its CatchHandler @ 02612df8 */
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0261351c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0261351c:
      (*(code *)*puVar5)(uVar10,uVar11,puVar5[1]);
    }
    uVar9 = 8;
  }
  else {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02613720;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02613720:
    iVar3 = (*(code *)*puVar5)(uVar10,uVar11,puVar5[1]);
    if (iVar3 != 0) goto LAB_02613498;
    iStack_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
    thunk_FUN_021f190c(param_1 + 10,0);
    FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c92e0);
    uVar9 = 7;
  }
  if (iStack_24 < 0) {
                    /* try { // try from 02613544 to 02713547 has its CatchHandler @ 026135dc */
                    /* try { // try from 02613548 to 0271354b has its CatchHandler @ 026135d8 */
                    /* try { // try from 0261354c to 0271354f has its CatchHandler @ 026135d4 */
                    /* try { // try from 02613550 to 02713557 has its CatchHandler @ 0261359c */
    if ((lStack_48 == 0) || (*(long *)(lStack_48 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02613558 to 0271355b has its CatchHandler @ 02613594 */
    Monitors__RestoreRaycaster_256eafc(*(long *)(lStack_48 + 0x28),lStack_48,0);
  }
                    /* try { // try from 0261355c to 0271355f has its CatchHandler @ 02613588 */
                    /* try { // try from 02613560 to 02713563 has its CatchHandler @ 02613580 */
                    /* catch() { ... } // from try @ 026134c0 with catch @ 02613564
                       try { // try from 02613564 to 02713603 has its CatchHandler @ 02612df8 */
                    /* catch() { ... } // from try @ 026134a4 with catch @ 02613568 */
  if ((uVar9 | 8) != 8) {
    return;
  }
LAB_0261356c:
                    /* catch() { ... } // from try @ 0261317c with catch @ 0261356c */
  cVar2 = cRam0000000004f49bfa;
                    /* catch() { ... } // from try @ 02613190 with catch @ 02613570 */
                    /* catch() { ... } // from try @ 02613180 with catch @ 02613574 */
                    /* catch() { ... } // from try @ 02612f64 with catch @ 02613578 */
  *param_1 = -2;
                    /* catch() { ... } // from try @ 02612f54 with catch @ 0261357c */
  if (cVar2 == '\0') {
                    /* catch() { ... } // from try @ 02613560 with catch @ 02613580 */
                    /* catch() { ... } // from try @ 02612f10 with catch @ 02613584 */
                    /* catch() { ... } // from try @ 0261355c with catch @ 02613588 */
    FUN_021f03f8(PTR_DAT_049b56d0);
                    /* catch() { ... } // from try @ 026131b0 with catch @ 0261358c */
                    /* catch() { ... } // from try @ 02612f20 with catch @ 02613590 */
    cRam0000000004f49bfa = '\x01';
  }
                    /* catch() { ... } // from try @ 02612efc with catch @ 02613594
                       catch() { ... } // from try @ 02613558 with catch @ 02613594 */
  plVar8 = *(long **)(param_1 + 2);
                    /* catch() { ... } // from try @ 026132a4 with catch @ 02613598 */
  if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02613354 with catch @ 0261359c
                       catch() { ... } // from try @ 02613550 with catch @ 0261359c */
    lVar6 = *plVar8;
                    /* catch() { ... } // from try @ 0261302c with catch @ 026135a8 */
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 02613098 with catch @ 026135ac */
                    /* catch() { ... } // from try @ 026130fc with catch @ 026135b0 */
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 02613054 with catch @ 026135b4 */
                    /* catch() { ... } // from try @ 02613078 with catch @ 026135b8 */
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 026130b4 with catch @ 026135bc */
                    /* catch() { ... } // from try @ 026130cc with catch @ 026135c0 */
                    /* catch() { ... } // from try @ 02612fbc with catch @ 026135c4 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* catch() { ... } // from try @ 02612fd4 with catch @ 026135e4 */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_026135f4;
        }
                    /* catch() { ... } // from try @ 0261310c with catch @ 026135c8 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 02613124 with catch @ 026135cc */
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0261314c with catch @ 026135d0 */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 0261354c with catch @ 026135d4 */
                    /* catch() { ... } // from try @ 02613548 with catch @ 026135d8 */
                    /* catch() { ... } // from try @ 02613544 with catch @ 026135dc */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
                    /* catch() { ... } // from try @ 02613008 with catch @ 026135e0 */
LAB_026135f4:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
                    /* try { // try from 02613604 to 02713607 has its CatchHandler @ 02613614 */
  return;
}

