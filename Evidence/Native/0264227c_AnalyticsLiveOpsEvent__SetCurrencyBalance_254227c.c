/* IL2CPP: AnalyticsLiveOpsEvent$$SetCurrencyBalance
void AnalyticsLiveOpsEvent__SetCurrencyBalance (AnalyticsLiveOpsEvent_o __this, int32_t quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetCurrencyBalance
   void AnalyticsLiveOpsEvent__SetCurrencyBalance (AnalyticsLiveOpsEvent_o __this, int32_t quantity,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetCurrencyBalance_254227c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02642274 with catch @ 02642280
                        */
                    /* try { // try from 02642290 to 027423af has its CatchHandler @ 02642290
                       catch() { ... } // from try @ 02642290 with catch @ 02642290
                       catch() { ... } // from try @ 02642894 with catch @ 02642290
                       catch() { ... } // from try @ 0264294c with catch @ 02642290
                       catch() { ... } // from try @ 02642a20 with catch @ 02642290
                       catch() { ... } // from try @ 02642a88 with catch @ 02642290 */
  if ((bRam0000000004f4bfd6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca610);
    bRam0000000004f4bfd6 = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uStack_24 = param_2;
  uVar1 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar2,*(undefined8 *)PTR_DAT_049ca610,uVar1,*(undefined8 *)PTR_DAT_049b4df8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

