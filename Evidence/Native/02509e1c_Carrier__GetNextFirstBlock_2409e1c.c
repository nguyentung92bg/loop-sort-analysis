/* IL2CPP: Carrier$$GetNextFirstBlock
Block_o* Carrier__GetNextFirstBlock (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetNextFirstBlock
   Block_o* Carrier__GetNextFirstBlock (Carrier_o* __this, const MethodInfo* method); */

undefined8 Carrier__GetNextFirstBlock_2409e1c(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4b6ea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b6ea = 1;
  }
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) < 1) {
      uStack_18 = 0;
    }
    else {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar1,*(int *)(lVar1 + 0x18) + -1,&uStack_18,*(undefined8 *)PTR_DAT_049c1558);
    }
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

