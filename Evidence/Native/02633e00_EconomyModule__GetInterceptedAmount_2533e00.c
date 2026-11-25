/* IL2CPP: EconomyModule$$GetInterceptedAmount
int32_t EconomyModule__GetInterceptedAmount (EconomyModule_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$GetInterceptedAmount
   int32_t EconomyModule__GetInterceptedAmount (EconomyModule_o* __this, int32_t item, const
   MethodInfo* method); */

ulong EconomyModule__GetInterceptedAmount_2533e00(long param_1,undefined4 param_2)

{
  ulong uVar1;
  uint uStack_28;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 02633dc8 with catch @ 02633e00 */
                    /* catch() { ... } // from try @ 02633b08 with catch @ 02633e04 */
                    /* catch() { ... } // from try @ 02633ae8 with catch @ 02633e08 */
                    /* catch() { ... } // from try @ 02633ac4 with catch @ 02633e0c */
                    /* catch() { ... } // from try @ 02633aa0 with catch @ 02633e10 */
                    /* catch() { ... } // from try @ 02633dbc with catch @ 02633e14 */
                    /* catch() { ... } // from try @ 02633ca8 with catch @ 02633e18 */
                    /* catch() { ... } // from try @ 02633c90 with catch @ 02633e1c */
  if ((bRam0000000004f4bf38 & 1) == 0) {
                    /* catch() { ... } // from try @ 02633d38 with catch @ 02633e20
                       catch() { ... } // from try @ 02633dd4 with catch @ 02633e20 */
                    /* catch() { ... } // from try @ 02633cd8 with catch @ 02633e24 */
                    /* catch() { ... } // from try @ 02633db8 with catch @ 02633e28 */
    FUN_021f03f8(PTR_DAT_049c99e0);
                    /* catch() { ... } // from try @ 02633db4 with catch @ 02633e2c */
                    /* catch() { ... } // from try @ 02633db0 with catch @ 02633e30 */
    bRam0000000004f4bf38 = 1;
  }
                    /* catch() { ... } // from try @ 02633ab8 with catch @ 02633e34
                       catch() { ... } // from try @ 02633dc4 with catch @ 02633e34 */
                    /* catch() { ... } // from try @ 02633a8c with catch @ 02633e38
                       catch() { ... } // from try @ 02633dc0 with catch @ 02633e38 */
  uStack_28 = 0;
                    /* catch() { ... } // from try @ 02633b28 with catch @ 02633e3c */
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 02633bec with catch @ 02633e40
                       catch() { ... } // from try @ 02633e50 with catch @ 02633e40
                       catch() { ... } // from try @ 02633e80 with catch @ 02633e40 */
                    /* try { // try from 02633e50 to 02733e53 has its CatchHandler @ 02633e40 */
                    /* try { // try from 02633e54 to 02733e5b has its CatchHandler @ 02633f8c */
    uStack_24 = param_2;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x80),&uStack_24,&uStack_28,
                       *(undefined8 *)PTR_DAT_049c99e0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 02633e70 to 02733e7b has its CatchHandler @ 02633f94 */
      uVar1 = EconomyModule__GetAmount_2523ed0(param_1,param_2);
    }
    else {
                    /* try { // try from 02633e60 to 02733e6b has its CatchHandler @ 02633f90 */
      uVar1 = (ulong)uStack_28;
    }
                    /* try { // try from 02633e80 to 02733e8b has its CatchHandler @ 02633e40 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

