/* IL2CPP: ElevatorHole$$get_HasNext
bool ElevatorHole__get_HasNext (ElevatorHole_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$get_HasNext
   bool ElevatorHole__get_HasNext (ElevatorHole_o* __this, const MethodInfo* method); */

bool ElevatorHole__get_HasNext_2410578(long param_1)

{
  if ((bRam0000000004f4b71c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2678);
    bRam0000000004f4b71c = 1;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    return *(int *)(param_1 + 0xf8) < *(int *)(*(long *)(param_1 + 0xf0) + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

