/* IL2CPP: AdsModule$$IsRewardedVideoAvailable
bool AdsModule__IsRewardedVideoAvailable (AdsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$IsRewardedVideoAvailable
   bool AdsModule__IsRewardedVideoAvailable (AdsModule_o* __this, const MethodInfo* method); */

undefined8 AdsModule__IsRewardedVideoAvailable_253d89c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 0263d808 with catch @ 0263d89c */
                    /* catch() { ... } // from try @ 0263d888 with catch @ 0263d8a0 */
                    /* catch() { ... } // from try @ 0263d884 with catch @ 0263d8a4 */
                    /* catch() { ... } // from try @ 0263d7dc with catch @ 0263d8a8 */
                    /* catch() { ... } // from try @ 0263d880 with catch @ 0263d8ac */
                    /* catch() { ... } // from try @ 0263d83c with catch @ 0263d8b0 */
  if ((bRam0000000004f4bf98 & 1) == 0) {
                    /* catch() { ... } // from try @ 0263d780 with catch @ 0263d8b4 */
                    /* catch() { ... } // from try @ 0263d81c with catch @ 0263d8b8 */
                    /* catch() { ... } // from try @ 0263d6fc with catch @ 0263d8bc */
    FUN_021f03f8(PTR_DAT_049c8070);
                    /* catch() { ... } // from try @ 0263d724 with catch @ 0263d8c0 */
    bRam0000000004f4bf98 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar3 = *plVar6;
                    /* try { // try from 0263d8dc to 0273d8df has its CatchHandler @ 0263d900 */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0263d8e0 to 0273d903 has its CatchHandler @ 0263d5a8 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_0263d938;
      }
      uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0263d8dc with catch @ 0263d900 */
      piVar5 = piVar5 + 4;
                    /* try { // try from 0263d904 to 0273d90b has its CatchHandler @ 0263d914 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 0263d90c to 0273d917 has its CatchHandler @ 0263d5a8 */
  puVar1 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c8070,5);
                    /* catch() { ... } // from try @ 0263d904 with catch @ 0263d914 */
LAB_0263d938:
                    /* WARNING: Could not recover jumptable at 0x0263d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}

