/* IL2CPP: RateUsMonitor.<Post>d__24$$MoveNext
void RateUsMonitor__Post_d__24__MoveNext (RateUsMonitor__Post_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor.<Post>d__24$$MoveNext
   void RateUsMonitor__Post_d__24__MoveNext (RateUsMonitor__Post_d__24_o __this, const MethodInfo*
   method); */

void RateUsMonitor__Post_d__24__MoveNext_245b3bc(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4b911 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c4c78);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c4c70);
    FUN_021f03f8(PTR_DAT_049c4c80);
    FUN_021f03f8(PTR_DAT_049c4c88);
    FUN_021f03f8(PTR_DAT_049c4c90);
    FUN_021f03f8(PTR_DAT_049c4c98);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049c4ca0);
    FUN_021f03f8(PTR_DAT_049c4ca8);
    FUN_021f03f8(PTR_DAT_049c4cb0);
    FUN_021f03f8(PTR_DAT_049c4cb8);
    FUN_021f03f8(PTR_DAT_049c4cc0);
    FUN_021f03f8(PTR_DAT_049c4cc8);
    FUN_021f03f8(PTR_DAT_049c4cd0);
    FUN_021f03f8(PTR_DAT_049c4cd8);
    FUN_021f03f8(PTR_DAT_049c4ce0);
    bRam0000000004f4b911 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_48 = 0;
  if (*param_1 == 0) {
    auStack_40 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 4);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AnalyticsModule__GetUserInfo_253fc84(&uStack_80,*(long *)(lVar8 + 0x98),0);
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4c88);
    UnityEngine_WWWForm___ctor_3f03190(lVar3,0);
    uVar4 = System_Int32__ToString_30fbaa0(lVar8 + 0xb0,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4cb0,uVar4,0);
    UnityEngine_WWWForm__AddField_3f03348
              (lVar3,*(undefined8 *)PTR_DAT_049c4c90,*(undefined8 *)(param_1 + 6),0);
    if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_70 = UnityEngine_Application__get_platform_3bc808c(0);
    uStack_80 = *(undefined8 *)PTR_DAT_049c4c80;
    uStack_78 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString_3135e00(&uStack_80,0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4ca8,uVar4,0);
    uVar4 = UnityEngine_Application__get_version_3bc7854(0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4cc8,uVar4,0);
    uVar4 = Game__GetBuildNumber_24f4b90(0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4cd8,uVar4,0);
    uVar4 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier_3c282ec(0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4cc0,uVar4,0);
    uVar4 = UnityEngine_SystemInfo__get_deviceModel_3c2847c(0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4ca0,uVar4,0);
    UnityEngine_WWWForm__AddField_3f03348(lVar3,*(undefined8 *)PTR_DAT_049c4ce0,uStack_60,0);
    lVar8 = UnityEngine_Networking_UnityWebRequest__Post_3f09378
                      (*(undefined8 *)PTR_DAT_049c4c98,lVar3,0);
    plVar6 = (long *)(param_1 + 8);
    *plVar6 = lVar8;
    thunk_FUN_021f190c(plVar6);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_3f0728c(*plVar6,0);
    auStack_40 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3805ed8(uVar4,0);
    uVar5 = Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted_380c544
                      (auStack_40,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_40;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c420(param_1 + 2,auStack_40,param_1,*(undefined8 *)PTR_DAT_049c4c78);
      return;
    }
  }
  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult_380c55c
            (auStack_40,0);
  plVar6 = (long *)(param_1 + 8);
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar2 = UnityEngine_Networking_UnityWebRequest__get_result_3f07b28(*plVar6,0);
  puVar1 = PTR_DAT_049c4c70;
  if (iVar2 == 1) {
    lVar8 = *(long *)PTR_DAT_049c4c70;
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0255b774 with catch @ 0255b73c
                       catch() { ... } // from try @ 0255b7b4 with catch @ 0255b73c
                       catch() { ... } // from try @ 0255b820 with catch @ 0255b73c
                       catch() { ... } // from try @ 0255b82c with catch @ 0255b73c */
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
                    /* try { // try from 0255b748 to 0265b773 has its CatchHandler @ 0255b784 */
    uVar4 = System_String__Concat_2f72b28
                      (**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_049c4cb8,0);
                    /* try { // try from 0255b774 to 0265b79b has its CatchHandler @ 0255b73c */
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0255b748 with catch @ 0255b784
                        */
    UnityEngine_Debug__Log_3bd0be4(uVar4,0);
  }
  else {
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = UnityEngine_Networking_UnityWebRequest__get_error_3f07a68(*plVar6,0);
                    /* try { // try from 0255b79c to 0265b7b3 has its CatchHandler @ 0255b824 */
    uVar5 = System_String__IsNullOrEmpty_2f7c924(uVar4,0);
    puVar1 = PTR_DAT_049c4c70;
    lVar8 = *(long *)PTR_DAT_049c4c70;
                    /* try { // try from 0255b7b4 to 0265b80f has its CatchHandler @ 0255b73c */
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0255b810 to 0265b81f has its CatchHandler @ 0255b824 */
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar1;
      }
                    /* try { // try from 0255b820 to 0265b827 has its CatchHandler @ 0255b73c */
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch() { ... } // from try @ 0255b79c with catch @ 0255b824
                       catch() { ... } // from try @ 0255b810 with catch @ 0255b824 */
                    /* try { // try from 0255b828 to 0265b82b has its CatchHandler @ 0255b834 */
                    /* try { // try from 0255b82c to 0265b837 has its CatchHandler @ 0255b73c */
      uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0255b828 with catch @ 0255b834
                        */
      uVar4 = UnityEngine_Networking_UnityWebRequest__get_error_3f07a68(*plVar6,0);
      uVar4 = System_String__Concat_2f7d424(uVar7,*(undefined8 *)PTR_DAT_049b6188,uVar4,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogError_3bd1230(uVar4,0);
    }
    else {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar1;
      }
      uVar4 = System_String__Concat_2f72b28
                        (**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_049c4cd0,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogError_3bd1230(uVar4,0);
    }
  }
  *plVar6 = 0;
  thunk_FUN_021f190c(plVar6,0);
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

