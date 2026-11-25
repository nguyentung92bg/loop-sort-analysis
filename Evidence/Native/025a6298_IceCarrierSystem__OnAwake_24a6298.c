/* IL2CPP: IceCarrierSystem$$OnAwake
void IceCarrierSystem__OnAwake (IceCarrierSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrierSystem$$OnAwake
   void IceCarrierSystem__OnAwake (IceCarrierSystem_o* __this, const MethodInfo* method); */

void IceCarrierSystem__OnAwake_24a6298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c6750;
  if ((bRam0000000004f4bb16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6750);
    bRam0000000004f4bb16 = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
  uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  puVar3 = (undefined8 *)(param_1 + 0x38);
  *puVar3 = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

