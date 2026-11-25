/* IL2CPP: AutoQualitySetter.<>c$$.cctor
void AutoQualitySetter___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter.<>c$$.cctor
   void AutoQualitySetter___c___cctor (const MethodInfo* method); */

void AutoQualitySetter___c___cctor_249adbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049c6238;
  if ((bRam0000000004f4baae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6238);
    bRam0000000004f4baae = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 0259ae1c to 0269ae2b has its CatchHandler @ 0259ae2c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

