/* IL2CPP: BattlePass$$GetTotalKeyCount
int32_t BattlePass__GetTotalKeyCount (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetTotalKeyCount
   int32_t BattlePass__GetTotalKeyCount (BattlePass_o* __this, const MethodInfo* method); */

void BattlePass__GetTotalKeyCount_250be90(long param_1)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bf37 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900,0x28,0);
    bRam0000000004f4bf37 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x50);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (lVar1 != 0) {
    uStack_24 = 0x28;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (lVar1,&uStack_24,&uStack_70,*(undefined8 *)PTR_DAT_049c9900);
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    CloudPrefsInt__get_Value_24e99c0(&uStack_50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

