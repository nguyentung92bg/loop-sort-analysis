/* IL2CPP: DailyChallengeSubMonitor$$Render
void DailyChallengeSubMonitor__Render (DailyChallengeSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$Render
   void DailyChallengeSubMonitor__Render (DailyChallengeSubMonitor_o* __this, const MethodInfo*
   method); */

void DailyChallengeSubMonitor__Render_2472cbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4b9b3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9b3 = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  auStack_40._8_8_ = 0;
  auStack_40._0_8_ = 0;
  uStack_28 = 0;
  SubMonitorBase__Render_248253c(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fb0;
  auStack_40 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 02572d60 to 02672f43 has its CatchHandler @ 02572d60
                       catch() { ... } // from try @ 02572d60 with catch @ 02572d60
                       catch() { ... } // from try @ 02572fb8 with catch @ 02572d60
                       catch() { ... } // from try @ 02573238 with catch @ 02572d60
                       catch() { ... } // from try @ 02573394 with catch @ 02572d60
                       catch() { ... } // from try @ 02573450 with catch @ 02572d60
                       catch() { ... } // from try @ 0257347c with catch @ 02572d60 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b6110;
  uStack_28 = System_DateTimeOffset__get_Date_30e0fe4(auStack_40,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uStack_28 = System_DateTime__AddDays_30dc0b0(0x3ff0000000000000,&uStack_28,0);
  uVar3 = System_DateTimeOffset__get_DateTime_30e0da0(auStack_40,0);
  uVar3 = System_DateTime__Subtract_30de544(&uStack_28,uVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar3 = Extensions__ToReadableString_24e7038(uVar3,2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x895ca8c9,uVar3,0);
  return;
}

