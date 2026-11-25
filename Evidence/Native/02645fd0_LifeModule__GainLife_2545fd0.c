/* IL2CPP: LifeModule$$GainLife
void LifeModule__GainLife (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$GainLife
   void LifeModule__GainLife (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__GainLife_2545fd0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4c007 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049c8b78);
    FUN_021f03f8(PTR_DAT_049b45b8);
    bRam0000000004f4c007 = 1;
  }
  uStack_28 = 0;
  iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
  if (iVar2 < 5) {
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    CloudPrefsInt__Set_24e9aa8(param_1 + 0x18,iVar2 + 1,0);
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    if (4 < iVar2) {
      CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                (param_1 + 0x38,*(undefined8 *)PTR_DAT_049c4fd8);
      puVar1 = PTR_DAT_049c8b78;
      lVar3 = *(long *)PTR_DAT_049c8b78;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      uStack_28 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x4d0);
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (&uStack_28,&uStack_14,*(undefined8 *)PTR_DAT_049b45b8);
      Unity_Notifications_NotificationCenter__CancelScheduledNotification_3a04708(uStack_14,0);
    }
  }
  return;
}

