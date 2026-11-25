/* IL2CPP: SupportMonitor$$GetApplicationText
System_String_o* SupportMonitor__GetApplicationText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$GetApplicationText
   System_String_o* SupportMonitor__GetApplicationText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetApplicationText_246426c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uStack_60;
  byte abStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4b961 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5148);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049c5150);
    FUN_021f03f8(PTR_DAT_049c4c80);
    FUN_021f03f8(PTR_DAT_049bb338);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c5158);
    FUN_021f03f8(PTR_DAT_049c5160);
    FUN_021f03f8(PTR_DAT_049c5168);
    FUN_021f03f8(PTR_DAT_049c5170);
    FUN_021f03f8(PTR_DAT_049c5178);
    FUN_021f03f8(PTR_DAT_049c5180);
    FUN_021f03f8(PTR_DAT_049c5188);
    FUN_021f03f8(PTR_DAT_049c5190);
    FUN_021f03f8(PTR_DAT_049c5198);
    FUN_021f03f8(PTR_DAT_049c51a0);
    FUN_021f03f8(PTR_DAT_049c51a8);
    FUN_021f03f8(PTR_DAT_049c51b0);
    FUN_021f03f8(PTR_DAT_049b6568);
    FUN_021f03f8(PTR_DAT_049b69d0);
    FUN_021f03f8(PTR_DAT_049b6728);
    FUN_021f03f8(PTR_DAT_049c51b8);
    bRam0000000004f4b961 = 1;
  }
  puVar2 = PTR_DAT_049b3bf8;
  uStack_34 = 0;
  uStack_40 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_4c[0] = UnityEngine_Application__get_platform_3bc808c(0);
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c4c80,auStack_4c);
  uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5198,uVar3,0);
  System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
  uStack_50 = UnityEngine_Application__get_systemLanguage_3bc8158(0);
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c5158,&uStack_50);
  uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c51a8,uVar3,0);
  System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
  lVar4 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_049b69d0;
  thunk_FUN_021f190c();
  uVar3 = UnityEngine_Application__get_version_3bc7854(0);
  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  thunk_FUN_021f190c();
  if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_049b6728;
  thunk_FUN_021f190c();
  uVar3 = Game__GetBuildNumber_24f4b90(0);
  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(lVar4 + 0x38) = uVar3;
    thunk_FUN_021f190c();
    if (*(uint *)(lVar4 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_049b6568;
    thunk_FUN_021f190c();
    uVar3 = System_String__Concat_2f7dcb4(lVar4,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uVar3 = UnityEngine_Application__get_identifier_3bc798c(0);
    uVar3 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5168,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uVar3 = UnityEngine_Application__get_unityVersion_3bc771c(0);
    uVar3 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5180,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uStack_54 = UnityEngine_Application__get_installMode_3bc7ac4(0);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c5148,&uStack_54);
    uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c51a0,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uStack_58 = UnityEngine_Application__get_internetReachability_3bc8180(0);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c5150,&uStack_58);
    uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5188,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uVar5 = UnityEngine_Application__get_genuineCheckAvailable_3bc8064(0);
    uVar3 = *(undefined8 *)PTR_DAT_049c51b8;
    if ((uVar5 & 1) == 0) {
      abStack_5c[0] = 0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      abStack_5c[0] = UnityEngine_Application__get_genuine_3bc803c(0);
    }
    puVar1 = PTR_DAT_049b3bd0;
    abStack_5c[0] = abStack_5c[0] & 1;
    uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x28),abStack_5c);
    uVar3 = System_String__Format_2f73700(uVar3,uVar6,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    auStack_4c[0] = UnityEngine_Screen__get_width_3bd80bc(0);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),auStack_4c);
    uStack_50 = UnityEngine_Screen__get_height_3bd80e4(0);
    uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_50);
    uStack_54 = UnityEngine_Screen__get_dpi_3bd810c(0);
    uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x78),&uStack_54);
    uVar3 = System_String__Format_2f7dff0(*(undefined8 *)PTR_DAT_049c51b0,uVar3,uVar6,uVar7,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_58 = UnityEngine_Application__get_targetFrameRate_3bc7f60(0);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
    uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5178,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    uStack_60 = UnityEngine_Time__get_realtimeSinceStartup_3c267b0(0);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x78),&uStack_60);
    uVar3 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c5190,uVar3,0);
    System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_049b44e8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    plVar8 = (long *)System_Globalization_CultureInfo__get_CurrentCulture_307bc50(0);
    if (plVar8 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      uVar3 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5160,uVar3,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
      if (*(int *)(*(long *)PTR_DAT_049bb338 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_34 = UnityEngine_SceneManagement_SceneManager__GetActiveScene_3c33e7c(0);
      uVar3 = UnityEngine_SceneManagement_Scene__get_name_3c3358c(&uStack_34,0);
      uVar3 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c5170,uVar3,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar3,0);
      (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

