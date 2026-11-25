/* IL2CPP: VideoRewards$$GetTimeUntilReset
System_TimeSpan_o VideoRewards__GetTimeUntilReset (VideoRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$GetTimeUntilReset
   System_TimeSpan_o VideoRewards__GetTimeUntilReset (VideoRewards_o* __this, const MethodInfo*
   method); */

void VideoRewards__GetTimeUntilReset_2529edc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [16];
  undefined8 uStack_18;
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4bec0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bec0 = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  auStack_30._8_8_ = 0;
  auStack_30._0_8_ = 0;
  uStack_18 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fb0;
  auStack_30 = TimeProvider__get_Now_24f4584(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_18 = System_DateTimeOffset__get_Date_30e0fe4(auStack_30,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar3 = System_DateTime__AddDays_30dc0b0(0x3ff0000000000000,&uStack_18,0);
  uVar4 = System_DateTimeOffset__get_DateTime_30e0da0(auStack_30,0);
  System_DateTime__op_Subtraction_30df69c(uVar3,uVar4,0);
  return;
}

