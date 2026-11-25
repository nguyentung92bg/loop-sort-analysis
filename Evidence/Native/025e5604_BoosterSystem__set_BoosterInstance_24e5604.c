/* IL2CPP: BoosterSystem$$set_BoosterInstance
void BoosterSystem__set_BoosterInstance (BoosterSystem_o* __this, BoosterBase_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$set_BoosterInstance
   void BoosterSystem__set_BoosterInstance (BoosterSystem_o* __this, BoosterBase_o* value, const
   MethodInfo* method); */

void BoosterSystem__set_BoosterInstance_24e5604(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x88);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

