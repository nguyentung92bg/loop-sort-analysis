/* IL2CPP: RankingMonitor$$CreatePlayerProfileElement
void RankingMonitor__CreatePlayerProfileElement (RankingMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, PlayerProfile_o profile, bool isLoading, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$CreatePlayerProfileElement
   void RankingMonitor__CreatePlayerProfileElement (RankingMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, PlayerProfile_o profile, bool isLoading, const
   MethodInfo* method); */

void RankingMonitor__CreatePlayerProfileElement_2457958
               (long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((param_4 & 1) == 0) {
    puVar2 = param_3 + 1;
  }
  else {
    puVar2 = *(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (param_2,0x8ac5d12b,*puVar2,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_30 = param_3[2];
    uVar1 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0x98),&uStack_40,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
              (param_2,0xbd13b84d,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

