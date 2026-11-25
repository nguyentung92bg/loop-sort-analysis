/* IL2CPP: Carrier$$AreAllBlocksGrouped
bool Carrier__AreAllBlocksGrouped (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$AreAllBlocksGrouped
   bool Carrier__AreAllBlocksGrouped (Carrier_o* __this, const MethodInfo* method); */

bool Carrier__AreAllBlocksGrouped_23fed40(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((bRam0000000004f4b6eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b6eb = 1;
  }
  if ((*(long *)(param_1 + 0x1e0) != 0) && (*(long *)(param_1 + 0x168) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x1e0) + 0x18);
    iVar2 = *(int *)(*(long *)(param_1 + 0x168) + 0x154);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    return iVar1 == iVar3 * iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

