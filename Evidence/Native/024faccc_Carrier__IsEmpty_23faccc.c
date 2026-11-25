/* IL2CPP: Carrier$$IsEmpty
bool Carrier__IsEmpty (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$IsEmpty
   bool Carrier__IsEmpty (Carrier_o* __this, const MethodInfo* method); */

bool Carrier__IsEmpty_23faccc(long param_1)

{
  if ((bRam0000000004f4b6e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b6e9 = 1;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return *(int *)(*(long *)(param_1 + 0x1e0) + 0x18) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

