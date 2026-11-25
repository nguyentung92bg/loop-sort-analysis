/* IL2CPP: ShuffleBoosterSystem$$FindTopShuffleUnit
void ShuffleBoosterSystem__FindTopShuffleUnit (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$FindTopShuffleUnit
   void ShuffleBoosterSystem__FindTopShuffleUnit (ShuffleBoosterSystem_o* __this, Carrier_o*
   carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void ShuffleBoosterSystem__FindTopShuffleUnit_23fef04(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b68c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b68c = 1;
  }
  puVar2 = PTR_DAT_049c1c80;
  puVar1 = PTR_DAT_049c1558;
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x1e0), lVar4 != 0)) {
    iVar5 = *(int *)(lVar4 + 0x18) + -1;
    while( true ) {
      if (iVar5 < 0) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar4,iVar5,&uStack_38,*(undefined8 *)puVar1);
      if (param_3 == 0) break;
      FUN_02333498(param_3,uStack_38,*(undefined8 *)puVar2);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = iVar5 + -1;
      uVar3 = ShuffleBoosterSystem__IsUnitBoundary_23feda4(param_1,lVar4,iVar5);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

