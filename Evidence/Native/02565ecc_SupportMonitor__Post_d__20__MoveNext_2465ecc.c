/* IL2CPP: SupportMonitor.<Post>d__20$$MoveNext
void SupportMonitor__Post_d__20__MoveNext (SupportMonitor__Post_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02566694) */
/* IL2CPP: SupportMonitor.<Post>d__20$$MoveNext
   void SupportMonitor__Post_d__20__MoveNext (SupportMonitor__Post_d__20_o __this, const MethodInfo*
   method); */

void SupportMonitor__Post_d__20__MoveNext_2465ecc(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_a0;
  int *piStack_98;
  int **ppiStack_90;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  int iStack_54;
  undefined1 auStack_50 [16];
  int *piStack_38;
  
  piStack_38 = param_1;
  if ((bRam0000000004f4b967 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c52c0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c52c8);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4b60);
    FUN_021f03f8(PTR_DAT_049c52b8);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c4c88);
    FUN_021f03f8(PTR_DAT_049c52d0);
    FUN_021f03f8(PTR_DAT_049c52d8);
    FUN_021f03f8(PTR_DAT_049c52e0);
    FUN_021f03f8(PTR_DAT_049b4de0);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049c52e8);
    FUN_021f03f8(PTR_DAT_049c52f0);
    FUN_021f03f8(PTR_DAT_049c52f8);
    FUN_021f03f8(PTR_DAT_049c5300);
    FUN_021f03f8(PTR_DAT_049c5308);
    FUN_021f03f8(PTR_DAT_049c4cb8);
    FUN_021f03f8(PTR_DAT_049c5310);
    FUN_021f03f8(PTR_DAT_049c4cd0);
    FUN_021f03f8(PTR_DAT_049c5318);
    bRam0000000004f4b967 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  iStack_54 = *param_1;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_78 = 0;
  if (iStack_54 == 0) {
LAB_025663b0:
    ppiStack_90 = &piStack_38;
    piStack_98 = &iStack_54;
    uStack_a0 = 0;
    iStack_54 = -1;
    auStack_70 = *(undefined1 (*) [16])(piStack_38 + 8);
    piStack_38[8] = 0;
    piStack_38[9] = 0;
    piStack_38[10] = 0;
    piStack_38[0xb] = 0;
    *piStack_38 = -1;
  }
  else {
    lVar11 = *(long *)(param_1 + 4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                      (lVar11,0x4239b252,0);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                      (lVar11,0x993134c1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_Selectable__set_interactable_3ee50ec(*(long *)(lVar3 + 0x20),0,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_Selectable__set_interactable_3ee50ec(*(long *)(lVar4 + 0x20),0,0);
    lVar3 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = System_String__Trim_2f8204c(lVar3,0);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4b60);
    System_Text_StringBuilder___ctor_2f8ab2c(uVar6,0);
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4c88);
    UnityEngine_WWWForm___ctor_3f03190(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c52f8,uVar5,0);
    uVar7 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar4,0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c52d0,uVar7,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar2 + 1);
    uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_a0);
    uVar7 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049b4de0,uVar7,0);
    uVar7 = UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c5300,uVar7,0);
    uVar7 = SupportMonitor__GetApplicationText_246426c(uVar7,uVar6);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c52e8,uVar7,0);
    uVar7 = SupportMonitor__GetSystemInfoText_2464a8c(lVar11,uVar6);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c5310,uVar7,0);
    uVar7 = SupportMonitor__GetCohortsText_246538c(lVar11,uVar6);
    uVar7 = UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c5318,uVar7,0);
    uVar7 = SupportMonitor__GetPrefsText_24654f0(uVar7,uVar6);
    uVar7 = UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c52e0,uVar7,0);
    uVar7 = SupportMonitor__GetErrorsText_2465b40(uVar7,uVar6);
    uVar7 = UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c5308,uVar7,0);
    uVar6 = SupportMonitor__GetPurchaseHistoryText_2465c64(uVar7,uVar6);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c52d8,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsString__Set_3f0e4a4(*(long *)(*(long *)puVar1 + 0xb8) + 0x618,uVar5,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar11,0x9e8b7543,0);
    if (iStack_54 == 0) goto LAB_025663b0;
    uVar5 = UnityEngine_Networking_UnityWebRequest__Post_3f09378
                      (*(undefined8 *)PTR_DAT_049c52f0,lVar3,0);
    *(undefined8 *)(piStack_38 + 6) = uVar5;
    thunk_FUN_021f190c();
    piStack_98 = &iStack_54;
    uStack_a0 = 0;
    ppiStack_90 = &piStack_38;
    if (iStack_54 == 0) goto LAB_025663b0;
    if (*(long *)(piStack_38 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_3f0728c
                      (*(long *)(piStack_38 + 6),0);
    auStack_70 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3805ed8(uVar5,0);
    uVar8 = Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted_380c544
                      (auStack_70,0);
    if ((uVar8 & 1) == 0) {
      iStack_54 = 0;
      *piStack_38 = 0;
      *(undefined1 (*) [16])(piStack_38 + 8) = auStack_70;
      thunk_FUN_021f190c(piStack_38 + 8,0);
      FUN_0235c420(piStack_38 + 2,auStack_70,piStack_38,*(undefined8 *)PTR_DAT_049c52c0);
      iVar2 = 6;
      goto LAB_025665cc;
    }
  }
  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult_380c55c
            (auStack_70,0);
  if (*(long *)(piStack_38 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar2 = UnityEngine_Networking_UnityWebRequest__get_result_3f07b28(*(long *)(piStack_38 + 6),0);
  if (iVar2 == 1) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = TimeProvider__get_UtcNow_24f95ec(0);
    if (*(int *)(*(long *)PTR_DAT_049c3d90 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsT___Il2CppFullySharedGenericStructType___Set_291172c
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x5f8,auStack_50,*(undefined8 *)PTR_DAT_049c52c8)
    ;
    puVar1 = PTR_DAT_049c52b8;
    lVar11 = *(long *)PTR_DAT_049c52b8;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)puVar1;
    }
    uVar5 = System_String__Concat_2f72b28
                      (**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_049c4cb8,0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(uVar5,0);
  }
  else {
    if (*(long *)(piStack_38 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_Networking_UnityWebRequest__get_error_3f07a68(*(long *)(piStack_38 + 6),0);
    uVar8 = System_String__IsNullOrEmpty_2f7c924(uVar5,0);
    puVar1 = PTR_DAT_049c52b8;
    lVar11 = *(long *)PTR_DAT_049c52b8;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar1;
      }
      if (*(long *)(piStack_38 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = **(undefined8 **)(lVar11 + 0xb8);
      uVar5 = UnityEngine_Networking_UnityWebRequest__get_error_3f07a68(*(long *)(piStack_38 + 6),0)
      ;
      uVar5 = System_String__Concat_2f7d424(uVar6,*(undefined8 *)PTR_DAT_049b6188,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogError_3bd1230(uVar5,0);
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar1;
      }
      uVar5 = System_String__Concat_2f72b28
                        (**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_049c4cd0,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogError_3bd1230(uVar5,0);
    }
  }
  iVar2 = 10;
LAB_025665cc:
  if ((iStack_54 < 0) && (plVar12 = *(long **)(*ppiStack_90 + 6), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0256663c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b3cc8,0);
LAB_0256663c:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  if ((iVar2 == 10) || (iVar2 == 0)) {
    piVar10 = piStack_38 + 6;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_021f190c(piVar10,0);
    *piStack_38 = -2;
    FUN_0235afc8(piStack_38 + 2,0);
  }
  return;
}

