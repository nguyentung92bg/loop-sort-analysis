/* IL2CPP: WeeklyMissions$$Complete
void WeeklyMissions__Complete (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$Complete
   void WeeklyMissions__Complete (WeeklyMissions_o* __this, const MethodInfo* method); */

void WeeklyMissions__Complete_252c028(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bed3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049c9bc0);
    FUN_021f03f8(PTR_DAT_049c9bc8);
    FUN_021f03f8(PTR_DAT_049c9bd0);
    FUN_021f03f8(PTR_DAT_049c9bd8);
    FUN_021f03f8(PTR_DAT_049c9be0);
    FUN_021f03f8(PTR_DAT_049c9be8);
    FUN_021f03f8(PTR_DAT_049c9bf0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c5d90);
    FUN_021f03f8(PTR_DAT_049c5d98);
    FUN_021f03f8(PTR_DAT_049c9bf8);
    FUN_021f03f8(PTR_DAT_049c9c00);
                    /* try { // try from 0262c0fc to 0272c103 has its CatchHandler @ 0262c3d4 */
    bRam0000000004f4bed3 = 1;
  }
  puVar4 = PTR_DAT_049c9bc0;
  puVar3 = PTR_DAT_049c4fd8;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lVar10 = *(long *)puVar2;
                    /* try { // try from 0262c11c to 0272c167 has its CatchHandler @ 0262c3e0 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (*(long *)(lVar10 + 0xb8) + 0x488,*(undefined8 *)puVar4);
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (*(long *)(*(long *)puVar2 + 0xb8) + 0x458,*(undefined8 *)puVar3);
                    /* try { // try from 0262c168 to 0272c1bf has its CatchHandler @ 0262bb48 */
  CloudPrefsInt__DeleteValue_24e9b94(*(long *)(*(long *)puVar2 + 0xb8) + 0x438,0);
  puVar8 = PTR_DAT_049c9bf0;
  puVar7 = PTR_DAT_049c9be8;
  puVar6 = PTR_DAT_049c9be0;
  puVar5 = PTR_DAT_049c9bd8;
  puVar4 = PTR_DAT_049c9bc8;
  puVar3 = PTR_DAT_049c5d98;
  puVar2 = PTR_DAT_049c5d90;
  auVar1._8_8_ = auStack_70._8_8_;
  auVar1._0_8_ = auStack_70._0_8_;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0), auStack_70 = auVar1, lVar10 != 0)) {
                    /* try { // try from 0262c1c0 to 0272c1c3 has its CatchHandler @ 0262c3b0 */
    auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar10,*(undefined8 *)PTR_DAT_049c9c00);
                    /* try { // try from 0262c1c4 to 0272c357 has its CatchHandler @ 0262bb48 */
    while (uVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                              (auStack_70,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      lVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_70,*(undefined8 *)puVar7);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      for (iVar13 = 0;
          iVar9 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                            (lVar10,*(undefined8 *)puVar2), iVar13 < iVar9; iVar13 = iVar13 + 1) {
        lVar12 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Item_298568c
                           (lVar10,iVar13,*(undefined8 *)puVar3);
        if (lVar12 != 0) {
          uStack_88 = *(undefined8 *)(lVar12 + 0x40);
          uStack_90 = *(undefined8 *)(lVar12 + 0x38);
          uStack_78 = *(undefined8 *)(lVar12 + 0x50);
          uStack_80 = *(undefined8 *)(lVar12 + 0x48);
          CloudPrefsBool__DeleteValue_24eb2a8(&uStack_90,0);
          uStack_88 = *(undefined8 *)(lVar12 + 0x60);
          uStack_90 = *(undefined8 *)(lVar12 + 0x58);
          uStack_78 = *(undefined8 *)(lVar12 + 0x70);
          uStack_80 = *(undefined8 *)(lVar12 + 0x68);
          CloudPrefsBool__DeleteValue_24eb2a8(&uStack_90,0);
        }
      }
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_70,*(undefined8 *)puVar4);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0xa8), lVar10 != 0)) {
      auStack_a0 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar10,*(undefined8 *)PTR_DAT_049c9bf8);
      while( true ) {
        uVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_a0,*(undefined8 *)puVar6);
        if ((uVar11 & 1) == 0) {
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_a0,*(undefined8 *)PTR_DAT_049c9bd0);
          return;
        }
        lVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_a0,*(undefined8 *)puVar8);
        if (lVar10 == 0) break;
        uStack_88 = *(undefined8 *)(lVar10 + 0x30);
        uStack_90 = *(undefined8 *)(lVar10 + 0x28);
        uStack_78 = *(undefined8 *)(lVar10 + 0x40);
        uStack_80 = *(undefined8 *)(lVar10 + 0x38);
        CloudPrefsBool__DeleteValue_24eb2a8(&uStack_90,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

