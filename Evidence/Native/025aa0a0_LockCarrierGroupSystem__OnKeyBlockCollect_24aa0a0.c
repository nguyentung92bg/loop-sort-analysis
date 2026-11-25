/* IL2CPP: LockCarrierGroupSystem$$OnKeyBlockCollect
void LockCarrierGroupSystem__OnKeyBlockCollect (LockCarrierGroupSystem_o* __this, KeyBlockCollectMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroupSystem$$OnKeyBlockCollect
   void LockCarrierGroupSystem__OnKeyBlockCollect (LockCarrierGroupSystem_o* __this,
   KeyBlockCollectMessage_o m, const MethodInfo* method); */

void LockCarrierGroupSystem__OnKeyBlockCollect_24aa0a0(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 025aa0a0 to 026aa0a3 has its CatchHandler @ 025aa0ac */
                    /* catch() { ... } // from try @ 025aa0a0 with catch @ 025aa0ac */
                    /* try { // try from 025aa0b0 to 026aa0b7 has its CatchHandler @ 025aa0c0 */
                    /* try { // try from 025aa0b8 to 026aa0c3 has its CatchHandler @ 025a9f18 */
  if ((bRam0000000004f4bb24 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025aa0b0 with catch @ 025aa0c0
                        */
    FUN_021f03f8(PTR_DAT_049c6848);
    bRam0000000004f4bb24 = 1;
  }
  lStack_30 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    uStack_28 = *(undefined8 *)(param_2 + 0xb0);
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0xb8),&uStack_28,&lStack_30,
                       *(undefined8 *)PTR_DAT_049c6848);
    if ((uVar1 & 1) != 0) {
      if (lStack_30 == 0) goto LAB_025aa128;
      LockCarrierGroup__Unlock_24a7078(lStack_30,param_2);
    }
    return;
  }
LAB_025aa128:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

