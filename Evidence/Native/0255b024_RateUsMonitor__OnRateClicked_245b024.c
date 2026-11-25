/* IL2CPP: RateUsMonitor$$OnRateClicked
void RateUsMonitor__OnRateClicked (RateUsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$OnRateClicked
   void RateUsMonitor__OnRateClicked (RateUsMonitor_o* __this, const MethodInfo* method); */

void RateUsMonitor__OnRateClicked_245b024(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_14 [4];
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x1b0af5a7,0);
  if ((lVar1 == 0) ||
     (lVar1 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar1,0), lVar1 == 0))
  goto LAB_0255b0f4;
  uVar2 = System_String__Trim_2f8204c(lVar1,0);
  if (*(int *)(param_1 + 0xb0) < 4) {
    uVar3 = System_String__IsNullOrEmpty_2f7c924(uVar2,0);
    if ((uVar3 & 1) == 0) {
      RateUsMonitor__Post_245b0f8(param_1,uVar2);
    }
    else if (3 < *(int *)(param_1 + 0xb0)) goto LAB_0255b064;
  }
  else {
LAB_0255b064:
    lVar1 = *(long *)(param_1 + 0xc0);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    auStack_14[0] = 1;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),auStack_14,*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
    return;
  }
LAB_0255b0f4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

