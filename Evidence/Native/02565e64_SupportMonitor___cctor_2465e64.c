/* IL2CPP: SupportMonitor$$.cctor
void SupportMonitor___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$.cctor
   void SupportMonitor___cctor (const MethodInfo* method); */

void SupportMonitor___cctor_2465e64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_DAT_049c52b8;
  puVar1 = PTR_DAT_049c52b0;
  if ((bRam0000000004f4b966 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c52b8);
    FUN_021f03f8(PTR_DAT_049c52b0);
    bRam0000000004f4b966 = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = *(undefined8 *)puVar1;
  uVar3 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

