/* IL2CPP: LoseSystem$$CanTransferBlockTo
bool LoseSystem__CanTransferBlockTo (LoseSystem_o* __this, Carrier_o* carrier, Block_o* element, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$CanTransferBlockTo
   bool LoseSystem__CanTransferBlockTo (LoseSystem_o* __this, Carrier_o* carrier, Block_o* element,
   const MethodInfo* method); */

bool LoseSystem__CanTransferBlockTo_24e0824(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = Carrier__CanBeginTransferEnter_23fad1c(param_2,0);
    if ((((uVar1 & 1) != 0) &&
        (uVar1 = Carrier__CanTransferBlock_24097e8(param_2,param_3,0), (uVar1 & 1) != 0)) &&
       (uVar1 = Carrier__IsFull_2409500(param_2,0), (uVar1 & 1) == 0)) {
      if (param_3 == 0) goto LAB_025e08a8;
      uVar1 = Block__IsCompatibleWith_23dcb20(param_3,param_2,0);
      if ((uVar1 & 1) != 0) {
        return *(char *)(param_3 + 0x159) == '\0';
      }
    }
    return false;
  }
LAB_025e08a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

