/* IL2CPP: CollectionBar$$Complete
void CollectionBar__Complete (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$Complete
   void CollectionBar__Complete (CollectionBar_o* __this, const MethodInfo* method); */

void CollectionBar__Complete_25121ec(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bdf7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9280);
    FUN_021f03f8(PTR_DAT_049c9288);
    FUN_021f03f8(PTR_DAT_049c9290);
    FUN_021f03f8(PTR_DAT_049c92a0);
    bRam0000000004f4bdf7 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  LiveOpsBase__Complete_2521cec(param_1,0);
  puVar4 = PTR_DAT_049c9290;
  puVar3 = PTR_DAT_049c9288;
  puVar2 = PTR_DAT_049c9280;
  auVar1._8_8_ = auStack_40._8_8_;
  auVar1._0_8_ = auStack_40._0_8_;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8), auStack_40 = auVar1, lVar5 != 0)) {
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar5,*(undefined8 *)PTR_DAT_049c92a0);
    puStack_68 = auStack_40;
    uStack_70 = 0;
    while (uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                             (auStack_40,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_40,*(undefined8 *)puVar4);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_58 = *(undefined8 *)(lVar5 + 0x38);
      uStack_60 = *(undefined8 *)(lVar5 + 0x30);
      uStack_48 = *(undefined8 *)(lVar5 + 0x48);
      uStack_50 = *(undefined8 *)(lVar5 + 0x40);
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_40,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0x32;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_94 = 0;
      uStack_9c = 0;
      uStack_84 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      EconomyModule__Set_2524e30(*(long *)(param_1 + 0x18),&uStack_c0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

