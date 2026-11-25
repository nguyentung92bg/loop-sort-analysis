/* IL2CPP: LavaQuest.<ShowWeeklyMissionsInfo>d__43$$MoveNext
void LavaQuest__ShowWeeklyMissionsInfo_d__43__MoveNext (LavaQuest__ShowWeeklyMissionsInfo_d__43_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest.<ShowWeeklyMissionsInfo>d__43$$MoveNext
   void LavaQuest__ShowWeeklyMissionsInfo_d__43__MoveNext (LavaQuest__ShowWeeklyMissionsInfo_d__43_o
   __this, const MethodInfo* method); */

void LavaQuest__ShowWeeklyMissionsInfo_d__43__MoveNext_251c624(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4be4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c95b0);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c9158);
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049c9160);
    FUN_021f03f8(PTR_DAT_049c95b8);
    FUN_021f03f8(PTR_DAT_049c95c0);
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4be4b = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  if (*param_1 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    uStack_58 = *(undefined8 *)(param_1 + 10);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 4);
    lVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c95c0);
    System_Object___ctor_3142338(lVar2,0);
    plVar5 = (long *)(param_1 + 6);
    *plVar5 = lVar2;
    thunk_FUN_021f190c(plVar5,lVar2);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(*plVar5 + 0x10) = *(undefined8 *)(param_1 + 4);
    thunk_FUN_021f190c();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar5;
    lVar2 = Monitors__Get_object__26889d0(*(long *)(lVar8 + 0x48),*(undefined8 *)PTR_DAT_049c9160);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = MonitorBase__GetSubMonitor_object__2688828(lVar2,*(undefined8 *)PTR_DAT_049c9158);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar7 = (undefined8 *)(lVar6 + 0x18);
    *puVar7 = uVar3;
    thunk_FUN_021f190c(puVar7);
    lVar2 = *plVar5;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0xc0);
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Deactivate_object__2688964(*(long *)(lVar8 + 0x48),0,*(undefined8 *)PTR_DAT_049c5478);
    if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsModule__Show_253e230(&uStack_a8,*(long *)(lVar8 + 0x30),0xc,0,0);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_70 = uStack_98;
    FUN_0235b0c0(&uStack_80,&uStack_a8,*(undefined8 *)PTR_DAT_049c46b0);
    lVar8 = *(long *)PTR_DAT_049c46a0;
    uStack_58 = uStack_a0;
    uStack_60 = uStack_a8;
    uStack_50 = uStack_98;
    lVar2 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x80));
    lVar2 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    iVar1 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    if (iVar1 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_58;
      *(undefined8 *)(param_1 + 8) = uStack_60;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c95b0);
      return;
    }
  }
  FUN_0235b3fc(&uStack_60,&uStack_a8,*(undefined8 *)PTR_DAT_049c4698);
  uVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                    (uStack_a8,0x8ac5d054,0);
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (uVar3,0xa66c44de,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar2 + 0x100) != 0) {
    UnityEngine_Events_UnityEvent__Invoke_3c32ba4(*(long *)(lVar2 + 0x100),0);
    uVar9 = *(undefined8 *)(param_1 + 6);
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,uVar9,*(undefined8 *)PTR_DAT_049c95b8,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uVar3,0xb4ce0c4e,uVar4,0);
    uVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                      (uStack_a8,0x517db21a,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uVar3,0xb4ce0c4e,uVar4,0);
    *param_1 = -2;
    param_1[6] = 0;
    param_1[7] = 0;
    thunk_FUN_021f190c(param_1 + 6,0);
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

