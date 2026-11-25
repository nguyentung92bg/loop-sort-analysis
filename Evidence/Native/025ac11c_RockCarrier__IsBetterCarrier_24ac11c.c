/* IL2CPP: RockCarrier$$IsBetterCarrier
bool RockCarrier__IsBetterCarrier (RockCarrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrier$$IsBetterCarrier
   bool RockCarrier__IsBetterCarrier (RockCarrier_o* __this, Block_o* block, const MethodInfo*
   method); */

bool RockCarrier__IsBetterCarrier_24ac11c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar1 = Carrier__CanBeginTransferEnter_23fad1c(*(long *)(param_1 + 0xb0),0);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar1 = Carrier__IsFull_2409500(*(long *)(param_1 + 0xb0),0);
      if ((uVar1 & 1) != 0) {
        return false;
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar1 = Carrier__AreAllBlocksSameColor_23fad40(*(long *)(param_1 + 0xb0),0);
        if ((uVar1 & 1) == 0) {
          return false;
        }
        if ((*(long *)(param_1 + 0xb0) != 0) &&
           (lVar2 = Carrier__GetNextColorType_24095f4(*(long *)(param_1 + 0xb0),0), param_2 != 0)) {
          return *(long *)(param_2 + 0xe4) == lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

