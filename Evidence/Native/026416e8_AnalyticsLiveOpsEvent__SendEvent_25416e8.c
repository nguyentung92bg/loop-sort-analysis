/* IL2CPP: AnalyticsLiveOpsEvent$$SendEvent
void AnalyticsLiveOpsEvent__SendEvent (AnalyticsLiveOpsEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SendEvent
   void AnalyticsLiveOpsEvent__SendEvent (AnalyticsLiveOpsEvent_o __this, const MethodInfo* method);
    */

void AnalyticsLiveOpsEvent__SendEvent_25416e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bfce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca528);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4bfce = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049ca528);
    if (lStack_28 != 0) {
      AnalyticsModule__CustomEvent_253ef80(lStack_28,*param_1,param_1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

