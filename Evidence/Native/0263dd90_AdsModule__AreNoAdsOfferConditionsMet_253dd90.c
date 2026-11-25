/* IL2CPP: AdsModule$$AreNoAdsOfferConditionsMet
bool AdsModule__AreNoAdsOfferConditionsMet (AdsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$AreNoAdsOfferConditionsMet
   bool AdsModule__AreNoAdsOfferConditionsMet (AdsModule_o* __this, const MethodInfo* method); */

bool AdsModule__AreNoAdsOfferConditionsMet_253dd90(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bf9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bf9c = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 1000,0);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if ((int)uVar1 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (uVar1 == uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
      } while ((iVar3 != *(int *)(lVar4 + (long)(int)uVar5 * 4 + 0x20)) &&
              (uVar5 = uVar5 + 1, (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar5));
    }
    return (int)uVar5 < (int)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

