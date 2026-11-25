/* IL2CPP: Carrier$$set_RightTire
void Carrier__set_RightTire (Carrier_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_RightTire
   void Carrier__set_RightTire (Carrier_o* __this, UnityEngine_Transform_o* value, const MethodInfo*
   method); */

void Carrier__set_RightTire_24080a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x100U >> 0xc & 0x3f),
                 (param_1 + 0x100U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

