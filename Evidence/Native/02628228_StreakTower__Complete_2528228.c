/* IL2CPP: StreakTower$$Complete
void StreakTower__Complete (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$Complete
   void StreakTower__Complete (StreakTower_o* __this, const MethodInfo* method); */

void StreakTower__Complete_2528228(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4beb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a60);
    FUN_021f03f8(PTR_DAT_049c9a68);
    FUN_021f03f8(PTR_DAT_049c9a70);
    FUN_021f03f8(PTR_DAT_049c9a78);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c9a80);
    bRam0000000004f4beb0 = 1;
  }
  puVar5 = PTR_DAT_049c9a78;
  puVar4 = PTR_DAT_049c9a70;
  puVar3 = PTR_DAT_049c9a68;
  puVar2 = PTR_DAT_049c9a60;
  puVar1 = PTR_DAT_049b5310;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x100), lVar6 != 0)) {
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar6,*(undefined8 *)PTR_DAT_049c9a80);
    while( true ) {
      uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_40,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_40,*(undefined8 *)puVar3);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar1;
        }
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (*(long *)(lVar6 + 0xb8) + 0x6a0,*(undefined8 *)puVar2);
        return;
      }
      lVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_40,*(undefined8 *)puVar5);
      if (lVar6 == 0) break;
      uStack_58 = *(undefined8 *)(lVar6 + 0x38);
      uStack_60 = *(undefined8 *)(lVar6 + 0x30);
      uStack_48 = *(undefined8 *)(lVar6 + 0x48);
      uStack_50 = *(undefined8 *)(lVar6 + 0x40);
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

