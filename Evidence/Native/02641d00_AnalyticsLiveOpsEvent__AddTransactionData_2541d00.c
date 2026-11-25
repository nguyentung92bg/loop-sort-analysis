/* IL2CPP: AnalyticsLiveOpsEvent$$AddTransactionData
void AnalyticsLiveOpsEvent__AddTransactionData (AnalyticsLiveOpsEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$AddTransactionData
   void AnalyticsLiveOpsEvent__AddTransactionData (AnalyticsLiveOpsEvent_o __this, const MethodInfo*
   method); */

void AnalyticsLiveOpsEvent__AddTransactionData_2541d00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5050;
  if ((bRam0000000004f4bfd0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049ca518);
    FUN_021f03f8(PTR_DAT_049b4e50);
    FUN_021f03f8(PTR_DAT_049ca618);
    FUN_021f03f8(PTR_DAT_049bf540);
    FUN_021f03f8(PTR_DAT_049ca620);
    bRam0000000004f4bfd0 = 1;
  }
  puVar2 = PTR_DAT_049b5310;
  uStack_28 = 0;
  auStack_50._8_8_ = 0;
  auStack_50._0_8_ = 0;
  uStack_54 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b6128;
  puVar1 = PTR_DAT_049b5fa8;
  auStack_50 = System_DateTimeOffset__get_UtcNow_30e0d34(0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar4 + 0xb8) + 0x3b8,&uStack_40,*(undefined8 *)puVar1);
  uStack_28 = System_DateTimeOffset__Subtract_30e2d84
                        (auStack_50,CONCAT44(uStack_3c,uStack_40),uStack_38,0);
  lVar4 = *(long *)(param_1 + 8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_54 = System_TimeSpan__get_Days_3116a70(&uStack_28,0);
  uVar5 = System_Int32__ToString_30fbaa0(&uStack_54,0);
  puVar1 = PTR_DAT_049b4df8;
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar4,*(undefined8 *)PTR_DAT_049ca518,uVar5,*(undefined8 *)PTR_DAT_049b4df8);
    puVar2 = PTR_DAT_049b4e50;
    if (*(long *)(param_1 + 8) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049bf540,
                 *(undefined8 *)PTR_DAT_049b4e50,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca618,*(undefined8 *)puVar2,
                   *(undefined8 *)puVar1);
        lVar4 = *(long *)(param_1 + 8);
        uStack_40 = 0;
        uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_40);
        if (lVar4 != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (lVar4,*(undefined8 *)PTR_DAT_049ca620,uVar5,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

