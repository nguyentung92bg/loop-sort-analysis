/* IL2CPP: PiggyBankSubMonitor$$OnPurchase
void PiggyBankSubMonitor__OnPurchase (PiggyBankSubMonitor_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBankSubMonitor$$OnPurchase
   void PiggyBankSubMonitor__OnPurchase (PiggyBankSubMonitor_o* __this, FulfillPurchaseMessage_o m,
   const MethodInfo* method); */

void PiggyBankSubMonitor__OnPurchase_2481dbc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_160 [80];
  undefined8 uStack_110;
  undefined1 auStack_108 [80];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  if ((bRam0000000004f4ba0b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c5aa8);
    FUN_021f03f8(PTR_DAT_049c5aa0);
    bRam0000000004f4ba0b = 1;
  }
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar5 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar5 != 0) {
    uVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar5,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_049c5aa8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsInt__DeleteValue_3f0db18(param_1 + 0x60,0);
    iVar3 = PlayerPrefsInt__get_Value_3f0d974(param_1 + 0x70,0);
    PlayerPrefsInt__set_Value_3f0da70(param_1 + 0x70,iVar3 + 1,0);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar5 != 0)) {
      uVar4 = ConstantSheetBase_object___GetInt_281c070(lVar5,10,*(undefined8 *)PTR_DAT_049c4228);
      puVar2 = PTR_DAT_049c5aa0;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_b0 = *(undefined8 *)PTR_DAT_049c5aa0;
      thunk_FUN_021f190c(&uStack_b0);
      puVar1 = PTR_DAT_049c2ce8;
      uStack_90 = CONCAT44(uVar4,(undefined4)uStack_90);
      uStack_a0 = 4;
      uStack_b8 = 0;
      uStack_110 = CONCAT44(uStack_110._4_4_,100);
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_b8,&uStack_110,*(undefined8 *)PTR_DAT_049c2ce8);
      lVar5 = *(long *)(param_1 + 0x48);
      uStack_9c = (undefined4)uStack_b8;
      uStack_98 = (undefined4)((ulong)uStack_b8 >> 0x20);
      if (lVar5 != 0) {
        func_0x04608620(auStack_108,&uStack_b0,0x50);
        EconomyModule__TryConsume_2533778(lVar5,auStack_108,0);
        uStack_b0 = *(undefined8 *)puVar2;
        uStack_a8 = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        thunk_FUN_021f190c(&uStack_b0);
        uStack_90 = CONCAT44(uVar4,(undefined4)uStack_90);
        uStack_a0 = 1;
        uStack_110 = 0;
        uStack_54 = 100;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_110,&uStack_54,*(undefined8 *)puVar1);
        lVar5 = *(long *)(param_1 + 0x48);
        uStack_9c = (undefined4)uStack_110;
        uStack_98 = (undefined4)((ulong)uStack_110 >> 0x20);
        if (lVar5 != 0) {
          func_0x04608620(auStack_160,&uStack_b0,0x50);
          EconomyModule__Add_25332a4(lVar5,auStack_160,0);
          PiggyBankSubMonitor__UpdateView_2481aac(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

