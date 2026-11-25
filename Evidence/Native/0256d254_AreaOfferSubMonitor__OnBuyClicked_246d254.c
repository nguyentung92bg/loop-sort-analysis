/* IL2CPP: AreaOfferSubMonitor$$OnBuyClicked
void AreaOfferSubMonitor__OnBuyClicked (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$OnBuyClicked
   void AreaOfferSubMonitor__OnBuyClicked (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
    */

void AreaOfferSubMonitor__OnBuyClicked_246d254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [72];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 auStack_118 [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam0000000004f4b989 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5470);
    bRam0000000004f4b989 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = AreaOffer__get_ReskinName_2509ba0(*(long *)(param_1 + 0x68),0);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_049c5470;
      lVar1 = tpidr_el0;
      lStack_78 = *(long *)(lVar1 + 0x28);
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      PurchasingModule__GetProductMetadata_2549880(auStack_118);
      uStack_158 = uStack_f8;
      uStack_160 = uStack_100;
      uStack_148 = uStack_e8;
      uStack_150 = uStack_f0;
      uStack_80 = 0;
      uStack_138 = uStack_d8;
      uStack_140 = uStack_e0;
      uStack_128 = uStack_c8;
      uStack_130 = uStack_d0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_c0 = uVar5;
      thunk_FUN_021f190c(&uStack_c0,uVar5);
      uStack_b8 = uStack_b8 & 0xffffffff00000000;
      uStack_b0 = uVar3;
      thunk_FUN_021f190c(&uStack_b0,uVar3);
      uStack_a8 = uStack_108;
      thunk_FUN_021f190c(&uStack_a8,uStack_108);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,auStack_118[0]);
      uStack_90 = uStack_158;
      uStack_98 = uStack_160;
      uStack_88 = 0;
      thunk_FUN_021f190c(&uStack_88,0);
      uStack_80 = uVar2;
      thunk_FUN_021f190c(&uStack_80,uVar2);
      func_0x04608620(auStack_1a8,&uStack_c0,0x48);
      PurchasingModule__StartPurchase_2549988(lVar4,auStack_1a8);
      if (*(long *)(lVar1 + 0x28) == lStack_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

