/* IL2CPP: ShuffleBoosterSystem$$CountShuffleUnits
int32_t ShuffleBoosterSystem__CountShuffleUnits (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$CountShuffleUnits
   int32_t ShuffleBoosterSystem__CountShuffleUnits (ShuffleBoosterSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

int ShuffleBoosterSystem__CountShuffleUnits_23feca8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if ((bRam0000000004f4b68b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b68b = 1;
  }
  if ((param_2 != 0) && (lVar2 = *(long *)(param_2 + 0x1e0), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      iVar4 = *(int *)(lVar2 + 0x18) + -2;
      if (-1 < iVar4) {
        do {
          uVar1 = ShuffleBoosterSystem__IsUnitBoundary_23feda4(param_1,lVar2,iVar4);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + (uVar1 & 1);
        } while (iVar4 != -1);
      }
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

