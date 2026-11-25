/* IL2CPP: DailyChallengeSubMonitor$$FillRewardElements
void DailyChallengeSubMonitor__FillRewardElements (DailyChallengeSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DailyChallengeSubMonitor$$FillRewardElements
   void DailyChallengeSubMonitor__FillRewardElements (DailyChallengeSubMonitor_o* __this, const
   MethodInfo* method); */

void DailyChallengeSubMonitor__FillRewardElements_24728fc(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000004f4b9b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5608);
    FUN_021f03f8(PTR_DAT_049c5610);
    FUN_021f03f8(PTR_DAT_049c5618);
    FUN_021f03f8(PTR_DAT_049c5620);
    FUN_021f03f8(PTR_DAT_049c5628);
    FUN_021f03f8(PTR_DAT_049c5630);
    FUN_021f03f8(PTR_DAT_049c5638);
    bRam0000000004f4b9b5 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x78d4e5eb,0);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x130), lVar7 != 0)) {
    iVar5 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar7,*(undefined8 *)PTR_DAT_049c5608);
    puVar4 = PTR_DAT_049c5638;
    puVar3 = PTR_DAT_049c5628;
    puVar2 = PTR_DAT_049c5618;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x130);
      if (lVar7 != 0) {
        fVar11 = _UNK_013aa508 / (float)iVar5;
        auStack_90 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                               (lVar7,*(undefined8 *)PTR_DAT_049c5630);
        puStack_98 = auStack_90;
        iVar5 = 1;
        uStack_a0 = 0;
        while( true ) {
          uVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                            (auStack_90,*(undefined8 *)puVar2);
          if ((uVar8 & 1) == 0) {
            Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                      (auStack_90,*(undefined8 *)PTR_DAT_049c5610);
            return;
          }
          uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                            (auStack_90,*(undefined8 *)PTR_DAT_049c5620);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar10 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
          DailyChallengeSubMonitor__CreateRewardElement_2472e24
                    (fVar11 * (float)iVar5,param_1,uVar10,uVar9);
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar8 = DailyChallenge__IsRewardClaimed_2515e6c(*(long *)(param_1 + 0x40),uVar9,0);
          uVar1 = 0x93dbeb55;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0x5f10e269;
          }
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (uVar10,uVar1,0);
          lVar7 = *(long *)(param_1 + 0x60);
          uStack_b0 = 0;
          uStack_a8 = 0;
          System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                    (&uStack_b0,uVar9,uVar10,*(undefined8 *)puVar4);
          if (lVar7 == 0) break;
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          FUN_02333498(lVar7,&uStack_80,*(undefined8 *)puVar3);
          iVar5 = iVar5 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

