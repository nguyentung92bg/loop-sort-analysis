/* IL2CPP: Carrier$$GetAvailableSpaceCount
int32_t Carrier__GetAvailableSpaceCount (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetAvailableSpaceCount
   int32_t Carrier__GetAvailableSpaceCount (Carrier_o* __this, const MethodInfo* method); */

int Carrier__GetAvailableSpaceCount_2402f2c(long param_1)

{
  int iVar1;
  
  if ((bRam0000000004f4b6db & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b6db = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (iVar1 < 1) {
    iVar1 = Carrier__GetCompleteBlockCount_24095bc(param_1);
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return iVar1 - *(int *)(*(long *)(param_1 + 0x1e0) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

