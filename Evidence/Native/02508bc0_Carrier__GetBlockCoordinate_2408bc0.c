/* IL2CPP: Carrier$$GetBlockCoordinate
UnityEngine_Vector3Int_o Carrier__GetBlockCoordinate (Carrier_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetBlockCoordinate
   UnityEngine_Vector3Int_o Carrier__GetBlockCoordinate (Carrier_o* __this, int32_t index, const
   MethodInfo* method); */

undefined8 Carrier__GetBlockCoordinate_2408bc0(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
                    /* try { // try from 02508bc0 to 02608bc3 has its CatchHandler @ 02508c34 */
                    /* try { // try from 02508bc4 to 02608bc7 has its CatchHandler @ 02508c30 */
                    /* try { // try from 02508bc8 to 02608bcb has its CatchHandler @ 02508c24 */
                    /* try { // try from 02508bcc to 02608bcf has its CatchHandler @ 02508c1c */
  uVar5 = Carrier__get_BlockSize_240813c();
                    /* try { // try from 02508bd0 to 02608bd3 has its CatchHandler @ 02508c10 */
                    /* try { // try from 02508bd4 to 02608bd7 has its CatchHandler @ 02508c0c */
                    /* try { // try from 02508bd8 to 02608bdb has its CatchHandler @ 02508c08 */
                    /* try { // try from 02508bdc to 02608bdf has its CatchHandler @ 0250863c */
  if (cRam0000000004f4b729 == '\0') {
                    /* try { // try from 02508be0 to 02608be3 has its CatchHandler @ 02508be8 */
                    /* catch() { ... } // from try @ 02508948 with catch @ 02508be4
                       try { // try from 02508be4 to 02608c73 has its CatchHandler @ 0250863c */
                    /* catch() { ... } // from try @ 02508be0 with catch @ 02508be8 */
    FUN_021f03f8(PTR_DAT_049c1440);
                    /* catch() { ... } // from try @ 025089cc with catch @ 02508bec */
                    /* catch() { ... } // from try @ 02508904 with catch @ 02508bf0 */
    cRam0000000004f4b729 = '\x01';
  }
                    /* catch() { ... } // from try @ 025089ac with catch @ 02508bf4
                       catch() { ... } // from try @ 025089e0 with catch @ 02508bf4 */
  iVar6 = (int)uVar5;
                    /* catch() { ... } // from try @ 025088d0 with catch @ 02508bf8 */
  iVar2 = (int)((ulong)uVar5 >> 0x20) * iVar6;
                    /* catch() { ... } // from try @ 02508928 with catch @ 02508bfc */
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_2 / iVar2;
  }
                    /* catch() { ... } // from try @ 025088d8 with catch @ 02508c00 */
  param_2 = param_2 - iVar3 * iVar2;
                    /* catch() { ... } // from try @ 02508a08 with catch @ 02508c04 */
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = param_2 / iVar6;
  }
                    /* catch() { ... } // from try @ 02508bd8 with catch @ 02508c08 */
  uVar1 = param_2 - uVar4 * iVar6;
                    /* catch() { ... } // from try @ 02508bd4 with catch @ 02508c0c */
                    /* catch() { ... } // from try @ 02508bd0 with catch @ 02508c10 */
                    /* catch() { ... } // from try @ 025088ec with catch @ 02508c14 */
                    /* catch() { ... } // from try @ 025088a0 with catch @ 02508c18 */
                    /* catch() { ... } // from try @ 02508bcc with catch @ 02508c1c */
  if ((uVar4 & 1) != 0) {
    uVar1 = ~uVar1 + iVar6;
  }
                    /* catch() { ... } // from try @ 025088b8 with catch @ 02508c20 */
                    /* catch() { ... } // from try @ 02508bc8 with catch @ 02508c24 */
                    /* catch() { ... } // from try @ 02508a24 with catch @ 02508c28 */
  return CONCAT44(uVar4,uVar1);
}

