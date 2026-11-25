/* IL2CPP: Extensions$$ToVector2Int
UnityEngine_Vector2Int_o Extensions__ToVector2Int (int32_t direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToVector2Int
   UnityEngine_Vector2Int_o Extensions__ToVector2Int (int32_t direction, const MethodInfo* method);
    */

undefined8 Extensions__ToVector2Int_24e63c8(uint param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 6) {
                    /* try { // try from 025e63d8 to 026e63e7 has its CatchHandler @ 025e65d8 */
    puVar1 = (undefined8 *)(&UNK_013e9f10 + (ulong)param_1 * 8);
  }
  else {
    if (cRam0000000004f4bca5 == '\0') {
      FUN_021f03f8(PTR_DAT_049bef70);
                    /* try { // try from 025e63fc to 026e63ff has its CatchHandler @ 025e65c4 */
                    /* try { // try from 025e6400 to 026e640f has its CatchHandler @ 025e65dc */
      cRam0000000004f4bca5 = '\x01';
    }
    puVar1 = *(undefined8 **)(*(long *)PTR_DAT_049bef70 + 0xb8);
  }
  return *puVar1;
}

