/* IL2CPP: Carrier$$get_BlockSize
UnityEngine_Vector3Int_o Carrier__get_BlockSize (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$get_BlockSize
   UnityEngine_Vector3Int_o Carrier__get_BlockSize (Carrier_o* __this, const MethodInfo* method); */

void Carrier__get_BlockSize_240813c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
                    /* catch() { ... } // from try @ 02508028 with catch @ 0250814c */
                    /* try { // try from 02508150 to 02608177 has its CatchHandler @ 02508180 */
                    /* catch() { ... } // from try @ 02508098 with catch @ 0250815c */
  if ((*(long *)(param_1 + 0x168) != 0) &&
     ((lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x148), *(int *)(param_1 + 0x1bc) < 1 ||
      (*(long *)(param_1 + 0x138) != 0)))) {
                    /* try { // try from 02508178 to 02608183 has its CatchHandler @ 025075e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02508150 with catch @ 02508180 */
  FUN_021f06a0(lVar1);
}

