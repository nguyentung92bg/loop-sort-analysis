/* IL2CPP: FallbackPurchasingProvider$$GetProductMetadata
ProductMetadata_o FallbackPurchasingProvider__GetProductMetadata (FallbackPurchasingProvider_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FallbackPurchasingProvider$$GetProductMetadata
   ProductMetadata_o FallbackPurchasingProvider__GetProductMetadata (FallbackPurchasingProvider_o*
   __this, System_String_o* productId, const MethodInfo* method); */

void FallbackPurchasingProvider__GetProductMetadata_2241604(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [6];
  
  puVar3 = PTR_DAT_049b5388;
  puVar2 = PTR_DAT_049b5380;
                    /* try { // try from 02341604 to 02441613 has its CatchHandler @ 023416c8 */
                    /* try { // try from 02341614 to 02441623 has its CatchHandler @ 023416c4 */
  lVar1 = tpidr_el0;
                    /* try { // try from 02341624 to 0244163f has its CatchHandler @ 0234155c */
  alStack_70[5] = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02341640 to 0244166b has its CatchHandler @ 0234171c */
  if ((bRam0000000004f49b15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4ec0);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049b5368);
    FUN_021f03f8(PTR_DAT_049b5398);
    FUN_021f03f8(PTR_DAT_049b53a0);
    bRam0000000004f49b15 = 1;
  }
  alStack_70[4] = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 023416bc to 024416c3 has its CatchHandler @ 023416d8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341614 with catch @ 023416c4
                       try { // try from 023416c4 to 0244170f has its CatchHandler @ 0234155c */
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar3);
  puVar5 = PTR_DAT_049b53a0;
  puVar4 = PTR_DAT_049b5398;
  puVar3 = PTR_DAT_049b5368;
  puVar2 = PTR_DAT_049b4ec0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341604 with catch @ 023416c8
                        */
  if (lVar6 == 0) {
    if (*(long *)(lVar1 + 0x28) == alStack_70[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023416bc with catch @ 023416d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023415f0 with catch @ 023416e8
                        */
    uStack_a8 = _UNK_013a9ec8;
    uStack_b0 = _UNK_013a9ec0;
    FUN_02333498(lVar6,&uStack_b0,*(undefined8 *)PTR_DAT_049b5390);
                    /* try { // try from 02341710 to 02441713 has its CatchHandler @ 0234171c */
                    /* try { // try from 02341714 to 0244172f has its CatchHandler @ 0234155c */
    uStack_98 = *(undefined8 *)puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341640 with catch @ 0234171c
                       catch(type#1 @ 00000000) { ... } // from try @ 02341710 with catch @ 0234171c
                        */
    alStack_70[4] = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    alStack_70[1] = 0;
    alStack_70[0] = 0;
    alStack_70[3] = 0;
    alStack_70[2] = 0;
    thunk_FUN_021f190c((ulong)&uStack_a0 | 8);
    uStack_90 = *(undefined8 *)puVar5;
    thunk_FUN_021f190c(&uStack_90);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    uStack_78 = *(undefined8 *)puVar4;
    uStack_80 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    uStack_88 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    thunk_FUN_021f190c(&uStack_78);
    alStack_70[0] = lVar6;
    thunk_FUN_021f190c(alStack_70,lVar6);
    func_0x04608620(param_1,&uStack_a0,0x58);
    if (*(long *)(lVar1 + 0x28) == alStack_70[5]) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

