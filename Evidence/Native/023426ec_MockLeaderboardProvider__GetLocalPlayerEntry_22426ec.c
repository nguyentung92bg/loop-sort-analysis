/* IL2CPP: MockLeaderboardProvider$$GetLocalPlayerEntry
LeaderboardEntry_o MockLeaderboardProvider__GetLocalPlayerEntry (MockLeaderboardProvider_o* __this, System_String_o* leaderboardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider$$GetLocalPlayerEntry
   LeaderboardEntry_o MockLeaderboardProvider__GetLocalPlayerEntry (MockLeaderboardProvider_o*
   __this, System_String_o* leaderboardId, const MethodInfo* method); */

void MockLeaderboardProvider__GetLocalPlayerEntry_22426ec
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b54a0;
                    /* try { // try from 02342700 to 0244272f has its CatchHandler @ 02342700
                       catch() { ... } // from try @ 02342700 with catch @ 02342700
                       catch() { ... } // from try @ 023427bc with catch @ 02342700 */
  if ((bRam0000000004f49b20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049b54a0);
                    /* try { // try from 02342730 to 0244274b has its CatchHandler @ 023427d8 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f49b20 = 1;
  }
  uStack_68 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_70 = param_3;
                    /* try { // try from 02342758 to 02442763 has its CatchHandler @ 023427d4 */
  thunk_FUN_021f190c(&uStack_70,param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf3 == '\0') {
                    /* try { // try from 0234277c to 0244277f has its CatchHandler @ 023427bc */
    FUN_021f03f8(PTR_DAT_049b54a0);
    cRam0000000004f49bf3 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_049b54a8;
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 023427a8 to 024427bb has its CatchHandler @ 023427d8 */
  if (**(long **)(lVar4 + 0xb8) != 0) {
                    /* catch() { ... } // from try @ 0234277c with catch @ 023427bc
                       try { // try from 023427bc to 024427eb has its CatchHandler @ 02342700 */
    uStack_68 = *(undefined8 *)(**(long **)(lVar4 + 0xb8) + 0x20);
    thunk_FUN_021f190c((ulong)&uStack_70 | 8);
                    /* catch() { ... } // from try @ 02342758 with catch @ 023427d4 */
    lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02342730 with catch @ 023427d8
                       catch() { ... } // from try @ 023427a8 with catch @ 023427d8 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 023427f0 to 0244283b has its CatchHandler @ 023427f0
                       catch() { ... } // from try @ 023427f0 with catch @ 023427f0
                       catch() { ... } // from try @ 02342890 with catch @ 023427f0 */
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    lStack_58 = (long)(iVar3 + 1);
    uStack_b8 = *(undefined8 *)(lVar4 + 0x1b8);
    uStack_c0 = *(undefined8 *)(lVar4 + 0x1b0);
    uStack_a8 = *(undefined8 *)(lVar4 + 0x1c8);
    uStack_b0 = *(undefined8 *)(lVar4 + 0x1c0);
    uStack_98 = *(undefined8 *)(lVar4 + 0x1d8);
    uStack_a0 = *(undefined8 *)(lVar4 + 0x1d0);
    uStack_90 = *(undefined8 *)(lVar4 + 0x1e0);
    CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
              (&uStack_c0,&uStack_88,*(undefined8 *)puVar2);
                    /* try { // try from 0234283c to 0244288f has its CatchHandler @ 02342890 */
    uStack_40 = uStack_80;
    uStack_48 = uStack_88;
    uStack_38 = uStack_78;
    thunk_FUN_021f190c(&uStack_40,0);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = lStack_58;
    param_1[2] = uStack_60;
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
    param_1[7] = uStack_38;
    param_1[6] = uStack_40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

