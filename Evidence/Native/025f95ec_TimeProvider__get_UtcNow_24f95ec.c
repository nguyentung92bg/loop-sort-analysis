/* IL2CPP: TimeProvider$$get_UtcNow
System_DateTimeOffset_o TimeProvider__get_UtcNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeProvider$$get_UtcNow
   System_DateTimeOffset_o TimeProvider__get_UtcNow (const MethodInfo* method); */

void TimeProvider__get_UtcNow_24f95ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_30 [16];
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049b5050;
  if ((bRam0000000004f4bd37 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4438);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bd37 = 1;
  }
  puVar2 = PTR_DAT_049b5fc8;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c4438;
  auStack_30 = System_DateTimeOffset__get_UtcNow_30e0d34(0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
                    /* try { // try from 025f967c to 026f9683 has its CatchHandler @ 025f9800 */
    lVar3 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(undefined8 *)(lVar3 + 0xb8),&uStack_18,*(undefined8 *)puVar1);
  System_DateTimeOffset__Add_30e166c(auStack_30,uStack_18,0);
                    /* try { // try from 025f96a8 to 026f96af has its CatchHandler @ 025f97f0 */
  return;
}

