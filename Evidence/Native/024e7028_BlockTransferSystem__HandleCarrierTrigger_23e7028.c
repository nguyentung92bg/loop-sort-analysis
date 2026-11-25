/* IL2CPP: BlockTransferSystem$$HandleCarrierTrigger
void BlockTransferSystem__HandleCarrierTrigger (BlockTransferSystem_o* __this, Dreamteck_Splines_SplineUser_o* splineUser, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HandleCarrierTrigger
   void BlockTransferSystem__HandleCarrierTrigger (BlockTransferSystem_o* __this,
   Dreamteck_Splines_SplineUser_o* splineUser, Carrier_o* carrier, const MethodInfo* method); */

void BlockTransferSystem__HandleCarrierTrigger_23e7028(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000004f4b5fd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ad8);
    FUN_021f03f8(PTR_DAT_049c1ae0);
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b5fd = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = GameMachine__IsInState_object__261a580
                      (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c1ae0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((param_3 != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_3,0), lVar2 != 0)) {
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar2,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if ((param_2 != 0) &&
         (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c1ad8), lStack_28 != 0)) {
        uVar1 = ConveyorSlot__IsElementBeingAdded_24b10ac(lStack_28,0);
        if ((uVar1 & 1) != 0) {
          return;
        }
        if (*(long *)(lStack_28 + 0xf8) != 0) {
          if (*(int *)(*(long *)(lStack_28 + 0xf8) + 0x18) == 0) {
            return;
          }
          BlockTransferSystem__HandleCarrierTrigger_23e7118(param_1,param_3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

