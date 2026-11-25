/* IL2CPP: Extensions$$Swap<__Il2CppFullySharedGenericType>
void Extensions__Swap___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t i, int32_t j, const MethodInfo_25F15A4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$Swap<__Il2CppFullySharedGenericType>
   void Extensions__Swap___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t i, int32_t j, const
   MethodInfo_25F15A4* method); */

void Extensions__Swap___Il2CppFullySharedGenericType__25f15a4
               (long *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
                    /* try { // try from 026f15c0 to 027f15c3 has its CatchHandler @ 026f19ac */
                    /* try { // try from 026f15c4 to 027f15cb has its CatchHandler @ 026f17dc */
  lVar7 = tpidr_el0;
  lStack_68 = *(long *)(lVar7 + 0x28);
  lVar1 = *(long *)(param_4 + 0x38);
  if (lVar1 == 0) {
    FUN_02229774(param_4);
                    /* try { // try from 026f15f0 to 027f161f has its CatchHandler @ 026f17c4 */
    lVar1 = *(long *)(param_4 + 0x38);
  }
  uVar4 = (ulong)*(uint *)(*(long *)(lVar1 + 8) + 0xfc);
  uVar2 = uVar4 + 0xf & 0x1fffffff0;
  puVar6 = auStack_90 + -uVar2;
  lVar1 = (long)puVar6 - uVar2;
  lVar5 = lVar1 - uVar2;
  func_0x04608670(lVar5,0,uVar4);
  if (param_1 == (long *)0x0) {
                    /* catch() { ... } // from try @ 026f1354 with catch @ 026f17a0 */
                    /* catch() { ... } // from try @ 026f1774 with catch @ 026f17a4 */
                    /* catch() { ... } // from try @ 026f132c with catch @ 026f17a8 */
                    /* catch() { ... } // from try @ 026f12b0 with catch @ 026f17ac */
    if (*(long *)(lVar7 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026f1294 with catch @ 026f17b0 */
      FUN_021f06a0();
    }
  }
  else {
    if (param_3 < *(uint *)(param_1 + 3)) {
      lStack_78 = lVar1;
      lStack_70 = lVar7;
      if (param_2 < *(uint *)(param_1 + 3)) {
                    /* try { // try from 026f1654 to 027f1657 has its CatchHandler @ 026f17d8 */
        lVar1 = (long)(int)param_3;
                    /* try { // try from 026f166c to 027f1673 has its CatchHandler @ 026f17d4 */
        lVar8 = (long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20;
        lVar7 = (long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * lVar1 + 0x20;
        uStack_88 = (ulong)param_3;
        uStack_80 = (ulong)param_2;
        func_0x04608620(lVar5,lVar8,uVar4);
                    /* try { // try from 026f1684 to 027f1693 has its CatchHandler @ 026f19a8 */
        func_0x04608620(puVar6,lVar7,uVar4);
                    /* try { // try from 026f1698 to 027f16b3 has its CatchHandler @ 026f17e8 */
        func_0x04608650(lVar8,lVar7,uVar4);
        lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                    /* try { // try from 026f16b4 to 027f16bb has its CatchHandler @ 026f17d0 */
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02229718();
        }
                    /* try { // try from 026f16c0 to 027f16cb has its CatchHandler @ 026f17cc */
        lVar8 = lStack_78;
        if ((uint)uStack_80 < *(uint *)(param_1 + 3)) {
                    /* try { // try from 026f16d0 to 027f16db has its CatchHandler @ 026f17c8 */
          FUN_021f03a8(lVar7,(long)param_1 +
                             (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20,puVar6);
          func_0x04608620(lVar8,lVar5,uVar4);
          uVar3 = (uint)uStack_88;
                    /* try { // try from 026f1704 to 027f170f has its CatchHandler @ 026f1784 */
          if (uVar3 < *(uint *)(param_1 + 3)) {
            func_0x04608620((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * lVar1 + 0x20,lVar5,
                            uVar4);
            lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                    /* try { // try from 026f1730 to 027f173b has its CatchHandler @ 026f1780 */
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02229718();
            }
            if (uVar3 < *(uint *)(param_1 + 3)) {
                    /* try { // try from 026f174c to 027f1757 has its CatchHandler @ 026f177c */
                    /* try { // try from 026f175c to 027f175f has its CatchHandler @ 026f17e4 */
              FUN_021f03a8(lVar7,(long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * lVar1 + 0x20,
                           lVar8);
                    /* try { // try from 026f1760 to 027f1763 has its CatchHandler @ 026f19ac */
                    /* try { // try from 026f1764 to 027f1767 has its CatchHandler @ 026f17e0 */
                    /* try { // try from 026f1768 to 027f176b has its CatchHandler @ 026f19a8 */
                    /* try { // try from 026f176c to 027f176f has its CatchHandler @ 026f17c0 */
                    /* try { // try from 026f1770 to 027f1773 has its CatchHandler @ 026f17bc */
              if (*(long *)(lStack_70 + 0x28) == lStack_68) {
                    /* try { // try from 026f1774 to 027f1777 has its CatchHandler @ 026f17a4 */
                    /* try { // try from 026f1778 to 027f177b has its CatchHandler @ 026f17b4 */
                    /* catch() { ... } // from try @ 026f174c with catch @ 026f177c
                       try { // try from 026f177c to 027f1807 has its CatchHandler @ 026f0b08 */
                    /* catch() { ... } // from try @ 026f1730 with catch @ 026f1780 */
                    /* catch() { ... } // from try @ 026f1704 with catch @ 026f1784 */
                    /* catch() { ... } // from try @ 026f13dc with catch @ 026f1788 */
                    /* catch() { ... } // from try @ 026f1444 with catch @ 026f178c */
                    /* catch() { ... } // from try @ 026f144c with catch @ 026f1790 */
                return;
              }
              goto LAB_026f17c8;
            }
          }
        }
      }
                    /* catch() { ... } // from try @ 026f1428 with catch @ 026f1794 */
                    /* catch() { ... } // from try @ 026f12c8 with catch @ 026f1798 */
      lVar7 = *(long *)(lStack_70 + 0x28);
                    /* catch() { ... } // from try @ 026f1378 with catch @ 026f179c */
    }
    else {
                    /* catch() { ... } // from try @ 026f13ec with catch @ 026f17b4
                       catch() { ... } // from try @ 026f1778 with catch @ 026f17b4 */
      lVar7 = *(long *)(lVar7 + 0x28);
    }
                    /* catch() { ... } // from try @ 026f1468 with catch @ 026f17b8 */
                    /* catch() { ... } // from try @ 026f12a4 with catch @ 026f17bc
                       catch() { ... } // from try @ 026f1770 with catch @ 026f17bc */
                    /* catch() { ... } // from try @ 026f126c with catch @ 026f17c0
                       catch() { ... } // from try @ 026f176c with catch @ 026f17c0 */
    if (lVar7 == lStack_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026f15f0 with catch @ 026f17c4 */
      FUN_021f06a8();
    }
  }
LAB_026f17c8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026f16d0 with catch @ 026f17c8 */
  __stack_chk_fail();
}

