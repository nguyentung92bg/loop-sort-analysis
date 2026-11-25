/* IL2CPP: AnalyticsLiveOpsEvent$$SetPassStatus
void AnalyticsLiveOpsEvent__SetPassStatus (AnalyticsLiveOpsEvent_o __this, int32_t status, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetPassStatus
   void AnalyticsLiveOpsEvent__SetPassStatus (AnalyticsLiveOpsEvent_o __this, int32_t status, const
   MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetPassStatus_25421c4(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_049ca630;
                    /* try { // try from 026421c8 to 027421cb has its CatchHandler @ 026421dc */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02642188 with catch @ 026421cc
                       try { // try from 026421cc to 027421f7 has its CatchHandler @ 02642018 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026420c0 with catch @ 026421d0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026420b4 with catch @ 026421d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026420d0 with catch @ 026421d8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026421c8 with catch @ 026421dc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026420b0 with catch @ 026421e0
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 026420e0 with catch @ 026421e0
                        */
  if ((bRam0000000004f4bfd5 & 1) == 0) {
                    /* try { // try from 026421f8 to 0274220f has its CatchHandler @ 02642270 */
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca630);
                    /* try { // try from 02642210 to 0274225f has its CatchHandler @ 02642018 */
    FUN_021f03f8(PTR_DAT_049ca5d0);
    bRam0000000004f4bfd5 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  lVar3 = *(long *)(param_1 + 8);
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_2;
  uVar2 = System_Enum__ToString_3135e00(&uStack_48,0);
  if (lVar3 != 0) {
                    /* try { // try from 02642260 to 0274226f has its CatchHandler @ 02642270 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,*(undefined8 *)PTR_DAT_049ca5d0,uVar2,*(undefined8 *)PTR_DAT_049b4df8);
                    /* catch() { ... } // from try @ 026421f8 with catch @ 02642270
                       catch() { ... } // from try @ 02642260 with catch @ 02642270 */
                    /* try { // try from 02642274 to 02742277 has its CatchHandler @ 02642280 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02642278 to 02742283 has its CatchHandler @ 02642018 */
  FUN_021f06a0();
}

