/* IL2CPP: DailyChallenge$$HasUnclaimedReward
bool DailyChallenge__HasUnclaimedReward (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$HasUnclaimedReward
   bool DailyChallenge__HasUnclaimedReward (DailyChallenge_o* __this, const MethodInfo* method); */

uint DailyChallenge__HasUnclaimedReward_2515180(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  char cVar12;
  char cVar13;
  undefined1 auStack_60 [16];
  int iStack_44;
  
  if ((bRam0000000004f4be19 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5610);
    FUN_021f03f8(PTR_DAT_049c5618);
    FUN_021f03f8(PTR_DAT_049c5620);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c5630);
    bRam0000000004f4be19 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uVar6 = DailyChallenge__GetCompletedDays_25168ec();
  puVar5 = PTR_DAT_049c5620;
  puVar4 = PTR_DAT_049c5618;
  puVar3 = PTR_DAT_049c5610;
  puVar2 = PTR_DAT_049c2cf0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x130);
    if (lVar8 != 0) {
      cVar12 = POPCOUNT((char)((uint)uVar6 >> 0x10));
      cVar13 = POPCOUNT((char)((uint)uVar6 >> 0x18));
      uVar1 = NEON_uaddlv((ulong)CONCAT13(cVar13,CONCAT12(cVar12,CONCAT11(POPCOUNT((char)((uint)
                                                  uVar6 >> 8)),POPCOUNT((char)uVar6)))),1);
      auStack_60 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar8,*(undefined8 *)PTR_DAT_049c5630);
      do {
        uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                          (auStack_60,*(undefined8 *)puVar4);
        if ((uVar7 & 1) == 0) break;
        lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_60,*(undefined8 *)puVar5);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar11 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
        uVar6 = *(undefined4 *)(plVar11[1] + 0xfc);
        uVar9 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar11 + 0x80));
        uVar9 = func_0x04608620(&iStack_44,uVar9,uVar6);
      } while ((CONCAT13(cVar13,CONCAT12(cVar12,uVar1)) < iStack_44) ||
              (uVar10 = DailyChallenge__IsRewardClaimed_2515e6c(uVar9,lVar8), (uVar10 & 1) != 0));
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_60,*(undefined8 *)puVar3);
      return uVar7 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

