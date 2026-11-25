/* IL2CPP: Carrier$$set_BackTopRenderer
void Carrier__set_BackTopRenderer (Carrier_o* __this, UnityEngine_SkinnedMeshRenderer_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_BackTopRenderer
   void Carrier__set_BackTopRenderer (Carrier_o* __this, UnityEngine_SkinnedMeshRenderer_o* value,
   const MethodInfo* method); */

void Carrier__set_BackTopRenderer_2408054(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xd8);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

