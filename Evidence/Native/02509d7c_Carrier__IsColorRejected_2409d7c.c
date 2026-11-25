/* IL2CPP: Carrier$$IsColorRejected
bool Carrier__IsColorRejected (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$IsColorRejected
   bool Carrier__IsColorRejected (Carrier_o* __this, Block_o* block, const MethodInfo* method); */

uint Carrier__IsColorRejected_2409d7c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b6e7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c28d8);
    bRam0000000004f4b6e7 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x1f0) != 0)) {
    uStack_28 = *(undefined8 *)(param_2 + 0xe4);
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x1f0),&uStack_28,&uStack_38,
                       *(undefined8 *)PTR_DAT_049c28d8);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = UniTimer__get_IsRunning_3f0efa0(&uStack_38,0);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

