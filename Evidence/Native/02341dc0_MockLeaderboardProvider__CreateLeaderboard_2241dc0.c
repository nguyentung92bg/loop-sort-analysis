/* IL2CPP: MockLeaderboardProvider$$CreateLeaderboard
LeaderboardPage_o MockLeaderboardProvider__CreateLeaderboard (MockLeaderboardProvider_o* __this, System_String_o* leaderboardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider$$CreateLeaderboard
   LeaderboardPage_o MockLeaderboardProvider__CreateLeaderboard (MockLeaderboardProvider_o* __this,
   System_String_o* leaderboardId, const MethodInfo* method); */

undefined1  [16] MockLeaderboardProvider__CreateLeaderboard_2241dc0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_180;
  long lStack_178;
  int iStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 auStack_100 [64];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  puVar5 = PTR_DAT_049b53c0;
                    /* try { // try from 02341dc0 to 02441dcf has its CatchHandler @ 02341de4 */
  puVar4 = PTR_DAT_049b53b8;
                    /* try { // try from 02341dd0 to 02441df7 has its CatchHandler @ 02341d8c */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 02341dc0 with catch @ 02341de4 */
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f49b1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b53f8);
    FUN_021f03f8(PTR_DAT_049b5400);
    FUN_021f03f8(PTR_DAT_049b5408);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b5410);
                    /* try { // try from 02341e4c to 02441e83 has its CatchHandler @ 02341e4c
                       catch() { ... } // from try @ 02341e4c with catch @ 02341e4c
                       catch() { ... } // from try @ 02341edc with catch @ 02341e4c */
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b5420);
    FUN_021f03f8(PTR_DAT_049b5428);
                    /* try { // try from 02341e84 to 02441e8b has its CatchHandler @ 02341ef4 */
    FUN_021f03f8(PTR_DAT_049b53b8);
    FUN_021f03f8(PTR_DAT_049b5430);
    FUN_021f03f8(PTR_DAT_049b5438);
    bRam0000000004f49b1f = 1;
  }
                    /* try { // try from 02341eac to 02441eaf has its CatchHandler @ 02341efc */
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  lStack_b8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                    /* try { // try from 02341ec4 to 02441ec7 has its CatchHandler @ 02341ef8 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar5);
                    /* try { // try from 02341ed4 to 02441edb has its CatchHandler @ 02341ef4 */
  uVar7 = MockLeaderboardProvider__CreateRandomPlayerEntries_2242234(param_1,param_2);
  puVar5 = PTR_DAT_049b5438;
  puVar4 = PTR_DAT_049b53e0;
                    /* try { // try from 02341edc to 02441f0f has its CatchHandler @ 02341e4c */
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 02341e84 with catch @ 02341ef4
                       catch() { ... } // from try @ 02341ed4 with catch @ 02341ef4 */
                    /* catch() { ... } // from try @ 02341ec4 with catch @ 02341ef8 */
                    /* catch() { ... } // from try @ 02341eac with catch @ 02341efc */
    uVar7 = System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                      (lVar6,uVar7,*(undefined8 *)PTR_DAT_049b5408);
                    /* try { // try from 02341f10 to 02441f8b has its CatchHandler @ 02341f10
                       catch() { ... } // from try @ 02341f10 with catch @ 02341f10
                       catch() { ... } // from try @ 02341f90 with catch @ 02341f10 */
    MockLeaderboardProvider__GetLocalPlayerEntry_22426ec(auStack_100,uVar7,param_2);
    FUN_02333498(lVar6,auStack_100,*(undefined8 *)puVar4);
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar5;
    }
    puVar4 = PTR_DAT_049b5410;
    puVar10 = *(undefined8 **)(lVar8 + 0xb8);
    lVar12 = puVar10[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
      }
      uVar7 = *puVar10;
      lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b53f8);
                    /* try { // try from 02341f8c to 02441f8f has its CatchHandler @ 02341fa8 */
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar12,uVar7,*(undefined8 *)PTR_DAT_049b5430,0);
                    /* try { // try from 02341f90 to 02441fbb has its CatchHandler @ 02341f10 */
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      *plVar9 = lVar12;
      thunk_FUN_021f190c(plVar9,lVar12);
    }
                    /* catch() { ... } // from try @ 02341f8c with catch @ 02341fa8 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
              (lVar6,lVar12,*(undefined8 *)puVar4);
    puVar5 = PTR_DAT_049b5428;
    puVar4 = PTR_DAT_049b5420;
                    /* try { // try from 02341fbc to 02442097 has its CatchHandler @ 02341fbc
                       catch() { ... } // from try @ 02341fbc with catch @ 02341fbc
                       catch() { ... } // from try @ 0234209c with catch @ 02341fbc
                       catch() { ... } // from try @ 02342308 with catch @ 02341fbc */
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar11 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar6,iVar11,&uStack_140,*(undefined8 *)puVar4);
        iVar1 = iVar11 + 1;
        uStack_7c = uStack_108;
        uStack_80 = uStack_10c;
        uStack_88 = uStack_114;
        uStack_84 = uStack_110;
        uStack_90 = uStack_11c;
        lStack_a8 = lStack_138;
        uStack_b0 = uStack_140;
        uStack_98 = uStack_124;
        uStack_a0 = uStack_12c;
        lStack_178 = lStack_138;
        uStack_180 = uStack_140;
        uStack_164 = uStack_124;
        uStack_16c = uStack_12c;
        uStack_15c = uStack_11c;
        uStack_148 = uStack_108;
        iStack_170 = iVar1;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                  (lVar6,iVar11,&uStack_180,*(undefined8 *)puVar5);
        iVar11 = iVar1;
      } while (iVar1 < *(int *)(lVar6 + 0x18));
    }
    uStack_bc = 0;
    uStack_c0 = 3000;
    lStack_b8 = lVar6;
    thunk_FUN_021f190c(&lStack_b8,lVar6);
    if (*(long *)(param_1 + 0x20) != 0) {
      uStack_140 = CONCAT44(uStack_bc,uStack_c0);
      auVar3._4_4_ = uStack_bc;
      auVar3._0_4_ = uStack_c0;
      auVar3._8_8_ = lStack_b8;
      lStack_138 = lStack_b8;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x20),param_2,&uStack_140,*(undefined8 *)PTR_DAT_049b5400);
                    /* try { // try from 02342098 to 0244209b has its CatchHandler @ 02342310 */
                    /* try { // try from 0234209c to 024420bf has its CatchHandler @ 02341fbc */
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* try { // try from 023420c0 to 024420d3 has its CatchHandler @ 02342310 */
        return auVar3;
      }
      goto LAB_023420e0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_023420e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

