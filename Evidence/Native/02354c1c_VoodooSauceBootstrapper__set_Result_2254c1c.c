/* IL2CPP: VoodooSauceBootstrapper$$set_Result
void VoodooSauceBootstrapper__set_Result (Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceBootstrapper$$set_Result
   void VoodooSauceBootstrapper__set_Result (Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o*
   value, const MethodInfo* method); */

void VoodooSauceBootstrapper__set_Result_2254c1c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_049b5ea8;
  if ((bRam0000000004f49bb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5ea8);
    bRam0000000004f49bb1 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = param_1;
  uVar2 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar2 >> 0xc & 0x3f),(uVar2 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

