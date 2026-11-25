/* IL2CPP: RankingMonitor$$CreatePlayerElement
void RankingMonitor__CreatePlayerElement (RankingMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, LeaderboardEntry_o data, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$CreatePlayerElement
   void RankingMonitor__CreatePlayerElement (RankingMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, LeaderboardEntry_o data, int32_t idx, const
   MethodInfo* method); */

void RankingMonitor__CreatePlayerElement_2457654
               (long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_049c4b50;
  if ((bRam0000000004f4b8fa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049c4b58);
    FUN_021f03f8(PTR_DAT_049c4b50);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c4b60);
    bRam0000000004f4b8fa = 1;
  }
  iStack_44 = 0;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar6 + 0x10),param_1);
    uVar11 = param_3[5];
    uVar10 = param_3[4];
    uVar7 = param_3[6];
    uVar13 = param_3[1];
    uVar12 = *param_3;
    uVar15 = param_3[3];
    uVar14 = param_3[2];
    *(undefined8 *)(lVar6 + 0x50) = param_3[7];
    *(undefined8 *)(lVar6 + 0x48) = uVar7;
    *(undefined8 *)(lVar6 + 0x40) = uVar11;
    *(undefined8 *)(lVar6 + 0x38) = uVar10;
    *(undefined8 *)(lVar6 + 0x30) = uVar15;
    *(undefined8 *)(lVar6 + 0x28) = uVar14;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    *(undefined8 *)(lVar6 + 0x18) = uVar12;
    thunk_FUN_021f190c(lVar6 + 0x18,0);
    if ((*(long *)(param_1 + 0xf8) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0xf8) + 0x60), lVar9 != 0)) {
      iVar2 = *(int *)(lVar9 + 0x18);
      iVar1 = iVar2;
      if (-1 < param_4) {
        iVar1 = param_4;
      }
      iStack_44 = iVar1 + 1;
      uVar5 = LeaderboardEntry__get_HasEntry_2545aac(lVar6 + 0x18,0);
      if (((uVar5 ^ 1) & 1) == 0) {
        uVar7 = System_Int64__ToString_30fcb34(lVar6 + 0x30,0);
      }
      else {
        uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x6b7d10cf,uVar7,0);
      if (iVar2 < iVar1 + 1) {
        iStack_48 = iVar2;
        uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_48);
        uVar7 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c4b60,uVar7,0);
      }
      else {
        uVar7 = System_Int32__ToString_30fbaa0(&iStack_44,0);
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0xa59d7244,uVar7,0);
      uStack_58 = *(undefined8 *)(lVar6 + 0x48);
      uStack_60 = *(undefined8 *)(lVar6 + 0x40);
      uStack_50 = *(undefined8 *)(lVar6 + 0x50);
      RankingMonitor__CreatePlayerProfileElement_2457958(param_1,param_2,&uStack_60,(uVar5 ^ 1) & 1)
      ;
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,0x5f10e269,0);
      if (*(char *)(lVar6 + 0x38) != '\0') {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,0xa41ab296,0);
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x158);
        uVar7 = Leaderboard__get_TournamentId_251cbe4(*(long *)(param_1 + 0xa8),0);
        uVar8 = System_String__op_Equality_2f7b7fc(uVar10,uVar7,0);
        if ((uVar8 & 1) != 0) {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (param_2,0x9cdabd31,0);
        }
        if (iStack_44 - 1U < 3) {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (param_2,*(undefined4 *)(&UNK_013e9ee0 + (ulong)(iStack_44 - 1U) * 4),0);
        }
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                          (param_2,0x854128ce,0);
        puVar4 = PTR_DAT_049c4b58;
        puVar3 = PTR_DAT_049b8d80;
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x100) != 0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar9 + 0x100),0);
          lVar9 = *(long *)(lVar9 + 0x100);
          uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
          UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,lVar6,*(undefined8 *)puVar4,0);
          if (lVar9 != 0) {
            UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar9,uVar7,0);
            RankingMonitor__CreatePlayerRewardElement_24579f4(param_1,param_2,iStack_44);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

