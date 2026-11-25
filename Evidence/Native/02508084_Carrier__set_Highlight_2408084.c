/* IL2CPP: Carrier$$set_Highlight
void Carrier__set_Highlight (Carrier_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_Highlight
   void Carrier__set_Highlight (Carrier_o* __this, UnityEngine_GameObject_o* value, const
   MethodInfo* method); */

void Carrier__set_Highlight_2408084(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 02507e80 with catch @ 02508084
                       catch() { ... } // from try @ 02507ee8 with catch @ 02508084 */
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

