/* IL2CPP: Carrier$$GetBlockAt
Block_o* Carrier__GetBlockAt (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetBlockAt
   Block_o* Carrier__GetBlockAt (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const
   MethodInfo* method); */

undefined8 Carrier__GetBlockAt_2408ee0(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
                    /* try { // try from 02508ee4 to 02608eef has its CatchHandler @ 02508f98 */
                    /* try { // try from 02508f00 to 02608f03 has its CatchHandler @ 02508f88 */
  if ((bRam0000000004f4b6d6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
                    /* try { // try from 02508f18 to 02608f1f has its CatchHandler @ 02508f90 */
    FUN_021f03f8(PTR_DAT_049c1558);
                    /* try { // try from 02508f20 to 02608f27 has its CatchHandler @ 02508f8c */
    bRam0000000004f4b6d6 = 1;
  }
                    /* try { // try from 02508f28 to 02608f7b has its CatchHandler @ 02508cfc */
  uVar3 = Carrier__get_BlockSize_240813c(param_1);
  uVar1 = (uint)param_2;
  if ((param_2 >> 0x20 & 1) != 0) {
    uVar1 = (int)uVar3 + ~(uint)param_2;
  }
  iVar2 = uVar1 + ((int)(param_2 >> 0x20) + (int)((ulong)uVar3 >> 0x20) * param_3) * (int)uVar3;
  if (-1 < iVar2) {
    lVar4 = *(long *)(param_1 + 0x1e0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02508f80 with catch @ 02508f94 */
      FUN_021f06a0();
    }
    if (iVar2 < *(int *)(lVar4 + 0x18)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar4,iVar2,&uStack_28,*(undefined8 *)PTR_DAT_049c1558);
      return uStack_28;
                    /* try { // try from 02508f7c to 02608f7f has its CatchHandler @ 02508fa4 */
    }
  }
                    /* try { // try from 02508f80 to 02608f83 has its CatchHandler @ 02508f94 */
                    /* try { // try from 02508f84 to 02608fcb has its CatchHandler @ 02508cfc */
                    /* catch() { ... } // from try @ 02508f00 with catch @ 02508f88 */
                    /* catch() { ... } // from try @ 02508f20 with catch @ 02508f8c */
                    /* catch() { ... } // from try @ 02508f18 with catch @ 02508f90 */
  return 0;
}

