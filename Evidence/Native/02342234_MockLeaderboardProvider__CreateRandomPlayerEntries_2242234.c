/* IL2CPP: MockLeaderboardProvider$$CreateRandomPlayerEntries
System_Collections_Generic_List_LeaderboardEntry__o* MockLeaderboardProvider__CreateRandomPlayerEntries (MockLeaderboardProvider_o* __this, System_String_o* leaderboardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider$$CreateRandomPlayerEntries
   System_Collections_Generic_List_LeaderboardEntry__o*
   MockLeaderboardProvider__CreateRandomPlayerEntries (MockLeaderboardProvider_o* __this,
   System_String_o* leaderboardId, const MethodInfo* method); */

long MockLeaderboardProvider__CreateRandomPlayerEntries_2242234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  
  puVar3 = PTR_DAT_049b5458;
  puVar2 = PTR_DAT_049b53c0;
  puVar1 = PTR_DAT_049b53b8;
                    /* try { // try from 02342250 to 0244225f has its CatchHandler @ 02342308 */
                    /* try { // try from 02342274 to 024422a3 has its CatchHandler @ 02342318 */
  if ((bRam0000000004f49b21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049b5468);
    FUN_021f03f8(PTR_DAT_049b5458);
    FUN_021f03f8(PTR_DAT_049b5470);
    FUN_021f03f8(PTR_DAT_049b5478);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b5488);
    FUN_021f03f8(PTR_DAT_049b5490);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b53b8);
                    /* try { // try from 02342300 to 02442307 has its CatchHandler @ 02342328 */
                    /* catch() { ... } // from try @ 02342250 with catch @ 02342308
                       try { // try from 02342308 to 0244235b has its CatchHandler @ 02341fbc */
    FUN_021f03f8(PTR_DAT_049b5498);
                    /* catch() { ... } // from try @ 023421f0 with catch @ 0234230c */
                    /* catch() { ... } // from try @ 02342098 with catch @ 02342310
                       catch() { ... } // from try @ 023420c0 with catch @ 02342310 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 02342274 with catch @ 02342318 */
    FUN_021f03f8(PTR_DAT_049b4540);
                    /* catch() { ... } // from try @ 02342300 with catch @ 02342328 */
    bRam0000000004f49b21 = 1;
  }
                    /* catch() { ... } // from try @ 02342108 with catch @ 0234232c */
  puVar4 = PTR_DAT_049b5468;
                    /* catch() { ... } // from try @ 02342210 with catch @ 02342330 */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_70 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_78,*(undefined8 *)puVar4);
  lVar9 = lStack_78;
  puStack_108 = auStack_70;
  uStack_110 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_28958e8
                    (lVar7,*(undefined8 *)PTR_DAT_049b5488);
  if (lVar9 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (lVar9,uVar8,*(undefined8 *)PTR_DAT_049b5490);
    lVar9 = lStack_78;
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8
              (lVar9,*(undefined8 *)PTR_DAT_049b5478);
    lVar9 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,1);
    puVar1 = PTR_DAT_049b5310;
    lVar7 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar7 + 0xb8) + 0x1b0,&uStack_128,*(undefined8 *)PTR_DAT_049b5460);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar9 + 0x20) = uStack_120;
    thunk_FUN_021f190c();
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar9 = NicknameGenerator__Generate_25501b8(*(long *)(param_1 + 0x10),3000,lVar9,0);
      puVar2 = PTR_DAT_049b5470;
      puVar1 = PTR_DAT_049b53e0;
      uVar10 = 0;
      while( true ) {
        auVar11 = System_Guid__NewGuid_30f5cfc(0);
        auStack_a0 = auVar11;
        uVar8 = System_Guid__ToString_30f7f1c(auStack_a0,0);
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
        uStack_b0 = *(undefined8 *)(lVar9 + 0x20 + uVar10 * 8);
        thunk_FUN_021f190c(&uStack_b0);
        lVar7 = lStack_78;
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
                  (lVar7,uVar10 & 0xffffffff,&uStack_128,*(undefined8 *)puVar2);
        uStack_a8 = uStack_128;
        thunk_FUN_021f190c(&uStack_a8);
        uStack_88 = uStack_b0;
        uStack_90 = uStack_b8;
        uStack_80 = uStack_a8;
        uStack_f8 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_100 = param_2;
        thunk_FUN_021f190c(&uStack_100,param_2);
        uStack_f8 = uVar8;
        thunk_FUN_021f190c((ulong)&uStack_100 | 8,uVar8);
        iVar5 = UnityEngine_Random__Range_3c11c94(100,25000,0);
        lStack_e8 = (long)iVar5;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        uStack_d0 = uStack_88;
        uStack_d8 = uStack_90;
        uStack_c8 = uStack_80;
        thunk_FUN_021f190c(&uStack_d0,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_168 = uStack_f8;
        uStack_170 = uStack_100;
        lStack_158 = lStack_e8;
        uStack_160 = uStack_f0;
        uStack_148 = uStack_d8;
        uStack_150 = uStack_e0;
        uStack_138 = uStack_c8;
        uStack_140 = uStack_d0;
        FUN_02333498(lVar6,&uStack_170,*(undefined8 *)puVar1);
        uVar10 = uVar10 + 1;
        if (uVar10 == 3000) {
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_70,*(undefined8 *)PTR_DAT_049b5498);
          return lVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar8,uVar8);
}

