/* IL2CPP: ConveyorSlot$$GetFirstBlock
Block_o* ConveyorSlot__GetFirstBlock (ConveyorSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$GetFirstBlock
   Block_o* ConveyorSlot__GetFirstBlock (ConveyorSlot_o* __this, const MethodInfo* method); */

undefined8 ConveyorSlot__GetFirstBlock_24b3b08(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4bb7a & 1) == 0) {
                    /* try { // try from 025b3b24 to 026b3b2f has its CatchHandler @ 025b3fc8 */
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
                    /* try { // try from 025b3b3c to 026b3b6f has its CatchHandler @ 025b42e4 */
    bRam0000000004f4bb7a = 1;
  }
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) < 1) {
      uStack_18 = 0;
    }
    else {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar1,0,&uStack_18,*(undefined8 *)PTR_DAT_049c1558);
                    /* try { // try from 025b3b70 to 026b3b93 has its CatchHandler @ 025b402c */
    }
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

