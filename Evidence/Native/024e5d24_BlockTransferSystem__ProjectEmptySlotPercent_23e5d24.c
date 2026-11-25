/* IL2CPP: BlockTransferSystem$$ProjectEmptySlotPercent
double BlockTransferSystem__ProjectEmptySlotPercent (BlockTransferSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$ProjectEmptySlotPercent
   double BlockTransferSystem__ProjectEmptySlotPercent (BlockTransferSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

undefined1  [16] BlockTransferSystem__ProjectEmptySlotPercent_23e5d24(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_50 [56];
  ulong uStack_18;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x108) != 0)) {
    UnityEngine_Transform__get_position_3c2d540(*(long *)(param_2 + 0x108),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      Dreamteck_Splines_SplineComputer__Project_2349550(auStack_50,*(long *)(param_1 + 0x30),0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uStack_18;
      return auVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

