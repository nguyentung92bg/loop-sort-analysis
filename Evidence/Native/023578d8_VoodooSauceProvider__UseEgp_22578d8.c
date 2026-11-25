/* IL2CPP: VoodooSauceProvider$$UseEgp
void VoodooSauceProvider__UseEgp (VoodooSauceProvider_o* __this, AnalyticsEgpArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$UseEgp
   void VoodooSauceProvider__UseEgp (VoodooSauceProvider_o* __this, AnalyticsEgpArgs_o args, const
   MethodInfo* method); */

void VoodooSauceProvider__UseEgp_22578d8(long param_1,uint param_2)

{
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  if ((param_2 & 1) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}

