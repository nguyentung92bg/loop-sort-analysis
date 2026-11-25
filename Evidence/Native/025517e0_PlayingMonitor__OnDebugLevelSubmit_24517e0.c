/* IL2CPP: PlayingMonitor$$OnDebugLevelSubmit
void PlayingMonitor__OnDebugLevelSubmit (PlayingMonitor_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnDebugLevelSubmit
   void PlayingMonitor__OnDebugLevelSubmit (PlayingMonitor_o* __this, System_String_o* value, const
   MethodInfo* method); */

void PlayingMonitor__OnDebugLevelSubmit_24517e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iStack_24;
  
  puVar1 = PTR_DAT_049b44e8;
  if ((bRam0000000004f4b8d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    bRam0000000004f4b8d8 = 1;
  }
  iStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  uVar3 = System_Int32__TryParse_30fc308(param_2,7,uVar2,&iStack_24,0);
  if ((uVar3 & 1) != 0) {
    ConsoleMethods__SetLevel_24f2768(iStack_24 + -1,0);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetTextInput_3351034
                      (*(undefined8 *)(param_1 + 0x1c8),0x5f10bc4c,0);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    TMPro_TMP_InputField__set_text_3afe898
              (*(long *)(lVar4 + 0x20),**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),
               0);
  }
  return;
}

