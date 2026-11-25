/* IL2CPP: RefillLivesMonitor$$Render
void RefillLivesMonitor__Render (RefillLivesMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RefillLivesMonitor$$Render
   void RefillLivesMonitor__Render (RefillLivesMonitor_o* __this, const MethodInfo* method); */

void RefillLivesMonitor__Render_245c0b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4b918 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4b918 = 1;
  }
  uStack_14 = 0;
  MonitorBase__Render_256c914(param_1,0);
  puVar1 = PTR_DAT_049b6110;
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar2 = LifeModule__GetRemainingTime_2545e88(*(long *)(param_1 + 0x98),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar2 = Extensions__ToReadableString_24e7038(uVar2,2,0);
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar3 = LifeModule__IsLifeFull_2545b10(*(long *)(param_1 + 0x98),0);
      if ((uVar3 & 1) != 0) {
        uVar2 = Phrase__get_Full_252e8d0(0);
      }
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar2,0)
      ;
      if (*(long *)(param_1 + 0x98) != 0) {
        uStack_14 = LifeModule__GetCurrentLife_2545fc4(*(long *)(param_1 + 0x98),0);
        uVar2 = System_Int32__ToString_30fbaa0(&uStack_14,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0xce15919c,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

