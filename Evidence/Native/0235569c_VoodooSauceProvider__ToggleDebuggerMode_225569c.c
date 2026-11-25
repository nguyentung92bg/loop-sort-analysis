/* IL2CPP: VoodooSauceProvider$$ToggleDebuggerMode
void VoodooSauceProvider__ToggleDebuggerMode (VoodooSauceProvider_o* __this, ToggleDebuggerModeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$ToggleDebuggerMode
   void VoodooSauceProvider__ToggleDebuggerMode (VoodooSauceProvider_o* __this,
   ToggleDebuggerModeMessage_o m, const MethodInfo* method); */

void VoodooSauceProvider__ToggleDebuggerMode_225569c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0235569c to 024556eb has its CatchHandler @ 02355520 */
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f5f715 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a63dd8);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_04a63de0);
    FUN_021f03f8(PTR_DAT_049b6238);
    FUN_021f03f8(PTR_DAT_04a63da8);
    bRam0000000004f5f715 = 1;
  }
  puVar2 = PTR_DAT_04a63da8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Application__get_identifier_3bc798c(0);
  uVar3 = System_String__op_Equality_2f7b7fc(uVar6,*(undefined8 *)puVar2,0);
  lVar7 = Voodoo_Sauce_Core_VoodooSettings__Get_440e904(0,0);
  puVar2 = PTR_DAT_049b6238;
  puVar1 = PTR_DAT_049b3c58;
  if (lVar7 != 0) {
    uVar4 = Voodoo_Sauce_Core_VoodooSettings__get_UseRemoteConfig_44112a4(lVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Debug__get_isDebugBuild_3bd1e3c(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar8 = Voodoo_Sauce_Internal_VoodooTune_VoodooTuneManager__GetDebuggerAuthorization_445f9a0(0);
    uVar9 = Voodoo_Sauce_Internal_StoreUtility_AppInfo__IsSandbox_4453064(0);
    if (((((uVar3 | uVar4 ^ 0xffffffff | uVar5) & 1) == 0) && ((uVar8 & 1) == 0)) &&
       ((uVar9 & 1) == 0)) {
      uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a63dd8);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar10,0,*(undefined8 *)PTR_DAT_04a63de0,0);
      puVar1 = PTR_DAT_04a69470;
      uVar6 = 0;
      if ((bRam0000000004f5fe3d & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a69470,0);
        bRam0000000004f5fe3d = 1;
        uVar6 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
        uVar6 = extraout_x1_00;
      }
      puVar1 = PTR_DAT_04a69468;
      if ((bRam0000000004f5fe2f & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a69468,uVar6);
        bRam0000000004f5fe2f = 1;
      }
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_3021738(&uStack_80,0);
      uStack_50 = uStack_78;
      uStack_58 = uStack_80;
      uStack_40 = uStack_68;
      uStack_48 = uStack_70;
      thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
      uStack_38 = uVar10;
      thunk_FUN_021f190c(&uStack_38,uVar10);
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b3358
                ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
      return;
    }
    lVar7 = Voodoo_Sauce_Debugger_Debugger__GetOrCreateDebugger_43b18d0();
    puVar1 = PTR_DAT_049b62a0;
    if (lVar7 != 0) {
      if ((bRam0000000004f5f71e & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b62a0);
        bRam0000000004f5f71e = 1;
      }
      Voodoo_Sauce_Tools_AccessButton_AccessProcess__SetTrustedUser_441ac60(1,0);
      Voodoo_Sauce_Tools_AccessButton_AccessProcess__SetAccess_440c3c0(1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Voodoo_Sauce_Internal_Analytics_AnalyticsManager__TrackOpenVSDebugger_44953b4(0);
      if (*(long *)(lVar7 + 0x58) != 0) {
        UnityEngine_Behaviour__set_enabled_3c17eec(*(long *)(lVar7 + 0x58),1,0);
        if ((*(long *)(lVar7 + 0x38) != 0) &&
           (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0x38),0),
           lVar7 != 0)) {
          if ((bRam0000000004f581f8 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a251b8,1,0);
            bRam0000000004f581f8 = 1;
          }
          if (lVar7 != 0) {
            lVar11 = *(long *)(lVar7 + 0x10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar7,0);
            }
            if (pcRam0000000004f582c8 == (code *)0x0) {
              pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
            }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f582c8)(lVar11,1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

