/* IL2CPP: Carrier$$GetBlockIdx
int32_t Carrier__GetBlockIdx (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetBlockIdx
   int32_t Carrier__GetBlockIdx (Carrier_o* __this, Block_o* block, const MethodInfo* method); */

undefined4 Carrier__GetBlockIdx_2408c50(long param_1,undefined8 param_2)

{
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 02508838 with catch @ 02508c50 */
  if ((bRam0000000004f4b6e8 & 1) == 0) {
                    /* try { // try from 02508c74 to 02608c77 has its CatchHandler @ 02508c94 */
                    /* try { // try from 02508c78 to 02608c97 has its CatchHandler @ 0250863c */
    FUN_021f03f8(PTR_DAT_049c28a0);
    bRam0000000004f4b6e8 = 1;
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
                    /* catch() { ... } // from try @ 02508c74 with catch @ 02508c94 */
                    /* try { // try from 02508c98 to 02608c9f has its CatchHandler @ 02508cf8 */
                    /* try { // try from 02508ca0 to 02608cbf has its CatchHandler @ 0250863c */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x1e8),param_2,&uStack_24,*(undefined8 *)PTR_DAT_049c28a0);
                    /* catch() { ... } // from try @ 02508aa8 with catch @ 02508ca4
                       catch() { ... } // from try @ 02508b10 with catch @ 02508ca4 */
    return uStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

