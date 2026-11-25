/* IL2CPP: RankingMonitor$$SetPodiumElement
void RankingMonitor__SetPodiumElement (RankingMonitor_o* __this, LeaderboardEntry_o entry, int32_t textRole, int32_t imageRole, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$SetPodiumElement
   void RankingMonitor__SetPodiumElement (RankingMonitor_o* __this, LeaderboardEntry_o entry,
   int32_t textRole, int32_t imageRole, const MethodInfo* method); */

void RankingMonitor__SetPodiumElement_245826c
               (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xd086b90a,0);
  uVar3 = LeaderboardEntry__get_HasEntry_2545aac(param_2,0);
  if ((uVar3 & 1) == 0) {
    puVar5 = *(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  else {
    puVar5 = param_2 + 6;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar2,param_3,*puVar5,0);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (uVar2,param_4,0);
  uVar1 = LeaderboardEntry__get_HasEntry_2545aac(param_2,0);
  if (lVar4 != 0) {
    UnityEngine_Behaviour__set_enabled_3c17eec(lVar4,uVar1 & 1,0);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_90 = param_2[5];
    uStack_50 = param_2[4];
    uStack_80 = param_2[7];
    uStack_88 = param_2[6];
    uStack_48 = uStack_90;
    uStack_40 = uStack_88;
    uStack_38 = uStack_80;
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar2 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0x98),&uStack_90,0);
      UnityEngine_UI_Image__set_sprite_3cee6e8(lVar4,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

