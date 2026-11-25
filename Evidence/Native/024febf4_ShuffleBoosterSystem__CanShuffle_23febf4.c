/* IL2CPP: ShuffleBoosterSystem$$CanShuffle
bool ShuffleBoosterSystem__CanShuffle (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$CanShuffle
   bool ShuffleBoosterSystem__CanShuffle (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

bool ShuffleBoosterSystem__CanShuffle_23febf4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar4 = Carrier__IsEmpty_23faccc(param_2);
    if ((((((uVar4 & 1) == 0) && (*(char *)(param_2 + 0x1b1) == '\0')) &&
         (*(char *)(param_2 + 0x1b4) == '\0')) &&
        ((*(char *)(param_2 + 0x1b0) == '\0' &&
         (uVar4 = Carrier__IsAddingBlocks_2409ec0(param_2), (uVar4 & 1) == 0)))) &&
       (iVar3 = ShuffleBoosterSystem__CountShuffleUnits_23feca8(param_1,param_2), 1 < iVar3)) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_024fec94;
      iVar3 = *(int *)(param_2 + 0x1b8);
      iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x154);
      if (iVar3 < 1) {
        iVar3 = Carrier__GetCompleteBlockCount_24095bc(param_2);
      }
      if (iVar1 < iVar3) {
        if ((bRam0000000004f4b6eb & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c1550);
          bRam0000000004f4b6eb = 1;
        }
        if ((*(long *)(param_2 + 0x1e0) != 0) && (*(long *)(param_2 + 0x168) != 0)) {
          iVar3 = *(int *)(*(long *)(param_2 + 0x1e0) + 0x18);
          iVar1 = *(int *)(*(long *)(param_2 + 0x168) + 0x154);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar3 / iVar1;
          }
          return iVar3 == iVar2 * iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    return false;
  }
LAB_024fec94:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

