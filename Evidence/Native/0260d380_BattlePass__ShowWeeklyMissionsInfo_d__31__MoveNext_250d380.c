/* IL2CPP: BattlePass.<ShowWeeklyMissionsInfo>d__31$$MoveNext
void BattlePass__ShowWeeklyMissionsInfo_d__31__MoveNext (BattlePass__ShowWeeklyMissionsInfo_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass.<ShowWeeklyMissionsInfo>d__31$$MoveNext
   void BattlePass__ShowWeeklyMissionsInfo_d__31__MoveNext
   (BattlePass__ShowWeeklyMissionsInfo_d__31_o __this, const MethodInfo* method); */

void BattlePass__ShowWeeklyMissionsInfo_d__31__MoveNext_250d380(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
                    /* try { // try from 0260d380 to 0270d387 has its CatchHandler @ 0260d6ac */
  if ((bRam0000000004f4bddf & 1) == 0) {
                    /* try { // try from 0260d3a0 to 0270d3eb has its CatchHandler @ 0260d6b0 */
    FUN_021f03f8(PTR_DAT_049c9168);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c9158);
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049c9160);
                    /* try { // try from 0260d3ec to 0270d407 has its CatchHandler @ 0260d018 */
    FUN_021f03f8(PTR_DAT_049c9170);
    FUN_021f03f8(PTR_DAT_049c9178);
                    /* try { // try from 0260d408 to 0270d417 has its CatchHandler @ 0260d6a8 */
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4bddf = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
                    /* try { // try from 0260d438 to 0270d43b has its CatchHandler @ 0260d7f8 */
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    uStack_48 = *(undefined8 *)(param_1 + 10);
    uStack_50 = *(undefined8 *)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = *(long *)(param_1 + 4);
                    /* try { // try from 0260d448 to 0270d457 has its CatchHandler @ 0260d7f0 */
    lVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c9178);
    System_Object___ctor_3142338(lVar2,0);
    plVar4 = (long *)(param_1 + 6);
    *plVar4 = lVar2;
    thunk_FUN_021f190c(plVar4,lVar2);
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0260d47c to 0270d47f has its CatchHandler @ 0260d824 */
    *(undefined8 *)(*plVar4 + 0x10) = *(undefined8 *)(param_1 + 4);
                    /* try { // try from 0260d480 to 0270d497 has its CatchHandler @ 0260d82c */
    thunk_FUN_021f190c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar4;
                    /* try { // try from 0260d49c to 0270d4a7 has its CatchHandler @ 0260d814 */
    lVar2 = Monitors__Get_object__26889d0(*(long *)(lVar7 + 0x28),*(undefined8 *)PTR_DAT_049c9160);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0260d4a8 to 0270d4b7 has its CatchHandler @ 0260d838 */
    uVar3 = MonitorBase__GetSubMonitor_object__2688828(lVar2,*(undefined8 *)PTR_DAT_049c9158);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar6 = (undefined8 *)(lVar5 + 0x18);
    *puVar6 = uVar3;
                    /* try { // try from 0260d4c4 to 0270d4cf has its CatchHandler @ 0260d828 */
    thunk_FUN_021f190c(puVar6);
    lVar2 = *plVar4;
                    /* try { // try from 0260d4d0 to 0270d4e3 has its CatchHandler @ 0260d830 */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0xc0);
    if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0260d4f0 to 0270d4fb has its CatchHandler @ 0260d818 */
    Monitors__Deactivate_object__2688964(*(long *)(lVar7 + 0x28),0,*(undefined8 *)PTR_DAT_049c5478);
    if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0260d514 to 0270d51b has its CatchHandler @ 0260d668 */
    LiveOpsModule__Show_253e230(&uStack_98,*(long *)(lVar7 + 0x38),10,0,0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
                    /* try { // try from 0260d534 to 0270d57f has its CatchHandler @ 0260d66c */
    uStack_60 = uStack_88;
    FUN_0235b0c0(&uStack_70,&uStack_98,*(undefined8 *)PTR_DAT_049c46b0);
    lVar7 = *(long *)PTR_DAT_049c46a0;
    uStack_48 = uStack_90;
    uStack_50 = uStack_98;
    uStack_40 = uStack_88;
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
                    /* try { // try from 0260d580 to 0270d597 has its CatchHandler @ 0260d018 */
    uVar3 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x80));
    lVar2 = *(long *)(lVar7 + 0x20);
                    /* try { // try from 0260d598 to 0270d5a3 has its CatchHandler @ 0260d664 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    iVar1 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    if (iVar1 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 8) = uStack_50;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 8,0);
                    /* try { // try from 0260d5e0 to 0270d60f has its CatchHandler @ 0260d660 */
      FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c9168);
      return;
    }
  }
  FUN_0235b3fc(&uStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049c4698);
                    /* try { // try from 0260d62c to 0270d62f has its CatchHandler @ 0260d810 */
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (uStack_98,0xa66c44de,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar2 + 0x100) != 0) {
                    /* try { // try from 0260d654 to 0270d657 has its CatchHandler @ 0260d65c */
    UnityEngine_Events_UnityEvent__Invoke_3c32ba4(*(long *)(lVar2 + 0x100),0);
                    /* try { // try from 0260d658 to 0270d68b has its CatchHandler @ 0260d018 */
                    /* catch() { ... } // from try @ 0260d654 with catch @ 0260d65c */
                    /* catch() { ... } // from try @ 0260d5e0 with catch @ 0260d660 */
                    /* catch() { ... } // from try @ 0260d598 with catch @ 0260d664 */
    uVar8 = *(undefined8 *)(param_1 + 6);
                    /* catch() { ... } // from try @ 0260d514 with catch @ 0260d668 */
                    /* catch() { ... } // from try @ 0260d534 with catch @ 0260d66c */
    uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar3,uVar8,*(undefined8 *)PTR_DAT_049c9170,0);
                    /* try { // try from 0260d68c to 0270d68f has its CatchHandler @ 0260d7dc */
                    /* try { // try from 0260d69c to 0270d69f has its CatchHandler @ 0260d6a4 */
                    /* try { // try from 0260d6a0 to 0270d6cf has its CatchHandler @ 0260d018 */
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uStack_98,0xb4ce0c4e,uVar3,0);
                    /* catch() { ... } // from try @ 0260d69c with catch @ 0260d6a4 */
                    /* catch() { ... } // from try @ 0260d408 with catch @ 0260d6a8 */
                    /* catch() { ... } // from try @ 0260d380 with catch @ 0260d6ac */
                    /* catch() { ... } // from try @ 0260d3a0 with catch @ 0260d6b0 */
    *param_1 = -2;
    param_1[6] = 0;
    param_1[7] = 0;
    thunk_FUN_021f190c(param_1 + 6,0);
    FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 0260d6d0 to 0270d6d3 has its CatchHandler @ 0260d7c8 */
                    /* try { // try from 0260d6d4 to 0270d78f has its CatchHandler @ 0260d018 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

