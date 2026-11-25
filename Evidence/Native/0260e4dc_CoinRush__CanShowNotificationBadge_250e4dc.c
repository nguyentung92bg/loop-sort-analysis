/* IL2CPP: CoinRush$$CanShowNotificationBadge
bool CoinRush__CanShowNotificationBadge (CoinRush_o* __this, System_String_o** text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$CanShowNotificationBadge
   bool CoinRush__CanShowNotificationBadge (CoinRush_o* __this, System_String_o** text, const
   MethodInfo* method); */

bool CoinRush__CanShowNotificationBadge_250e4dc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  int iStack_34;
  
  if ((bRam0000000004f4bde7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde7 = 1;
  }
  puVar3 = PTR_DAT_049c91a0;
  puVar2 = PTR_DAT_049c9198;
  puVar1 = PTR_DAT_049c9190;
  iStack_34 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar4 != 0)) {
    auStack_50 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar4,*(undefined8 *)PTR_DAT_049c91a8);
    puStack_58 = auStack_50;
    iVar7 = 0;
    uStack_60 = 0;
    while( true ) {
      uVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_50,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_50,*(undefined8 *)puVar1);
        uVar6 = System_Int32__ToString_30fbaa0(&iStack_34,0);
        *param_2 = uVar6;
        thunk_FUN_021f190c(param_2,uVar6);
        return 0 < iStack_34;
      }
      lVar4 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_50,*(undefined8 *)puVar3);
      if (lVar4 == 0) break;
      uStack_78 = *(undefined8 *)(lVar4 + 0x48);
      uStack_80 = *(undefined8 *)(lVar4 + 0x40);
      uStack_68 = *(undefined8 *)(lVar4 + 0x58);
      uStack_70 = *(undefined8 *)(lVar4 + 0x50);
      uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_80,0);
      if ((uVar5 & 1) != 0) {
        uStack_98 = *(undefined8 *)(lVar4 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar4 + 0x20);
        uStack_88 = *(undefined8 *)(lVar4 + 0x38);
        uStack_90 = *(undefined8 *)(lVar4 + 0x30);
        uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_a0,0);
        if ((uVar5 & 1) == 0) {
                    /* try { // try from 0260e5e0 to 0270e783 has its CatchHandler @ 0260e5e0
                       catch() { ... } // from try @ 0260e5e0 with catch @ 0260e5e0
                       catch() { ... } // from try @ 0260e7f0 with catch @ 0260e5e0
                       catch() { ... } // from try @ 0260e81c with catch @ 0260e5e0
                       catch() { ... } // from try @ 0260ed74 with catch @ 0260e5e0
                       catch() { ... } // from try @ 0260eda4 with catch @ 0260e5e0
                       catch() { ... } // from try @ 0260edc8 with catch @ 0260e5e0 */
          iVar7 = iVar7 + 1;
          iStack_34 = iVar7;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

