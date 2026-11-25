/* IL2CPP: Conveyor$$SetCarrierBlockArgs
void Conveyor__SetCarrierBlockArgs (Conveyor_o* __this, CarrierBlockArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$SetCarrierBlockArgs
   void Conveyor__SetCarrierBlockArgs (Conveyor_o* __this, CarrierBlockArgs_o args, const
   MethodInfo* method); */

void Conveyor__SetCarrierBlockArgs_24b14e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(int *)(param_1 + 0x150) = (int)param_3;
  if (*(long *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0x38);
    iVar2 = (int)((ulong)param_2 >> 0x20) * (int)param_2;
    *(int *)(param_1 + 0x160) = (int)((ulong)param_3 >> 0x20);
    iVar1 = iVar1 * iVar2;
    *(int *)(param_1 + 0x154) = iVar1;
    *(int *)(param_1 + 0x158) = iVar1;
    *(int *)(param_1 + 0x15c) = iVar2 * (int)param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

