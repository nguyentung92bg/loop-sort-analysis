/* IL2CPP: LifeModule$$RefillLife
void LifeModule__RefillLife (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$RefillLife
   void LifeModule__RefillLife (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__RefillLife_25463c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_049c8b78;
  puVar2 = PTR_DAT_049c4fd8;
  if ((bRam0000000004f4c009 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049c8b78);
    FUN_021f03f8(PTR_DAT_049b45b8);
    bRam0000000004f4c009 = 1;
  }
  puVar1 = PTR_DAT_049b45b8;
  uStack_38 = 0;
  CloudPrefsInt__Set_24e9aa8(param_1 + 0x18,5,0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (param_1 + 0x38,*(undefined8 *)puVar2);
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar3;
  }
  uStack_38 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x4d0);
  System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
            (&uStack_38,&uStack_24,*(undefined8 *)puVar1);
  Unity_Notifications_NotificationCenter__CancelScheduledNotification_3a04708(uStack_24,0);
  return;
}

