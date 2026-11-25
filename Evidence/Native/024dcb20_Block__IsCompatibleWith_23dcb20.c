/* IL2CPP: Block$$IsCompatibleWith
bool Block__IsCompatibleWith (Block_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$IsCompatibleWith
   bool Block__IsCompatibleWith (Block_o* __this, Carrier_o* carrier, const MethodInfo* method); */

bool Block__IsCompatibleWith_23dcb20(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = Carrier__IsEmpty_23faccc(param_2,0);
  if ((uVar1 & 1) != 0) {
    return true;
  }
  lVar2 = Carrier__GetNextColorType_24095f4(param_2,0);
  return *(long *)(param_1 + 0xe4) == lVar2;
}

