/* IL2CPP: CellBase$$get_TopElement
CellElementBase_o* CellBase__get_TopElement (CellBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$get_TopElement
   CellElementBase_o* CellBase__get_TopElement (CellBase_o* __this, const MethodInfo* method); */

undefined8 CellBase__get_TopElement_2504d6c(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
                    /* try { // try from 02604d70 to 02704d77 has its CatchHandler @ 02604fc8 */
  if ((bRam0000000004f4bd82 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d50);
                    /* try { // try from 02604d90 to 02704d97 has its CatchHandler @ 02604fc4 */
    FUN_021f03f8(PTR_DAT_049c8d58);
    bRam0000000004f4bd82 = 1;
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
                    /* try { // try from 02604dac to 02704db3 has its CatchHandler @ 02604fc0 */
    if (*(int *)(lVar1 + 0x18) < 1) {
      uStack_18 = 0;
    }
    else {
                    /* try { // try from 02604dcc to 02704dd3 has its CatchHandler @ 02604eec */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar1,0,&uStack_18,*(undefined8 *)PTR_DAT_049c8d58);
    }
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

