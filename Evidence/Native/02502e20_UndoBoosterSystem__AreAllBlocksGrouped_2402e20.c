/* IL2CPP: UndoBoosterSystem$$AreAllBlocksGrouped
bool UndoBoosterSystem__AreAllBlocksGrouped (UndoBoosterSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$AreAllBlocksGrouped
   bool UndoBoosterSystem__AreAllBlocksGrouped (UndoBoosterSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

bool UndoBoosterSystem__AreAllBlocksGrouped_2402e20(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if ((bRam0000000004f4b6a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b6a0 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x154);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_2 + 0x18) / iVar1;
    }
    return *(int *)(param_2 + 0x18) == iVar2 * iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

