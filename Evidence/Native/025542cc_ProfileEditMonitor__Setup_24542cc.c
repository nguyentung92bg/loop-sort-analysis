/* IL2CPP: ProfileEditMonitor$$Setup
void ProfileEditMonitor__Setup (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$Setup
   void ProfileEditMonitor__Setup (ProfileEditMonitor_o* __this, const MethodInfo* method); */

void ProfileEditMonitor__Setup_24542cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b8e4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c4950);
    FUN_021f03f8(PTR_DAT_049c4958);
    FUN_021f03f8(PTR_DAT_049c4960);
    FUN_021f03f8(PTR_DAT_049c4968);
    FUN_021f03f8(PTR_DAT_049c3f60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3f68);
    bRam0000000004f4b8e4 = 1;
  }
  puVar6 = PTR_DAT_049c4968;
  puVar5 = PTR_DAT_049c4958;
  puVar4 = PTR_DAT_049c4950;
  puVar3 = PTR_DAT_049b8d80;
  puVar2 = PTR_DAT_049b5460;
  MonitorBase__Setup_256c4e8(param_1,0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar7 + 0xb8) + 0x1b0,&uStack_58,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xc0) = uStack_50;
  *(undefined8 *)(param_1 + 0xb8) = uStack_58;
  *(undefined8 *)(param_1 + 200) = uStack_48;
  thunk_FUN_021f190c(param_1 + 0xc0,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x8ac5d2c5,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x7e599452,uVar8,0);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x8ac5d12b,0);
  if (lVar7 != 0) {
    plVar9 = (long *)(param_1 + 0xe0);
    *plVar9 = *(long *)(lVar7 + 0x20);
    thunk_FUN_021f190c(plVar9);
    puVar1 = PTR_DAT_049c4960;
    if (*plVar9 != 0) {
      lVar7 = *(long *)(*plVar9 + 0x1d0);
      uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3f60);
      UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                (uVar8,param_1,*(undefined8 *)puVar1,0);
      if (lVar7 != 0) {
        UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                  (lVar7,uVar8,*(undefined8 *)PTR_DAT_049c3f68);
        ProfileEditMonitor__FillAvatarElements_2454528(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

