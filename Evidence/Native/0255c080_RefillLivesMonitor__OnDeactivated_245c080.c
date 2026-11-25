/* IL2CPP: RefillLivesMonitor$$OnDeactivated
void RefillLivesMonitor__OnDeactivated (RefillLivesMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RefillLivesMonitor$$OnDeactivated
   void RefillLivesMonitor__OnDeactivated (RefillLivesMonitor_o* __this, const MethodInfo* method);
    */

void RefillLivesMonitor__OnDeactivated_245c080(long param_1)

{
  undefined8 *puVar1;
  
  MonitorBase__OnDeactivated_256ca84(param_1,0);
  *(undefined8 *)(param_1 + 200) = 0;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 200),0);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  *puVar1 = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

