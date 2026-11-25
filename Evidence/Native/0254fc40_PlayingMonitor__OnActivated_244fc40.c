/* IL2CPP: PlayingMonitor$$OnActivated
void PlayingMonitor__OnActivated (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnActivated
   void PlayingMonitor__OnActivated (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__OnActivated_244fc40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b8c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4850);
    FUN_021f03f8(PTR_DAT_049c3d40);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b8c4 = 1;
  }
  MonitorBase__OnActivated_256c9f4(param_1,0);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x3207eac9,0);
  if ((lVar6 != 0) && (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar6 != 0))
  {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0xb7d0b56e,0);
    if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar6 == 0)
       ) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0x46e6cf5d,0);
    if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar6 == 0)
       ) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
    if ((*(long *)(param_1 + 0x120) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x120),0),
       lVar6 == 0)) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_02550040;
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x18);
    thunk_FUN_021f190c(param_1 + 0x100);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                      (*(undefined8 *)(param_1 + 0x1c8),0x6ec4bc8b,0);
    if (lVar6 == 0) goto LAB_02550040;
    lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0);
    iVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x160,0);
    if (lVar6 == 0) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0 < iVar4,0);
    if ((*(long *)(param_1 + 0xe8) == 0) ||
       (plVar7 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0xe8),0),
       plVar7 == (long *)0x0)) goto LAB_02550040;
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x61f37587,uVar8,0);
    PlayingMonitor__ActivateDebug_2450044(param_1);
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_02550040;
    lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x118),0);
    uVar5 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    if (lVar6 == 0) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,uVar5 & 1,0);
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_02550040;
    BoosterContainer__RefreshElements_256ab24(*(long *)(param_1 + 0x118),0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0xd94421bb,0);
    fVar10 = (float)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    puVar2 = PTR_DAT_049c4850;
    puVar3 = PTR_DAT_049c3d40;
    if (lVar6 == 0) goto LAB_02550040;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0.0 < fVar10,0);
    FUN_0235c744(*(undefined8 *)(param_1 + 0x100),&uStack_38,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x180) = uStack_38;
    thunk_FUN_021f190c(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
    PlayingMonitor__RenderTimer_2450124(param_1);
    FUN_0235c744(*(undefined8 *)(param_1 + 0x100),&uStack_38,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x130) = uStack_38;
    thunk_FUN_021f190c(param_1 + 0x130);
    uVar9 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    if ((uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_02550040;
      if (1.0 < *(float *)(*(long *)(param_1 + 0x148) + 0x1c)) {
        iVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x160,0);
        if ((*(long *)(param_1 + 0x148) == 0) || (*(long *)(param_1 + 0x150) == 0))
        goto LAB_02550040;
        iVar1 = *(int *)(*(long *)(param_1 + 0x148) + 0x34);
        lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x150),0);
        if (lVar6 == 0) goto LAB_02550040;
        UnityEngine_GameObject__SetActive_3c1ce34(lVar6,iVar1 <= iVar4 + 1,0);
        puVar3 = PTR_DAT_049b5310;
        if (iVar1 <= iVar4 + 1) {
          if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
            FUN_021f0574();
          }
          puVar2 = PTR_DAT_049b52a8;
          if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar9 = PlayerPrefsBool__get_Value_3f0e6dc(*(long *)(*(long *)puVar3 + 0xb8) + 0x9b8,0);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            PlayerPrefsBool__set_Value_3f0e7f4(*(long *)(*(long *)puVar3 + 0xb8) + 0x9b8,1,0);
            if ((*(long *)(param_1 + 0x148) == 0) || (*(long *)(param_1 + 0x130) == 0))
            goto LAB_02550040;
            ConveyorSpeedSystem__AddSpeedBoost_24b6128
                      ((float)*(int *)(*(long *)(param_1 + 0x148) + 0x24),*(long *)(param_1 + 0x130)
                       ,0);
          }
        }
        goto LAB_0255001c;
      }
    }
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x150),0),
       lVar6 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
LAB_0255001c:
      *(undefined8 *)(param_1 + 0x158) = 0xffffffff;
      PlayingMonitor__RenderSpeedBoost_2450270(param_1);
      return;
    }
  }
LAB_02550040:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

