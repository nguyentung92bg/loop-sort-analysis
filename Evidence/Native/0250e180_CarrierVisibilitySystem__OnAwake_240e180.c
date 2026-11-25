/* IL2CPP: CarrierVisibilitySystem$$OnAwake
void CarrierVisibilitySystem__OnAwake (CarrierVisibilitySystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierVisibilitySystem$$OnAwake
   void CarrierVisibilitySystem__OnAwake (CarrierVisibilitySystem_o* __this, const MethodInfo*
   method); */

void CarrierVisibilitySystem__OnAwake_240e180(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4b708 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4b708 = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
  uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  puVar3 = (undefined8 *)(param_1 + 0x40);
  *puVar3 = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

