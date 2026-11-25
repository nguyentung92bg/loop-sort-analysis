/* IL2CPP: WinMonitor$$set_Results
void WinMonitor__set_Results (WinMonitor_o* __this, WinMonitor_ResultArgs_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinMonitor$$set_Results
   void WinMonitor__set_Results (WinMonitor_o* __this, WinMonitor_ResultArgs_o value, const
   MethodInfo* method); */

void WinMonitor__set_Results_24693a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  *puVar1 = param_3;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

