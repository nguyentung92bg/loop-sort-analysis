/* IL2CPP: Carrier$$set_ModelParent
void Carrier__set_ModelParent (Carrier_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$set_ModelParent
   void Carrier__set_ModelParent (Carrier_o* __this, UnityEngine_GameObject_o* value, const
   MethodInfo* method); */

void Carrier__set_ModelParent_2408014(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 02507c70 with catch @ 02508014
                       catch() { ... } // from try @ 02507cd8 with catch @ 02508014 */
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

