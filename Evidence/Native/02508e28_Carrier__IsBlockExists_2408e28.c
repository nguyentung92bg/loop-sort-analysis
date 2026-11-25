/* IL2CPP: Carrier$$IsBlockExists
bool Carrier__IsBlockExists (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$IsBlockExists
   bool Carrier__IsBlockExists (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const
   MethodInfo* method); */

bool Carrier__IsBlockExists_2408e28(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [12];
  
                    /* try { // try from 02508e30 to 02608e37 has its CatchHandler @ 02508fac */
  if ((bRam0000000004f4b6d5 & 1) == 0) {
                    /* try { // try from 02508e50 to 02608e9b has its CatchHandler @ 02508fb0 */
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4b6d5 = 1;
  }
  auVar3 = Carrier__get_BlockSize_240813c(param_1);
  bVar1 = false;
  if ((((-1 < (int)param_2) && ((int)param_2 < auVar3._0_4_)) && (-1 < param_2)) &&
     ((((int)((ulong)param_2 >> 0x20) < auVar3._4_4_ && (-1 < param_3)) && (param_3 < auVar3._8_4_))
     )) {
                    /* try { // try from 02508e9c to 02608eb7 has its CatchHandler @ 02508cfc */
    iVar2 = Carrier__CoordinateToIndex_2408b80(param_1,param_2,param_3);
    if (iVar2 < 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 02508eb8 to 02608ebb has its CatchHandler @ 02508f9c */
                    /* try { // try from 02508ebc to 02608ec7 has its CatchHandler @ 02508fa8 */
      bVar1 = iVar2 < *(int *)(*(long *)(param_1 + 0x1e0) + 0x18);
    }
  }
                    /* try { // try from 02508ed0 to 02608edb has its CatchHandler @ 02508fa0 */
  return bVar1;
}

