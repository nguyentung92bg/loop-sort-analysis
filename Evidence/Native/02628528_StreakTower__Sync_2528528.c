/* IL2CPP: StreakTower$$Sync
void StreakTower__Sync (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$Sync
   void StreakTower__Sync (StreakTower_o* __this, const MethodInfo* method); */

void StreakTower__Sync_2528528(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4beb3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a98);
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beb3 = 1;
  }
  puVar3 = PTR_DAT_049c9a98;
  puVar2 = PTR_DAT_049c5be8;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar4 + 0xb8) + 0x6a0,auStack_30,*(undefined8 *)puVar2);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x6a0,auStack_30,*(undefined8 *)puVar3);
  return;
}

