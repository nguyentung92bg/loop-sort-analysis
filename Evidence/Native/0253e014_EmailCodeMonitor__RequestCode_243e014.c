/* IL2CPP: EmailCodeMonitor$$RequestCode
Cysharp_Threading_Tasks_UniTask_string__o EmailCodeMonitor__RequestCode (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$RequestCode
   Cysharp_Threading_Tasks_UniTask_string__o EmailCodeMonitor__RequestCode (EmailCodeMonitor_o*
   __this, const MethodInfo* method); */

void EmailCodeMonitor__RequestCode_243e014(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_2,0x544bae8d,0);
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_2,0x544bae8d,0);
  puVar1 = PTR_DAT_049b3bd0;
  if (lVar2 != 0) {
    StatefulUI_Runtime_References_TextInputReference__SetText_3345ee4
              (lVar2,**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    EmailCodeMonitor__OnCodeInputChanged_243e0b0
              (param_2,**(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8));
    EmailCodeMonitor__Show_243df04(&uStack_38,param_2);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

