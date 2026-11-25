/* IL2CPP: HomeMonitor$$SetAreaBackground
void HomeMonitor__SetAreaBackground (HomeMonitor_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$SetAreaBackground
   void HomeMonitor__SetAreaBackground (HomeMonitor_o* __this, int32_t type, const MethodInfo*
   method); */

void HomeMonitor__SetAreaBackground_2447e50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar1 = Areas__TryGetBackground_256fb40(*(long *)(param_1 + 0xe0),param_2,&uStack_28,0);
    if ((uVar1 & 1) != 0) {
      uStack_38 = uStack_20;
      uStack_40 = uStack_28;
      uStack_30 = uStack_18;
      StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a34
                (param_1,0x3b77286f,&uStack_40,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

