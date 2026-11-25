/* IL2CPP: ProfileEditMonitor$$OnEditClicked
void ProfileEditMonitor__OnEditClicked (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$OnEditClicked
   void ProfileEditMonitor__OnEditClicked (ProfileEditMonitor_o* __this, const MethodInfo* method);
    */

void ProfileEditMonitor__OnEditClicked_2454c28(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f54e27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f54e27 = 1;
  }
  lVar4 = plVar2[0x25];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (plVar2[0x25] == 0) goto LAB_03c0a2f4;
  uVar5 = *(undefined8 *)(plVar2[0x25] + 0xf8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0)),
      (uVar3 & 1) != 0)) &&
     (uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0)),
     (uVar3 & 1) != 0)) {
    if ((((char)plVar2[0x4c] != '\0') && (plVar2[0x20] != 0)) &&
       (uVar3 = UnityEngine_TouchScreenKeyboard__get_active_3c2a490(plVar2[0x20],0),
       (uVar3 & 1) == 0)) {
      if (plVar2[0x20] == 0) {
LAB_03c0a2f4:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_TouchScreenKeyboard__set_active_3c2a51c(plVar2[0x20],1,0);
      if (plVar2[0x20] == 0) goto LAB_03c0a2f4;
      UnityEngine_TouchScreenKeyboard__set_text_3c2a258(plVar2[0x20],plVar2[0x42],0);
    }
    *(undefined1 *)((long)plVar2 + 0x261) = 1;
  }
  return;
}

