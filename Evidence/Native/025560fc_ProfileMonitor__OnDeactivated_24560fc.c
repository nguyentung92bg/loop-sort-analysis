/* IL2CPP: ProfileMonitor$$OnDeactivated
void ProfileMonitor__OnDeactivated (ProfileMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileMonitor$$OnDeactivated
   void ProfileMonitor__OnDeactivated (ProfileMonitor_o* __this, const MethodInfo* method); */

void ProfileMonitor__OnDeactivated_24560fc(long param_1)

{
  undefined8 *puVar1;
  
  MonitorBase__OnDeactivated_256ca84(param_1,0);
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  *puVar1 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

