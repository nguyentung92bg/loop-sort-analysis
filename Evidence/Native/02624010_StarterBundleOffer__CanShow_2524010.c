/* IL2CPP: StarterBundleOffer$$CanShow
bool StarterBundleOffer__CanShow (StarterBundleOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StarterBundleOffer$$CanShow
   bool StarterBundleOffer__CanShow (StarterBundleOffer_o* __this, const MethodInfo* method); */

uint StarterBundleOffer__CanShow_2524010(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [88];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_049b6110;
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4be8c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4be8c = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = Extensions__ToProductId_24e8090(1,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    PurchasingModule__GetProductMetadata_2549880(auStack_e8,*(long *)(param_1 + 0x10),uVar4,0);
    func_0x04608620(&uStack_90,auStack_e8,0x58);
    uVar3 = ProductMetadata__get_IsPurchased_254b044(&uStack_90,0);
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
      return (uVar3 ^ 1) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

