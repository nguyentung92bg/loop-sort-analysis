/* IL2CPP: CapacityBoosterSystem$$ComesBefore
bool CapacityBoosterSystem__ComesBefore (Carrier_o* carrier, Carrier_o* current, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CapacityBoosterSystem$$ComesBefore
   bool CapacityBoosterSystem__ComesBefore (Carrier_o* carrier, Carrier_o* current, const
   MethodInfo* method); */

bool CapacityBoosterSystem__ComesBefore_23f4ae8(long param_1,long param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    if ((int)*(uint *)(param_2 + 0x130) < 0x1b) {
      bVar1 = false;
    }
    else {
      if (param_1 == 0) goto LAB_024f4b20;
      bVar1 = 0x19 < (int)*(uint *)(param_1 + 0x130) &&
              *(uint *)(param_1 + 0x130) < *(uint *)(param_2 + 0x130);
    }
    return bVar1;
  }
LAB_024f4b20:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

