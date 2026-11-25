/* IL2CPP: TimeProvider$$get_Now
System_DateTimeOffset_o TimeProvider__get_Now (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeProvider$$get_Now
   System_DateTimeOffset_o TimeProvider__get_Now (const MethodInfo* method); */

void TimeProvider__get_Now_24f4584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_30 [16];
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049b5050;
  if ((bRam0000000004f4bd38 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4438);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bd38 = 1;
  }
  puVar2 = PTR_DAT_049b5fc8;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c4438;
  auStack_30 = System_DateTimeOffset__get_Now_30e0cc8(0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(undefined8 *)(lVar3 + 0xb8),&uStack_18,*(undefined8 *)puVar1);
                    /* try { // try from 025f4630 to 026f463b has its CatchHandler @ 025f476c */
  System_DateTimeOffset__Add_30e166c(auStack_30,uStack_18,0);
  return;
}

