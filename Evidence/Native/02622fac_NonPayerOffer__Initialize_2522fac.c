/* IL2CPP: NonPayerOffer$$Initialize
void NonPayerOffer__Initialize (NonPayerOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NonPayerOffer$$Initialize
   void NonPayerOffer__Initialize (NonPayerOffer_o* __this, const MethodInfo* method); */

void NonPayerOffer__Initialize_2522fac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [88];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4be82 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9898);
    FUN_021f03f8(PTR_DAT_049c98a0);
    bRam0000000004f4be82 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c9898);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      PurchasingModule__GetProductMetadata_2549880
                (auStack_80,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_049c98a0,0);
      func_0x04608620(param_1 + 0x30,auStack_80,0x58);
      thunk_FUN_021f190c(param_1 + 0x38,0);
      if (*(long *)(lVar1 + 0x28) == lStack_28) {
        return;
      }
      goto LAB_02623090;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02623090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

