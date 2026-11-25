/* IL2CPP: Carrier$$CoordinateToLocalPosition
UnityEngine_Vector3_o Carrier__CoordinateToLocalPosition (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$CoordinateToLocalPosition
   UnityEngine_Vector3_o Carrier__CoordinateToLocalPosition (Carrier_o* __this,
   UnityEngine_Vector3Int_o coordinate, const MethodInfo* method); */

void Carrier__CoordinateToLocalPosition_2408cbc(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [12];
  
                    /* try { // try from 02508cc0 to 02608cc3 has its CatchHandler @ 02508ce4 */
                    /* try { // try from 02508cc4 to 02608ce7 has its CatchHandler @ 0250863c */
  auVar1 = Carrier__get_BlockSize_240813c();
                    /* catch() { ... } // from try @ 02508cc0 with catch @ 02508ce4 */
  Carrier__GetContainerSize_2408db8(param_1);
                    /* try { // try from 02508ce8 to 02608cef has its CatchHandler @ 02508cf8 */
  if (*(long *)(param_1 + 0x138) != 0) {
                    /* try { // try from 02508cf0 to 02608cfb has its CatchHandler @ 0250863c */
                    /* catch() { ... } // from try @ 02508c98 with catch @ 02508cf8
                       catch() { ... } // from try @ 02508ce8 with catch @ 02508cf8 */
                    /* try { // try from 02508cfc to 02608e2f has its CatchHandler @ 02508cfc
                       catch() { ... } // from try @ 02508cfc with catch @ 02508cfc
                       catch() { ... } // from try @ 02508e9c with catch @ 02508cfc
                       catch() { ... } // from try @ 02508f28 with catch @ 02508cfc
                       catch() { ... } // from try @ 02508f84 with catch @ 02508cfc
                       catch() { ... } // from try @ 02508fd0 with catch @ 02508cfc
                       catch() { ... } // from try @ 02508ff4 with catch @ 02508cfc */
    NEON_scvtf(param_2,4);
    NEON_scvtf(CONCAT44(auVar1._4_4_ + -1,auVar1._0_4_ + -1),4);
    NEON_fmov(0x3f800000,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

