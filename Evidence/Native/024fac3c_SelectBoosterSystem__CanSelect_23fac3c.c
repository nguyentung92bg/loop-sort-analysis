/* IL2CPP: SelectBoosterSystem$$CanSelect
bool SelectBoosterSystem__CanSelect (SelectBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBoosterSystem$$CanSelect
   bool SelectBoosterSystem__CanSelect (SelectBoosterSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

bool SelectBoosterSystem__CanSelect_23fac3c(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar4 = Carrier__IsEmpty_23faccc(param_2);
    if (((((uVar4 & 1) == 0) && (*(char *)(param_2 + 0x1b1) == '\0')) &&
        (*(char *)(param_2 + 0x1b3) == '\0')) &&
       (((*(char *)(param_2 + 0x1b0) == '\0' &&
         (uVar4 = Carrier__IsAddingBlocks_2409ec0(param_2), (uVar4 & 1) == 0)) &&
        (uVar4 = Carrier__AreAllBlocksSameColor_23fad40(param_2), (uVar4 & 1) == 0)))) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_024facc8;
      iVar3 = *(int *)(param_2 + 0x1b8);
      iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x154);
      if (iVar3 < 1) {
        iVar3 = Carrier__GetCompleteBlockCount_24095bc(param_2);
      }
      bVar2 = iVar1 < iVar3;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
LAB_024facc8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

