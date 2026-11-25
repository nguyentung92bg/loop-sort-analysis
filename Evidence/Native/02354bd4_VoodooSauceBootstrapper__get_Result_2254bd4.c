/* IL2CPP: VoodooSauceBootstrapper$$get_Result
Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o* VoodooSauceBootstrapper__get_Result (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceBootstrapper$$get_Result
   Voodoo_Sauce_Core_VoodooSauceInitCallbackResult_o* VoodooSauceBootstrapper__get_Result (const
   MethodInfo* method); */

undefined8 VoodooSauceBootstrapper__get_Result_2254bd4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5ea8;
  if ((bRam0000000004f49bb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5ea8);
    bRam0000000004f49bb0 = 1;
  }
  return **(undefined8 **)(*(long *)puVar1 + 0xb8);
}

