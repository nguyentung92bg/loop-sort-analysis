/* IL2CPP: ConnectedCarrierGroupSystem$$OnCarrierComplete
void ConnectedCarrierGroupSystem__OnCarrierComplete (ConnectedCarrierGroupSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectedCarrierGroupSystem$$OnCarrierComplete
   void ConnectedCarrierGroupSystem__OnCarrierComplete (ConnectedCarrierGroupSystem_o* __this,
   CarrierCompleteMessage_o m, const MethodInfo* method); */

void ConnectedCarrierGroupSystem__OnCarrierComplete_240ff34(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lStack_28;
  
  if ((bRam0000000004f4b715 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2af8);
    bRam0000000004f4b715 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x70),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c2af8)
    ;
    if ((uVar1 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_0250ffac;
      ConnectedCarrierGroup__Complete_240ee2c();
    }
    return;
  }
LAB_0250ffac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

