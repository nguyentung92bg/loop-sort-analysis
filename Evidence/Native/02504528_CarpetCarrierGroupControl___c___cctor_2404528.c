/* IL2CPP: CarpetCarrierGroupControl.<>c$$.cctor
void CarpetCarrierGroupControl___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl.<>c$$.cctor
   void CarpetCarrierGroupControl___c___cctor (const MethodInfo* method); */

void CarpetCarrierGroupControl___c___cctor_2404528(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049c2658;
  if ((bRam0000000004f4b6a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2658);
    bRam0000000004f4b6a9 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

