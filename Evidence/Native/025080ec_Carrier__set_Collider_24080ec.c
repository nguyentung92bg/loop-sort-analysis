/* IL2CPP: Carrier$$set_Collider
void Carrier__set_Collider (Carrier_o* __this, UnityEngine_Collider_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_Collider
   void Carrier__set_Collider (Carrier_o* __this, UnityEngine_Collider_o* value, const MethodInfo*
   method); */

void Carrier__set_Collider_24080ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x118U >> 0xc & 0x3f),
                 (param_1 + 0x118U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

