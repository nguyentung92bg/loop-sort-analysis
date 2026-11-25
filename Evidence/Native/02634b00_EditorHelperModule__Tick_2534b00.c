/* IL2CPP: EditorHelperModule$$Tick
void EditorHelperModule__Tick (EditorHelperModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorHelperModule$$Tick
   void EditorHelperModule__Tick (EditorHelperModule_o* __this, const MethodInfo* method); */

ulong EditorHelperModule__Tick_2534b00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bf4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ae0);
    FUN_021f03f8(PTR_DAT_049c3d50);
    FUN_021f03f8(PTR_DAT_049b5320);
    FUN_021f03f8(PTR_DAT_049c3d48);
    FUN_021f03f8(PTR_DAT_049b5318);
    bRam0000000004f4bf4b = 1;
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x77,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02634d58;
    uVar3 = GameMachine__IsInState_object__261a580
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c1ae0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02634d58;
      GameMachine__RequestStateChange_object__261a650
                (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049b5318);
    }
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x6c,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02634d58;
    uVar3 = GameMachine__IsInState_object__261a580
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c1ae0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02634d58;
      GameMachine__RequestStateChange_object__261a650
                (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049b5320);
    }
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x72,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02634d58;
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c3d48);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x68,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_02634d58:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c3d50);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x61,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 02634c48 to 02734d1f has its CatchHandler @ 02634c48
                       catch() { ... } // from try @ 02634c48 with catch @ 02634c48
                       catch() { ... } // from try @ 02634d8c with catch @ 02634c48
                       catch() { ... } // from try @ 02634dcc with catch @ 02634c48
                       catch() { ... } // from try @ 02634dfc with catch @ 02634c48
                       catch() { ... } // from try @ 02634e38 with catch @ 02634c48
                       catch() { ... } // from try @ 02634e5c with catch @ 02634c48 */
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    ConsoleMethods__SetLevel_24f2768(iVar2 + -1,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(100,0);
  if ((uVar3 & 1) != 0) {
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    ConsoleMethods__SetLevel_24f2768(iVar2 + 1,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x111,0);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
    UnityEngine_Time__set_timeScale_3c29898(fVar4 + fVar4,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x112,0);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
    UnityEngine_Time__set_timeScale_3c29898(fVar4 * 0.5,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x114,0);
  if ((uVar3 & 1) != 0) {
    UnityEngine_Time__set_timeScale_3c29898(0x3f800000,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x70,0);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
    if (fVar4 <= 0.0) {
                    /* try { // try from 02634d20 to 02734d27 has its CatchHandler @ 02634e14 */
      uVar6 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      uVar5 = UnityEngine_Time__get_timeScale_3c29870(0);
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x38) = uVar5;
    }
    UnityEngine_Time__set_timeScale_3c29898(uVar6,0);
  }
  uVar3 = InputH__GetKeyDown_2508b18(0x6f,0);
  puVar1 = PTR_DAT_049ca168;
  if ((uVar3 & 1) != 0) {
    if ((bRam0000000004f4bf4c & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049ca168);
      bRam0000000004f4bf4c = 1;
    }
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    thunk_FUN_021f190c((ulong)&uStack_40 | 8,0);
    uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_40 | 8,&uStack_40,*(undefined8 *)puVar1);
    return 0;
  }
  return uVar3;
}

