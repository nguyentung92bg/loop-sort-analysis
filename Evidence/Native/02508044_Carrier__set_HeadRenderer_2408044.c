/* IL2CPP: Carrier$$set_HeadRenderer
void Carrier__set_HeadRenderer (Carrier_o* __this, UnityEngine_Renderer_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_HeadRenderer
   void Carrier__set_HeadRenderer (Carrier_o* __this, UnityEngine_Renderer_o* value, const
   MethodInfo* method); */

void Carrier__set_HeadRenderer_2408044(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  *puVar1 = param_2;
                    /* catch() { ... } // from try @ 02507a80 with catch @ 02508048 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

