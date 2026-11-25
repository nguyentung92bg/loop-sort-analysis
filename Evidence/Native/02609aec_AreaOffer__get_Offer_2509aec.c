/* IL2CPP: AreaOffer$$get_Offer
AreaOffers_Offer_o AreaOffer__get_Offer (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$get_Offer
   AreaOffers_Offer_o AreaOffer__get_Offer (AreaOffer_o* __this, const MethodInfo* method); */

undefined1  [16] AreaOffer__get_Offer_2509aec(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lStack_28;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4bdb7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ff8);
    bRam0000000004f4bdb7 = 1;
  }
  if (param_1[3] != 0) {
                    /* try { // try from 02609b24 to 02709b2b has its CatchHandler @ 02609c4c */
    lVar3 = *(long *)(param_1[3] + 0x18);
    uVar1 = AreaOffer__get_Area_25096b8(param_1);
    if (lVar3 != 0) {
                    /* try { // try from 02609b48 to 02709b93 has its CatchHandler @ 02609c54 */
      uStack_14 = uVar1;
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar3,&uStack_14,&lStack_28,*(undefined8 *)PTR_DAT_049c8ff8);
      iVar2 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      if (lStack_28 != 0) {
        if (iVar2 - 0x1eU < *(uint *)(lStack_28 + 0x18)) {
                    /* try { // try from 02609b94 to 02709bd7 has its CatchHandler @ 02609a44 */
          return *(undefined1 (*) [16])(lStack_28 + (long)(int)(iVar2 - 0x1eU) * 0x10 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

