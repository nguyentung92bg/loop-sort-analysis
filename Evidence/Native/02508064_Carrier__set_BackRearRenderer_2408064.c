/* IL2CPP: Carrier$$set_BackRearRenderer
void Carrier__set_BackRearRenderer (Carrier_o* __this, UnityEngine_SkinnedMeshRenderer_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_BackRearRenderer
   void Carrier__set_BackRearRenderer (Carrier_o* __this, UnityEngine_SkinnedMeshRenderer_o* value,
   const MethodInfo* method); */

void Carrier__set_BackRearRenderer_2408064(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 02508064 to 02608067 has its CatchHandler @ 0250816c */
  puVar1 = (undefined8 *)(param_1 + 0xe0);
  *puVar1 = param_2;
                    /* try { // try from 02508068 to 02608097 has its CatchHandler @ 025075e0 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

